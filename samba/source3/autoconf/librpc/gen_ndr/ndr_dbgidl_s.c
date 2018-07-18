/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_dbgidl.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_dbgidl_init(TALLOC_CTX *);

/* dbgidl - dcerpc server boilerplate generated by pidl */


static NTSTATUS dbgidl__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_DBGIDL_BIND
	return DCESRV_INTERFACE_DBGIDL_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void dbgidl__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_DBGIDL_UNBIND
	DCESRV_INTERFACE_DBGIDL_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS dbgidl__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_dbgidl.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_dbgidl.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_dbgidl.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_dbgidl.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_dbgidl, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS dbgidl__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct dummy_dbgidl *r2 = (struct dummy_dbgidl *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(dummy_dbgidl, NDR_IN, r2);
		}
		dcesrv_dummy_dbgidl(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function dummy_dbgidl will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_dbgidl, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS dbgidl__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct dummy_dbgidl *r2 = (struct dummy_dbgidl *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function dummy_dbgidl replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(dummy_dbgidl, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in dummy_dbgidl\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_dbgidl, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS dbgidl__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_dbgidl.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_dbgidl_interface = {
	.name		    = "dbgidl",
	.syntax_id          = {{0x1d55b526,0xc137,0x46c5,{0xab,0x79},{0x63,0x8f,0x2a,0x68,0xe8,0x69}},1.0},
	.bind		    = dbgidl__op_bind,
	.unbind		    = dbgidl__op_unbind,
	.ndr_pull	    = dbgidl__op_ndr_pull,
	.dispatch	    = dbgidl__op_dispatch,
	.reply		    = dbgidl__op_reply,
	.ndr_push	    = dbgidl__op_ndr_push,
#ifdef DCESRV_INTERFACE_DBGIDL_FLAGS
	.flags              = DCESRV_INTERFACE_DBGIDL_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS dbgidl__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_dbgidl.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_dbgidl.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_dbgidl_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("dbgidl_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool dbgidl__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_dbgidl_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_dbgidl_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_dbgidl_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool dbgidl__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_dbgidl_interface.name, name)==0) {
		memcpy(iface, &dcesrv_dbgidl_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_dbgidl_init(TALLOC_CTX *ctx)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "dbgidl",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_DBGIDL_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_DBGIDL_INIT_SERVER,
#else
	    .init_server = dbgidl__op_init_server,
#endif
	    .interface_by_uuid = dbgidl__op_interface_by_uuid,
	    .interface_by_name = dbgidl__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'dbgidl' endpoint server!\n"));
		return ret;
	}

	return ret;
}

