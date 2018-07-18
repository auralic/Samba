/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/preg.h"

#ifndef _HEADER_NDR_preg
#define _HEADER_NDR_preg

#include "../librpc/ndr/ndr_preg.h"
#define NDR_PREG_UUID "67655250-0000-0000-0000-00000000"
#define NDR_PREG_VERSION 0.0
#define NDR_PREG_NAME "preg"
#define NDR_PREG_HELPSTRING "PReg structure"
extern const struct ndr_interface_table ndr_table_preg;
#define NDR_DECODE_PREG_FILE (0x00)

#define NDR_PREG_CALL_COUNT (1)
enum ndr_err_code ndr_push_preg_entry(struct ndr_push *ndr, int ndr_flags, const struct preg_entry *r);
enum ndr_err_code ndr_pull_preg_entry(struct ndr_pull *ndr, int ndr_flags, struct preg_entry *r);
void ndr_print_preg_entry(struct ndr_print *ndr, const char *name, const struct preg_entry *r);
enum ndr_err_code ndr_push_preg_header(struct ndr_push *ndr, int ndr_flags, const struct preg_header *r);
enum ndr_err_code ndr_pull_preg_header(struct ndr_pull *ndr, int ndr_flags, struct preg_header *r);
void ndr_print_preg_header(struct ndr_print *ndr, const char *name, const struct preg_header *r);
enum ndr_err_code ndr_push_preg_file(struct ndr_push *ndr, int ndr_flags, const struct preg_file *r);
enum ndr_err_code ndr_pull_preg_file(struct ndr_pull *ndr, int ndr_flags, struct preg_file *r);
void ndr_print_preg_file(struct ndr_print *ndr, const char *name, const struct preg_file *r);
void ndr_print_decode_preg_file(struct ndr_print *ndr, const char *name, int flags, const struct decode_preg_file *r);
#endif /* _HEADER_NDR_preg */
