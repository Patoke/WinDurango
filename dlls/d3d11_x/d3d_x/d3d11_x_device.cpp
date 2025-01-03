#include "pch.h"
#include "d3d11_x_device.h"
#include "d3d_x.hpp"

#pragma region ID3D11DeviceX
void d3d11x::D3D11DeviceXWrapperX::GetImmediateContextX(
    _Out_ ID3D11DeviceContextX** ppImmediateContextX)
{
    printf("[D3D11DeviceXWrapperX] GetImmediateContextX");
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateCounterSet(
    _In_ const D3D11X_COUNTER_SET_DESC* pCounterSetDesc,
    _Out_opt_ ID3D11CounterSetX** ppCounterSet)
{
    printf("[D3D11DeviceXWrapperX] CreateCounterSet");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateCounterSample(
    _Out_opt_ ID3D11CounterSampleX** ppCounterSample)
{
    printf("[D3D11DeviceXWrapperX] CreateCounterSample");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::SetDriverHint(
    _In_ UINT Feature,
    _In_ UINT Value)
{
    printf("[D3D11DeviceXWrapperX] SetDriverHint");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateDmaEngineContext(
    _In_ const D3D11_DMA_ENGINE_CONTEXT_DESC* pDmaEngineContextDesc,
    _Out_ d3d11x::ID3D11DmaEngineContextX** ppDmaDeviceContext)
{
    printf("[D3D11DeviceXWrapperX] CreateDmaEngineContext");
    return E_NOTIMPL;
}

BOOL d3d11x::D3D11DeviceXWrapperX::IsFencePending(UINT64 Fence)
{
    printf("[D3D11DeviceXWrapperX] IsFencePending");
    return E_NOTIMPL;
}

BOOL d3d11x::D3D11DeviceXWrapperX::IsResourcePending(
    _In_ ID3D11Resource* pResource)
{
    printf("[D3D11DeviceXWrapperX] IsResourcePending");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreatePlacementBuffer(
    _In_ const D3D11_BUFFER_DESC* pDesc,
    _In_ void* pAddress,
    _Out_opt_ ID3D11Buffer** ppBuffer)
{
    printf("[D3D11DeviceXWrapperX] CreatePlacementBuffer");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreatePlacementTexture1D(
    _In_ const D3D11_TEXTURE1D_DESC* pDesc,
    _In_ UINT TileModeIndex,
    _In_ UINT Pitch,
    _In_ void* pAddress,
    _Out_opt_ ID3D11Texture1D** ppTexture1D)
{
    printf("[D3D11DeviceXWrapperX] CreatePlacementTexture1D");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreatePlacementTexture2D(
    _In_ const D3D11_TEXTURE2D_DESC* pDesc,
    _In_ UINT TileModeIndex,
    _In_ UINT Pitch,
    _In_ void* pAddress,
    _Out_opt_ ID3D11Texture2D** ppTexture2D)
{
    printf("[D3D11DeviceXWrapperX] CreatePlacementTexture2D");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreatePlacementTexture3D(
    _In_ const D3D11_TEXTURE3D_DESC* pDesc,
    _In_ UINT TileModeIndex,
    _In_ UINT Pitch,
    _In_ void* pAddress,
    _Out_opt_ ID3D11Texture3D** ppTexture3D)
{
    printf("[D3D11DeviceXWrapperX] CreatePlacementTexture3D");
    return E_NOTIMPL;
}

void d3d11x::D3D11DeviceXWrapperX::GetTimestamps(
    _Out_ UINT64* pGpuTimestamp,
    _Out_ UINT64* pCpuRdtscTimestamp)
{
    printf("[D3D11DeviceXWrapperX] GetTimestamps");
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateSamplerStateX(
    _In_ const d3d11x::D3D11X_SAMPLER_DESC* pSamplerDesc,
    _Out_opt_ ID3D11SamplerState** ppSamplerState)
{
    printf("[D3D11DeviceXWrapperX] CreateSamplerStateX");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateDeferredContextX(
    UINT ContextFlags,
    _Out_ d3d11x::ID3D11DeviceContextX** ppDeferredContext)
{
    printf("[D3D11DeviceXWrapperX] CreateDeferredContextX");
    return E_NOTIMPL;
}

void d3d11x::D3D11DeviceXWrapperX::GarbageCollect(
    _In_ UINT Flags)
{
    printf("[D3D11DeviceXWrapperX] GarbageCollect");
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateDepthStencilStateX(
    _In_ const D3D11_DEPTH_STENCIL_DESC* pDepthStencilStateDescX,
    _Out_opt_ ID3D11DepthStencilState** ppDepthStencilState)
{
    printf("[D3D11DeviceXWrapperX] CreateDepthStencilStateX");
    return E_NOTIMPL;
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreatePlacementRenderableTexture2D(
    _In_ const D3D11_TEXTURE2D_DESC* pDesc,
    _In_ UINT TileModeIndex,
    _In_ UINT Pitch,
    _In_ const D3D11X_RENDERABLE_TEXTURE_ADDRESSES* pAddresses,
    _Out_opt_ ID3D11Texture2D** ppTexture2D)
{
    printf("[D3D11DeviceXWrapperX] CreatePlacementRenderableTexture2D");
    return E_NOTIMPL;
}

void d3d11x::D3D11DeviceXWrapperX::GetDriverStatistics(
    _In_ UINT StructSize,
    _Out_ D3D11X_DRIVER_STATISTICS* pStatistics)
{
    printf("[D3D11DeviceXWrapperX] GetDriverStatistics");
}

HRESULT d3d11x::D3D11DeviceXWrapperX::CreateComputeContextX(
    _In_ const d3d11x::D3D11_COMPUTE_CONTEXT_DESC* pComputeContextDesc,
    _Out_ d3d11x::ID3D11ComputeContextX** ppComputeContext)
{
    printf("[D3D11DeviceXWrapperX] CreateComputeContextX");
    return E_NOTIMPL;
}

void d3d11x::D3D11DeviceXWrapperX::ComposeShaderResourceView(
    _In_ const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
    _In_opt_ const d3d11x::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
    _Out_ d3d11x::D3D11X_DESCRIPTOR_SHADER_RESOURCE_VIEW* pDescriptorSrv)
{
    printf("[D3D11DeviceXWrapperX] ComposeShaderResourceView");
}

void d3d11x::D3D11DeviceXWrapperX::ComposeUnorderedAccessView(
    _In_ const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
    _In_opt_ const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
    _Out_ d3d11x::D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* pDescriptorUav)
{
    printf("[D3D11DeviceXWrapperX] ComposeUnorderedAccessView");
}

void d3d11x::D3D11DeviceXWrapperX::ComposeConstantBufferView(
    _In_ const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
    _In_opt_ const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
    _Out_ D3D11X_DESCRIPTOR_CONSTANT_BUFFER_VIEW* pDescriptorCb)
{
    printf("[D3D11DeviceXWrapperX] ComposeConstantBufferView");
}

void d3d11x::D3D11DeviceXWrapperX::ComposeVertexBufferView(
    _In_ const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
    _In_opt_ const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
    _Out_ D3D11X_DESCRIPTOR_VERTEX_BUFFER_VIEW* pDescriptorVb)
{
    printf("[D3D11DeviceXWrapperX] ComposeVertexBufferView");
}

void d3d11x::D3D11DeviceXWrapperX::ComposeSamplerState(
    _In_opt_ const d3d11x::D3D11X_SAMPLER_STATE_DESC* pSamplerDesc,
    _Out_ d3d11x::D3D11X_DESCRIPTOR_SAMPLER_STATE* pDescriptorSamplerState)
{
    printf("[D3D11DeviceXWrapperX] ComposeSamplerState");
}

void d3d11x::D3D11DeviceXWrapperX::PlaceSwapChainView(
    _In_ ID3D11Resource* pSwapChainBuffer,
    _Inout_ ID3D11View* pView)
{
    printf("[D3D11DeviceXWrapperX] PlaceSwapChainView");
}

void d3d11x::D3D11DeviceXWrapperX::SetDebugFlags(
    _In_ UINT Flags)
{
    printf("[D3D11DeviceXWrapperX] SetDebugFlags");
}

UINT d3d11x::D3D11DeviceXWrapperX::GetDebugFlags( )
{
    printf("[D3D11DeviceXWrapperX] GetDebugFlags");
    return {};
}

void d3d11x::D3D11DeviceXWrapperX::SetHangCallbacks(
    _In_ d3d11x::D3D11XHANGBEGINCALLBACK pBeginCallback,
    _In_ d3d11x::D3D11XHANGPRINTCALLBACK pPrintCallback,
    _In_ d3d11x::D3D11XHANGDUMPCALLBACK pDumpCallback)
{
    printf("[D3D11DeviceXWrapperX] SetHangCallbacks");
}

void d3d11x::D3D11DeviceXWrapperX::ReportGpuHang(
    _In_ UINT Flags)
{
    printf("[D3D11DeviceXWrapperX] ReportGpuHang");
}

HRESULT d3d11x::D3D11DeviceXWrapperX::SetGpuMemoryPriority(
    _In_ UINT Priority)
{
    printf("[D3D11DeviceXWrapperX] SetGpuMemoryPriority");
    return E_NOTIMPL;
}

void d3d11x::D3D11DeviceXWrapperX::GetGpuHardwareConfiguration(
    _Out_ d3d11x::D3D11X_GPU_HARDWARE_CONFIGURATION* pGpuHardwareConfiguration)
{
    printf("[D3D11DeviceXWrapperX] GetGpuHardwareConfiguration");
}
#pragma endregion