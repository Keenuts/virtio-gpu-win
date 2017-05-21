#pragma once
#include "helper.h"

NTSTATUS APIENTRY VioGpu3dDdiAcquireSwizzlingRange(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_ACQUIRESWIZZLINGRANGE *pAcquireSwizzlingRange);

NTSTATUS APIENTRY VioGpu3dDdiBuildPagingBuffer(
    _In_ const HANDLE hAdapter,
    _In_ DXGKARG_BUILDPAGINGBUFFER *pBuildPagingBuffer);

NTSTATUS APIENTRY VioGpu3dDdiCalibrateGpuClock(
    _In_ const HANDLE hAdapter,
    _In_ UINT32 NodeOrdinal,
    _In_ UINT32 EngineOrdinal,
    _Out_ DXGKARG_CALIBRATEGPUCLOCK *pClockCalibration);

NTSTATUS APIENTRY VioGpu3dDdiCancelCommand(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_CANCELCOMMAND *pCancelCommand);

NTSTATUS APIENTRY VioGpu3dDdiCheckMultiPlaneOverlaySupport(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT *D3DKMTCheckMultiPlaneOverlaySupport);

NTSTATUS APIENTRY VioGpu3dDdiCloseAllocation(
    _In_ const HANDLE hDevice,
    _In_ const DXGKARG_CLOSEALLOCATION *pCloseAllocation);

NTSTATUS APIENTRY VioGpu3dDdiCollectDbgInfo(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_COLLECTDBGINFO *pCollectDbgInfo);

NTSTATUS APIENTRY VioGpu3dDdiControlInterrupt(
    _In_ const HANDLE hAdapter,
    _In_ const DXGK_INTERRUPT_TYPE InterruptType,
    _In_ BOOLEAN Enable);

NTSTATUS APIENTRY VioGpu3dDdiControlInterrupt2(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_CONTROLINTERRUPT2 InterruptControl);

VOID VioGpu3dDdiControlEtwLogging(
    _In_ BOOLEAN Enable,
    _In_ ULONG Flags,
    _In_ UCHAR Level);

NTSTATUS APIENTRY VioGpu3dDdiCreateAllocation(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CREATEALLOCATION *pCreateAllocation);

NTSTATUS APIENTRY VioGpu3dDdiCreateContext(
    _In_ const HANDLE hDevice,
    _Inout_ DXGKARG_CREATECONTEXT *pCreateContext);

NTSTATUS APIENTRY VioGpu3dDdiCreateDevice(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CREATEDEVICE *pCreateDevice);

NTSTATUS APIENTRY VioGpu3dDdiCreateOverlay(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CREATEOVERLAY *pCreateOverlay);

NTSTATUS APIENTRY VioGpu3dDdiDescribeAllocation(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_DESCRIBEALLOCATION *pDescribeAllocation);

NTSTATUS APIENTRY VioGpu3dDdiDestroyAllocation(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_DESTROYALLOCATION *pDestroyAllocation);

NTSTATUS APIENTRY VioGpu3dDdiDestroyContext(
    _In_ const HANDLE hContext);

NTSTATUS APIENTRY VioGpu3dDdiDestroyDevice(
    _In_ const HANDLE hDevice);

NTSTATUS APIENTRY VioGpu3dDdiDestroyOverlay(
    _In_ const HANDLE hOverlay);

NTSTATUS APIENTRY VioGpu3dDdiEscape(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_ESCAPE *pEscape);

NTSTATUS APIENTRY VioGpu3dDdiFlipOverlay(
    _In_ const HANDLE hOverlay,
    _In_ const DXGKARG_FLIPOVERLAY *pFlipOverlay);

NTSTATUS APIENTRY VioGpu3dDdiFormatHistoryBuffer(
    _In_ const HANDLE hContext,
    _In_ DXGKARG_FORMATHISTORYBUFFER *pFormatData);

NTSTATUS APIENTRY VioGpu3dDdiGetNodeMetadata(
    _In_ const HANDLE hAdapter,
    _In_ UINT NodeOrdinal,
    _Out_ DXGKARG_GETNODEMETADATA *pGetNodeMetadata);

NTSTATUS APIENTRY VioGpu3dDdiGetScanLine(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_GETSCANLINE *pGetScanLine);

NTSTATUS APIENTRY VioGpu3dDdiGetStandardAllocationDriverData(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *pStandardAllocationDriverData);

NTSTATUS VioGpu3dDdiGetChildContainerId(
    _In_ PVOID MiniportDeviceContext,
    _In_ ULONG ChildUid,
    _Inout_ PDXGK_CHILD_CONTAINER_ID ContainerId);

NTSTATUS VioGpu3dDdiLinkDevice(
    _In_ const PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ const PVOID MiniportDeviceContext,
    _Inout_ PLINKED_DEVICE LinkedDevice);

NTSTATUS VioGpu3dDdiNotifyAcpiEvent(
    _In_ const PVOID MiniportDeviceContext,
    _In_ DXGK_EVENT_TYPE EventType,
    _In_ ULONG Event,
    _In_ PVOID Argument,
    _Out_ PULONG AcpiFlags);

NTSTATUS VioGpu3dDdiNotifySurpriseRemoval(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGK_SURPRISE_REMOVAL_TYPE RemovalType);

NTSTATUS APIENTRY VioGpu3dDdiOpenAllocation(
    _In_ const HANDLE hDevice,
    _In_ const DXGKARG_OPENALLOCATION *pOpenAllocation);

NTSTATUS APIENTRY VioGpu3dDdiPatch(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_PATCH *pPatch);

NTSTATUS APIENTRY VioGpu3dDdiPreemptCommand(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_PREEMPTCOMMAND *pPreemptCommand);

NTSTATUS APIENTRY VioGpu3dDdiPresent(
    _In_ const HANDLE hDevice,
    _Inout_ DXGKARG_PRESENT *pPresent);

NTSTATUS APIENTRY VioGpu3dDdiQueryCurrentFence(
    _In_ const HANDLE hAdapter,
    DXGKARG_QUERYCURRENTFENCE *pCurrentFence);

NTSTATUS APIENTRY VioGpu3dDdiQueryDependentEngineGroup(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_QUERYDEPENDENTENGINEGROUP *pQueryDependentEngineGroup);

NTSTATUS APIENTRY VioGpu3dDdiQueryEngineStatus(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_QUERYENGINESTATUS *pQueryEngineStatus);

NTSTATUS APIENTRY VioGpu3dDdiReleaseSwizzlingRange(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_RELEASESWIZZLINGRANGE *pReleaseSwizzlingRange);

NTSTATUS APIENTRY VioGpu3dDdiRecommendVidPnTopology(
	_In_ const HANDLE hAdapter,
	_In_ const DXGKARG_RECOMMENDVIDPNTOPOLOGY *pRecommendPnTopologyArg);

NTSTATUS APIENTRY VioGpu3dDdiRender(
    _In_ const HANDLE hDevice,
    _Inout_ DXGKARG_RENDER *pRender);

NTSTATUS APIENTRY VioGpu3dDdiRenderKm(
    _In_ const HANDLE hContext,
    _Inout_ DXGKARG_RENDER *pRenderKmArgs);

NTSTATUS APIENTRY VioGpu3dDdiResetEngine(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_RESETENGINE *pResetEngine);

NTSTATUS APIENTRY VioGpu3dDdiResetFromTimeout(
    _In_ const HANDLE hAdapter);

NTSTATUS APIENTRY VioGpu3dDdiRestartFromTimeout(
    _In_ const HANDLE hAdapter);

NTSTATUS APIENTRY VioGpu3dDdiSetDisplayPrivateDriverFormat(
    _In_ CONST HANDLE hAdapter,
    _In_ DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT *pSetDisplayPrivateDriverFormat);

NTSTATUS APIENTRY VioGpu3dDdiSetPalette(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SETPALETTE *pSetPalette);

NTSTATUS APIENTRY VioGpu3dDdiSetVidPnSourceAddress(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SETVIDPNSOURCEADDRESS *pSetVidPnSourceAddress); 

NTSTATUS APIENTRY VioGpu3dDdiSetVidPnSourceAddressWithMultiPlaneOverlay(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *pSetVidPnSourceAddressWithMultiPlaneOverlay);

NTSTATUS APIENTRY VioGpu3dDdiStopCapture(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_STOPCAPTURE *pStopCapture);

NTSTATUS APIENTRY VioGpu3dDdiSubmitCommand(
    _In_ const HANDLE hAdapter, _In_ const DXGKARG_SUBMITCOMMAND *pSubmitCommand);

NTSTATUS APIENTRY VioGpu3dDdiUpdateOverlay(
    _In_ const HANDLE hOverlay,
    _In_ const DXGKARG_UPDATEOVERLAY *pUpdateOverlay);

NTSTATUS APIENTRY VioGpu3dDdiSetPowerComponentFState(
	_In_ const HANDLE DriverContext,
	UINT ComponentIndex,
	UINT FState);

NTSTATUS APIENTRY VioGpu3dDdiPowerRuntimeControlRequest(
	_In_ const HANDLE DriverContext,
	_In_ LPCGUID PowerControlCode,
	_In_opt_ PVOID InBuffer,
	_In_ SIZE_T InBufferSize,
	_Out_opt_ PVOID OutBuffer,
	_In_ SIZE_T OutBufferSize,
	_Out_opt_ PSIZE_T BytesReturned);