/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_efs.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_efs_init(TALLOC_CTX *);

/* efs - dcerpc server boilerplate generated by pidl */


static NTSTATUS efs__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_EFS_BIND
	return DCESRV_INTERFACE_EFS_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void efs__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_EFS_UNBIND
	DCESRV_INTERFACE_EFS_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS efs__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_efs.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_efs.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_efs.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_efs.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_efs, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS efs__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct EfsRpcOpenFileRaw *r2 = (struct EfsRpcOpenFileRaw *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcOpenFileRaw, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcOpenFileRaw(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcOpenFileRaw will reply async\n"));
		}
		break;
	}
	case 1: {
		struct EfsRpcReadFileRaw *r2 = (struct EfsRpcReadFileRaw *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcReadFileRaw, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcReadFileRaw(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcReadFileRaw will reply async\n"));
		}
		break;
	}
	case 2: {
		struct EfsRpcWriteFileRaw *r2 = (struct EfsRpcWriteFileRaw *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcWriteFileRaw, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcWriteFileRaw(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcWriteFileRaw will reply async\n"));
		}
		break;
	}
	case 3: {
		struct EfsRpcCloseRaw *r2 = (struct EfsRpcCloseRaw *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcCloseRaw, NDR_IN, r2);
		}
		dcesrv_EfsRpcCloseRaw(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcCloseRaw will reply async\n"));
		}
		break;
	}
	case 4: {
		struct EfsRpcEncryptFileSrv *r2 = (struct EfsRpcEncryptFileSrv *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcEncryptFileSrv, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcEncryptFileSrv(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcEncryptFileSrv will reply async\n"));
		}
		break;
	}
	case 5: {
		struct EfsRpcDecryptFileSrv *r2 = (struct EfsRpcDecryptFileSrv *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcDecryptFileSrv, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcDecryptFileSrv(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcDecryptFileSrv will reply async\n"));
		}
		break;
	}
	case 6: {
		struct EfsRpcQueryUsersOnFile *r2 = (struct EfsRpcQueryUsersOnFile *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcQueryUsersOnFile, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcQueryUsersOnFile(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcQueryUsersOnFile will reply async\n"));
		}
		break;
	}
	case 7: {
		struct EfsRpcQueryRecoveryAgents *r2 = (struct EfsRpcQueryRecoveryAgents *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcQueryRecoveryAgents, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcQueryRecoveryAgents(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcQueryRecoveryAgents will reply async\n"));
		}
		break;
	}
	case 8: {
		struct EfsRpcRemoveUsersFromFile *r2 = (struct EfsRpcRemoveUsersFromFile *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcRemoveUsersFromFile, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcRemoveUsersFromFile(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcRemoveUsersFromFile will reply async\n"));
		}
		break;
	}
	case 9: {
		struct EfsRpcAddUsersToFile *r2 = (struct EfsRpcAddUsersToFile *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcAddUsersToFile, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcAddUsersToFile(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcAddUsersToFile will reply async\n"));
		}
		break;
	}
	case 10: {
		struct EfsRpcSetFileEncryptionKey *r2 = (struct EfsRpcSetFileEncryptionKey *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcSetFileEncryptionKey, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcSetFileEncryptionKey(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcSetFileEncryptionKey will reply async\n"));
		}
		break;
	}
	case 11: {
		struct EfsRpcNotSupported *r2 = (struct EfsRpcNotSupported *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcNotSupported, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcNotSupported(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcNotSupported will reply async\n"));
		}
		break;
	}
	case 12: {
		struct EfsRpcFileKeyInfo *r2 = (struct EfsRpcFileKeyInfo *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcFileKeyInfo, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcFileKeyInfo(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcFileKeyInfo will reply async\n"));
		}
		break;
	}
	case 13: {
		struct EfsRpcDuplicateEncryptionInfoFile *r2 = (struct EfsRpcDuplicateEncryptionInfoFile *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcDuplicateEncryptionInfoFile, NDR_IN, r2);
		}
		r2->out.result = dcesrv_EfsRpcDuplicateEncryptionInfoFile(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcDuplicateEncryptionInfoFile will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_efs, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS efs__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct EfsRpcOpenFileRaw *r2 = (struct EfsRpcOpenFileRaw *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcOpenFileRaw replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcOpenFileRaw, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcOpenFileRaw\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct EfsRpcReadFileRaw *r2 = (struct EfsRpcReadFileRaw *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcReadFileRaw replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcReadFileRaw, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcReadFileRaw\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct EfsRpcWriteFileRaw *r2 = (struct EfsRpcWriteFileRaw *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcWriteFileRaw replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcWriteFileRaw, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcWriteFileRaw\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct EfsRpcCloseRaw *r2 = (struct EfsRpcCloseRaw *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcCloseRaw replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcCloseRaw, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcCloseRaw\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct EfsRpcEncryptFileSrv *r2 = (struct EfsRpcEncryptFileSrv *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcEncryptFileSrv replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcEncryptFileSrv, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcEncryptFileSrv\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct EfsRpcDecryptFileSrv *r2 = (struct EfsRpcDecryptFileSrv *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcDecryptFileSrv replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcDecryptFileSrv, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcDecryptFileSrv\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct EfsRpcQueryUsersOnFile *r2 = (struct EfsRpcQueryUsersOnFile *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcQueryUsersOnFile replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcQueryUsersOnFile, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcQueryUsersOnFile\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct EfsRpcQueryRecoveryAgents *r2 = (struct EfsRpcQueryRecoveryAgents *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcQueryRecoveryAgents replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcQueryRecoveryAgents, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcQueryRecoveryAgents\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct EfsRpcRemoveUsersFromFile *r2 = (struct EfsRpcRemoveUsersFromFile *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcRemoveUsersFromFile replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcRemoveUsersFromFile, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcRemoveUsersFromFile\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct EfsRpcAddUsersToFile *r2 = (struct EfsRpcAddUsersToFile *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcAddUsersToFile replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcAddUsersToFile, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcAddUsersToFile\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 10: {
		struct EfsRpcSetFileEncryptionKey *r2 = (struct EfsRpcSetFileEncryptionKey *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcSetFileEncryptionKey replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcSetFileEncryptionKey, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcSetFileEncryptionKey\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 11: {
		struct EfsRpcNotSupported *r2 = (struct EfsRpcNotSupported *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcNotSupported replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcNotSupported, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcNotSupported\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 12: {
		struct EfsRpcFileKeyInfo *r2 = (struct EfsRpcFileKeyInfo *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcFileKeyInfo replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcFileKeyInfo, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcFileKeyInfo\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 13: {
		struct EfsRpcDuplicateEncryptionInfoFile *r2 = (struct EfsRpcDuplicateEncryptionInfoFile *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function EfsRpcDuplicateEncryptionInfoFile replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(EfsRpcDuplicateEncryptionInfoFile, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in EfsRpcDuplicateEncryptionInfoFile\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_efs, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS efs__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_efs.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_efs_interface = {
	.name		    = "efs",
	.syntax_id          = {{0xc681d488,0xd850,0x11d0,{0x8c,0x52},{0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},1.0},
	.bind		    = efs__op_bind,
	.unbind		    = efs__op_unbind,
	.ndr_pull	    = efs__op_ndr_pull,
	.dispatch	    = efs__op_dispatch,
	.reply		    = efs__op_reply,
	.ndr_push	    = efs__op_ndr_push,
#ifdef DCESRV_INTERFACE_EFS_FLAGS
	.flags              = DCESRV_INTERFACE_EFS_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS efs__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_efs.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_efs.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_efs_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("efs_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool efs__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_efs_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_efs_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_efs_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool efs__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_efs_interface.name, name)==0) {
		memcpy(iface, &dcesrv_efs_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_efs_init(TALLOC_CTX *ctx)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "efs",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_EFS_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_EFS_INIT_SERVER,
#else
	    .init_server = efs__op_init_server,
#endif
	    .interface_by_uuid = efs__op_interface_by_uuid,
	    .interface_by_name = efs__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'efs' endpoint server!\n"));
		return ret;
	}

	return ret;
}

