/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_mgmt.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_mgmt_init(TALLOC_CTX *);

/* mgmt - dcerpc server boilerplate generated by pidl */


static NTSTATUS mgmt__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_MGMT_BIND
	return DCESRV_INTERFACE_MGMT_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void mgmt__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_MGMT_UNBIND
	DCESRV_INTERFACE_MGMT_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS mgmt__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_mgmt.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_mgmt.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_mgmt.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_mgmt.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_mgmt, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS mgmt__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct mgmt_inq_if_ids *r2 = (struct mgmt_inq_if_ids *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_inq_if_ids, NDR_IN, r2);
		}
		r2->out.result = dcesrv_mgmt_inq_if_ids(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_inq_if_ids will reply async\n"));
		}
		break;
	}
	case 1: {
		struct mgmt_inq_stats *r2 = (struct mgmt_inq_stats *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_inq_stats, NDR_IN, r2);
		}
		r2->out.result = dcesrv_mgmt_inq_stats(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_inq_stats will reply async\n"));
		}
		break;
	}
	case 2: {
		struct mgmt_is_server_listening *r2 = (struct mgmt_is_server_listening *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_is_server_listening, NDR_IN, r2);
		}
		r2->out.result = dcesrv_mgmt_is_server_listening(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_is_server_listening will reply async\n"));
		}
		break;
	}
	case 3: {
		struct mgmt_stop_server_listening *r2 = (struct mgmt_stop_server_listening *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_stop_server_listening, NDR_IN, r2);
		}
		r2->out.result = dcesrv_mgmt_stop_server_listening(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_stop_server_listening will reply async\n"));
		}
		break;
	}
	case 4: {
		struct mgmt_inq_princ_name *r2 = (struct mgmt_inq_princ_name *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_inq_princ_name, NDR_IN, r2);
		}
		r2->out.result = dcesrv_mgmt_inq_princ_name(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_inq_princ_name will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_mgmt, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS mgmt__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct mgmt_inq_if_ids *r2 = (struct mgmt_inq_if_ids *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_inq_if_ids replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_inq_if_ids, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in mgmt_inq_if_ids\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct mgmt_inq_stats *r2 = (struct mgmt_inq_stats *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_inq_stats replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_inq_stats, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in mgmt_inq_stats\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct mgmt_is_server_listening *r2 = (struct mgmt_is_server_listening *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_is_server_listening replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_is_server_listening, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in mgmt_is_server_listening\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct mgmt_stop_server_listening *r2 = (struct mgmt_stop_server_listening *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_stop_server_listening replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_stop_server_listening, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in mgmt_stop_server_listening\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct mgmt_inq_princ_name *r2 = (struct mgmt_inq_princ_name *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function mgmt_inq_princ_name replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(mgmt_inq_princ_name, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in mgmt_inq_princ_name\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_mgmt, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS mgmt__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_mgmt.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_mgmt_interface = {
	.name		    = "mgmt",
	.syntax_id          = {{0xafa8bd80,0x7d8a,0x11c9,{0xbe,0xf4},{0x08,0x00,0x2b,0x10,0x29,0x89}},1.0},
	.bind		    = mgmt__op_bind,
	.unbind		    = mgmt__op_unbind,
	.ndr_pull	    = mgmt__op_ndr_pull,
	.dispatch	    = mgmt__op_dispatch,
	.reply		    = mgmt__op_reply,
	.ndr_push	    = mgmt__op_ndr_push,
#ifdef DCESRV_INTERFACE_MGMT_FLAGS
	.flags              = DCESRV_INTERFACE_MGMT_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS mgmt__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_mgmt.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_mgmt.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_mgmt_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("mgmt_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool mgmt__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_mgmt_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_mgmt_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_mgmt_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool mgmt__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_mgmt_interface.name, name)==0) {
		memcpy(iface, &dcesrv_mgmt_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_mgmt_init(TALLOC_CTX *ctx)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "mgmt",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_MGMT_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_MGMT_INIT_SERVER,
#else
	    .init_server = mgmt__op_init_server,
#endif
	    .interface_by_uuid = mgmt__op_interface_by_uuid,
	    .interface_by_name = mgmt__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'mgmt' endpoint server!\n"));
		return ret;
	}

	return ret;
}

