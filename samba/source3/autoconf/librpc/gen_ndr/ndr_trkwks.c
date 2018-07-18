/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_trkwks.h"

static enum ndr_err_code ndr_push_trkwks_Unknown0(struct ndr_push *ndr, int flags, const struct trkwks_Unknown0 *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_trkwks_Unknown0(struct ndr_pull *ndr, int flags, struct trkwks_Unknown0 *r)
{
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_trkwks_Unknown0(struct ndr_print *ndr, const char *name, int flags, const struct trkwks_Unknown0 *r)
{
	ndr_print_struct(ndr, name, "trkwks_Unknown0");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "trkwks_Unknown0");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "trkwks_Unknown0");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct ndr_interface_call trkwks_calls[] = {
	{
		"trkwks_Unknown0",
		sizeof(struct trkwks_Unknown0),
		(ndr_push_flags_fn_t) ndr_push_trkwks_Unknown0,
		(ndr_pull_flags_fn_t) ndr_pull_trkwks_Unknown0,
		(ndr_print_function_t) ndr_print_trkwks_Unknown0,
		{ 0, NULL },
		{ 0, NULL },
	},
	{ NULL, 0, NULL, NULL, NULL }
};

static const char * const trkwks_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\trkwks]", 
};

static const struct ndr_interface_string_array trkwks_endpoints = {
	.count	= 1,
	.names	= trkwks_endpoint_strings
};

static const char * const trkwks_authservice_strings[] = {
	"host", 
};

static const struct ndr_interface_string_array trkwks_authservices = {
	.count	= 1,
	.names	= trkwks_authservice_strings
};


const struct ndr_interface_table ndr_table_trkwks = {
	.name		= "trkwks",
	.syntax_id	= {
		{0x300f3532,0x38cc,0x11d0,{0xa3,0xf0},{0x00,0x20,0xaf,0x6b,0x0a,0xdd}},
		NDR_TRKWKS_VERSION
	},
	.helpstring	= NDR_TRKWKS_HELPSTRING,
	.num_calls	= 1,
	.calls		= trkwks_calls,
	.endpoints	= &trkwks_endpoints,
	.authservices	= &trkwks_authservices
};
