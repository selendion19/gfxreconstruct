/*
** Copyright (c) 2019 LunarG, Inc.
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

#include "encode/custom_vulkan_struct_handle_wrappers.h"
#include "generated/generated_vulkan_struct_handle_wrappers.h"
#include "util/defines.h"
#include "util/logging.h"

#include <cassert>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

static const VkDescriptorImageInfo* UnwrapDescriptorImageInfoStructArrayHandles(VkDescriptorType             type,
                                                                                const VkDescriptorImageInfo* values,
                                                                                size_t                       len,
                                                                                HandleUnwrapMemory* unwrap_memory)
{
    assert(unwrap_memory != nullptr);

    if ((values != nullptr) && (len > 0))
    {
        const uint8_t* bytes     = reinterpret_cast<const uint8_t*>(values);
        size_t         num_bytes = len * sizeof(values[0]);

        // Copy and transform handles.
        VkDescriptorImageInfo* unwrapped_structs = MakeUnwrapStructs(values, len, unwrap_memory);

        for (size_t i = 0; i < len; ++i)
        {
            UnwrapStructHandles(type, &unwrapped_structs[i], unwrap_memory);
        }

        return unwrapped_structs;
    }

    // Leave the original memory in place when the pointer is not null, but size is zero.
    return values;
}

void UnwrapStructHandles(VkDescriptorType type, VkDescriptorImageInfo* value, HandleUnwrapMemory* unwrap_memory)
{
    if (value != nullptr)
    {
        if ((type == VK_DESCRIPTOR_TYPE_SAMPLER) || (type == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER))
        {
            // TODO: This should be ignored if the descriptor set layout was created with an immutable sampler.
            value->sampler = GetWrappedHandle<VkSampler>(value->sampler);
        }

        if (type != VK_DESCRIPTOR_TYPE_SAMPLER)
        {
            value->imageView = GetWrappedHandle<VkImageView>(value->imageView);
        }
    }
}

void UnwrapStructHandles(VkWriteDescriptorSet* value, HandleUnwrapMemory* unwrap_memory)
{
    if (value != nullptr)
    {
        if (value->pNext != nullptr)
        {
            value->pNext = UnwrapPNextStructHandles(value->pNext, unwrap_memory);
        }

        value->dstSet = GetWrappedHandle<VkDescriptorSet>(value->dstSet);

        switch (value->descriptorType)
        {
            case VK_DESCRIPTOR_TYPE_SAMPLER:
            case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
                value->pImageInfo = UnwrapDescriptorImageInfoStructArrayHandles(
                    value->descriptorType, value->pImageInfo, value->descriptorCount, unwrap_memory);
                break;
            case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
                value->pBufferInfo =
                    UnwrapStructArrayHandles(value->pBufferInfo, value->descriptorCount, unwrap_memory);
                break;
            case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
                value->pTexelBufferView =
                    UnwrapHandles<VkBufferView>(value->pTexelBufferView, value->descriptorCount, unwrap_memory);
                break;
            case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT:
                // TODO
                break;
            case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
                // TODO
                break;
            default:
                GFXRECON_LOG_WARNING("Attempting to track descriptor state for unrecognized descriptor type");
                break;
        }
    }
}

const VkObjectTableEntryNVX* const*
UnwrapStructArrayHandles(const VkObjectTableEntryNVX* const* values, size_t len, HandleUnwrapMemory* unwrap_memory)
{
    if ((values != nullptr) && (len > 0))
    {
        size_t table_size      = sizeof(values[0]) * len;
        auto   unwrapped_table = reinterpret_cast<const VkObjectTableEntryNVX**>(unwrap_memory->GetBuffer(table_size));

        for (size_t i = 0; i < len; ++i)
        {
            const VkObjectTableEntryNVX* entry = values[i];

            if (entry != nullptr)
            {
                switch (entry->type)
                {
                    case VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX:
                    {
                        auto unwrapped_struct = UnwrapStructPtrHandles(
                            reinterpret_cast<const VkObjectTableDescriptorSetEntryNVX*>(entry), unwrap_memory);
                        unwrapped_table[i] = reinterpret_cast<const VkObjectTableEntryNVX*>(unwrapped_struct);
                        break;
                    }
                    case VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX:
                    {
                        auto unwrapped_struct = UnwrapStructPtrHandles(
                            reinterpret_cast<const VkObjectTablePipelineEntryNVX*>(entry), unwrap_memory);
                        unwrapped_table[i] = reinterpret_cast<const VkObjectTableEntryNVX*>(unwrapped_struct);
                        break;
                    }
                    case VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX:
                    {
                        auto unwrapped_struct = UnwrapStructPtrHandles(
                            reinterpret_cast<const VkObjectTableIndexBufferEntryNVX*>(entry), unwrap_memory);
                        unwrapped_table[i] = reinterpret_cast<const VkObjectTableEntryNVX*>(unwrapped_struct);
                        break;
                    }
                    case VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX:
                    {
                        auto unwrapped_struct = UnwrapStructPtrHandles(
                            reinterpret_cast<const VkObjectTableVertexBufferEntryNVX*>(entry), unwrap_memory);
                        unwrapped_table[i] = reinterpret_cast<const VkObjectTableEntryNVX*>(unwrapped_struct);
                        break;
                    }
                    case VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX:
                    {
                        auto unwrapped_struct = UnwrapStructPtrHandles(
                            reinterpret_cast<const VkObjectTablePushConstantEntryNVX*>(entry), unwrap_memory);
                        unwrapped_table[i] = reinterpret_cast<const VkObjectTableEntryNVX*>(unwrapped_struct);
                        break;
                    }
                    default:
                        GFXRECON_LOG_WARNING("Skipping custom struct handle unwrapping for VkObjectTableEntryNVX "
                                             "struct with unrecognized type %u",
                                             entry->type);
                        break;
                }
            }
            else
            {
                unwrapped_table[i] = nullptr;
            }
        }

        return unwrapped_table;
    }

    // Leave the original memory in place when the pointer is not null, but size is zero.
    return values;
}

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)
