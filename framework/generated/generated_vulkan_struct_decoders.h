/*
** Copyright (c) 2018-2019 Valve Corporation
** Copyright (c) 2018-2019 LunarG, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#ifndef  GFXRECON_GENERATED_VULKAN_STRUCT_DECODERS_H
#define  GFXRECON_GENERATED_VULKAN_STRUCT_DECODERS_H

#include "decode/custom_vulkan_struct_decoders_forward.h"
#include "decode/handle_pointer_decoder.h"
#include "decode/pnext_node.h"
#include "decode/pointer_decoder.h"
#include "decode/string_array_decoder.h"
#include "decode/string_decoder.h"
#include "decode/struct_pointer_decoder.h"
#include "format/format.h"
#include "format/platform_types.h"
#include "generated/generated_vulkan_struct_decoders_forward.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

#include <memory>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

struct Decoded_VkApplicationInfo
{
    using struct_type = VkApplicationInfo;

    VkApplicationInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder pApplicationName;
    StringDecoder pEngineName;
};

struct Decoded_VkInstanceCreateInfo
{
    using struct_type = VkInstanceCreateInfo;

    VkInstanceCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkApplicationInfo>> pApplicationInfo;
    StringArrayDecoder ppEnabledLayerNames;
    StringArrayDecoder ppEnabledExtensionNames;
};

struct Decoded_VkAllocationCallbacks
{
    using struct_type = VkAllocationCallbacks;

    VkAllocationCallbacks* decoded_value{ nullptr };

    uint64_t pUserData{ 0 };
    uint64_t pfnAllocation{ 0 };
    uint64_t pfnReallocation{ 0 };
    uint64_t pfnFree{ 0 };
    uint64_t pfnInternalAllocation{ 0 };
    uint64_t pfnInternalFree{ 0 };
};

struct Decoded_VkPhysicalDeviceFeatures
{
    using struct_type = VkPhysicalDeviceFeatures;

    VkPhysicalDeviceFeatures* decoded_value{ nullptr };
};

struct Decoded_VkFormatProperties
{
    using struct_type = VkFormatProperties;

    VkFormatProperties* decoded_value{ nullptr };
};

struct Decoded_VkExtent3D
{
    using struct_type = VkExtent3D;

    VkExtent3D* decoded_value{ nullptr };
};

struct Decoded_VkImageFormatProperties
{
    using struct_type = VkImageFormatProperties;

    VkImageFormatProperties* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkExtent3D> maxExtent;
};

struct Decoded_VkPhysicalDeviceLimits
{
    using struct_type = VkPhysicalDeviceLimits;

    VkPhysicalDeviceLimits* decoded_value{ nullptr };

    PointerDecoder<uint32_t> maxComputeWorkGroupCount;
    PointerDecoder<uint32_t> maxComputeWorkGroupSize;
    PointerDecoder<uint32_t> maxViewportDimensions;
    PointerDecoder<float> viewportBoundsRange;
    PointerDecoder<float> pointSizeRange;
    PointerDecoder<float> lineWidthRange;
};

struct Decoded_VkPhysicalDeviceSparseProperties
{
    using struct_type = VkPhysicalDeviceSparseProperties;

    VkPhysicalDeviceSparseProperties* decoded_value{ nullptr };
};

struct Decoded_VkPhysicalDeviceProperties
{
    using struct_type = VkPhysicalDeviceProperties;

    VkPhysicalDeviceProperties* decoded_value{ nullptr };

    StringDecoder deviceName;
    PointerDecoder<uint8_t> pipelineCacheUUID;
    std::unique_ptr<Decoded_VkPhysicalDeviceLimits> limits;
    std::unique_ptr<Decoded_VkPhysicalDeviceSparseProperties> sparseProperties;
};

struct Decoded_VkQueueFamilyProperties
{
    using struct_type = VkQueueFamilyProperties;

    VkQueueFamilyProperties* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkExtent3D> minImageTransferGranularity;
};

struct Decoded_VkMemoryType
{
    using struct_type = VkMemoryType;

    VkMemoryType* decoded_value{ nullptr };
};

struct Decoded_VkMemoryHeap
{
    using struct_type = VkMemoryHeap;

    VkMemoryHeap* decoded_value{ nullptr };
};

struct Decoded_VkPhysicalDeviceMemoryProperties
{
    using struct_type = VkPhysicalDeviceMemoryProperties;

    VkPhysicalDeviceMemoryProperties* decoded_value{ nullptr };

    std::unique_ptr<StructPointerDecoder<Decoded_VkMemoryType>> memoryTypes;
    std::unique_ptr<StructPointerDecoder<Decoded_VkMemoryHeap>> memoryHeaps;
};

struct Decoded_VkDeviceQueueCreateInfo
{
    using struct_type = VkDeviceQueueCreateInfo;

    VkDeviceQueueCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<float> pQueuePriorities;
};

struct Decoded_VkDeviceCreateInfo
{
    using struct_type = VkDeviceCreateInfo;

    VkDeviceCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDeviceQueueCreateInfo>> pQueueCreateInfos;
    StringArrayDecoder ppEnabledLayerNames;
    StringArrayDecoder ppEnabledExtensionNames;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>> pEnabledFeatures;
};

struct Decoded_VkExtensionProperties
{
    using struct_type = VkExtensionProperties;

    VkExtensionProperties* decoded_value{ nullptr };

    StringDecoder extensionName;
};

struct Decoded_VkLayerProperties
{
    using struct_type = VkLayerProperties;

    VkLayerProperties* decoded_value{ nullptr };

    StringDecoder layerName;
    StringDecoder description;
};

struct Decoded_VkSubmitInfo
{
    using struct_type = VkSubmitInfo;

    VkSubmitInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkSemaphore> pWaitSemaphores;
    PointerDecoder<VkPipelineStageFlags> pWaitDstStageMask;
    HandlePointerDecoder<VkCommandBuffer> pCommandBuffers;
    HandlePointerDecoder<VkSemaphore> pSignalSemaphores;
};

struct Decoded_VkMemoryAllocateInfo
{
    using struct_type = VkMemoryAllocateInfo;

    VkMemoryAllocateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMappedMemoryRange
{
    using struct_type = VkMappedMemoryRange;

    VkMappedMemoryRange* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId memory{ 0 };
};

struct Decoded_VkMemoryRequirements
{
    using struct_type = VkMemoryRequirements;

    VkMemoryRequirements* decoded_value{ nullptr };
};

struct Decoded_VkSparseImageFormatProperties
{
    using struct_type = VkSparseImageFormatProperties;

    VkSparseImageFormatProperties* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkExtent3D> imageGranularity;
};

struct Decoded_VkSparseImageMemoryRequirements
{
    using struct_type = VkSparseImageMemoryRequirements;

    VkSparseImageMemoryRequirements* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkSparseImageFormatProperties> formatProperties;
};

struct Decoded_VkSparseMemoryBind
{
    using struct_type = VkSparseMemoryBind;

    VkSparseMemoryBind* decoded_value{ nullptr };

    format::HandleId memory{ 0 };
};

struct Decoded_VkSparseBufferMemoryBindInfo
{
    using struct_type = VkSparseBufferMemoryBindInfo;

    VkSparseBufferMemoryBindInfo* decoded_value{ nullptr };

    format::HandleId buffer{ 0 };
    std::unique_ptr<StructPointerDecoder<Decoded_VkSparseMemoryBind>> pBinds;
};

struct Decoded_VkSparseImageOpaqueMemoryBindInfo
{
    using struct_type = VkSparseImageOpaqueMemoryBindInfo;

    VkSparseImageOpaqueMemoryBindInfo* decoded_value{ nullptr };

    format::HandleId image{ 0 };
    std::unique_ptr<StructPointerDecoder<Decoded_VkSparseMemoryBind>> pBinds;
};

struct Decoded_VkImageSubresource
{
    using struct_type = VkImageSubresource;

    VkImageSubresource* decoded_value{ nullptr };
};

struct Decoded_VkOffset3D
{
    using struct_type = VkOffset3D;

    VkOffset3D* decoded_value{ nullptr };
};

struct Decoded_VkSparseImageMemoryBind
{
    using struct_type = VkSparseImageMemoryBind;

    VkSparseImageMemoryBind* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkImageSubresource> subresource;
    std::unique_ptr<Decoded_VkOffset3D> offset;
    std::unique_ptr<Decoded_VkExtent3D> extent;
    format::HandleId memory{ 0 };
};

struct Decoded_VkSparseImageMemoryBindInfo
{
    using struct_type = VkSparseImageMemoryBindInfo;

    VkSparseImageMemoryBindInfo* decoded_value{ nullptr };

    format::HandleId image{ 0 };
    std::unique_ptr<StructPointerDecoder<Decoded_VkSparseImageMemoryBind>> pBinds;
};

struct Decoded_VkBindSparseInfo
{
    using struct_type = VkBindSparseInfo;

    VkBindSparseInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkSemaphore> pWaitSemaphores;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSparseBufferMemoryBindInfo>> pBufferBinds;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSparseImageOpaqueMemoryBindInfo>> pImageOpaqueBinds;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSparseImageMemoryBindInfo>> pImageBinds;
    HandlePointerDecoder<VkSemaphore> pSignalSemaphores;
};

struct Decoded_VkFenceCreateInfo
{
    using struct_type = VkFenceCreateInfo;

    VkFenceCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSemaphoreCreateInfo
{
    using struct_type = VkSemaphoreCreateInfo;

    VkSemaphoreCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkEventCreateInfo
{
    using struct_type = VkEventCreateInfo;

    VkEventCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkQueryPoolCreateInfo
{
    using struct_type = VkQueryPoolCreateInfo;

    VkQueryPoolCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkBufferCreateInfo
{
    using struct_type = VkBufferCreateInfo;

    VkBufferCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pQueueFamilyIndices;
};

struct Decoded_VkBufferViewCreateInfo
{
    using struct_type = VkBufferViewCreateInfo;

    VkBufferViewCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId buffer{ 0 };
};

struct Decoded_VkImageCreateInfo
{
    using struct_type = VkImageCreateInfo;

    VkImageCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent3D> extent;
    PointerDecoder<uint32_t> pQueueFamilyIndices;
};

struct Decoded_VkSubresourceLayout
{
    using struct_type = VkSubresourceLayout;

    VkSubresourceLayout* decoded_value{ nullptr };
};

struct Decoded_VkComponentMapping
{
    using struct_type = VkComponentMapping;

    VkComponentMapping* decoded_value{ nullptr };
};

struct Decoded_VkImageSubresourceRange
{
    using struct_type = VkImageSubresourceRange;

    VkImageSubresourceRange* decoded_value{ nullptr };
};

struct Decoded_VkImageViewCreateInfo
{
    using struct_type = VkImageViewCreateInfo;

    VkImageViewCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
    std::unique_ptr<Decoded_VkComponentMapping> components;
    std::unique_ptr<Decoded_VkImageSubresourceRange> subresourceRange;
};

struct Decoded_VkShaderModuleCreateInfo
{
    using struct_type = VkShaderModuleCreateInfo;

    VkShaderModuleCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pCode;
};

struct Decoded_VkPipelineCacheCreateInfo
{
    using struct_type = VkPipelineCacheCreateInfo;

    VkPipelineCacheCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint8_t> pInitialData;
};

struct Decoded_VkSpecializationMapEntry
{
    using struct_type = VkSpecializationMapEntry;

    VkSpecializationMapEntry* decoded_value{ nullptr };
};

struct Decoded_VkSpecializationInfo
{
    using struct_type = VkSpecializationInfo;

    VkSpecializationInfo* decoded_value{ nullptr };

    std::unique_ptr<StructPointerDecoder<Decoded_VkSpecializationMapEntry>> pMapEntries;
    PointerDecoder<uint8_t> pData;
};

struct Decoded_VkPipelineShaderStageCreateInfo
{
    using struct_type = VkPipelineShaderStageCreateInfo;

    VkPipelineShaderStageCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId module{ 0 };
    StringDecoder pName;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSpecializationInfo>> pSpecializationInfo;
};

struct Decoded_VkVertexInputBindingDescription
{
    using struct_type = VkVertexInputBindingDescription;

    VkVertexInputBindingDescription* decoded_value{ nullptr };
};

struct Decoded_VkVertexInputAttributeDescription
{
    using struct_type = VkVertexInputAttributeDescription;

    VkVertexInputAttributeDescription* decoded_value{ nullptr };
};

struct Decoded_VkPipelineVertexInputStateCreateInfo
{
    using struct_type = VkPipelineVertexInputStateCreateInfo;

    VkPipelineVertexInputStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkVertexInputBindingDescription>> pVertexBindingDescriptions;
    std::unique_ptr<StructPointerDecoder<Decoded_VkVertexInputAttributeDescription>> pVertexAttributeDescriptions;
};

struct Decoded_VkPipelineInputAssemblyStateCreateInfo
{
    using struct_type = VkPipelineInputAssemblyStateCreateInfo;

    VkPipelineInputAssemblyStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineTessellationStateCreateInfo
{
    using struct_type = VkPipelineTessellationStateCreateInfo;

    VkPipelineTessellationStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkViewport
{
    using struct_type = VkViewport;

    VkViewport* decoded_value{ nullptr };
};

struct Decoded_VkOffset2D
{
    using struct_type = VkOffset2D;

    VkOffset2D* decoded_value{ nullptr };
};

struct Decoded_VkExtent2D
{
    using struct_type = VkExtent2D;

    VkExtent2D* decoded_value{ nullptr };
};

struct Decoded_VkRect2D
{
    using struct_type = VkRect2D;

    VkRect2D* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkOffset2D> offset;
    std::unique_ptr<Decoded_VkExtent2D> extent;
};

struct Decoded_VkPipelineViewportStateCreateInfo
{
    using struct_type = VkPipelineViewportStateCreateInfo;

    VkPipelineViewportStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkViewport>> pViewports;
    std::unique_ptr<StructPointerDecoder<Decoded_VkRect2D>> pScissors;
};

struct Decoded_VkPipelineRasterizationStateCreateInfo
{
    using struct_type = VkPipelineRasterizationStateCreateInfo;

    VkPipelineRasterizationStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineMultisampleStateCreateInfo
{
    using struct_type = VkPipelineMultisampleStateCreateInfo;

    VkPipelineMultisampleStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkSampleMask> pSampleMask;
};

struct Decoded_VkStencilOpState
{
    using struct_type = VkStencilOpState;

    VkStencilOpState* decoded_value{ nullptr };
};

struct Decoded_VkPipelineDepthStencilStateCreateInfo
{
    using struct_type = VkPipelineDepthStencilStateCreateInfo;

    VkPipelineDepthStencilStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkStencilOpState> front;
    std::unique_ptr<Decoded_VkStencilOpState> back;
};

struct Decoded_VkPipelineColorBlendAttachmentState
{
    using struct_type = VkPipelineColorBlendAttachmentState;

    VkPipelineColorBlendAttachmentState* decoded_value{ nullptr };
};

struct Decoded_VkPipelineColorBlendStateCreateInfo
{
    using struct_type = VkPipelineColorBlendStateCreateInfo;

    VkPipelineColorBlendStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineColorBlendAttachmentState>> pAttachments;
    PointerDecoder<float> blendConstants;
};

struct Decoded_VkPipelineDynamicStateCreateInfo
{
    using struct_type = VkPipelineDynamicStateCreateInfo;

    VkPipelineDynamicStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkDynamicState> pDynamicStates;
};

struct Decoded_VkGraphicsPipelineCreateInfo
{
    using struct_type = VkGraphicsPipelineCreateInfo;

    VkGraphicsPipelineCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineShaderStageCreateInfo>> pStages;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineVertexInputStateCreateInfo>> pVertexInputState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineInputAssemblyStateCreateInfo>> pInputAssemblyState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineTessellationStateCreateInfo>> pTessellationState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineViewportStateCreateInfo>> pViewportState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineRasterizationStateCreateInfo>> pRasterizationState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineMultisampleStateCreateInfo>> pMultisampleState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineDepthStencilStateCreateInfo>> pDepthStencilState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineColorBlendStateCreateInfo>> pColorBlendState;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineDynamicStateCreateInfo>> pDynamicState;
    format::HandleId layout{ 0 };
    format::HandleId renderPass{ 0 };
    format::HandleId basePipelineHandle{ 0 };
};

struct Decoded_VkComputePipelineCreateInfo
{
    using struct_type = VkComputePipelineCreateInfo;

    VkComputePipelineCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkPipelineShaderStageCreateInfo> stage;
    format::HandleId layout{ 0 };
    format::HandleId basePipelineHandle{ 0 };
};

struct Decoded_VkPushConstantRange
{
    using struct_type = VkPushConstantRange;

    VkPushConstantRange* decoded_value{ nullptr };
};

struct Decoded_VkPipelineLayoutCreateInfo
{
    using struct_type = VkPipelineLayoutCreateInfo;

    VkPipelineLayoutCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkDescriptorSetLayout> pSetLayouts;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPushConstantRange>> pPushConstantRanges;
};

struct Decoded_VkSamplerCreateInfo
{
    using struct_type = VkSamplerCreateInfo;

    VkSamplerCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDescriptorSetLayoutBinding
{
    using struct_type = VkDescriptorSetLayoutBinding;

    VkDescriptorSetLayoutBinding* decoded_value{ nullptr };

    HandlePointerDecoder<VkSampler> pImmutableSamplers;
};

struct Decoded_VkDescriptorSetLayoutCreateInfo
{
    using struct_type = VkDescriptorSetLayoutCreateInfo;

    VkDescriptorSetLayoutCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDescriptorSetLayoutBinding>> pBindings;
};

struct Decoded_VkDescriptorPoolSize
{
    using struct_type = VkDescriptorPoolSize;

    VkDescriptorPoolSize* decoded_value{ nullptr };
};

struct Decoded_VkDescriptorPoolCreateInfo
{
    using struct_type = VkDescriptorPoolCreateInfo;

    VkDescriptorPoolCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDescriptorPoolSize>> pPoolSizes;
};

struct Decoded_VkDescriptorSetAllocateInfo
{
    using struct_type = VkDescriptorSetAllocateInfo;

    VkDescriptorSetAllocateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId descriptorPool{ 0 };
    HandlePointerDecoder<VkDescriptorSetLayout> pSetLayouts;
};

struct Decoded_VkDescriptorBufferInfo
{
    using struct_type = VkDescriptorBufferInfo;

    VkDescriptorBufferInfo* decoded_value{ nullptr };

    format::HandleId buffer{ 0 };
};

struct Decoded_VkCopyDescriptorSet
{
    using struct_type = VkCopyDescriptorSet;

    VkCopyDescriptorSet* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId srcSet{ 0 };
    format::HandleId dstSet{ 0 };
};

struct Decoded_VkFramebufferCreateInfo
{
    using struct_type = VkFramebufferCreateInfo;

    VkFramebufferCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId renderPass{ 0 };
    HandlePointerDecoder<VkImageView> pAttachments;
};

struct Decoded_VkAttachmentDescription
{
    using struct_type = VkAttachmentDescription;

    VkAttachmentDescription* decoded_value{ nullptr };
};

struct Decoded_VkAttachmentReference
{
    using struct_type = VkAttachmentReference;

    VkAttachmentReference* decoded_value{ nullptr };
};

struct Decoded_VkSubpassDescription
{
    using struct_type = VkSubpassDescription;

    VkSubpassDescription* decoded_value{ nullptr };

    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference>> pInputAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference>> pColorAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference>> pResolveAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference>> pDepthStencilAttachment;
    PointerDecoder<uint32_t> pPreserveAttachments;
};

struct Decoded_VkSubpassDependency
{
    using struct_type = VkSubpassDependency;

    VkSubpassDependency* decoded_value{ nullptr };
};

struct Decoded_VkRenderPassCreateInfo
{
    using struct_type = VkRenderPassCreateInfo;

    VkRenderPassCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentDescription>> pAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSubpassDescription>> pSubpasses;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSubpassDependency>> pDependencies;
};

struct Decoded_VkCommandPoolCreateInfo
{
    using struct_type = VkCommandPoolCreateInfo;

    VkCommandPoolCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkCommandBufferAllocateInfo
{
    using struct_type = VkCommandBufferAllocateInfo;

    VkCommandBufferAllocateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId commandPool{ 0 };
};

struct Decoded_VkCommandBufferInheritanceInfo
{
    using struct_type = VkCommandBufferInheritanceInfo;

    VkCommandBufferInheritanceInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId renderPass{ 0 };
    format::HandleId framebuffer{ 0 };
};

struct Decoded_VkCommandBufferBeginInfo
{
    using struct_type = VkCommandBufferBeginInfo;

    VkCommandBufferBeginInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkCommandBufferInheritanceInfo>> pInheritanceInfo;
};

struct Decoded_VkBufferCopy
{
    using struct_type = VkBufferCopy;

    VkBufferCopy* decoded_value{ nullptr };
};

struct Decoded_VkImageSubresourceLayers
{
    using struct_type = VkImageSubresourceLayers;

    VkImageSubresourceLayers* decoded_value{ nullptr };
};

struct Decoded_VkImageCopy
{
    using struct_type = VkImageCopy;

    VkImageCopy* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkImageSubresourceLayers> srcSubresource;
    std::unique_ptr<Decoded_VkOffset3D> srcOffset;
    std::unique_ptr<Decoded_VkImageSubresourceLayers> dstSubresource;
    std::unique_ptr<Decoded_VkOffset3D> dstOffset;
    std::unique_ptr<Decoded_VkExtent3D> extent;
};

struct Decoded_VkImageBlit
{
    using struct_type = VkImageBlit;

    VkImageBlit* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkImageSubresourceLayers> srcSubresource;
    std::unique_ptr<StructPointerDecoder<Decoded_VkOffset3D>> srcOffsets;
    std::unique_ptr<Decoded_VkImageSubresourceLayers> dstSubresource;
    std::unique_ptr<StructPointerDecoder<Decoded_VkOffset3D>> dstOffsets;
};

struct Decoded_VkBufferImageCopy
{
    using struct_type = VkBufferImageCopy;

    VkBufferImageCopy* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkImageSubresourceLayers> imageSubresource;
    std::unique_ptr<Decoded_VkOffset3D> imageOffset;
    std::unique_ptr<Decoded_VkExtent3D> imageExtent;
};

struct Decoded_VkClearDepthStencilValue
{
    using struct_type = VkClearDepthStencilValue;

    VkClearDepthStencilValue* decoded_value{ nullptr };
};

struct Decoded_VkClearAttachment
{
    using struct_type = VkClearAttachment;

    VkClearAttachment* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkClearValue> clearValue;
};

struct Decoded_VkClearRect
{
    using struct_type = VkClearRect;

    VkClearRect* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkRect2D> rect;
};

struct Decoded_VkImageResolve
{
    using struct_type = VkImageResolve;

    VkImageResolve* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkImageSubresourceLayers> srcSubresource;
    std::unique_ptr<Decoded_VkOffset3D> srcOffset;
    std::unique_ptr<Decoded_VkImageSubresourceLayers> dstSubresource;
    std::unique_ptr<Decoded_VkOffset3D> dstOffset;
    std::unique_ptr<Decoded_VkExtent3D> extent;
};

struct Decoded_VkMemoryBarrier
{
    using struct_type = VkMemoryBarrier;

    VkMemoryBarrier* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkBufferMemoryBarrier
{
    using struct_type = VkBufferMemoryBarrier;

    VkBufferMemoryBarrier* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId buffer{ 0 };
};

struct Decoded_VkImageMemoryBarrier
{
    using struct_type = VkImageMemoryBarrier;

    VkImageMemoryBarrier* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
    std::unique_ptr<Decoded_VkImageSubresourceRange> subresourceRange;
};

struct Decoded_VkRenderPassBeginInfo
{
    using struct_type = VkRenderPassBeginInfo;

    VkRenderPassBeginInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId renderPass{ 0 };
    format::HandleId framebuffer{ 0 };
    std::unique_ptr<Decoded_VkRect2D> renderArea;
    std::unique_ptr<StructPointerDecoder<Decoded_VkClearValue>> pClearValues;
};

struct Decoded_VkDispatchIndirectCommand
{
    using struct_type = VkDispatchIndirectCommand;

    VkDispatchIndirectCommand* decoded_value{ nullptr };
};

struct Decoded_VkDrawIndexedIndirectCommand
{
    using struct_type = VkDrawIndexedIndirectCommand;

    VkDrawIndexedIndirectCommand* decoded_value{ nullptr };
};

struct Decoded_VkDrawIndirectCommand
{
    using struct_type = VkDrawIndirectCommand;

    VkDrawIndirectCommand* decoded_value{ nullptr };
};

struct Decoded_VkPhysicalDeviceSubgroupProperties
{
    using struct_type = VkPhysicalDeviceSubgroupProperties;

    VkPhysicalDeviceSubgroupProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkBindBufferMemoryInfo
{
    using struct_type = VkBindBufferMemoryInfo;

    VkBindBufferMemoryInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId buffer{ 0 };
    format::HandleId memory{ 0 };
};

struct Decoded_VkBindImageMemoryInfo
{
    using struct_type = VkBindImageMemoryInfo;

    VkBindImageMemoryInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
    format::HandleId memory{ 0 };
};

struct Decoded_VkPhysicalDevice16BitStorageFeatures
{
    using struct_type = VkPhysicalDevice16BitStorageFeatures;

    VkPhysicalDevice16BitStorageFeatures* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMemoryDedicatedRequirements
{
    using struct_type = VkMemoryDedicatedRequirements;

    VkMemoryDedicatedRequirements* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMemoryDedicatedAllocateInfo
{
    using struct_type = VkMemoryDedicatedAllocateInfo;

    VkMemoryDedicatedAllocateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
    format::HandleId buffer{ 0 };
};

struct Decoded_VkMemoryAllocateFlagsInfo
{
    using struct_type = VkMemoryAllocateFlagsInfo;

    VkMemoryAllocateFlagsInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceGroupRenderPassBeginInfo
{
    using struct_type = VkDeviceGroupRenderPassBeginInfo;

    VkDeviceGroupRenderPassBeginInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkRect2D>> pDeviceRenderAreas;
};

struct Decoded_VkDeviceGroupCommandBufferBeginInfo
{
    using struct_type = VkDeviceGroupCommandBufferBeginInfo;

    VkDeviceGroupCommandBufferBeginInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceGroupSubmitInfo
{
    using struct_type = VkDeviceGroupSubmitInfo;

    VkDeviceGroupSubmitInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pWaitSemaphoreDeviceIndices;
    PointerDecoder<uint32_t> pCommandBufferDeviceMasks;
    PointerDecoder<uint32_t> pSignalSemaphoreDeviceIndices;
};

struct Decoded_VkDeviceGroupBindSparseInfo
{
    using struct_type = VkDeviceGroupBindSparseInfo;

    VkDeviceGroupBindSparseInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkBindBufferMemoryDeviceGroupInfo
{
    using struct_type = VkBindBufferMemoryDeviceGroupInfo;

    VkBindBufferMemoryDeviceGroupInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pDeviceIndices;
};

struct Decoded_VkBindImageMemoryDeviceGroupInfo
{
    using struct_type = VkBindImageMemoryDeviceGroupInfo;

    VkBindImageMemoryDeviceGroupInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pDeviceIndices;
    std::unique_ptr<StructPointerDecoder<Decoded_VkRect2D>> pSplitInstanceBindRegions;
};

struct Decoded_VkPhysicalDeviceGroupProperties
{
    using struct_type = VkPhysicalDeviceGroupProperties;

    VkPhysicalDeviceGroupProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkPhysicalDevice> physicalDevices;
};

struct Decoded_VkDeviceGroupDeviceCreateInfo
{
    using struct_type = VkDeviceGroupDeviceCreateInfo;

    VkDeviceGroupDeviceCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkPhysicalDevice> pPhysicalDevices;
};

struct Decoded_VkBufferMemoryRequirementsInfo2
{
    using struct_type = VkBufferMemoryRequirementsInfo2;

    VkBufferMemoryRequirementsInfo2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId buffer{ 0 };
};

struct Decoded_VkImageMemoryRequirementsInfo2
{
    using struct_type = VkImageMemoryRequirementsInfo2;

    VkImageMemoryRequirementsInfo2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
};

struct Decoded_VkImageSparseMemoryRequirementsInfo2
{
    using struct_type = VkImageSparseMemoryRequirementsInfo2;

    VkImageSparseMemoryRequirementsInfo2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
};

struct Decoded_VkMemoryRequirements2
{
    using struct_type = VkMemoryRequirements2;

    VkMemoryRequirements2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkMemoryRequirements> memoryRequirements;
};

struct Decoded_VkSparseImageMemoryRequirements2
{
    using struct_type = VkSparseImageMemoryRequirements2;

    VkSparseImageMemoryRequirements2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkSparseImageMemoryRequirements> memoryRequirements;
};

struct Decoded_VkPhysicalDeviceFeatures2
{
    using struct_type = VkPhysicalDeviceFeatures2;

    VkPhysicalDeviceFeatures2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkPhysicalDeviceFeatures> features;
};

struct Decoded_VkPhysicalDeviceProperties2
{
    using struct_type = VkPhysicalDeviceProperties2;

    VkPhysicalDeviceProperties2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkPhysicalDeviceProperties> properties;
};

struct Decoded_VkFormatProperties2
{
    using struct_type = VkFormatProperties2;

    VkFormatProperties2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkFormatProperties> formatProperties;
};

struct Decoded_VkImageFormatProperties2
{
    using struct_type = VkImageFormatProperties2;

    VkImageFormatProperties2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkImageFormatProperties> imageFormatProperties;
};

struct Decoded_VkPhysicalDeviceImageFormatInfo2
{
    using struct_type = VkPhysicalDeviceImageFormatInfo2;

    VkPhysicalDeviceImageFormatInfo2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkQueueFamilyProperties2
{
    using struct_type = VkQueueFamilyProperties2;

    VkQueueFamilyProperties2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkQueueFamilyProperties> queueFamilyProperties;
};

struct Decoded_VkPhysicalDeviceMemoryProperties2
{
    using struct_type = VkPhysicalDeviceMemoryProperties2;

    VkPhysicalDeviceMemoryProperties2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkPhysicalDeviceMemoryProperties> memoryProperties;
};

struct Decoded_VkSparseImageFormatProperties2
{
    using struct_type = VkSparseImageFormatProperties2;

    VkSparseImageFormatProperties2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkSparseImageFormatProperties> properties;
};

struct Decoded_VkPhysicalDeviceSparseImageFormatInfo2
{
    using struct_type = VkPhysicalDeviceSparseImageFormatInfo2;

    VkPhysicalDeviceSparseImageFormatInfo2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDevicePointClippingProperties
{
    using struct_type = VkPhysicalDevicePointClippingProperties;

    VkPhysicalDevicePointClippingProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkInputAttachmentAspectReference
{
    using struct_type = VkInputAttachmentAspectReference;

    VkInputAttachmentAspectReference* decoded_value{ nullptr };
};

struct Decoded_VkRenderPassInputAttachmentAspectCreateInfo
{
    using struct_type = VkRenderPassInputAttachmentAspectCreateInfo;

    VkRenderPassInputAttachmentAspectCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkInputAttachmentAspectReference>> pAspectReferences;
};

struct Decoded_VkImageViewUsageCreateInfo
{
    using struct_type = VkImageViewUsageCreateInfo;

    VkImageViewUsageCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineTessellationDomainOriginStateCreateInfo
{
    using struct_type = VkPipelineTessellationDomainOriginStateCreateInfo;

    VkPipelineTessellationDomainOriginStateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkRenderPassMultiviewCreateInfo
{
    using struct_type = VkRenderPassMultiviewCreateInfo;

    VkRenderPassMultiviewCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pViewMasks;
    PointerDecoder<int32_t> pViewOffsets;
    PointerDecoder<uint32_t> pCorrelationMasks;
};

struct Decoded_VkPhysicalDeviceMultiviewFeatures
{
    using struct_type = VkPhysicalDeviceMultiviewFeatures;

    VkPhysicalDeviceMultiviewFeatures* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceMultiviewProperties
{
    using struct_type = VkPhysicalDeviceMultiviewProperties;

    VkPhysicalDeviceMultiviewProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceVariablePointersFeatures
{
    using struct_type = VkPhysicalDeviceVariablePointersFeatures;

    VkPhysicalDeviceVariablePointersFeatures* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceProtectedMemoryFeatures
{
    using struct_type = VkPhysicalDeviceProtectedMemoryFeatures;

    VkPhysicalDeviceProtectedMemoryFeatures* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceProtectedMemoryProperties
{
    using struct_type = VkPhysicalDeviceProtectedMemoryProperties;

    VkPhysicalDeviceProtectedMemoryProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceQueueInfo2
{
    using struct_type = VkDeviceQueueInfo2;

    VkDeviceQueueInfo2* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkProtectedSubmitInfo
{
    using struct_type = VkProtectedSubmitInfo;

    VkProtectedSubmitInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSamplerYcbcrConversionCreateInfo
{
    using struct_type = VkSamplerYcbcrConversionCreateInfo;

    VkSamplerYcbcrConversionCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkComponentMapping> components;
};

struct Decoded_VkSamplerYcbcrConversionInfo
{
    using struct_type = VkSamplerYcbcrConversionInfo;

    VkSamplerYcbcrConversionInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId conversion{ 0 };
};

struct Decoded_VkBindImagePlaneMemoryInfo
{
    using struct_type = VkBindImagePlaneMemoryInfo;

    VkBindImagePlaneMemoryInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkImagePlaneMemoryRequirementsInfo
{
    using struct_type = VkImagePlaneMemoryRequirementsInfo;

    VkImagePlaneMemoryRequirementsInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures
{
    using struct_type = VkPhysicalDeviceSamplerYcbcrConversionFeatures;

    VkPhysicalDeviceSamplerYcbcrConversionFeatures* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSamplerYcbcrConversionImageFormatProperties
{
    using struct_type = VkSamplerYcbcrConversionImageFormatProperties;

    VkSamplerYcbcrConversionImageFormatProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDescriptorUpdateTemplateEntry
{
    using struct_type = VkDescriptorUpdateTemplateEntry;

    VkDescriptorUpdateTemplateEntry* decoded_value{ nullptr };
};

struct Decoded_VkDescriptorUpdateTemplateCreateInfo
{
    using struct_type = VkDescriptorUpdateTemplateCreateInfo;

    VkDescriptorUpdateTemplateCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateEntry>> pDescriptorUpdateEntries;
    format::HandleId descriptorSetLayout{ 0 };
    format::HandleId pipelineLayout{ 0 };
};

struct Decoded_VkExternalMemoryProperties
{
    using struct_type = VkExternalMemoryProperties;

    VkExternalMemoryProperties* decoded_value{ nullptr };
};

struct Decoded_VkPhysicalDeviceExternalImageFormatInfo
{
    using struct_type = VkPhysicalDeviceExternalImageFormatInfo;

    VkPhysicalDeviceExternalImageFormatInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExternalImageFormatProperties
{
    using struct_type = VkExternalImageFormatProperties;

    VkExternalImageFormatProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExternalMemoryProperties> externalMemoryProperties;
};

struct Decoded_VkPhysicalDeviceExternalBufferInfo
{
    using struct_type = VkPhysicalDeviceExternalBufferInfo;

    VkPhysicalDeviceExternalBufferInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExternalBufferProperties
{
    using struct_type = VkExternalBufferProperties;

    VkExternalBufferProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExternalMemoryProperties> externalMemoryProperties;
};

struct Decoded_VkPhysicalDeviceIDProperties
{
    using struct_type = VkPhysicalDeviceIDProperties;

    VkPhysicalDeviceIDProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint8_t> deviceUUID;
    PointerDecoder<uint8_t> driverUUID;
    PointerDecoder<uint8_t> deviceLUID;
};

struct Decoded_VkExternalMemoryImageCreateInfo
{
    using struct_type = VkExternalMemoryImageCreateInfo;

    VkExternalMemoryImageCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExternalMemoryBufferCreateInfo
{
    using struct_type = VkExternalMemoryBufferCreateInfo;

    VkExternalMemoryBufferCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExportMemoryAllocateInfo
{
    using struct_type = VkExportMemoryAllocateInfo;

    VkExportMemoryAllocateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceExternalFenceInfo
{
    using struct_type = VkPhysicalDeviceExternalFenceInfo;

    VkPhysicalDeviceExternalFenceInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExternalFenceProperties
{
    using struct_type = VkExternalFenceProperties;

    VkExternalFenceProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExportFenceCreateInfo
{
    using struct_type = VkExportFenceCreateInfo;

    VkExportFenceCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExportSemaphoreCreateInfo
{
    using struct_type = VkExportSemaphoreCreateInfo;

    VkExportSemaphoreCreateInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceExternalSemaphoreInfo
{
    using struct_type = VkPhysicalDeviceExternalSemaphoreInfo;

    VkPhysicalDeviceExternalSemaphoreInfo* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExternalSemaphoreProperties
{
    using struct_type = VkExternalSemaphoreProperties;

    VkExternalSemaphoreProperties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceMaintenance3Properties
{
    using struct_type = VkPhysicalDeviceMaintenance3Properties;

    VkPhysicalDeviceMaintenance3Properties* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDescriptorSetLayoutSupport
{
    using struct_type = VkDescriptorSetLayoutSupport;

    VkDescriptorSetLayoutSupport* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderDrawParametersFeatures
{
    using struct_type = VkPhysicalDeviceShaderDrawParametersFeatures;

    VkPhysicalDeviceShaderDrawParametersFeatures* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

typedef Decoded_VkMemoryRequirements2 Decoded_VkMemoryRequirements2KHR;

typedef Decoded_VkPhysicalDeviceVariablePointersFeatures Decoded_VkPhysicalDeviceVariablePointerFeatures;

typedef Decoded_VkPhysicalDeviceShaderDrawParametersFeatures Decoded_VkPhysicalDeviceShaderDrawParameterFeatures;

struct Decoded_VkSurfaceCapabilitiesKHR
{
    using struct_type = VkSurfaceCapabilitiesKHR;

    VkSurfaceCapabilitiesKHR* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkExtent2D> currentExtent;
    std::unique_ptr<Decoded_VkExtent2D> minImageExtent;
    std::unique_ptr<Decoded_VkExtent2D> maxImageExtent;
};

struct Decoded_VkSurfaceFormatKHR
{
    using struct_type = VkSurfaceFormatKHR;

    VkSurfaceFormatKHR* decoded_value{ nullptr };
};

struct Decoded_VkSwapchainCreateInfoKHR
{
    using struct_type = VkSwapchainCreateInfoKHR;

    VkSwapchainCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId surface{ 0 };
    std::unique_ptr<Decoded_VkExtent2D> imageExtent;
    PointerDecoder<uint32_t> pQueueFamilyIndices;
    format::HandleId oldSwapchain{ 0 };
};

struct Decoded_VkPresentInfoKHR
{
    using struct_type = VkPresentInfoKHR;

    VkPresentInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkSemaphore> pWaitSemaphores;
    HandlePointerDecoder<VkSwapchainKHR> pSwapchains;
    PointerDecoder<uint32_t> pImageIndices;
    PointerDecoder<VkResult> pResults;
};

struct Decoded_VkImageSwapchainCreateInfoKHR
{
    using struct_type = VkImageSwapchainCreateInfoKHR;

    VkImageSwapchainCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId swapchain{ 0 };
};

struct Decoded_VkBindImageMemorySwapchainInfoKHR
{
    using struct_type = VkBindImageMemorySwapchainInfoKHR;

    VkBindImageMemorySwapchainInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId swapchain{ 0 };
};

struct Decoded_VkAcquireNextImageInfoKHR
{
    using struct_type = VkAcquireNextImageInfoKHR;

    VkAcquireNextImageInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId swapchain{ 0 };
    format::HandleId semaphore{ 0 };
    format::HandleId fence{ 0 };
};

struct Decoded_VkDeviceGroupPresentCapabilitiesKHR
{
    using struct_type = VkDeviceGroupPresentCapabilitiesKHR;

    VkDeviceGroupPresentCapabilitiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> presentMask;
};

struct Decoded_VkDeviceGroupPresentInfoKHR
{
    using struct_type = VkDeviceGroupPresentInfoKHR;

    VkDeviceGroupPresentInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pDeviceMasks;
};

struct Decoded_VkDeviceGroupSwapchainCreateInfoKHR
{
    using struct_type = VkDeviceGroupSwapchainCreateInfoKHR;

    VkDeviceGroupSwapchainCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDisplayPropertiesKHR
{
    using struct_type = VkDisplayPropertiesKHR;

    VkDisplayPropertiesKHR* decoded_value{ nullptr };

    format::HandleId display{ 0 };
    StringDecoder displayName;
    std::unique_ptr<Decoded_VkExtent2D> physicalDimensions;
    std::unique_ptr<Decoded_VkExtent2D> physicalResolution;
};

struct Decoded_VkDisplayModeParametersKHR
{
    using struct_type = VkDisplayModeParametersKHR;

    VkDisplayModeParametersKHR* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkExtent2D> visibleRegion;
};

struct Decoded_VkDisplayModePropertiesKHR
{
    using struct_type = VkDisplayModePropertiesKHR;

    VkDisplayModePropertiesKHR* decoded_value{ nullptr };

    format::HandleId displayMode{ 0 };
    std::unique_ptr<Decoded_VkDisplayModeParametersKHR> parameters;
};

struct Decoded_VkDisplayModeCreateInfoKHR
{
    using struct_type = VkDisplayModeCreateInfoKHR;

    VkDisplayModeCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkDisplayModeParametersKHR> parameters;
};

struct Decoded_VkDisplayPlaneCapabilitiesKHR
{
    using struct_type = VkDisplayPlaneCapabilitiesKHR;

    VkDisplayPlaneCapabilitiesKHR* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkOffset2D> minSrcPosition;
    std::unique_ptr<Decoded_VkOffset2D> maxSrcPosition;
    std::unique_ptr<Decoded_VkExtent2D> minSrcExtent;
    std::unique_ptr<Decoded_VkExtent2D> maxSrcExtent;
    std::unique_ptr<Decoded_VkOffset2D> minDstPosition;
    std::unique_ptr<Decoded_VkOffset2D> maxDstPosition;
    std::unique_ptr<Decoded_VkExtent2D> minDstExtent;
    std::unique_ptr<Decoded_VkExtent2D> maxDstExtent;
};

struct Decoded_VkDisplayPlanePropertiesKHR
{
    using struct_type = VkDisplayPlanePropertiesKHR;

    VkDisplayPlanePropertiesKHR* decoded_value{ nullptr };

    format::HandleId currentDisplay{ 0 };
};

struct Decoded_VkDisplaySurfaceCreateInfoKHR
{
    using struct_type = VkDisplaySurfaceCreateInfoKHR;

    VkDisplaySurfaceCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId displayMode{ 0 };
    std::unique_ptr<Decoded_VkExtent2D> imageExtent;
};

struct Decoded_VkDisplayPresentInfoKHR
{
    using struct_type = VkDisplayPresentInfoKHR;

    VkDisplayPresentInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkRect2D> srcRect;
    std::unique_ptr<Decoded_VkRect2D> dstRect;
};

struct Decoded_VkXlibSurfaceCreateInfoKHR
{
    using struct_type = VkXlibSurfaceCreateInfoKHR;

    VkXlibSurfaceCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t dpy{ 0 };
};

struct Decoded_VkXcbSurfaceCreateInfoKHR
{
    using struct_type = VkXcbSurfaceCreateInfoKHR;

    VkXcbSurfaceCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t connection{ 0 };
};

struct Decoded_VkWaylandSurfaceCreateInfoKHR
{
    using struct_type = VkWaylandSurfaceCreateInfoKHR;

    VkWaylandSurfaceCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t display{ 0 };
    uint64_t surface{ 0 };
};

struct Decoded_VkAndroidSurfaceCreateInfoKHR
{
    using struct_type = VkAndroidSurfaceCreateInfoKHR;

    VkAndroidSurfaceCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t window{ 0 };
};

struct Decoded_VkWin32SurfaceCreateInfoKHR
{
    using struct_type = VkWin32SurfaceCreateInfoKHR;

    VkWin32SurfaceCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t hinstance{ 0 };
    uint64_t hwnd{ 0 };
};

typedef Decoded_VkRenderPassMultiviewCreateInfo Decoded_VkRenderPassMultiviewCreateInfoKHR;

typedef Decoded_VkPhysicalDeviceMultiviewFeatures Decoded_VkPhysicalDeviceMultiviewFeaturesKHR;

typedef Decoded_VkPhysicalDeviceMultiviewProperties Decoded_VkPhysicalDeviceMultiviewPropertiesKHR;

typedef Decoded_VkPhysicalDeviceFeatures2 Decoded_VkPhysicalDeviceFeatures2KHR;

typedef Decoded_VkPhysicalDeviceProperties2 Decoded_VkPhysicalDeviceProperties2KHR;

typedef Decoded_VkFormatProperties2 Decoded_VkFormatProperties2KHR;

typedef Decoded_VkImageFormatProperties2 Decoded_VkImageFormatProperties2KHR;

typedef Decoded_VkPhysicalDeviceImageFormatInfo2 Decoded_VkPhysicalDeviceImageFormatInfo2KHR;

typedef Decoded_VkQueueFamilyProperties2 Decoded_VkQueueFamilyProperties2KHR;

typedef Decoded_VkPhysicalDeviceMemoryProperties2 Decoded_VkPhysicalDeviceMemoryProperties2KHR;

typedef Decoded_VkSparseImageFormatProperties2 Decoded_VkSparseImageFormatProperties2KHR;

typedef Decoded_VkPhysicalDeviceSparseImageFormatInfo2 Decoded_VkPhysicalDeviceSparseImageFormatInfo2KHR;

typedef Decoded_VkMemoryAllocateFlagsInfo Decoded_VkMemoryAllocateFlagsInfoKHR;

typedef Decoded_VkDeviceGroupRenderPassBeginInfo Decoded_VkDeviceGroupRenderPassBeginInfoKHR;

typedef Decoded_VkDeviceGroupCommandBufferBeginInfo Decoded_VkDeviceGroupCommandBufferBeginInfoKHR;

typedef Decoded_VkDeviceGroupSubmitInfo Decoded_VkDeviceGroupSubmitInfoKHR;

typedef Decoded_VkDeviceGroupBindSparseInfo Decoded_VkDeviceGroupBindSparseInfoKHR;

typedef Decoded_VkBindBufferMemoryDeviceGroupInfo Decoded_VkBindBufferMemoryDeviceGroupInfoKHR;

typedef Decoded_VkBindImageMemoryDeviceGroupInfo Decoded_VkBindImageMemoryDeviceGroupInfoKHR;

typedef Decoded_VkPhysicalDeviceGroupProperties Decoded_VkPhysicalDeviceGroupPropertiesKHR;

typedef Decoded_VkDeviceGroupDeviceCreateInfo Decoded_VkDeviceGroupDeviceCreateInfoKHR;

typedef Decoded_VkExternalMemoryProperties Decoded_VkExternalMemoryPropertiesKHR;

typedef Decoded_VkPhysicalDeviceExternalImageFormatInfo Decoded_VkPhysicalDeviceExternalImageFormatInfoKHR;

typedef Decoded_VkExternalImageFormatProperties Decoded_VkExternalImageFormatPropertiesKHR;

typedef Decoded_VkPhysicalDeviceExternalBufferInfo Decoded_VkPhysicalDeviceExternalBufferInfoKHR;

typedef Decoded_VkExternalBufferProperties Decoded_VkExternalBufferPropertiesKHR;

typedef Decoded_VkPhysicalDeviceIDProperties Decoded_VkPhysicalDeviceIDPropertiesKHR;

typedef Decoded_VkExternalMemoryImageCreateInfo Decoded_VkExternalMemoryImageCreateInfoKHR;

typedef Decoded_VkExternalMemoryBufferCreateInfo Decoded_VkExternalMemoryBufferCreateInfoKHR;

typedef Decoded_VkExportMemoryAllocateInfo Decoded_VkExportMemoryAllocateInfoKHR;

struct Decoded_VkImportMemoryWin32HandleInfoKHR
{
    using struct_type = VkImportMemoryWin32HandleInfoKHR;

    VkImportMemoryWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t handle{ 0 };
    WStringDecoder name;
};

struct Decoded_VkExportMemoryWin32HandleInfoKHR
{
    using struct_type = VkExportMemoryWin32HandleInfoKHR;

    VkExportMemoryWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>> pAttributes;
    WStringDecoder name;
};

struct Decoded_VkMemoryWin32HandlePropertiesKHR
{
    using struct_type = VkMemoryWin32HandlePropertiesKHR;

    VkMemoryWin32HandlePropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMemoryGetWin32HandleInfoKHR
{
    using struct_type = VkMemoryGetWin32HandleInfoKHR;

    VkMemoryGetWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId memory{ 0 };
};

struct Decoded_VkImportMemoryFdInfoKHR
{
    using struct_type = VkImportMemoryFdInfoKHR;

    VkImportMemoryFdInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMemoryFdPropertiesKHR
{
    using struct_type = VkMemoryFdPropertiesKHR;

    VkMemoryFdPropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMemoryGetFdInfoKHR
{
    using struct_type = VkMemoryGetFdInfoKHR;

    VkMemoryGetFdInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId memory{ 0 };
};

struct Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR
{
    using struct_type = VkWin32KeyedMutexAcquireReleaseInfoKHR;

    VkWin32KeyedMutexAcquireReleaseInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkDeviceMemory> pAcquireSyncs;
    PointerDecoder<uint64_t> pAcquireKeys;
    PointerDecoder<uint32_t> pAcquireTimeouts;
    HandlePointerDecoder<VkDeviceMemory> pReleaseSyncs;
    PointerDecoder<uint64_t> pReleaseKeys;
};

typedef Decoded_VkPhysicalDeviceExternalSemaphoreInfo Decoded_VkPhysicalDeviceExternalSemaphoreInfoKHR;

typedef Decoded_VkExternalSemaphoreProperties Decoded_VkExternalSemaphorePropertiesKHR;

typedef Decoded_VkExportSemaphoreCreateInfo Decoded_VkExportSemaphoreCreateInfoKHR;

struct Decoded_VkImportSemaphoreWin32HandleInfoKHR
{
    using struct_type = VkImportSemaphoreWin32HandleInfoKHR;

    VkImportSemaphoreWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId semaphore{ 0 };
    uint64_t handle{ 0 };
    WStringDecoder name;
};

struct Decoded_VkExportSemaphoreWin32HandleInfoKHR
{
    using struct_type = VkExportSemaphoreWin32HandleInfoKHR;

    VkExportSemaphoreWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>> pAttributes;
    WStringDecoder name;
};

struct Decoded_VkD3D12FenceSubmitInfoKHR
{
    using struct_type = VkD3D12FenceSubmitInfoKHR;

    VkD3D12FenceSubmitInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint64_t> pWaitSemaphoreValues;
    PointerDecoder<uint64_t> pSignalSemaphoreValues;
};

struct Decoded_VkSemaphoreGetWin32HandleInfoKHR
{
    using struct_type = VkSemaphoreGetWin32HandleInfoKHR;

    VkSemaphoreGetWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId semaphore{ 0 };
};

struct Decoded_VkImportSemaphoreFdInfoKHR
{
    using struct_type = VkImportSemaphoreFdInfoKHR;

    VkImportSemaphoreFdInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId semaphore{ 0 };
};

struct Decoded_VkSemaphoreGetFdInfoKHR
{
    using struct_type = VkSemaphoreGetFdInfoKHR;

    VkSemaphoreGetFdInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId semaphore{ 0 };
};

struct Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR
{
    using struct_type = VkPhysicalDevicePushDescriptorPropertiesKHR;

    VkPhysicalDevicePushDescriptorPropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR
{
    using struct_type = VkPhysicalDeviceShaderFloat16Int8FeaturesKHR;

    VkPhysicalDeviceShaderFloat16Int8FeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

typedef Decoded_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR Decoded_VkPhysicalDeviceFloat16Int8FeaturesKHR;

typedef Decoded_VkPhysicalDevice16BitStorageFeatures Decoded_VkPhysicalDevice16BitStorageFeaturesKHR;

struct Decoded_VkRectLayerKHR
{
    using struct_type = VkRectLayerKHR;

    VkRectLayerKHR* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkOffset2D> offset;
    std::unique_ptr<Decoded_VkExtent2D> extent;
};

struct Decoded_VkPresentRegionKHR
{
    using struct_type = VkPresentRegionKHR;

    VkPresentRegionKHR* decoded_value{ nullptr };

    std::unique_ptr<StructPointerDecoder<Decoded_VkRectLayerKHR>> pRectangles;
};

struct Decoded_VkPresentRegionsKHR
{
    using struct_type = VkPresentRegionsKHR;

    VkPresentRegionsKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPresentRegionKHR>> pRegions;
};

typedef Decoded_VkDescriptorUpdateTemplateEntry Decoded_VkDescriptorUpdateTemplateEntryKHR;

typedef Decoded_VkDescriptorUpdateTemplateCreateInfo Decoded_VkDescriptorUpdateTemplateCreateInfoKHR;

struct Decoded_VkPhysicalDeviceImagelessFramebufferFeaturesKHR
{
    using struct_type = VkPhysicalDeviceImagelessFramebufferFeaturesKHR;

    VkPhysicalDeviceImagelessFramebufferFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkFramebufferAttachmentImageInfoKHR
{
    using struct_type = VkFramebufferAttachmentImageInfoKHR;

    VkFramebufferAttachmentImageInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkFormat> pViewFormats;
};

struct Decoded_VkFramebufferAttachmentsCreateInfoKHR
{
    using struct_type = VkFramebufferAttachmentsCreateInfoKHR;

    VkFramebufferAttachmentsCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkFramebufferAttachmentImageInfoKHR>> pAttachmentImageInfos;
};

struct Decoded_VkRenderPassAttachmentBeginInfoKHR
{
    using struct_type = VkRenderPassAttachmentBeginInfoKHR;

    VkRenderPassAttachmentBeginInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkImageView> pAttachments;
};

struct Decoded_VkAttachmentDescription2KHR
{
    using struct_type = VkAttachmentDescription2KHR;

    VkAttachmentDescription2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkAttachmentReference2KHR
{
    using struct_type = VkAttachmentReference2KHR;

    VkAttachmentReference2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSubpassDescription2KHR
{
    using struct_type = VkSubpassDescription2KHR;

    VkSubpassDescription2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference2KHR>> pInputAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference2KHR>> pColorAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference2KHR>> pResolveAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference2KHR>> pDepthStencilAttachment;
    PointerDecoder<uint32_t> pPreserveAttachments;
};

struct Decoded_VkSubpassDependency2KHR
{
    using struct_type = VkSubpassDependency2KHR;

    VkSubpassDependency2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkRenderPassCreateInfo2KHR
{
    using struct_type = VkRenderPassCreateInfo2KHR;

    VkRenderPassCreateInfo2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentDescription2KHR>> pAttachments;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSubpassDescription2KHR>> pSubpasses;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSubpassDependency2KHR>> pDependencies;
    PointerDecoder<uint32_t> pCorrelatedViewMasks;
};

struct Decoded_VkSubpassBeginInfoKHR
{
    using struct_type = VkSubpassBeginInfoKHR;

    VkSubpassBeginInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSubpassEndInfoKHR
{
    using struct_type = VkSubpassEndInfoKHR;

    VkSubpassEndInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSharedPresentSurfaceCapabilitiesKHR
{
    using struct_type = VkSharedPresentSurfaceCapabilitiesKHR;

    VkSharedPresentSurfaceCapabilitiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

typedef Decoded_VkPhysicalDeviceExternalFenceInfo Decoded_VkPhysicalDeviceExternalFenceInfoKHR;

typedef Decoded_VkExternalFenceProperties Decoded_VkExternalFencePropertiesKHR;

typedef Decoded_VkExportFenceCreateInfo Decoded_VkExportFenceCreateInfoKHR;

struct Decoded_VkImportFenceWin32HandleInfoKHR
{
    using struct_type = VkImportFenceWin32HandleInfoKHR;

    VkImportFenceWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId fence{ 0 };
    uint64_t handle{ 0 };
    WStringDecoder name;
};

struct Decoded_VkExportFenceWin32HandleInfoKHR
{
    using struct_type = VkExportFenceWin32HandleInfoKHR;

    VkExportFenceWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>> pAttributes;
    WStringDecoder name;
};

struct Decoded_VkFenceGetWin32HandleInfoKHR
{
    using struct_type = VkFenceGetWin32HandleInfoKHR;

    VkFenceGetWin32HandleInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId fence{ 0 };
};

struct Decoded_VkImportFenceFdInfoKHR
{
    using struct_type = VkImportFenceFdInfoKHR;

    VkImportFenceFdInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId fence{ 0 };
};

struct Decoded_VkFenceGetFdInfoKHR
{
    using struct_type = VkFenceGetFdInfoKHR;

    VkFenceGetFdInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId fence{ 0 };
};

typedef Decoded_VkPhysicalDevicePointClippingProperties Decoded_VkPhysicalDevicePointClippingPropertiesKHR;

typedef Decoded_VkRenderPassInputAttachmentAspectCreateInfo Decoded_VkRenderPassInputAttachmentAspectCreateInfoKHR;

typedef Decoded_VkInputAttachmentAspectReference Decoded_VkInputAttachmentAspectReferenceKHR;

typedef Decoded_VkImageViewUsageCreateInfo Decoded_VkImageViewUsageCreateInfoKHR;

typedef Decoded_VkPipelineTessellationDomainOriginStateCreateInfo Decoded_VkPipelineTessellationDomainOriginStateCreateInfoKHR;

struct Decoded_VkPhysicalDeviceSurfaceInfo2KHR
{
    using struct_type = VkPhysicalDeviceSurfaceInfo2KHR;

    VkPhysicalDeviceSurfaceInfo2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId surface{ 0 };
};

struct Decoded_VkSurfaceCapabilities2KHR
{
    using struct_type = VkSurfaceCapabilities2KHR;

    VkSurfaceCapabilities2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkSurfaceCapabilitiesKHR> surfaceCapabilities;
};

struct Decoded_VkSurfaceFormat2KHR
{
    using struct_type = VkSurfaceFormat2KHR;

    VkSurfaceFormat2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkSurfaceFormatKHR> surfaceFormat;
};

typedef Decoded_VkPhysicalDeviceVariablePointersFeatures Decoded_VkPhysicalDeviceVariablePointerFeaturesKHR;

typedef Decoded_VkPhysicalDeviceVariablePointersFeatures Decoded_VkPhysicalDeviceVariablePointersFeaturesKHR;

struct Decoded_VkDisplayProperties2KHR
{
    using struct_type = VkDisplayProperties2KHR;

    VkDisplayProperties2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkDisplayPropertiesKHR> displayProperties;
};

struct Decoded_VkDisplayPlaneProperties2KHR
{
    using struct_type = VkDisplayPlaneProperties2KHR;

    VkDisplayPlaneProperties2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkDisplayPlanePropertiesKHR> displayPlaneProperties;
};

struct Decoded_VkDisplayModeProperties2KHR
{
    using struct_type = VkDisplayModeProperties2KHR;

    VkDisplayModeProperties2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkDisplayModePropertiesKHR> displayModeProperties;
};

struct Decoded_VkDisplayPlaneInfo2KHR
{
    using struct_type = VkDisplayPlaneInfo2KHR;

    VkDisplayPlaneInfo2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId mode{ 0 };
};

struct Decoded_VkDisplayPlaneCapabilities2KHR
{
    using struct_type = VkDisplayPlaneCapabilities2KHR;

    VkDisplayPlaneCapabilities2KHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkDisplayPlaneCapabilitiesKHR> capabilities;
};

typedef Decoded_VkMemoryDedicatedRequirements Decoded_VkMemoryDedicatedRequirementsKHR;

typedef Decoded_VkMemoryDedicatedAllocateInfo Decoded_VkMemoryDedicatedAllocateInfoKHR;

typedef Decoded_VkBufferMemoryRequirementsInfo2 Decoded_VkBufferMemoryRequirementsInfo2KHR;

typedef Decoded_VkImageMemoryRequirementsInfo2 Decoded_VkImageMemoryRequirementsInfo2KHR;

typedef Decoded_VkImageSparseMemoryRequirementsInfo2 Decoded_VkImageSparseMemoryRequirementsInfo2KHR;

typedef Decoded_VkSparseImageMemoryRequirements2 Decoded_VkSparseImageMemoryRequirements2KHR;

struct Decoded_VkImageFormatListCreateInfoKHR
{
    using struct_type = VkImageFormatListCreateInfoKHR;

    VkImageFormatListCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkFormat> pViewFormats;
};

typedef Decoded_VkSamplerYcbcrConversionCreateInfo Decoded_VkSamplerYcbcrConversionCreateInfoKHR;

typedef Decoded_VkSamplerYcbcrConversionInfo Decoded_VkSamplerYcbcrConversionInfoKHR;

typedef Decoded_VkBindImagePlaneMemoryInfo Decoded_VkBindImagePlaneMemoryInfoKHR;

typedef Decoded_VkImagePlaneMemoryRequirementsInfo Decoded_VkImagePlaneMemoryRequirementsInfoKHR;

typedef Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;

typedef Decoded_VkSamplerYcbcrConversionImageFormatProperties Decoded_VkSamplerYcbcrConversionImageFormatPropertiesKHR;

typedef Decoded_VkBindBufferMemoryInfo Decoded_VkBindBufferMemoryInfoKHR;

typedef Decoded_VkBindImageMemoryInfo Decoded_VkBindImageMemoryInfoKHR;

typedef Decoded_VkPhysicalDeviceMaintenance3Properties Decoded_VkPhysicalDeviceMaintenance3PropertiesKHR;

typedef Decoded_VkDescriptorSetLayoutSupport Decoded_VkDescriptorSetLayoutSupportKHR;

struct Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR
{
    using struct_type = VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR;

    VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDevice8BitStorageFeaturesKHR
{
    using struct_type = VkPhysicalDevice8BitStorageFeaturesKHR;

    VkPhysicalDevice8BitStorageFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR
{
    using struct_type = VkPhysicalDeviceShaderAtomicInt64FeaturesKHR;

    VkPhysicalDeviceShaderAtomicInt64FeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderClockFeaturesKHR
{
    using struct_type = VkPhysicalDeviceShaderClockFeaturesKHR;

    VkPhysicalDeviceShaderClockFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkConformanceVersionKHR
{
    using struct_type = VkConformanceVersionKHR;

    VkConformanceVersionKHR* decoded_value{ nullptr };
};

struct Decoded_VkPhysicalDeviceDriverPropertiesKHR
{
    using struct_type = VkPhysicalDeviceDriverPropertiesKHR;

    VkPhysicalDeviceDriverPropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder driverName;
    StringDecoder driverInfo;
    std::unique_ptr<Decoded_VkConformanceVersionKHR> conformanceVersion;
};

struct Decoded_VkPhysicalDeviceFloatControlsPropertiesKHR
{
    using struct_type = VkPhysicalDeviceFloatControlsPropertiesKHR;

    VkPhysicalDeviceFloatControlsPropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSubpassDescriptionDepthStencilResolveKHR
{
    using struct_type = VkSubpassDescriptionDepthStencilResolveKHR;

    VkSubpassDescriptionDepthStencilResolveKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentReference2KHR>> pDepthStencilResolveAttachment;
};

struct Decoded_VkPhysicalDeviceDepthStencilResolvePropertiesKHR
{
    using struct_type = VkPhysicalDeviceDepthStencilResolvePropertiesKHR;

    VkPhysicalDeviceDepthStencilResolvePropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR
{
    using struct_type = VkPhysicalDeviceTimelineSemaphoreFeaturesKHR;

    VkPhysicalDeviceTimelineSemaphoreFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceTimelineSemaphorePropertiesKHR
{
    using struct_type = VkPhysicalDeviceTimelineSemaphorePropertiesKHR;

    VkPhysicalDeviceTimelineSemaphorePropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSemaphoreTypeCreateInfoKHR
{
    using struct_type = VkSemaphoreTypeCreateInfoKHR;

    VkSemaphoreTypeCreateInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkTimelineSemaphoreSubmitInfoKHR
{
    using struct_type = VkTimelineSemaphoreSubmitInfoKHR;

    VkTimelineSemaphoreSubmitInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint64_t> pWaitSemaphoreValues;
    PointerDecoder<uint64_t> pSignalSemaphoreValues;
};

struct Decoded_VkSemaphoreWaitInfoKHR
{
    using struct_type = VkSemaphoreWaitInfoKHR;

    VkSemaphoreWaitInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkSemaphore> pSemaphores;
    PointerDecoder<uint64_t> pValues;
};

struct Decoded_VkSemaphoreSignalInfoKHR
{
    using struct_type = VkSemaphoreSignalInfoKHR;

    VkSemaphoreSignalInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId semaphore{ 0 };
};

struct Decoded_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR
{
    using struct_type = VkPhysicalDeviceVulkanMemoryModelFeaturesKHR;

    VkPhysicalDeviceVulkanMemoryModelFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSurfaceProtectedCapabilitiesKHR
{
    using struct_type = VkSurfaceProtectedCapabilitiesKHR;

    VkSurfaceProtectedCapabilitiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR
{
    using struct_type = VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR;

    VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR
{
    using struct_type = VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;

    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineInfoKHR
{
    using struct_type = VkPipelineInfoKHR;

    VkPipelineInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId pipeline{ 0 };
};

struct Decoded_VkPipelineExecutablePropertiesKHR
{
    using struct_type = VkPipelineExecutablePropertiesKHR;

    VkPipelineExecutablePropertiesKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder name;
    StringDecoder description;
};

struct Decoded_VkPipelineExecutableInfoKHR
{
    using struct_type = VkPipelineExecutableInfoKHR;

    VkPipelineExecutableInfoKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId pipeline{ 0 };
};

struct Decoded_VkPipelineExecutableStatisticKHR
{
    using struct_type = VkPipelineExecutableStatisticKHR;

    VkPipelineExecutableStatisticKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder name;
    StringDecoder description;
    std::unique_ptr<Decoded_VkPipelineExecutableStatisticValueKHR> value;
};

struct Decoded_VkPipelineExecutableInternalRepresentationKHR
{
    using struct_type = VkPipelineExecutableInternalRepresentationKHR;

    VkPipelineExecutableInternalRepresentationKHR* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder name;
    StringDecoder description;
    PointerDecoder<uint8_t> pData;
};

struct Decoded_VkDebugReportCallbackCreateInfoEXT
{
    using struct_type = VkDebugReportCallbackCreateInfoEXT;

    VkDebugReportCallbackCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pfnCallback{ 0 };
    uint64_t pUserData{ 0 };
};

struct Decoded_VkPipelineRasterizationStateRasterizationOrderAMD
{
    using struct_type = VkPipelineRasterizationStateRasterizationOrderAMD;

    VkPipelineRasterizationStateRasterizationOrderAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDebugMarkerObjectNameInfoEXT
{
    using struct_type = VkDebugMarkerObjectNameInfoEXT;

    VkDebugMarkerObjectNameInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder pObjectName;
};

struct Decoded_VkDebugMarkerObjectTagInfoEXT
{
    using struct_type = VkDebugMarkerObjectTagInfoEXT;

    VkDebugMarkerObjectTagInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint8_t> pTag;
};

struct Decoded_VkDebugMarkerMarkerInfoEXT
{
    using struct_type = VkDebugMarkerMarkerInfoEXT;

    VkDebugMarkerMarkerInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder pMarkerName;
    PointerDecoder<float> color;
};

struct Decoded_VkDedicatedAllocationImageCreateInfoNV
{
    using struct_type = VkDedicatedAllocationImageCreateInfoNV;

    VkDedicatedAllocationImageCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDedicatedAllocationBufferCreateInfoNV
{
    using struct_type = VkDedicatedAllocationBufferCreateInfoNV;

    VkDedicatedAllocationBufferCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDedicatedAllocationMemoryAllocateInfoNV
{
    using struct_type = VkDedicatedAllocationMemoryAllocateInfoNV;

    VkDedicatedAllocationMemoryAllocateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId image{ 0 };
    format::HandleId buffer{ 0 };
};

struct Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT
{
    using struct_type = VkPhysicalDeviceTransformFeedbackFeaturesEXT;

    VkPhysicalDeviceTransformFeedbackFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT
{
    using struct_type = VkPhysicalDeviceTransformFeedbackPropertiesEXT;

    VkPhysicalDeviceTransformFeedbackPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT
{
    using struct_type = VkPipelineRasterizationStateStreamCreateInfoEXT;

    VkPipelineRasterizationStateStreamCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkImageViewHandleInfoNVX
{
    using struct_type = VkImageViewHandleInfoNVX;

    VkImageViewHandleInfoNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId imageView{ 0 };
    format::HandleId sampler{ 0 };
};

struct Decoded_VkTextureLODGatherFormatPropertiesAMD
{
    using struct_type = VkTextureLODGatherFormatPropertiesAMD;

    VkTextureLODGatherFormatPropertiesAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkShaderResourceUsageAMD
{
    using struct_type = VkShaderResourceUsageAMD;

    VkShaderResourceUsageAMD* decoded_value{ nullptr };
};

struct Decoded_VkShaderStatisticsInfoAMD
{
    using struct_type = VkShaderStatisticsInfoAMD;

    VkShaderStatisticsInfoAMD* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkShaderResourceUsageAMD> resourceUsage;
    PointerDecoder<uint32_t> computeWorkGroupSize;
};

struct Decoded_VkStreamDescriptorSurfaceCreateInfoGGP
{
    using struct_type = VkStreamDescriptorSurfaceCreateInfoGGP;

    VkStreamDescriptorSurfaceCreateInfoGGP* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV
{
    using struct_type = VkPhysicalDeviceCornerSampledImageFeaturesNV;

    VkPhysicalDeviceCornerSampledImageFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExternalImageFormatPropertiesNV
{
    using struct_type = VkExternalImageFormatPropertiesNV;

    VkExternalImageFormatPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkImageFormatProperties> imageFormatProperties;
};

struct Decoded_VkExternalMemoryImageCreateInfoNV
{
    using struct_type = VkExternalMemoryImageCreateInfoNV;

    VkExternalMemoryImageCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkExportMemoryAllocateInfoNV
{
    using struct_type = VkExportMemoryAllocateInfoNV;

    VkExportMemoryAllocateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkImportMemoryWin32HandleInfoNV
{
    using struct_type = VkImportMemoryWin32HandleInfoNV;

    VkImportMemoryWin32HandleInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t handle{ 0 };
};

struct Decoded_VkExportMemoryWin32HandleInfoNV
{
    using struct_type = VkExportMemoryWin32HandleInfoNV;

    VkExportMemoryWin32HandleInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>> pAttributes;
};

struct Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV
{
    using struct_type = VkWin32KeyedMutexAcquireReleaseInfoNV;

    VkWin32KeyedMutexAcquireReleaseInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkDeviceMemory> pAcquireSyncs;
    PointerDecoder<uint64_t> pAcquireKeys;
    PointerDecoder<uint32_t> pAcquireTimeoutMilliseconds;
    HandlePointerDecoder<VkDeviceMemory> pReleaseSyncs;
    PointerDecoder<uint64_t> pReleaseKeys;
};

struct Decoded_VkValidationFlagsEXT
{
    using struct_type = VkValidationFlagsEXT;

    VkValidationFlagsEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkValidationCheckEXT> pDisabledValidationChecks;
};

struct Decoded_VkViSurfaceCreateInfoNN
{
    using struct_type = VkViSurfaceCreateInfoNN;

    VkViSurfaceCreateInfoNN* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t window{ 0 };
};

struct Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT
{
    using struct_type = VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT;

    VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkImageViewASTCDecodeModeEXT
{
    using struct_type = VkImageViewASTCDecodeModeEXT;

    VkImageViewASTCDecodeModeEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT
{
    using struct_type = VkPhysicalDeviceASTCDecodeFeaturesEXT;

    VkPhysicalDeviceASTCDecodeFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkConditionalRenderingBeginInfoEXT
{
    using struct_type = VkConditionalRenderingBeginInfoEXT;

    VkConditionalRenderingBeginInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId buffer{ 0 };
};

struct Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT
{
    using struct_type = VkPhysicalDeviceConditionalRenderingFeaturesEXT;

    VkPhysicalDeviceConditionalRenderingFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT
{
    using struct_type = VkCommandBufferInheritanceConditionalRenderingInfoEXT;

    VkCommandBufferInheritanceConditionalRenderingInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceGeneratedCommandsFeaturesNVX
{
    using struct_type = VkDeviceGeneratedCommandsFeaturesNVX;

    VkDeviceGeneratedCommandsFeaturesNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceGeneratedCommandsLimitsNVX
{
    using struct_type = VkDeviceGeneratedCommandsLimitsNVX;

    VkDeviceGeneratedCommandsLimitsNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkIndirectCommandsTokenNVX
{
    using struct_type = VkIndirectCommandsTokenNVX;

    VkIndirectCommandsTokenNVX* decoded_value{ nullptr };

    format::HandleId buffer{ 0 };
};

struct Decoded_VkIndirectCommandsLayoutTokenNVX
{
    using struct_type = VkIndirectCommandsLayoutTokenNVX;

    VkIndirectCommandsLayoutTokenNVX* decoded_value{ nullptr };
};

struct Decoded_VkIndirectCommandsLayoutCreateInfoNVX
{
    using struct_type = VkIndirectCommandsLayoutCreateInfoNVX;

    VkIndirectCommandsLayoutCreateInfoNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkIndirectCommandsLayoutTokenNVX>> pTokens;
};

struct Decoded_VkCmdProcessCommandsInfoNVX
{
    using struct_type = VkCmdProcessCommandsInfoNVX;

    VkCmdProcessCommandsInfoNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId objectTable{ 0 };
    format::HandleId indirectCommandsLayout{ 0 };
    std::unique_ptr<StructPointerDecoder<Decoded_VkIndirectCommandsTokenNVX>> pIndirectCommandsTokens;
    format::HandleId targetCommandBuffer{ 0 };
    format::HandleId sequencesCountBuffer{ 0 };
    format::HandleId sequencesIndexBuffer{ 0 };
};

struct Decoded_VkCmdReserveSpaceForCommandsInfoNVX
{
    using struct_type = VkCmdReserveSpaceForCommandsInfoNVX;

    VkCmdReserveSpaceForCommandsInfoNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId objectTable{ 0 };
    format::HandleId indirectCommandsLayout{ 0 };
};

struct Decoded_VkObjectTableCreateInfoNVX
{
    using struct_type = VkObjectTableCreateInfoNVX;

    VkObjectTableCreateInfoNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkObjectEntryTypeNVX> pObjectEntryTypes;
    PointerDecoder<uint32_t> pObjectEntryCounts;
    PointerDecoder<VkObjectEntryUsageFlagsNVX> pObjectEntryUsageFlags;
};

struct Decoded_VkObjectTablePipelineEntryNVX
{
    using struct_type = VkObjectTablePipelineEntryNVX;

    VkObjectTablePipelineEntryNVX* decoded_value{ nullptr };

    format::HandleId pipeline{ 0 };
};

struct Decoded_VkObjectTableDescriptorSetEntryNVX
{
    using struct_type = VkObjectTableDescriptorSetEntryNVX;

    VkObjectTableDescriptorSetEntryNVX* decoded_value{ nullptr };

    format::HandleId pipelineLayout{ 0 };
    format::HandleId descriptorSet{ 0 };
};

struct Decoded_VkObjectTableVertexBufferEntryNVX
{
    using struct_type = VkObjectTableVertexBufferEntryNVX;

    VkObjectTableVertexBufferEntryNVX* decoded_value{ nullptr };

    format::HandleId buffer{ 0 };
};

struct Decoded_VkObjectTableIndexBufferEntryNVX
{
    using struct_type = VkObjectTableIndexBufferEntryNVX;

    VkObjectTableIndexBufferEntryNVX* decoded_value{ nullptr };

    format::HandleId buffer{ 0 };
};

struct Decoded_VkObjectTablePushConstantEntryNVX
{
    using struct_type = VkObjectTablePushConstantEntryNVX;

    VkObjectTablePushConstantEntryNVX* decoded_value{ nullptr };

    format::HandleId pipelineLayout{ 0 };
};

struct Decoded_VkViewportWScalingNV
{
    using struct_type = VkViewportWScalingNV;

    VkViewportWScalingNV* decoded_value{ nullptr };
};

struct Decoded_VkPipelineViewportWScalingStateCreateInfoNV
{
    using struct_type = VkPipelineViewportWScalingStateCreateInfoNV;

    VkPipelineViewportWScalingStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkViewportWScalingNV>> pViewportWScalings;
};

struct Decoded_VkSurfaceCapabilities2EXT
{
    using struct_type = VkSurfaceCapabilities2EXT;

    VkSurfaceCapabilities2EXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent2D> currentExtent;
    std::unique_ptr<Decoded_VkExtent2D> minImageExtent;
    std::unique_ptr<Decoded_VkExtent2D> maxImageExtent;
};

struct Decoded_VkDisplayPowerInfoEXT
{
    using struct_type = VkDisplayPowerInfoEXT;

    VkDisplayPowerInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceEventInfoEXT
{
    using struct_type = VkDeviceEventInfoEXT;

    VkDeviceEventInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDisplayEventInfoEXT
{
    using struct_type = VkDisplayEventInfoEXT;

    VkDisplayEventInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSwapchainCounterCreateInfoEXT
{
    using struct_type = VkSwapchainCounterCreateInfoEXT;

    VkSwapchainCounterCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkRefreshCycleDurationGOOGLE
{
    using struct_type = VkRefreshCycleDurationGOOGLE;

    VkRefreshCycleDurationGOOGLE* decoded_value{ nullptr };
};

struct Decoded_VkPastPresentationTimingGOOGLE
{
    using struct_type = VkPastPresentationTimingGOOGLE;

    VkPastPresentationTimingGOOGLE* decoded_value{ nullptr };
};

struct Decoded_VkPresentTimeGOOGLE
{
    using struct_type = VkPresentTimeGOOGLE;

    VkPresentTimeGOOGLE* decoded_value{ nullptr };
};

struct Decoded_VkPresentTimesInfoGOOGLE
{
    using struct_type = VkPresentTimesInfoGOOGLE;

    VkPresentTimesInfoGOOGLE* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPresentTimeGOOGLE>> pTimes;
};

struct Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
{
    using struct_type = VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;

    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkViewportSwizzleNV
{
    using struct_type = VkViewportSwizzleNV;

    VkViewportSwizzleNV* decoded_value{ nullptr };
};

struct Decoded_VkPipelineViewportSwizzleStateCreateInfoNV
{
    using struct_type = VkPipelineViewportSwizzleStateCreateInfoNV;

    VkPipelineViewportSwizzleStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkViewportSwizzleNV>> pViewportSwizzles;
};

struct Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT
{
    using struct_type = VkPhysicalDeviceDiscardRectanglePropertiesEXT;

    VkPhysicalDeviceDiscardRectanglePropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT
{
    using struct_type = VkPipelineDiscardRectangleStateCreateInfoEXT;

    VkPipelineDiscardRectangleStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkRect2D>> pDiscardRectangles;
};

struct Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT
{
    using struct_type = VkPhysicalDeviceConservativeRasterizationPropertiesEXT;

    VkPhysicalDeviceConservativeRasterizationPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT
{
    using struct_type = VkPipelineRasterizationConservativeStateCreateInfoEXT;

    VkPipelineRasterizationConservativeStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT
{
    using struct_type = VkPhysicalDeviceDepthClipEnableFeaturesEXT;

    VkPhysicalDeviceDepthClipEnableFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT
{
    using struct_type = VkPipelineRasterizationDepthClipStateCreateInfoEXT;

    VkPipelineRasterizationDepthClipStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkXYColorEXT
{
    using struct_type = VkXYColorEXT;

    VkXYColorEXT* decoded_value{ nullptr };
};

struct Decoded_VkHdrMetadataEXT
{
    using struct_type = VkHdrMetadataEXT;

    VkHdrMetadataEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkXYColorEXT> displayPrimaryRed;
    std::unique_ptr<Decoded_VkXYColorEXT> displayPrimaryGreen;
    std::unique_ptr<Decoded_VkXYColorEXT> displayPrimaryBlue;
    std::unique_ptr<Decoded_VkXYColorEXT> whitePoint;
};

struct Decoded_VkIOSSurfaceCreateInfoMVK
{
    using struct_type = VkIOSSurfaceCreateInfoMVK;

    VkIOSSurfaceCreateInfoMVK* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pView{ 0 };
};

struct Decoded_VkMacOSSurfaceCreateInfoMVK
{
    using struct_type = VkMacOSSurfaceCreateInfoMVK;

    VkMacOSSurfaceCreateInfoMVK* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pView{ 0 };
};

struct Decoded_VkDebugUtilsObjectNameInfoEXT
{
    using struct_type = VkDebugUtilsObjectNameInfoEXT;

    VkDebugUtilsObjectNameInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder pObjectName;
};

struct Decoded_VkDebugUtilsObjectTagInfoEXT
{
    using struct_type = VkDebugUtilsObjectTagInfoEXT;

    VkDebugUtilsObjectTagInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint8_t> pTag;
};

struct Decoded_VkDebugUtilsLabelEXT
{
    using struct_type = VkDebugUtilsLabelEXT;

    VkDebugUtilsLabelEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder pLabelName;
    PointerDecoder<float> color;
};

struct Decoded_VkDebugUtilsMessengerCallbackDataEXT
{
    using struct_type = VkDebugUtilsMessengerCallbackDataEXT;

    VkDebugUtilsMessengerCallbackDataEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    StringDecoder pMessageIdName;
    StringDecoder pMessage;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>> pQueueLabels;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>> pCmdBufLabels;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>> pObjects;
};

struct Decoded_VkDebugUtilsMessengerCreateInfoEXT
{
    using struct_type = VkDebugUtilsMessengerCreateInfoEXT;

    VkDebugUtilsMessengerCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pfnUserCallback{ 0 };
    uint64_t pUserData{ 0 };
};

struct Decoded_VkAndroidHardwareBufferUsageANDROID
{
    using struct_type = VkAndroidHardwareBufferUsageANDROID;

    VkAndroidHardwareBufferUsageANDROID* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkAndroidHardwareBufferPropertiesANDROID
{
    using struct_type = VkAndroidHardwareBufferPropertiesANDROID;

    VkAndroidHardwareBufferPropertiesANDROID* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID
{
    using struct_type = VkAndroidHardwareBufferFormatPropertiesANDROID;

    VkAndroidHardwareBufferFormatPropertiesANDROID* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkComponentMapping> samplerYcbcrConversionComponents;
};

struct Decoded_VkImportAndroidHardwareBufferInfoANDROID
{
    using struct_type = VkImportAndroidHardwareBufferInfoANDROID;

    VkImportAndroidHardwareBufferInfoANDROID* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t buffer{ 0 };
};

struct Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID
{
    using struct_type = VkMemoryGetAndroidHardwareBufferInfoANDROID;

    VkMemoryGetAndroidHardwareBufferInfoANDROID* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId memory{ 0 };
};

struct Decoded_VkExternalFormatANDROID
{
    using struct_type = VkExternalFormatANDROID;

    VkExternalFormatANDROID* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSamplerReductionModeCreateInfoEXT
{
    using struct_type = VkSamplerReductionModeCreateInfoEXT;

    VkSamplerReductionModeCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT
{
    using struct_type = VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT;

    VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceInlineUniformBlockFeaturesEXT
{
    using struct_type = VkPhysicalDeviceInlineUniformBlockFeaturesEXT;

    VkPhysicalDeviceInlineUniformBlockFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceInlineUniformBlockPropertiesEXT
{
    using struct_type = VkPhysicalDeviceInlineUniformBlockPropertiesEXT;

    VkPhysicalDeviceInlineUniformBlockPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkWriteDescriptorSetInlineUniformBlockEXT
{
    using struct_type = VkWriteDescriptorSetInlineUniformBlockEXT;

    VkWriteDescriptorSetInlineUniformBlockEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint8_t> pData;
};

struct Decoded_VkDescriptorPoolInlineUniformBlockCreateInfoEXT
{
    using struct_type = VkDescriptorPoolInlineUniformBlockCreateInfoEXT;

    VkDescriptorPoolInlineUniformBlockCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSampleLocationEXT
{
    using struct_type = VkSampleLocationEXT;

    VkSampleLocationEXT* decoded_value{ nullptr };
};

struct Decoded_VkSampleLocationsInfoEXT
{
    using struct_type = VkSampleLocationsInfoEXT;

    VkSampleLocationsInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent2D> sampleLocationGridSize;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSampleLocationEXT>> pSampleLocations;
};

struct Decoded_VkAttachmentSampleLocationsEXT
{
    using struct_type = VkAttachmentSampleLocationsEXT;

    VkAttachmentSampleLocationsEXT* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkSampleLocationsInfoEXT> sampleLocationsInfo;
};

struct Decoded_VkSubpassSampleLocationsEXT
{
    using struct_type = VkSubpassSampleLocationsEXT;

    VkSubpassSampleLocationsEXT* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkSampleLocationsInfoEXT> sampleLocationsInfo;
};

struct Decoded_VkRenderPassSampleLocationsBeginInfoEXT
{
    using struct_type = VkRenderPassSampleLocationsBeginInfoEXT;

    VkRenderPassSampleLocationsBeginInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkAttachmentSampleLocationsEXT>> pAttachmentInitialSampleLocations;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSubpassSampleLocationsEXT>> pPostSubpassSampleLocations;
};

struct Decoded_VkPipelineSampleLocationsStateCreateInfoEXT
{
    using struct_type = VkPipelineSampleLocationsStateCreateInfoEXT;

    VkPipelineSampleLocationsStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkSampleLocationsInfoEXT> sampleLocationsInfo;
};

struct Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT
{
    using struct_type = VkPhysicalDeviceSampleLocationsPropertiesEXT;

    VkPhysicalDeviceSampleLocationsPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent2D> maxSampleLocationGridSize;
    PointerDecoder<float> sampleLocationCoordinateRange;
};

struct Decoded_VkMultisamplePropertiesEXT
{
    using struct_type = VkMultisamplePropertiesEXT;

    VkMultisamplePropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent2D> maxSampleLocationGridSize;
};

struct Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
{
    using struct_type = VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;

    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT
{
    using struct_type = VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;

    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT
{
    using struct_type = VkPipelineColorBlendAdvancedStateCreateInfoEXT;

    VkPipelineColorBlendAdvancedStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineCoverageToColorStateCreateInfoNV
{
    using struct_type = VkPipelineCoverageToColorStateCreateInfoNV;

    VkPipelineCoverageToColorStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineCoverageModulationStateCreateInfoNV
{
    using struct_type = VkPipelineCoverageModulationStateCreateInfoNV;

    VkPipelineCoverageModulationStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<float> pCoverageModulationTable;
};

struct Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV
{
    using struct_type = VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;

    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV
{
    using struct_type = VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;

    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDrmFormatModifierPropertiesEXT
{
    using struct_type = VkDrmFormatModifierPropertiesEXT;

    VkDrmFormatModifierPropertiesEXT* decoded_value{ nullptr };
};

struct Decoded_VkDrmFormatModifierPropertiesListEXT
{
    using struct_type = VkDrmFormatModifierPropertiesListEXT;

    VkDrmFormatModifierPropertiesListEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkDrmFormatModifierPropertiesEXT>> pDrmFormatModifierProperties;
};

struct Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT
{
    using struct_type = VkPhysicalDeviceImageDrmFormatModifierInfoEXT;

    VkPhysicalDeviceImageDrmFormatModifierInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pQueueFamilyIndices;
};

struct Decoded_VkImageDrmFormatModifierListCreateInfoEXT
{
    using struct_type = VkImageDrmFormatModifierListCreateInfoEXT;

    VkImageDrmFormatModifierListCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint64_t> pDrmFormatModifiers;
};

struct Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT
{
    using struct_type = VkImageDrmFormatModifierExplicitCreateInfoEXT;

    VkImageDrmFormatModifierExplicitCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkSubresourceLayout>> pPlaneLayouts;
};

struct Decoded_VkImageDrmFormatModifierPropertiesEXT
{
    using struct_type = VkImageDrmFormatModifierPropertiesEXT;

    VkImageDrmFormatModifierPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkValidationCacheCreateInfoEXT
{
    using struct_type = VkValidationCacheCreateInfoEXT;

    VkValidationCacheCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint8_t> pInitialData;
};

struct Decoded_VkShaderModuleValidationCacheCreateInfoEXT
{
    using struct_type = VkShaderModuleValidationCacheCreateInfoEXT;

    VkShaderModuleValidationCacheCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId validationCache{ 0 };
};

struct Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT
{
    using struct_type = VkDescriptorSetLayoutBindingFlagsCreateInfoEXT;

    VkDescriptorSetLayoutBindingFlagsCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkDescriptorBindingFlagsEXT> pBindingFlags;
};

struct Decoded_VkPhysicalDeviceDescriptorIndexingFeaturesEXT
{
    using struct_type = VkPhysicalDeviceDescriptorIndexingFeaturesEXT;

    VkPhysicalDeviceDescriptorIndexingFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceDescriptorIndexingPropertiesEXT
{
    using struct_type = VkPhysicalDeviceDescriptorIndexingPropertiesEXT;

    VkPhysicalDeviceDescriptorIndexingPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT
{
    using struct_type = VkDescriptorSetVariableDescriptorCountAllocateInfoEXT;

    VkDescriptorSetVariableDescriptorCountAllocateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> pDescriptorCounts;
};

struct Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT
{
    using struct_type = VkDescriptorSetVariableDescriptorCountLayoutSupportEXT;

    VkDescriptorSetVariableDescriptorCountLayoutSupportEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkShadingRatePaletteNV
{
    using struct_type = VkShadingRatePaletteNV;

    VkShadingRatePaletteNV* decoded_value{ nullptr };

    PointerDecoder<VkShadingRatePaletteEntryNV> pShadingRatePaletteEntries;
};

struct Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV
{
    using struct_type = VkPipelineViewportShadingRateImageStateCreateInfoNV;

    VkPipelineViewportShadingRateImageStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkShadingRatePaletteNV>> pShadingRatePalettes;
};

struct Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV
{
    using struct_type = VkPhysicalDeviceShadingRateImageFeaturesNV;

    VkPhysicalDeviceShadingRateImageFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV
{
    using struct_type = VkPhysicalDeviceShadingRateImagePropertiesNV;

    VkPhysicalDeviceShadingRateImagePropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent2D> shadingRateTexelSize;
};

struct Decoded_VkCoarseSampleLocationNV
{
    using struct_type = VkCoarseSampleLocationNV;

    VkCoarseSampleLocationNV* decoded_value{ nullptr };
};

struct Decoded_VkCoarseSampleOrderCustomNV
{
    using struct_type = VkCoarseSampleOrderCustomNV;

    VkCoarseSampleOrderCustomNV* decoded_value{ nullptr };

    std::unique_ptr<StructPointerDecoder<Decoded_VkCoarseSampleLocationNV>> pSampleLocations;
};

struct Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV
{
    using struct_type = VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;

    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>> pCustomSampleOrders;
};

struct Decoded_VkRayTracingShaderGroupCreateInfoNV
{
    using struct_type = VkRayTracingShaderGroupCreateInfoNV;

    VkRayTracingShaderGroupCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkRayTracingPipelineCreateInfoNV
{
    using struct_type = VkRayTracingPipelineCreateInfoNV;

    VkRayTracingPipelineCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineShaderStageCreateInfo>> pStages;
    std::unique_ptr<StructPointerDecoder<Decoded_VkRayTracingShaderGroupCreateInfoNV>> pGroups;
    format::HandleId layout{ 0 };
    format::HandleId basePipelineHandle{ 0 };
};

struct Decoded_VkGeometryTrianglesNV
{
    using struct_type = VkGeometryTrianglesNV;

    VkGeometryTrianglesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId vertexData{ 0 };
    format::HandleId indexData{ 0 };
    format::HandleId transformData{ 0 };
};

struct Decoded_VkGeometryAABBNV
{
    using struct_type = VkGeometryAABBNV;

    VkGeometryAABBNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId aabbData{ 0 };
};

struct Decoded_VkGeometryDataNV
{
    using struct_type = VkGeometryDataNV;

    VkGeometryDataNV* decoded_value{ nullptr };

    std::unique_ptr<Decoded_VkGeometryTrianglesNV> triangles;
    std::unique_ptr<Decoded_VkGeometryAABBNV> aabbs;
};

struct Decoded_VkGeometryNV
{
    using struct_type = VkGeometryNV;

    VkGeometryNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkGeometryDataNV> geometry;
};

struct Decoded_VkAccelerationStructureInfoNV
{
    using struct_type = VkAccelerationStructureInfoNV;

    VkAccelerationStructureInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkGeometryNV>> pGeometries;
};

struct Decoded_VkAccelerationStructureCreateInfoNV
{
    using struct_type = VkAccelerationStructureCreateInfoNV;

    VkAccelerationStructureCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkAccelerationStructureInfoNV> info;
};

struct Decoded_VkBindAccelerationStructureMemoryInfoNV
{
    using struct_type = VkBindAccelerationStructureMemoryInfoNV;

    VkBindAccelerationStructureMemoryInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId accelerationStructure{ 0 };
    format::HandleId memory{ 0 };
    PointerDecoder<uint32_t> pDeviceIndices;
};

struct Decoded_VkWriteDescriptorSetAccelerationStructureNV
{
    using struct_type = VkWriteDescriptorSetAccelerationStructureNV;

    VkWriteDescriptorSetAccelerationStructureNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    HandlePointerDecoder<VkAccelerationStructureNV> pAccelerationStructures;
};

struct Decoded_VkAccelerationStructureMemoryRequirementsInfoNV
{
    using struct_type = VkAccelerationStructureMemoryRequirementsInfoNV;

    VkAccelerationStructureMemoryRequirementsInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId accelerationStructure{ 0 };
};

struct Decoded_VkPhysicalDeviceRayTracingPropertiesNV
{
    using struct_type = VkPhysicalDeviceRayTracingPropertiesNV;

    VkPhysicalDeviceRayTracingPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV
{
    using struct_type = VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;

    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV
{
    using struct_type = VkPipelineRepresentativeFragmentTestStateCreateInfoNV;

    VkPipelineRepresentativeFragmentTestStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT
{
    using struct_type = VkPhysicalDeviceImageViewImageFormatInfoEXT;

    VkPhysicalDeviceImageViewImageFormatInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT
{
    using struct_type = VkFilterCubicImageViewImageFormatPropertiesEXT;

    VkFilterCubicImageViewImageFormatPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceQueueGlobalPriorityCreateInfoEXT
{
    using struct_type = VkDeviceQueueGlobalPriorityCreateInfoEXT;

    VkDeviceQueueGlobalPriorityCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkImportMemoryHostPointerInfoEXT
{
    using struct_type = VkImportMemoryHostPointerInfoEXT;

    VkImportMemoryHostPointerInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pHostPointer{ 0 };
};

struct Decoded_VkMemoryHostPointerPropertiesEXT
{
    using struct_type = VkMemoryHostPointerPropertiesEXT;

    VkMemoryHostPointerPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT
{
    using struct_type = VkPhysicalDeviceExternalMemoryHostPropertiesEXT;

    VkPhysicalDeviceExternalMemoryHostPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineCompilerControlCreateInfoAMD
{
    using struct_type = VkPipelineCompilerControlCreateInfoAMD;

    VkPipelineCompilerControlCreateInfoAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkCalibratedTimestampInfoEXT
{
    using struct_type = VkCalibratedTimestampInfoEXT;

    VkCalibratedTimestampInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderCorePropertiesAMD
{
    using struct_type = VkPhysicalDeviceShaderCorePropertiesAMD;

    VkPhysicalDeviceShaderCorePropertiesAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDeviceMemoryOverallocationCreateInfoAMD
{
    using struct_type = VkDeviceMemoryOverallocationCreateInfoAMD;

    VkDeviceMemoryOverallocationCreateInfoAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
{
    using struct_type = VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;

    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkVertexInputBindingDivisorDescriptionEXT
{
    using struct_type = VkVertexInputBindingDivisorDescriptionEXT;

    VkVertexInputBindingDivisorDescriptionEXT* decoded_value{ nullptr };
};

struct Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT
{
    using struct_type = VkPipelineVertexInputDivisorStateCreateInfoEXT;

    VkPipelineVertexInputDivisorStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkVertexInputBindingDivisorDescriptionEXT>> pVertexBindingDivisors;
};

struct Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT
{
    using struct_type = VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT;

    VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPresentFrameTokenGGP
{
    using struct_type = VkPresentFrameTokenGGP;

    VkPresentFrameTokenGGP* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineCreationFeedbackEXT
{
    using struct_type = VkPipelineCreationFeedbackEXT;

    VkPipelineCreationFeedbackEXT* decoded_value{ nullptr };
};

struct Decoded_VkPipelineCreationFeedbackCreateInfoEXT
{
    using struct_type = VkPipelineCreationFeedbackCreateInfoEXT;

    VkPipelineCreationFeedbackCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineCreationFeedbackEXT>> pPipelineCreationFeedback;
    std::unique_ptr<StructPointerDecoder<Decoded_VkPipelineCreationFeedbackEXT>> pPipelineStageCreationFeedbacks;
};

struct Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV
{
    using struct_type = VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;

    VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceMeshShaderFeaturesNV
{
    using struct_type = VkPhysicalDeviceMeshShaderFeaturesNV;

    VkPhysicalDeviceMeshShaderFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceMeshShaderPropertiesNV
{
    using struct_type = VkPhysicalDeviceMeshShaderPropertiesNV;

    VkPhysicalDeviceMeshShaderPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<uint32_t> maxTaskWorkGroupSize;
    PointerDecoder<uint32_t> maxMeshWorkGroupSize;
};

struct Decoded_VkDrawMeshTasksIndirectCommandNV
{
    using struct_type = VkDrawMeshTasksIndirectCommandNV;

    VkDrawMeshTasksIndirectCommandNV* decoded_value{ nullptr };
};

struct Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV
{
    using struct_type = VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV;

    VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV
{
    using struct_type = VkPhysicalDeviceShaderImageFootprintFeaturesNV;

    VkPhysicalDeviceShaderImageFootprintFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV
{
    using struct_type = VkPipelineViewportExclusiveScissorStateCreateInfoNV;

    VkPipelineViewportExclusiveScissorStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<StructPointerDecoder<Decoded_VkRect2D>> pExclusiveScissors;
};

struct Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV
{
    using struct_type = VkPhysicalDeviceExclusiveScissorFeaturesNV;

    VkPhysicalDeviceExclusiveScissorFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkQueueFamilyCheckpointPropertiesNV
{
    using struct_type = VkQueueFamilyCheckpointPropertiesNV;

    VkQueueFamilyCheckpointPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkCheckpointDataNV
{
    using struct_type = VkCheckpointDataNV;

    VkCheckpointDataNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pCheckpointMarker{ 0 };
};

struct Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL
{
    using struct_type = VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;

    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkInitializePerformanceApiInfoINTEL
{
    using struct_type = VkInitializePerformanceApiInfoINTEL;

    VkInitializePerformanceApiInfoINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pUserData{ 0 };
};

struct Decoded_VkQueryPoolCreateInfoINTEL
{
    using struct_type = VkQueryPoolCreateInfoINTEL;

    VkQueryPoolCreateInfoINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPerformanceMarkerInfoINTEL
{
    using struct_type = VkPerformanceMarkerInfoINTEL;

    VkPerformanceMarkerInfoINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPerformanceStreamMarkerInfoINTEL
{
    using struct_type = VkPerformanceStreamMarkerInfoINTEL;

    VkPerformanceStreamMarkerInfoINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPerformanceOverrideInfoINTEL
{
    using struct_type = VkPerformanceOverrideInfoINTEL;

    VkPerformanceOverrideInfoINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPerformanceConfigurationAcquireInfoINTEL
{
    using struct_type = VkPerformanceConfigurationAcquireInfoINTEL;

    VkPerformanceConfigurationAcquireInfoINTEL* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT
{
    using struct_type = VkPhysicalDevicePCIBusInfoPropertiesEXT;

    VkPhysicalDevicePCIBusInfoPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD
{
    using struct_type = VkDisplayNativeHdrSurfaceCapabilitiesAMD;

    VkDisplayNativeHdrSurfaceCapabilitiesAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD
{
    using struct_type = VkSwapchainDisplayNativeHdrCreateInfoAMD;

    VkSwapchainDisplayNativeHdrCreateInfoAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA
{
    using struct_type = VkImagePipeSurfaceCreateInfoFUCHSIA;

    VkImagePipeSurfaceCreateInfoFUCHSIA* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMetalSurfaceCreateInfoEXT
{
    using struct_type = VkMetalSurfaceCreateInfoEXT;

    VkMetalSurfaceCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t pLayer{ 0 };
};

struct Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT
{
    using struct_type = VkPhysicalDeviceFragmentDensityMapFeaturesEXT;

    VkPhysicalDeviceFragmentDensityMapFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT
{
    using struct_type = VkPhysicalDeviceFragmentDensityMapPropertiesEXT;

    VkPhysicalDeviceFragmentDensityMapPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkExtent2D> minFragmentDensityTexelSize;
    std::unique_ptr<Decoded_VkExtent2D> maxFragmentDensityTexelSize;
};

struct Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT
{
    using struct_type = VkRenderPassFragmentDensityMapCreateInfoEXT;

    VkRenderPassFragmentDensityMapCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    std::unique_ptr<Decoded_VkAttachmentReference> fragmentDensityMapAttachment;
};

struct Decoded_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT
{
    using struct_type = VkPhysicalDeviceScalarBlockLayoutFeaturesEXT;

    VkPhysicalDeviceScalarBlockLayoutFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT
{
    using struct_type = VkPhysicalDeviceSubgroupSizeControlFeaturesEXT;

    VkPhysicalDeviceSubgroupSizeControlFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT
{
    using struct_type = VkPhysicalDeviceSubgroupSizeControlPropertiesEXT;

    VkPhysicalDeviceSubgroupSizeControlPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT
{
    using struct_type = VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT;

    VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderCoreProperties2AMD
{
    using struct_type = VkPhysicalDeviceShaderCoreProperties2AMD;

    VkPhysicalDeviceShaderCoreProperties2AMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD
{
    using struct_type = VkPhysicalDeviceCoherentMemoryFeaturesAMD;

    VkPhysicalDeviceCoherentMemoryFeaturesAMD* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT
{
    using struct_type = VkPhysicalDeviceMemoryBudgetPropertiesEXT;

    VkPhysicalDeviceMemoryBudgetPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkDeviceSize> heapBudget;
    PointerDecoder<VkDeviceSize> heapUsage;
};

struct Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT
{
    using struct_type = VkPhysicalDeviceMemoryPriorityFeaturesEXT;

    VkPhysicalDeviceMemoryPriorityFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkMemoryPriorityAllocateInfoEXT
{
    using struct_type = VkMemoryPriorityAllocateInfoEXT;

    VkMemoryPriorityAllocateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV
{
    using struct_type = VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT
{
    using struct_type = VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;

    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkBufferDeviceAddressInfoEXT
{
    using struct_type = VkBufferDeviceAddressInfoEXT;

    VkBufferDeviceAddressInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    format::HandleId buffer{ 0 };
};

struct Decoded_VkBufferDeviceAddressCreateInfoEXT
{
    using struct_type = VkBufferDeviceAddressCreateInfoEXT;

    VkBufferDeviceAddressCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

typedef Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT Decoded_VkPhysicalDeviceBufferAddressFeaturesEXT;

struct Decoded_VkImageStencilUsageCreateInfoEXT
{
    using struct_type = VkImageStencilUsageCreateInfoEXT;

    VkImageStencilUsageCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkValidationFeaturesEXT
{
    using struct_type = VkValidationFeaturesEXT;

    VkValidationFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    PointerDecoder<VkValidationFeatureEnableEXT> pEnabledValidationFeatures;
    PointerDecoder<VkValidationFeatureDisableEXT> pDisabledValidationFeatures;
};

struct Decoded_VkCooperativeMatrixPropertiesNV
{
    using struct_type = VkCooperativeMatrixPropertiesNV;

    VkCooperativeMatrixPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV
{
    using struct_type = VkPhysicalDeviceCooperativeMatrixFeaturesNV;

    VkPhysicalDeviceCooperativeMatrixFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV
{
    using struct_type = VkPhysicalDeviceCooperativeMatrixPropertiesNV;

    VkPhysicalDeviceCooperativeMatrixPropertiesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV
{
    using struct_type = VkPhysicalDeviceCoverageReductionModeFeaturesNV;

    VkPhysicalDeviceCoverageReductionModeFeaturesNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineCoverageReductionStateCreateInfoNV
{
    using struct_type = VkPipelineCoverageReductionStateCreateInfoNV;

    VkPipelineCoverageReductionStateCreateInfoNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkFramebufferMixedSamplesCombinationNV
{
    using struct_type = VkFramebufferMixedSamplesCombinationNV;

    VkFramebufferMixedSamplesCombinationNV* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT
{
    using struct_type = VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;

    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT
{
    using struct_type = VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;

    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSurfaceFullScreenExclusiveInfoEXT
{
    using struct_type = VkSurfaceFullScreenExclusiveInfoEXT;

    VkSurfaceFullScreenExclusiveInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT
{
    using struct_type = VkSurfaceCapabilitiesFullScreenExclusiveEXT;

    VkSurfaceCapabilitiesFullScreenExclusiveEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT
{
    using struct_type = VkSurfaceFullScreenExclusiveWin32InfoEXT;

    VkSurfaceFullScreenExclusiveWin32InfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
    uint64_t hmonitor{ 0 };
};

struct Decoded_VkHeadlessSurfaceCreateInfoEXT
{
    using struct_type = VkHeadlessSurfaceCreateInfoEXT;

    VkHeadlessSurfaceCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT
{
    using struct_type = VkPhysicalDeviceLineRasterizationFeaturesEXT;

    VkPhysicalDeviceLineRasterizationFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT
{
    using struct_type = VkPhysicalDeviceLineRasterizationPropertiesEXT;

    VkPhysicalDeviceLineRasterizationPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPipelineRasterizationLineStateCreateInfoEXT
{
    using struct_type = VkPipelineRasterizationLineStateCreateInfoEXT;

    VkPipelineRasterizationLineStateCreateInfoEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceHostQueryResetFeaturesEXT
{
    using struct_type = VkPhysicalDeviceHostQueryResetFeaturesEXT;

    VkPhysicalDeviceHostQueryResetFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT
{
    using struct_type = VkPhysicalDeviceIndexTypeUint8FeaturesEXT;

    VkPhysicalDeviceIndexTypeUint8FeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT
{
    using struct_type = VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT;

    VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT
{
    using struct_type = VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;

    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

struct Decoded_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT
{
    using struct_type = VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT;

    VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT* decoded_value{ nullptr };

    std::unique_ptr<PNextNode> pNext;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
