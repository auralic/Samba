/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_eventlog.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_eventlog_init(TALLOC_CTX *);

/* eventlog - dcerpc server boilerplate generated by pidl */


static NTSTATUS eventlog__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_EVENTLOG_BIND
	return DCESRV_INTERFACE_EVENTLOG_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void eventlog__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_EVENTLOG_UNBIND
	DCESRV_INTERFACE_EVENTLOG_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS eventlog__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_eventlog.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_eventlog.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_eventlog.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_eventlog.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_eventlog, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS eventlog__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct eventlog_ClearEventLogW *r2 = (struct eventlog_ClearEventLogW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ClearEventLogW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ClearEventLogW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ClearEventLogW will reply async\n"));
		}
		break;
	}
	case 1: {
		struct eventlog_BackupEventLogW *r2 = (struct eventlog_BackupEventLogW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_BackupEventLogW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_BackupEventLogW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_BackupEventLogW will reply async\n"));
		}
		break;
	}
	case 2: {
		struct eventlog_CloseEventLog *r2 = (struct eventlog_CloseEventLog *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_CloseEventLog, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_CloseEventLog(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_CloseEventLog will reply async\n"));
		}
		break;
	}
	case 3: {
		struct eventlog_DeregisterEventSource *r2 = (struct eventlog_DeregisterEventSource *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_DeregisterEventSource, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_DeregisterEventSource(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_DeregisterEventSource will reply async\n"));
		}
		break;
	}
	case 4: {
		struct eventlog_GetNumRecords *r2 = (struct eventlog_GetNumRecords *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_GetNumRecords, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_GetNumRecords(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_GetNumRecords will reply async\n"));
		}
		break;
	}
	case 5: {
		struct eventlog_GetOldestRecord *r2 = (struct eventlog_GetOldestRecord *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_GetOldestRecord, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_GetOldestRecord(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_GetOldestRecord will reply async\n"));
		}
		break;
	}
	case 6: {
		struct eventlog_ChangeNotify *r2 = (struct eventlog_ChangeNotify *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ChangeNotify, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ChangeNotify(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ChangeNotify will reply async\n"));
		}
		break;
	}
	case 7: {
		struct eventlog_OpenEventLogW *r2 = (struct eventlog_OpenEventLogW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenEventLogW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_OpenEventLogW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenEventLogW will reply async\n"));
		}
		break;
	}
	case 8: {
		struct eventlog_RegisterEventSourceW *r2 = (struct eventlog_RegisterEventSourceW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_RegisterEventSourceW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_RegisterEventSourceW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_RegisterEventSourceW will reply async\n"));
		}
		break;
	}
	case 9: {
		struct eventlog_OpenBackupEventLogW *r2 = (struct eventlog_OpenBackupEventLogW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenBackupEventLogW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_OpenBackupEventLogW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenBackupEventLogW will reply async\n"));
		}
		break;
	}
	case 10: {
		struct eventlog_ReadEventLogW *r2 = (struct eventlog_ReadEventLogW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReadEventLogW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ReadEventLogW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReadEventLogW will reply async\n"));
		}
		break;
	}
	case 11: {
		struct eventlog_ReportEventW *r2 = (struct eventlog_ReportEventW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReportEventW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ReportEventW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReportEventW will reply async\n"));
		}
		break;
	}
	case 12: {
		struct eventlog_ClearEventLogA *r2 = (struct eventlog_ClearEventLogA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ClearEventLogA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ClearEventLogA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ClearEventLogA will reply async\n"));
		}
		break;
	}
	case 13: {
		struct eventlog_BackupEventLogA *r2 = (struct eventlog_BackupEventLogA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_BackupEventLogA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_BackupEventLogA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_BackupEventLogA will reply async\n"));
		}
		break;
	}
	case 14: {
		struct eventlog_OpenEventLogA *r2 = (struct eventlog_OpenEventLogA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenEventLogA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_OpenEventLogA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenEventLogA will reply async\n"));
		}
		break;
	}
	case 15: {
		struct eventlog_RegisterEventSourceA *r2 = (struct eventlog_RegisterEventSourceA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_RegisterEventSourceA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_RegisterEventSourceA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_RegisterEventSourceA will reply async\n"));
		}
		break;
	}
	case 16: {
		struct eventlog_OpenBackupEventLogA *r2 = (struct eventlog_OpenBackupEventLogA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenBackupEventLogA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_OpenBackupEventLogA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenBackupEventLogA will reply async\n"));
		}
		break;
	}
	case 17: {
		struct eventlog_ReadEventLogA *r2 = (struct eventlog_ReadEventLogA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReadEventLogA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ReadEventLogA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReadEventLogA will reply async\n"));
		}
		break;
	}
	case 18: {
		struct eventlog_ReportEventA *r2 = (struct eventlog_ReportEventA *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReportEventA, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ReportEventA(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReportEventA will reply async\n"));
		}
		break;
	}
	case 19: {
		struct eventlog_RegisterClusterSvc *r2 = (struct eventlog_RegisterClusterSvc *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_RegisterClusterSvc, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_RegisterClusterSvc(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_RegisterClusterSvc will reply async\n"));
		}
		break;
	}
	case 20: {
		struct eventlog_DeregisterClusterSvc *r2 = (struct eventlog_DeregisterClusterSvc *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_DeregisterClusterSvc, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_DeregisterClusterSvc(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_DeregisterClusterSvc will reply async\n"));
		}
		break;
	}
	case 21: {
		struct eventlog_WriteClusterEvents *r2 = (struct eventlog_WriteClusterEvents *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_WriteClusterEvents, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_WriteClusterEvents(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_WriteClusterEvents will reply async\n"));
		}
		break;
	}
	case 22: {
		struct eventlog_GetLogInformation *r2 = (struct eventlog_GetLogInformation *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_GetLogInformation, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_GetLogInformation(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_GetLogInformation will reply async\n"));
		}
		break;
	}
	case 23: {
		struct eventlog_FlushEventLog *r2 = (struct eventlog_FlushEventLog *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_FlushEventLog, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_FlushEventLog(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_FlushEventLog will reply async\n"));
		}
		break;
	}
	case 24: {
		struct eventlog_ReportEventAndSourceW *r2 = (struct eventlog_ReportEventAndSourceW *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReportEventAndSourceW, NDR_IN, r2);
		}
		r2->out.result = dcesrv_eventlog_ReportEventAndSourceW(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReportEventAndSourceW will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_eventlog, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS eventlog__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct eventlog_ClearEventLogW *r2 = (struct eventlog_ClearEventLogW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ClearEventLogW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ClearEventLogW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ClearEventLogW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct eventlog_BackupEventLogW *r2 = (struct eventlog_BackupEventLogW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_BackupEventLogW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_BackupEventLogW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_BackupEventLogW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct eventlog_CloseEventLog *r2 = (struct eventlog_CloseEventLog *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_CloseEventLog replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_CloseEventLog, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_CloseEventLog\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct eventlog_DeregisterEventSource *r2 = (struct eventlog_DeregisterEventSource *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_DeregisterEventSource replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_DeregisterEventSource, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_DeregisterEventSource\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct eventlog_GetNumRecords *r2 = (struct eventlog_GetNumRecords *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_GetNumRecords replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_GetNumRecords, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_GetNumRecords\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct eventlog_GetOldestRecord *r2 = (struct eventlog_GetOldestRecord *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_GetOldestRecord replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_GetOldestRecord, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_GetOldestRecord\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct eventlog_ChangeNotify *r2 = (struct eventlog_ChangeNotify *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ChangeNotify replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ChangeNotify, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ChangeNotify\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct eventlog_OpenEventLogW *r2 = (struct eventlog_OpenEventLogW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenEventLogW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenEventLogW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_OpenEventLogW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct eventlog_RegisterEventSourceW *r2 = (struct eventlog_RegisterEventSourceW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_RegisterEventSourceW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_RegisterEventSourceW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_RegisterEventSourceW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct eventlog_OpenBackupEventLogW *r2 = (struct eventlog_OpenBackupEventLogW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenBackupEventLogW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenBackupEventLogW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_OpenBackupEventLogW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 10: {
		struct eventlog_ReadEventLogW *r2 = (struct eventlog_ReadEventLogW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReadEventLogW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReadEventLogW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ReadEventLogW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 11: {
		struct eventlog_ReportEventW *r2 = (struct eventlog_ReportEventW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReportEventW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReportEventW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ReportEventW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 12: {
		struct eventlog_ClearEventLogA *r2 = (struct eventlog_ClearEventLogA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ClearEventLogA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ClearEventLogA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ClearEventLogA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 13: {
		struct eventlog_BackupEventLogA *r2 = (struct eventlog_BackupEventLogA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_BackupEventLogA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_BackupEventLogA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_BackupEventLogA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 14: {
		struct eventlog_OpenEventLogA *r2 = (struct eventlog_OpenEventLogA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenEventLogA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenEventLogA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_OpenEventLogA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 15: {
		struct eventlog_RegisterEventSourceA *r2 = (struct eventlog_RegisterEventSourceA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_RegisterEventSourceA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_RegisterEventSourceA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_RegisterEventSourceA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 16: {
		struct eventlog_OpenBackupEventLogA *r2 = (struct eventlog_OpenBackupEventLogA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_OpenBackupEventLogA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_OpenBackupEventLogA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_OpenBackupEventLogA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 17: {
		struct eventlog_ReadEventLogA *r2 = (struct eventlog_ReadEventLogA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReadEventLogA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReadEventLogA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ReadEventLogA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 18: {
		struct eventlog_ReportEventA *r2 = (struct eventlog_ReportEventA *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReportEventA replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReportEventA, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ReportEventA\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 19: {
		struct eventlog_RegisterClusterSvc *r2 = (struct eventlog_RegisterClusterSvc *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_RegisterClusterSvc replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_RegisterClusterSvc, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_RegisterClusterSvc\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 20: {
		struct eventlog_DeregisterClusterSvc *r2 = (struct eventlog_DeregisterClusterSvc *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_DeregisterClusterSvc replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_DeregisterClusterSvc, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_DeregisterClusterSvc\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 21: {
		struct eventlog_WriteClusterEvents *r2 = (struct eventlog_WriteClusterEvents *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_WriteClusterEvents replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_WriteClusterEvents, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_WriteClusterEvents\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 22: {
		struct eventlog_GetLogInformation *r2 = (struct eventlog_GetLogInformation *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_GetLogInformation replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_GetLogInformation, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_GetLogInformation\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 23: {
		struct eventlog_FlushEventLog *r2 = (struct eventlog_FlushEventLog *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_FlushEventLog replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_FlushEventLog, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_FlushEventLog\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 24: {
		struct eventlog_ReportEventAndSourceW *r2 = (struct eventlog_ReportEventAndSourceW *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function eventlog_ReportEventAndSourceW replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(eventlog_ReportEventAndSourceW, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in eventlog_ReportEventAndSourceW\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_eventlog, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS eventlog__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_eventlog.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_eventlog_interface = {
	.name		    = "eventlog",
	.syntax_id          = {{0x82273fdc,0xe32a,0x18c3,{0x3f,0x78},{0x82,0x79,0x29,0xdc,0x23,0xea}},0.0},
	.bind		    = eventlog__op_bind,
	.unbind		    = eventlog__op_unbind,
	.ndr_pull	    = eventlog__op_ndr_pull,
	.dispatch	    = eventlog__op_dispatch,
	.reply		    = eventlog__op_reply,
	.ndr_push	    = eventlog__op_ndr_push,
#ifdef DCESRV_INTERFACE_EVENTLOG_FLAGS
	.flags              = DCESRV_INTERFACE_EVENTLOG_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS eventlog__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_eventlog.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_eventlog.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_eventlog_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("eventlog_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool eventlog__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_eventlog_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_eventlog_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_eventlog_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool eventlog__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_eventlog_interface.name, name)==0) {
		memcpy(iface, &dcesrv_eventlog_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_eventlog_init(TALLOC_CTX *ctx)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "eventlog",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_EVENTLOG_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_EVENTLOG_INIT_SERVER,
#else
	    .init_server = eventlog__op_init_server,
#endif
	    .interface_by_uuid = eventlog__op_interface_by_uuid,
	    .interface_by_name = eventlog__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'eventlog' endpoint server!\n"));
		return ret;
	}

	return ret;
}

