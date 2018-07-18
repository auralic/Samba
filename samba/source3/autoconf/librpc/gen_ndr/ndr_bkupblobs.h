/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/bkupblobs.h"

#ifndef _HEADER_NDR_bkup
#define _HEADER_NDR_bkup

#define NDR_BKUP_CALL_COUNT (0)
void ndr_print_bkup_StreamId(struct ndr_print *ndr, const char *name, enum bkup_StreamId r);
void ndr_print_bkup_StreamAttribute(struct ndr_print *ndr, const char *name, enum bkup_StreamAttribute r);
void ndr_print_bkup_StreamData(struct ndr_print *ndr, const char *name, const union bkup_StreamData *r);
enum ndr_err_code ndr_push_bkup_Win32StreamId(struct ndr_push *ndr, int ndr_flags, const struct bkup_Win32StreamId *r);
enum ndr_err_code ndr_pull_bkup_Win32StreamId(struct ndr_pull *ndr, int ndr_flags, struct bkup_Win32StreamId *r);
void ndr_print_bkup_Win32StreamId(struct ndr_print *ndr, const char *name, const struct bkup_Win32StreamId *r);
enum ndr_err_code ndr_push_bkup_NTBackupFile(struct ndr_push *ndr, int ndr_flags, const struct bkup_NTBackupFile *r);
enum ndr_err_code ndr_pull_bkup_NTBackupFile(struct ndr_pull *ndr, int ndr_flags, struct bkup_NTBackupFile *r);
void ndr_print_bkup_NTBackupFile(struct ndr_print *ndr, const char *name, const struct bkup_NTBackupFile *r);
#endif /* _HEADER_NDR_bkup */
