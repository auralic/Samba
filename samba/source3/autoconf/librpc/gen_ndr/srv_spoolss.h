#include "librpc/gen_ndr/ndr_spoolss.h"
#ifndef __SRV_SPOOLSS__
#define __SRV_SPOOLSS__
WERROR _spoolss_EnumPrinters(struct pipes_struct *p, struct spoolss_EnumPrinters *r);
WERROR _spoolss_OpenPrinter(struct pipes_struct *p, struct spoolss_OpenPrinter *r);
WERROR _spoolss_SetJob(struct pipes_struct *p, struct spoolss_SetJob *r);
WERROR _spoolss_GetJob(struct pipes_struct *p, struct spoolss_GetJob *r);
WERROR _spoolss_EnumJobs(struct pipes_struct *p, struct spoolss_EnumJobs *r);
WERROR _spoolss_AddPrinter(struct pipes_struct *p, struct spoolss_AddPrinter *r);
WERROR _spoolss_DeletePrinter(struct pipes_struct *p, struct spoolss_DeletePrinter *r);
WERROR _spoolss_SetPrinter(struct pipes_struct *p, struct spoolss_SetPrinter *r);
WERROR _spoolss_GetPrinter(struct pipes_struct *p, struct spoolss_GetPrinter *r);
WERROR _spoolss_AddPrinterDriver(struct pipes_struct *p, struct spoolss_AddPrinterDriver *r);
WERROR _spoolss_EnumPrinterDrivers(struct pipes_struct *p, struct spoolss_EnumPrinterDrivers *r);
WERROR _spoolss_GetPrinterDriver(struct pipes_struct *p, struct spoolss_GetPrinterDriver *r);
WERROR _spoolss_GetPrinterDriverDirectory(struct pipes_struct *p, struct spoolss_GetPrinterDriverDirectory *r);
WERROR _spoolss_DeletePrinterDriver(struct pipes_struct *p, struct spoolss_DeletePrinterDriver *r);
WERROR _spoolss_AddPrintProcessor(struct pipes_struct *p, struct spoolss_AddPrintProcessor *r);
WERROR _spoolss_EnumPrintProcessors(struct pipes_struct *p, struct spoolss_EnumPrintProcessors *r);
WERROR _spoolss_GetPrintProcessorDirectory(struct pipes_struct *p, struct spoolss_GetPrintProcessorDirectory *r);
WERROR _spoolss_StartDocPrinter(struct pipes_struct *p, struct spoolss_StartDocPrinter *r);
WERROR _spoolss_StartPagePrinter(struct pipes_struct *p, struct spoolss_StartPagePrinter *r);
WERROR _spoolss_WritePrinter(struct pipes_struct *p, struct spoolss_WritePrinter *r);
WERROR _spoolss_EndPagePrinter(struct pipes_struct *p, struct spoolss_EndPagePrinter *r);
WERROR _spoolss_AbortPrinter(struct pipes_struct *p, struct spoolss_AbortPrinter *r);
WERROR _spoolss_ReadPrinter(struct pipes_struct *p, struct spoolss_ReadPrinter *r);
WERROR _spoolss_EndDocPrinter(struct pipes_struct *p, struct spoolss_EndDocPrinter *r);
WERROR _spoolss_AddJob(struct pipes_struct *p, struct spoolss_AddJob *r);
WERROR _spoolss_ScheduleJob(struct pipes_struct *p, struct spoolss_ScheduleJob *r);
WERROR _spoolss_GetPrinterData(struct pipes_struct *p, struct spoolss_GetPrinterData *r);
WERROR _spoolss_SetPrinterData(struct pipes_struct *p, struct spoolss_SetPrinterData *r);
WERROR _spoolss_WaitForPrinterChange(struct pipes_struct *p, struct spoolss_WaitForPrinterChange *r);
WERROR _spoolss_ClosePrinter(struct pipes_struct *p, struct spoolss_ClosePrinter *r);
WERROR _spoolss_AddForm(struct pipes_struct *p, struct spoolss_AddForm *r);
WERROR _spoolss_DeleteForm(struct pipes_struct *p, struct spoolss_DeleteForm *r);
WERROR _spoolss_GetForm(struct pipes_struct *p, struct spoolss_GetForm *r);
WERROR _spoolss_SetForm(struct pipes_struct *p, struct spoolss_SetForm *r);
WERROR _spoolss_EnumForms(struct pipes_struct *p, struct spoolss_EnumForms *r);
WERROR _spoolss_EnumPorts(struct pipes_struct *p, struct spoolss_EnumPorts *r);
WERROR _spoolss_EnumMonitors(struct pipes_struct *p, struct spoolss_EnumMonitors *r);
WERROR _spoolss_AddPort(struct pipes_struct *p, struct spoolss_AddPort *r);
WERROR _spoolss_ConfigurePort(struct pipes_struct *p, struct spoolss_ConfigurePort *r);
WERROR _spoolss_DeletePort(struct pipes_struct *p, struct spoolss_DeletePort *r);
WERROR _spoolss_CreatePrinterIC(struct pipes_struct *p, struct spoolss_CreatePrinterIC *r);
WERROR _spoolss_PlayGDIScriptOnPrinterIC(struct pipes_struct *p, struct spoolss_PlayGDIScriptOnPrinterIC *r);
WERROR _spoolss_DeletePrinterIC(struct pipes_struct *p, struct spoolss_DeletePrinterIC *r);
WERROR _spoolss_AddPrinterConnection(struct pipes_struct *p, struct spoolss_AddPrinterConnection *r);
WERROR _spoolss_DeletePrinterConnection(struct pipes_struct *p, struct spoolss_DeletePrinterConnection *r);
WERROR _spoolss_PrinterMessageBox(struct pipes_struct *p, struct spoolss_PrinterMessageBox *r);
WERROR _spoolss_AddMonitor(struct pipes_struct *p, struct spoolss_AddMonitor *r);
WERROR _spoolss_DeleteMonitor(struct pipes_struct *p, struct spoolss_DeleteMonitor *r);
WERROR _spoolss_DeletePrintProcessor(struct pipes_struct *p, struct spoolss_DeletePrintProcessor *r);
WERROR _spoolss_AddPrintProvidor(struct pipes_struct *p, struct spoolss_AddPrintProvidor *r);
WERROR _spoolss_DeletePrintProvidor(struct pipes_struct *p, struct spoolss_DeletePrintProvidor *r);
WERROR _spoolss_EnumPrintProcessorDataTypes(struct pipes_struct *p, struct spoolss_EnumPrintProcessorDataTypes *r);
WERROR _spoolss_ResetPrinter(struct pipes_struct *p, struct spoolss_ResetPrinter *r);
WERROR _spoolss_GetPrinterDriver2(struct pipes_struct *p, struct spoolss_GetPrinterDriver2 *r);
WERROR _spoolss_FindFirstPrinterChangeNotification(struct pipes_struct *p, struct spoolss_FindFirstPrinterChangeNotification *r);
WERROR _spoolss_FindNextPrinterChangeNotification(struct pipes_struct *p, struct spoolss_FindNextPrinterChangeNotification *r);
WERROR _spoolss_FindClosePrinterNotify(struct pipes_struct *p, struct spoolss_FindClosePrinterNotify *r);
WERROR _spoolss_RouterFindFirstPrinterChangeNotificationOld(struct pipes_struct *p, struct spoolss_RouterFindFirstPrinterChangeNotificationOld *r);
WERROR _spoolss_ReplyOpenPrinter(struct pipes_struct *p, struct spoolss_ReplyOpenPrinter *r);
WERROR _spoolss_RouterReplyPrinter(struct pipes_struct *p, struct spoolss_RouterReplyPrinter *r);
WERROR _spoolss_ReplyClosePrinter(struct pipes_struct *p, struct spoolss_ReplyClosePrinter *r);
WERROR _spoolss_AddPortEx(struct pipes_struct *p, struct spoolss_AddPortEx *r);
WERROR _spoolss_RouterFindFirstPrinterChangeNotification(struct pipes_struct *p, struct spoolss_RouterFindFirstPrinterChangeNotification *r);
WERROR _spoolss_SpoolerInit(struct pipes_struct *p, struct spoolss_SpoolerInit *r);
WERROR _spoolss_ResetPrinterEx(struct pipes_struct *p, struct spoolss_ResetPrinterEx *r);
WERROR _spoolss_RemoteFindFirstPrinterChangeNotifyEx(struct pipes_struct *p, struct spoolss_RemoteFindFirstPrinterChangeNotifyEx *r);
WERROR _spoolss_RouterReplyPrinterEx(struct pipes_struct *p, struct spoolss_RouterReplyPrinterEx *r);
WERROR _spoolss_RouterRefreshPrinterChangeNotify(struct pipes_struct *p, struct spoolss_RouterRefreshPrinterChangeNotify *r);
WERROR _spoolss_44(struct pipes_struct *p, struct spoolss_44 *r);
WERROR _spoolss_OpenPrinterEx(struct pipes_struct *p, struct spoolss_OpenPrinterEx *r);
WERROR _spoolss_AddPrinterEx(struct pipes_struct *p, struct spoolss_AddPrinterEx *r);
WERROR _spoolss_SetPort(struct pipes_struct *p, struct spoolss_SetPort *r);
WERROR _spoolss_EnumPrinterData(struct pipes_struct *p, struct spoolss_EnumPrinterData *r);
WERROR _spoolss_DeletePrinterData(struct pipes_struct *p, struct spoolss_DeletePrinterData *r);
WERROR _spoolss_4a(struct pipes_struct *p, struct spoolss_4a *r);
WERROR _spoolss_4b(struct pipes_struct *p, struct spoolss_4b *r);
WERROR _spoolss_4c(struct pipes_struct *p, struct spoolss_4c *r);
WERROR _spoolss_SetPrinterDataEx(struct pipes_struct *p, struct spoolss_SetPrinterDataEx *r);
WERROR _spoolss_GetPrinterDataEx(struct pipes_struct *p, struct spoolss_GetPrinterDataEx *r);
WERROR _spoolss_EnumPrinterDataEx(struct pipes_struct *p, struct spoolss_EnumPrinterDataEx *r);
WERROR _spoolss_EnumPrinterKey(struct pipes_struct *p, struct spoolss_EnumPrinterKey *r);
WERROR _spoolss_DeletePrinterDataEx(struct pipes_struct *p, struct spoolss_DeletePrinterDataEx *r);
WERROR _spoolss_DeletePrinterKey(struct pipes_struct *p, struct spoolss_DeletePrinterKey *r);
WERROR _spoolss_53(struct pipes_struct *p, struct spoolss_53 *r);
WERROR _spoolss_DeletePrinterDriverEx(struct pipes_struct *p, struct spoolss_DeletePrinterDriverEx *r);
WERROR _spoolss_AddPerMachineConnection(struct pipes_struct *p, struct spoolss_AddPerMachineConnection *r);
WERROR _spoolss_DeletePerMachineConnection(struct pipes_struct *p, struct spoolss_DeletePerMachineConnection *r);
WERROR _spoolss_EnumPerMachineConnections(struct pipes_struct *p, struct spoolss_EnumPerMachineConnections *r);
WERROR _spoolss_XcvData(struct pipes_struct *p, struct spoolss_XcvData *r);
WERROR _spoolss_AddPrinterDriverEx(struct pipes_struct *p, struct spoolss_AddPrinterDriverEx *r);
WERROR _spoolss_5a(struct pipes_struct *p, struct spoolss_5a *r);
WERROR _spoolss_5b(struct pipes_struct *p, struct spoolss_5b *r);
WERROR _spoolss_5c(struct pipes_struct *p, struct spoolss_5c *r);
WERROR _spoolss_5d(struct pipes_struct *p, struct spoolss_5d *r);
WERROR _spoolss_5e(struct pipes_struct *p, struct spoolss_5e *r);
WERROR _spoolss_5f(struct pipes_struct *p, struct spoolss_5f *r);
WERROR _spoolss_60(struct pipes_struct *p, struct spoolss_60 *r);
WERROR _spoolss_SendRecvBidiData(struct pipes_struct *p, struct spoolss_SendRecvBidiData *r);
WERROR _spoolss_62(struct pipes_struct *p, struct spoolss_62 *r);
WERROR _spoolss_63(struct pipes_struct *p, struct spoolss_63 *r);
WERROR _spoolss_64(struct pipes_struct *p, struct spoolss_64 *r);
WERROR _spoolss_65(struct pipes_struct *p, struct spoolss_65 *r);
HRESULT _spoolss_GetCorePrinterDrivers(struct pipes_struct *p, struct spoolss_GetCorePrinterDrivers *r);
WERROR _spoolss_67(struct pipes_struct *p, struct spoolss_67 *r);
HRESULT _spoolss_GetPrinterDriverPackagePath(struct pipes_struct *p, struct spoolss_GetPrinterDriverPackagePath *r);
WERROR _spoolss_69(struct pipes_struct *p, struct spoolss_69 *r);
WERROR _spoolss_6a(struct pipes_struct *p, struct spoolss_6a *r);
WERROR _spoolss_6b(struct pipes_struct *p, struct spoolss_6b *r);
WERROR _spoolss_6c(struct pipes_struct *p, struct spoolss_6c *r);
WERROR _spoolss_6d(struct pipes_struct *p, struct spoolss_6d *r);
WERROR _spoolss_GetJobNamedPropertyValue(struct pipes_struct *p, struct spoolss_GetJobNamedPropertyValue *r);
WERROR _spoolss_SetJobNamedProperty(struct pipes_struct *p, struct spoolss_SetJobNamedProperty *r);
WERROR _spoolss_DeleteJobNamedProperty(struct pipes_struct *p, struct spoolss_DeleteJobNamedProperty *r);
WERROR _spoolss_EnumJobNamedProperties(struct pipes_struct *p, struct spoolss_EnumJobNamedProperties *r);
WERROR _spoolss_72(struct pipes_struct *p, struct spoolss_72 *r);
WERROR _spoolss_73(struct pipes_struct *p, struct spoolss_73 *r);
WERROR _spoolss_LogJobInfoForBranchOffice(struct pipes_struct *p, struct spoolss_LogJobInfoForBranchOffice *r);
const struct api_struct *spoolss_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_spoolss_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_spoolss_shutdown(void);
#endif /* __SRV_SPOOLSS__ */
