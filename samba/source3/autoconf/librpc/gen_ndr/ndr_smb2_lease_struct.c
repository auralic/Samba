/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_smb2_lease_struct.h"

_PUBLIC_ enum ndr_err_code ndr_push_smb2_lease_key(struct ndr_push *ndr, int ndr_flags, const struct smb2_lease_key *r)
{
	uint32_t cntr_data_0;
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		for (cntr_data_0 = 0; cntr_data_0 < (2); cntr_data_0++) {
			NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->data[cntr_data_0]));
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_smb2_lease_key(struct ndr_pull *ndr, int ndr_flags, struct smb2_lease_key *r)
{
	uint32_t size_data_0 = 0;
	uint32_t cntr_data_0;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		size_data_0 = 2;
		for (cntr_data_0 = 0; cntr_data_0 < (size_data_0); cntr_data_0++) {
			NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->data[cntr_data_0]));
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb2_lease_key(struct ndr_print *ndr, const char *name, const struct smb2_lease_key *r)
{
	uint32_t cntr_data_0;
	ndr_print_struct(ndr, name, "smb2_lease_key");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr->print(ndr, "%s: ARRAY(%d)", "data", (int)2);
	ndr->depth++;
	for (cntr_data_0 = 0; cntr_data_0 < (2); cntr_data_0++) {
		ndr_print_hyper(ndr, "data", r->data[cntr_data_0]);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_smb2_lease_state(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_smb2_lease_state(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb2_lease_state(struct ndr_print *ndr, const char *name, uint32_t r)
{
	ndr_print_uint32(ndr, name, r);
	ndr->depth++;
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SMB2_LEASE_READ", SMB2_LEASE_READ, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SMB2_LEASE_HANDLE", SMB2_LEASE_HANDLE, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SMB2_LEASE_WRITE", SMB2_LEASE_WRITE, r);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_smb2_lease(struct ndr_push *ndr, int ndr_flags, const struct smb2_lease *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_smb2_lease_key(ndr, NDR_SCALARS, &r->lease_key));
		NDR_CHECK(ndr_push_smb2_lease_state(ndr, NDR_SCALARS, r->lease_state));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->lease_flags));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->lease_duration));
		NDR_CHECK(ndr_push_smb2_lease_key(ndr, NDR_SCALARS, &r->parent_lease_key));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->lease_version));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->lease_epoch));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_smb2_lease(struct ndr_pull *ndr, int ndr_flags, struct smb2_lease *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_smb2_lease_key(ndr, NDR_SCALARS, &r->lease_key));
		NDR_CHECK(ndr_pull_smb2_lease_state(ndr, NDR_SCALARS, &r->lease_state));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->lease_flags));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->lease_duration));
		NDR_CHECK(ndr_pull_smb2_lease_key(ndr, NDR_SCALARS, &r->parent_lease_key));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->lease_version));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->lease_epoch));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb2_lease(struct ndr_print *ndr, const char *name, const struct smb2_lease *r)
{
	ndr_print_struct(ndr, name, "smb2_lease");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_smb2_lease_key(ndr, "lease_key", &r->lease_key);
	ndr_print_smb2_lease_state(ndr, "lease_state", r->lease_state);
	ndr_print_uint32(ndr, "lease_flags", r->lease_flags);
	ndr_print_hyper(ndr, "lease_duration", r->lease_duration);
	ndr_print_smb2_lease_key(ndr, "parent_lease_key", &r->parent_lease_key);
	ndr_print_uint16(ndr, "lease_version", r->lease_version);
	ndr_print_uint16(ndr, "lease_epoch", r->lease_epoch);
	ndr->depth--;
}

