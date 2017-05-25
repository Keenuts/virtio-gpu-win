#include "helper.h"
#include "viogpudo.h"
#include "driver_3d.h"

NTSTATUS APIENTRY VioGpu3dDdiAcquireSwizzlingRange(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_ACQUIRESWIZZLINGRANGE *pAcquireSwizzlingRange)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pAcquireSwizzlingRange);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiBuildPagingBuffer(
    _In_ const HANDLE hAdapter,
    _In_ DXGKARG_BUILDPAGINGBUFFER *pBuildPagingBuffer)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pBuildPagingBuffer);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCalibrateGpuClock(
    _In_ const HANDLE hAdapter,
    _In_ UINT32 NodeOrdinal,
    _In_ UINT32 EngineOrdinal,
    _Out_ DXGKARG_CALIBRATEGPUCLOCK *pClockCalibration)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(NodeOrdinal);
    UNREFERENCED_PARAMETER(EngineOrdinal);
    UNREFERENCED_PARAMETER(pClockCalibration);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCancelCommand(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_CANCELCOMMAND *pCancelCommand)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pCancelCommand);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCheckMultiPlaneOverlaySupport(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT *D3DKMTCheckMultiPlaneOverlaySupport)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(D3DKMTCheckMultiPlaneOverlaySupport);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCloseAllocation(
    _In_ const HANDLE hDevice,
    _In_ const DXGKARG_CLOSEALLOCATION *pCloseAllocation)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hDevice);
    UNREFERENCED_PARAMETER(pCloseAllocation);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCollectDbgInfo(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_COLLECTDBGINFO *pCollectDbgInfo)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pCollectDbgInfo);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiControlInterrupt(
    _In_ const HANDLE hAdapter,
    _In_ const DXGK_INTERRUPT_TYPE InterruptType,
    _In_ BOOLEAN Enable)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(InterruptType);
    UNREFERENCED_PARAMETER(Enable);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiControlInterrupt2(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_CONTROLINTERRUPT2 InterruptControl)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(InterruptControl);
	return STATUS_SUCCESS;
}


VOID VioGpu3dDdiControlEtwLogging(
    _In_ BOOLEAN Enable,
    _In_ ULONG Flags,
    _In_ UCHAR Level)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(Enable);
    UNREFERENCED_PARAMETER(Flags);
    UNREFERENCED_PARAMETER(Level);
}


NTSTATUS APIENTRY VioGpu3dDdiCreateAllocation(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CREATEALLOCATION *pCreateAllocation)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pCreateAllocation);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCreateContext(
    _In_ const HANDLE hDevice,
    _Inout_ DXGKARG_CREATECONTEXT *pCreateContext)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hDevice);
    UNREFERENCED_PARAMETER(pCreateContext);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCreateDevice(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CREATEDEVICE *pCreateDevice)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pCreateDevice);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiCreateOverlay(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_CREATEOVERLAY *pCreateOverlay)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pCreateOverlay);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiDescribeAllocation(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_DESCRIBEALLOCATION *pDescribeAllocation)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pDescribeAllocation);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiDestroyAllocation(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_DESTROYALLOCATION *pDestroyAllocation)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pDestroyAllocation);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiDestroyContext(
    _In_ const HANDLE hContext)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hContext);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiDestroyDevice(
    _In_ const HANDLE hDevice)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hDevice);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiDestroyOverlay(
    _In_ const HANDLE hOverlay)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hOverlay);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiEscape(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_ESCAPE *pEscape)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pEscape);

    GpuDevice* pVioGpuDod = reinterpret_cast<GpuDevice*>(hAdapter);
    NTSTATUS res = pVioGpuDod->Escape(pEscape->pPrivateDriverData, pEscape->PrivateDriverDataSize);
    DbgPrint(TRACE_LEVEL_VERBOSE, ("<--- %s\n", __FUNCTION__));
	return res;
}


NTSTATUS APIENTRY VioGpu3dDdiFlipOverlay(
    _In_ const HANDLE hOverlay,
    _In_ const DXGKARG_FLIPOVERLAY *pFlipOverlay)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hOverlay);
    UNREFERENCED_PARAMETER(pFlipOverlay);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiFormatHistoryBuffer(
    _In_ const HANDLE hContext,
    _In_ DXGKARG_FORMATHISTORYBUFFER *pFormatData)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hContext);
    UNREFERENCED_PARAMETER(pFormatData);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiGetNodeMetadata(
    _In_ const HANDLE hAdapter,
    _In_ UINT NodeOrdinal,
    _Out_ DXGKARG_GETNODEMETADATA *pGetNodeMetadata)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(NodeOrdinal);
    UNREFERENCED_PARAMETER(pGetNodeMetadata);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiGetScanLine(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_GETSCANLINE *pGetScanLine)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(pGetScanLine);
    UNREFERENCED_PARAMETER(hAdapter);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiGetStandardAllocationDriverData(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *pStandardAllocationDriverData)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pStandardAllocationDriverData);
	return STATUS_SUCCESS;
}


NTSTATUS VioGpu3dDdiGetChildContainerId(
    _In_ PVOID MiniportDeviceContext,
    _In_ ULONG ChildUid,
    _Inout_ PDXGK_CHILD_CONTAINER_ID ContainerId)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(MiniportDeviceContext);
    UNREFERENCED_PARAMETER(ChildUid);
    UNREFERENCED_PARAMETER(ContainerId);
	return NULL;
}


NTSTATUS VioGpu3dDdiLinkDevice(
    _In_ const PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ const PVOID MiniportDeviceContext,
    _Inout_ PLINKED_DEVICE LinkedDevice)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(PhysicalDeviceObject);
    UNREFERENCED_PARAMETER(MiniportDeviceContext);
    UNREFERENCED_PARAMETER(LinkedDevice);
	return STATUS_SUCCESS;
}


NTSTATUS VioGpu3dDdiNotifyAcpiEvent(
    _In_ const PVOID MiniportDeviceContext,
    _In_ DXGK_EVENT_TYPE EventType,
    _In_ ULONG Event,
    _In_ PVOID Argument,
    _Out_ PULONG AcpiFlags)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(MiniportDeviceContext);
    UNREFERENCED_PARAMETER(EventType);
    UNREFERENCED_PARAMETER(Event);
    UNREFERENCED_PARAMETER(Argument);
    UNREFERENCED_PARAMETER(AcpiFlags);
	return STATUS_NOT_SUPPORTED;
}


NTSTATUS VioGpu3dDdiNotifySurpriseRemoval(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGK_SURPRISE_REMOVAL_TYPE RemovalType)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(MiniportDeviceContext);
    UNREFERENCED_PARAMETER(RemovalType);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiOpenAllocation(
    _In_ const HANDLE hDevice,
    _In_ const DXGKARG_OPENALLOCATION *pOpenAllocation)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hDevice);
    UNREFERENCED_PARAMETER(pOpenAllocation);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiPatch(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_PATCH *pPatch)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pPatch);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiPreemptCommand(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_PREEMPTCOMMAND *pPreemptCommand)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pPreemptCommand);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiPresent(
    _In_ const HANDLE hDevice,
    _Inout_ DXGKARG_PRESENT *pPresent)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hDevice);
    UNREFERENCED_PARAMETER(pPresent);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiQueryCurrentFence(
    _In_ const HANDLE hAdapter,
    DXGKARG_QUERYCURRENTFENCE *pCurrentFence)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pCurrentFence);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiQueryDependentEngineGroup(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_QUERYDEPENDENTENGINEGROUP *pQueryDependentEngineGroup)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pQueryDependentEngineGroup);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiQueryEngineStatus(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_QUERYENGINESTATUS *pQueryEngineStatus)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pQueryEngineStatus);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiReleaseSwizzlingRange(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_RELEASESWIZZLINGRANGE *pReleaseSwizzlingRange)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pReleaseSwizzlingRange);
	return STATUS_SUCCESS;
}

NTSTATUS APIENTRY VioGpu3dDdiRecommendVidPnTopology(
	_In_ const HANDLE hAdapter,
	_In_ const DXGKARG_RECOMMENDVIDPNTOPOLOGY *pRecommendPnTopologyArg)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(hAdapter);
	UNREFERENCED_PARAMETER(pRecommendPnTopologyArg);
	return STATUS_SUCCESS;
}

NTSTATUS APIENTRY VioGpu3dDdiRender(
    _In_ const HANDLE hDevice,
    _Inout_ DXGKARG_RENDER *pRender)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hDevice);
    UNREFERENCED_PARAMETER(pRender);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiRenderKm(
    _In_ const HANDLE hContext,
    _Inout_ DXGKARG_RENDER *pRenderKmArgs)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hContext);
    UNREFERENCED_PARAMETER(pRenderKmArgs);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiResetEngine(
    _In_ const HANDLE hAdapter,
    _Inout_ DXGKARG_RESETENGINE *pResetEngine)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pResetEngine);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiResetFromTimeout(
    _In_ const HANDLE hAdapter)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiRestartFromTimeout(
    _In_ const HANDLE hAdapter)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiSetDisplayPrivateDriverFormat(
    _In_ CONST HANDLE hAdapter,
    _In_ DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT *pSetDisplayPrivateDriverFormat)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pSetDisplayPrivateDriverFormat);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiSetPalette(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SETPALETTE *pSetPalette)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pSetPalette);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiSetVidPnSourceAddress(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SETVIDPNSOURCEADDRESS *pSetVidPnSourceAddress)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pSetVidPnSourceAddress);
	return STATUS_SUCCESS;
}
 

NTSTATUS APIENTRY VioGpu3dDdiSetVidPnSourceAddressWithMultiPlaneOverlay(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *pSetVidPnSourceAddressWithMultiPlaneOverlay)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pSetVidPnSourceAddressWithMultiPlaneOverlay);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiStopCapture(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_STOPCAPTURE *pStopCapture)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pStopCapture);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiSubmitCommand(
    _In_ const HANDLE hAdapter,
    _In_ const DXGKARG_SUBMITCOMMAND *pSubmitCommand)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hAdapter);
    UNREFERENCED_PARAMETER(pSubmitCommand);
	return STATUS_SUCCESS;
}


NTSTATUS APIENTRY VioGpu3dDdiUpdateOverlay(
    _In_ const HANDLE hOverlay,
    _In_ const DXGKARG_UPDATEOVERLAY *pUpdateOverlay)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
    UNREFERENCED_PARAMETER(hOverlay);
    UNREFERENCED_PARAMETER(pUpdateOverlay);
	return STATUS_SUCCESS;
}

NTSTATUS APIENTRY VioGpu3dDdiSetPowerComponentFState(
	_In_ const HANDLE DriverContext,
	UINT ComponentIndex,
	UINT FState)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(DriverContext);
	UNREFERENCED_PARAMETER(ComponentIndex);
	UNREFERENCED_PARAMETER(FState);

	return STATUS_SUCCESS;
}

NTSTATUS APIENTRY VioGpu3dDdiPowerRuntimeControlRequest(
	_In_ const HANDLE DriverContext,
	_In_ LPCGUID PowerControlCode,
	_In_opt_ PVOID InBuffer,
	_In_ SIZE_T InBufferSize,
	_Out_opt_ PVOID OutBuffer,
	_In_ SIZE_T OutBufferSize,
	_Out_opt_ PSIZE_T BytesReturned)
{
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(DriverContext);
	UNREFERENCED_PARAMETER(PowerControlCode);
	UNREFERENCED_PARAMETER(InBuffer);
	UNREFERENCED_PARAMETER(InBufferSize);
	UNREFERENCED_PARAMETER(OutBuffer);
	UNREFERENCED_PARAMETER(OutBufferSize);
	UNREFERENCED_PARAMETER(BytesReturned);

	return STATUS_SUCCESS;
}