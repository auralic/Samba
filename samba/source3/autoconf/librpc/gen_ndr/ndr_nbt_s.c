/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_nbt.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_nbt_init(TALLOC_CTX *);

/* nbt - dcerpc server boilerplate generated by pidl */


static NTSTATUS nbt__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_NBT_BIND
	return DCESRV_INTERFACE_NBT_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void nbt__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_NBT_UNBIND
	DCESRV_INTERFACE_NBT_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS nbt__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_nbt.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_nbt.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_nbt.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_nbt.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_nbt, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS nbt__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_netlogon_samlogon_response_packet *r2 = (struct decode_netlogon_samlogon_response_packet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_netlogon_samlogon_response_packet, NDR_IN, r2);
		}
		dcesrv_decode_netlogon_samlogon_response_packet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_netlogon_samlogon_response_packet will reply async\n"));
		}
		break;
	}
	case 1: {
		struct decode_nbt_netlogon_packet *r2 = (struct decode_nbt_netlogon_packet *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_nbt_netlogon_packet, NDR_IN, r2);
		}
		dcesrv_decode_nbt_netlogon_packet(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_nbt_netlogon_packet will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_nbt, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS nbt__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_netlogon_samlogon_response_packet *r2 = (struct decode_netlogon_samlogon_response_packet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_netlogon_samlogon_response_packet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_netlogon_samlogon_response_packet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_netlogon_samlogon_response_packet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct decode_nbt_netlogon_packet *r2 = (struct decode_nbt_netlogon_packet *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_nbt_netlogon_packet replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_nbt_netlogon_packet, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_nbt_netlogon_packet\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_nbt, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS nbt__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_nbt.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_nbt_interface = {
	.name		    = "nbt",
	.syntax_id          = {{0x6def41b6,0x86e4,0x4c32,{0x99,0x7c},{0xed,0x33,0xaf,0x7b,0xcd,0x8e}},0.0},
	.bind		    = nbt__op_bind,
	.unbind		    = nbt__op_unbind,
	.ndr_pull	    = nbt__op_ndr_pull,
	.dispatch	    = nbt__op_dispatch,
	.reply		    = nbt__op_reply,
	.ndr_push	    = nbt__op_ndr_push,
#ifdef DCESRV_INTERFACE_NBT_FLAGS
	.flags              = DCESRV_INTERFACE_NBT_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS nbt__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_nbt.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_nbt.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_nbt_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("nbt_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool nbt__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_nbt_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_nbt_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_nbt_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool nbt__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_nbt_interface.name, name)==0) {
		memcpy(iface, &dcesrv_nbt_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_nbt_init(TALLOC_CTX *ctx)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "nbt",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_NBT_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_NBT_INIT_SERVER,
#else
	    .init_server = nbt__op_init_server,
#endif
	    .interface_by_uuid = nbt__op_interface_by_uuid,
	    .interface_by_name = nbt__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'nbt' endpoint server!\n"));
		return ret;
	}

	return ret;
}

