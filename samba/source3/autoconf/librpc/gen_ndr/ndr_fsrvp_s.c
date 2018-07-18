/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_fsrvp.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_FileServerVssAgent_init(TALLOC_CTX *);

/* FileServerVssAgent - dcerpc server boilerplate generated by pidl */


static NTSTATUS FileServerVssAgent__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_FILESERVERVSSAGENT_BIND
	return DCESRV_INTERFACE_FILESERVERVSSAGENT_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void FileServerVssAgent__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_FILESERVERVSSAGENT_UNBIND
	DCESRV_INTERFACE_FILESERVERVSSAGENT_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS FileServerVssAgent__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_FileServerVssAgent.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_FileServerVssAgent.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_FileServerVssAgent.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_FileServerVssAgent.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_FileServerVssAgent, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS FileServerVssAgent__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct fss_GetSupportedVersion *r2 = (struct fss_GetSupportedVersion *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_GetSupportedVersion, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_GetSupportedVersion(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_GetSupportedVersion will reply async\n"));
		}
		break;
	}
	case 1: {
		struct fss_SetContext *r2 = (struct fss_SetContext *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_SetContext, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_SetContext(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_SetContext will reply async\n"));
		}
		break;
	}
	case 2: {
		struct fss_StartShadowCopySet *r2 = (struct fss_StartShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_StartShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_StartShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_StartShadowCopySet will reply async\n"));
		}
		break;
	}
	case 3: {
		struct fss_AddToShadowCopySet *r2 = (struct fss_AddToShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_AddToShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_AddToShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_AddToShadowCopySet will reply async\n"));
		}
		break;
	}
	case 4: {
		struct fss_CommitShadowCopySet *r2 = (struct fss_CommitShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_CommitShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_CommitShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_CommitShadowCopySet will reply async\n"));
		}
		break;
	}
	case 5: {
		struct fss_ExposeShadowCopySet *r2 = (struct fss_ExposeShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_ExposeShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_ExposeShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_ExposeShadowCopySet will reply async\n"));
		}
		break;
	}
	case 6: {
		struct fss_RecoveryCompleteShadowCopySet *r2 = (struct fss_RecoveryCompleteShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_RecoveryCompleteShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_RecoveryCompleteShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_RecoveryCompleteShadowCopySet will reply async\n"));
		}
		break;
	}
	case 7: {
		struct fss_AbortShadowCopySet *r2 = (struct fss_AbortShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_AbortShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_AbortShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_AbortShadowCopySet will reply async\n"));
		}
		break;
	}
	case 8: {
		struct fss_IsPathSupported *r2 = (struct fss_IsPathSupported *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_IsPathSupported, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_IsPathSupported(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_IsPathSupported will reply async\n"));
		}
		break;
	}
	case 9: {
		struct fss_IsPathShadowCopied *r2 = (struct fss_IsPathShadowCopied *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_IsPathShadowCopied, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_IsPathShadowCopied(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_IsPathShadowCopied will reply async\n"));
		}
		break;
	}
	case 10: {
		struct fss_GetShareMapping *r2 = (struct fss_GetShareMapping *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_GetShareMapping, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_GetShareMapping(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_GetShareMapping will reply async\n"));
		}
		break;
	}
	case 11: {
		struct fss_DeleteShareMapping *r2 = (struct fss_DeleteShareMapping *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_DeleteShareMapping, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_DeleteShareMapping(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_DeleteShareMapping will reply async\n"));
		}
		break;
	}
	case 12: {
		struct fss_PrepareShadowCopySet *r2 = (struct fss_PrepareShadowCopySet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(fss_PrepareShadowCopySet, NDR_IN, r2);
		}
		r2->out.result = dcesrv_fss_PrepareShadowCopySet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_PrepareShadowCopySet will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_FileServerVssAgent, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS FileServerVssAgent__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct fss_GetSupportedVersion *r2 = (struct fss_GetSupportedVersion *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_GetSupportedVersion replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_GetSupportedVersion, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_GetSupportedVersion\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct fss_SetContext *r2 = (struct fss_SetContext *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_SetContext replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_SetContext, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_SetContext\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct fss_StartShadowCopySet *r2 = (struct fss_StartShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_StartShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_StartShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_StartShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct fss_AddToShadowCopySet *r2 = (struct fss_AddToShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_AddToShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_AddToShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_AddToShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct fss_CommitShadowCopySet *r2 = (struct fss_CommitShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_CommitShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_CommitShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_CommitShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct fss_ExposeShadowCopySet *r2 = (struct fss_ExposeShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_ExposeShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_ExposeShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_ExposeShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct fss_RecoveryCompleteShadowCopySet *r2 = (struct fss_RecoveryCompleteShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_RecoveryCompleteShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_RecoveryCompleteShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_RecoveryCompleteShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct fss_AbortShadowCopySet *r2 = (struct fss_AbortShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_AbortShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_AbortShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_AbortShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct fss_IsPathSupported *r2 = (struct fss_IsPathSupported *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_IsPathSupported replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_IsPathSupported, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_IsPathSupported\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct fss_IsPathShadowCopied *r2 = (struct fss_IsPathShadowCopied *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_IsPathShadowCopied replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_IsPathShadowCopied, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_IsPathShadowCopied\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 10: {
		struct fss_GetShareMapping *r2 = (struct fss_GetShareMapping *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_GetShareMapping replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_GetShareMapping, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_GetShareMapping\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 11: {
		struct fss_DeleteShareMapping *r2 = (struct fss_DeleteShareMapping *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_DeleteShareMapping replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_DeleteShareMapping, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_DeleteShareMapping\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 12: {
		struct fss_PrepareShadowCopySet *r2 = (struct fss_PrepareShadowCopySet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function fss_PrepareShadowCopySet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(fss_PrepareShadowCopySet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in fss_PrepareShadowCopySet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_FileServerVssAgent, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS FileServerVssAgent__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_FileServerVssAgent.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_FileServerVssAgent_interface = {
	.name		    = "FileServerVssAgent",
	.syntax_id          = {{0xa8e0653c,0x2744,0x4389,{0xa6,0x1d},{0x73,0x73,0xdf,0x8b,0x22,0x92}},1.0},
	.bind		    = FileServerVssAgent__op_bind,
	.unbind		    = FileServerVssAgent__op_unbind,
	.ndr_pull	    = FileServerVssAgent__op_ndr_pull,
	.dispatch	    = FileServerVssAgent__op_dispatch,
	.reply		    = FileServerVssAgent__op_reply,
	.ndr_push	    = FileServerVssAgent__op_ndr_push,
#ifdef DCESRV_INTERFACE_FILESERVERVSSAGENT_FLAGS
	.flags              = DCESRV_INTERFACE_FILESERVERVSSAGENT_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS FileServerVssAgent__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_FileServerVssAgent.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_FileServerVssAgent.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_FileServerVssAgent_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("FileServerVssAgent_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool FileServerVssAgent__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_FileServerVssAgent_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_FileServerVssAgent_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_FileServerVssAgent_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool FileServerVssAgent__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_FileServerVssAgent_interface.name, name)==0) {
		memcpy(iface, &dcesrv_FileServerVssAgent_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_FileServerVssAgent_init(TALLOC_CTX *ctx)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "FileServerVssAgent",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_FILESERVERVSSAGENT_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_FILESERVERVSSAGENT_INIT_SERVER,
#else
	    .init_server = FileServerVssAgent__op_init_server,
#endif
	    .interface_by_uuid = FileServerVssAgent__op_interface_by_uuid,
	    .interface_by_name = FileServerVssAgent__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'FileServerVssAgent' endpoint server!\n"));
		return ret;
	}

	return ret;
}

