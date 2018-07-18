/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/rot.h"

#ifndef _HEADER_NDR_rot
#define _HEADER_NDR_rot

#define NDR_ROT_UUID "b9e79e60-3d52-11ce-aaa1-00006901293f"
#define NDR_ROT_VERSION 131072
#define NDR_ROT_NAME "rot"
#define NDR_ROT_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_rot;
#define NDR_ROT_ADD (0x00)

#define NDR_ROT_REMOVE (0x01)

#define NDR_ROT_IS_LISTED (0x02)

#define NDR_ROT_GET_INTERFACE_POINTER (0x03)

#define NDR_ROT_SET_MODIFICATION_TIME (0x04)

#define NDR_ROT_GET_MODIFICATION_TIME (0x05)

#define NDR_ROT_ENUM (0x06)

#define NDR_ROT_CALL_COUNT (7)
void ndr_print_rot_add(struct ndr_print *ndr, const char *name, int flags, const struct rot_add *r);
void ndr_print_rot_remove(struct ndr_print *ndr, const char *name, int flags, const struct rot_remove *r);
void ndr_print_rot_is_listed(struct ndr_print *ndr, const char *name, int flags, const struct rot_is_listed *r);
void ndr_print_rot_get_interface_pointer(struct ndr_print *ndr, const char *name, int flags, const struct rot_get_interface_pointer *r);
void ndr_print_rot_set_modification_time(struct ndr_print *ndr, const char *name, int flags, const struct rot_set_modification_time *r);
void ndr_print_rot_get_modification_time(struct ndr_print *ndr, const char *name, int flags, const struct rot_get_modification_time *r);
void ndr_print_rot_enum(struct ndr_print *ndr, const char *name, int flags, const struct rot_enum *r);
#endif /* _HEADER_NDR_rot */
