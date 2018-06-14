/*
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include <cassert>

#include "util/platform.h"
#include "format/trace_manager.h"

BRIMSTONE_BEGIN_NAMESPACE(brimstone)
BRIMSTONE_BEGIN_NAMESPACE(format)

std::mutex                              TraceManager::ThreadData::count_lock_;
uint32_t                                TraceManager::ThreadData::thread_count_ = 0;
std::map<uint64_t, uint32_t>            TraceManager::ThreadData::id_map_;
thread_local TraceManager::ThreadData   TraceManager::thread_data_;

TraceManager::ThreadData::ThreadData() :
    thread_id_(GetThreadId()),
    call_id_(ApiCallId_Unknown),
    call_begin_time_(0),
    call_end_time_(0)
{
    parameter_buffer_ = std::make_unique<util::MemoryOutputStream>();
    parameter_encoder_ = std::make_unique<ParameterEncoder>(parameter_buffer_.get());
}

uint32_t TraceManager::ThreadData::GetThreadId()
{
    uint32_t id = 0;
    uint64_t tid = util::platform::get_current_thread_id();

    // Using a uint32_t sequence number associated with the thread ID.
    std::lock_guard<std::mutex> lock(count_lock_);
    auto entry = id_map_.find(tid);
    if (entry != id_map_.end())
    {
        id = entry->second;
    }
    else
    {
        id = ++thread_count_;
        id_map_.insert(std::make_pair(tid, id));
    }

    return id;
}

bool TraceManager::Initialize(std::string filename, EnabledOptions file_options)
{
    bool success = false;

    file_options_ = file_options;
    filename_ = filename;
    file_stream_ = std::make_unique<util::FileOutputStream>(filename_);

    // TODO: Perform options related setup (enable compression, etc).

    if (file_stream_->IsValid())
    {
        bytes_written_ = 0;
        WriteFileHeader();
        success = true;
    }

    return success;
}

void TraceManager::Destroy()
{
    // TODO: Any finalization required for trace file.
}

ParameterEncoder* TraceManager::BeginApiCallTrace(ApiCallId call_id)
{
    thread_data_.call_id_ = call_id;
    return thread_data_.parameter_encoder_.get();
}

void TraceManager::EndApiCallTrace(ParameterEncoder* encoder)
{
    size_t size = thread_data_.parameter_buffer_->GetDataSize();

    FunctionCallHeader call_header;
    call_header.block_header.size = size;
    call_header.block_header.type = BlockType::kFunctionCallBlock;
    call_header.api_call_id = thread_data_.call_id_;

    {
        std::lock_guard<std::mutex> lock(file_lock_);

        // Write standard function call block header.
        bytes_written_ += file_stream_->Write(&call_header, sizeof(call_header));

        // Add optional header items.
        if (file_options_.record_thread_id)
        {
            bytes_written_ += file_stream_->Write(&thread_data_.thread_id_, sizeof(thread_data_.thread_id_));
        }

        if (file_options_.record_begin_end_timestamp)
        {
            bytes_written_ += file_stream_->Write(&thread_data_.call_begin_time_, sizeof(thread_data_.call_begin_time_));
            bytes_written_ += file_stream_->Write(&thread_data_.call_end_time_, sizeof(thread_data_.call_end_time_));
        }

        // Write parameter data.
        bytes_written_ += file_stream_->Write(thread_data_.parameter_buffer_->GetData(), size);
    }

    thread_data_.parameter_encoder_->Reset();
}

void TraceManager::WriteFileHeader()
{
    std::vector<FileOptionPair> option_list;

    BuildOptionList(file_options_, &option_list);

    FileHeader file_header;
    file_header.fourcc = BRIMSTONE_FOURCC;
    file_header.major_version = 1;
    file_header.minor_version = 0;
    file_header.num_options = static_cast<uint32_t>(option_list.size());

    bytes_written_ += file_stream_->Write(&file_header, sizeof(file_header));
    bytes_written_ += file_stream_->Write(option_list.data(), option_list.size() * sizeof(FileOptionPair));
}

void TraceManager::BuildOptionList(const EnabledOptions& enabled_options, std::vector<FileOptionPair>* option_list)
{
    assert(option_list != nullptr);

    option_list->push_back({ FileOption::kCompressionType, enabled_options.compression_type });
    option_list->push_back({ FileOption::kHaveThreadId, enabled_options.record_thread_id ? 1u : 0u });
    option_list->push_back({ FileOption::kHaveBeginEndTimestamp, enabled_options.record_begin_end_timestamp ? 1u : 0u });
    option_list->push_back({ FileOption::kOmitTextures, enabled_options.omit_textures ? 1u : 0u });
    option_list->push_back({ FileOption::kOmitBuffers, enabled_options.omit_buffers ? 1u : 0u });
}

BRIMSTONE_END_NAMESPACE(format)
BRIMSTONE_END_NAMESPACE(brimstone)