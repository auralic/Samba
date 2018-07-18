/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/winbind.h"

#ifndef _HEADER_NDR_winbind
#define _HEADER_NDR_winbind

#define NDR_WINBIND_UUID "bf09192c-ed60-4928-9dff-d0d7bcb03ed8"
#define NDR_WINBIND_VERSION 1.0
#define NDR_WINBIND_NAME "winbind"
#define NDR_WINBIND_HELPSTRING "winbind parent-child protocol"
extern const struct ndr_interface_table ndr_table_winbind;
#define NDR_WBINT_PING (0x00)

#define NDR_WBINT_LOOKUPSID (0x01)

#define NDR_WBINT_LOOKUPSIDS (0x02)

#define NDR_WBINT_LOOKUPNAME (0x03)

#define NDR_WBINT_SIDS2UNIXIDS (0x04)

#define NDR_WBINT_UNIXIDS2SIDS (0x05)

#define NDR_WBINT_ALLOCATEUID (0x06)

#define NDR_WBINT_ALLOCATEGID (0x07)

#define NDR_WBINT_GETNSSINFO (0x08)

#define NDR_WBINT_LOOKUPUSERALIASES (0x09)

#define NDR_WBINT_LOOKUPUSERGROUPS (0x0a)

#define NDR_WBINT_QUERYSEQUENCENUMBER (0x0b)

#define NDR_WBINT_LOOKUPGROUPMEMBERS (0x0c)

#define NDR_WBINT_QUERYGROUPLIST (0x0d)

#define NDR_WBINT_QUERYUSERRIDLIST (0x0e)

#define NDR_WBINT_DSGETDCNAME (0x0f)

#define NDR_WBINT_LOOKUPRIDS (0x10)

#define NDR_WBINT_CHECKMACHINEACCOUNT (0x11)

#define NDR_WBINT_CHANGEMACHINEACCOUNT (0x12)

#define NDR_WBINT_PINGDC (0x13)

#define NDR_WINBIND_SAMLOGON (0x14)

#define NDR_WINBIND_DSRUPDATEREADONLYSERVERDNSRECORDS (0x15)

#define NDR_WINBIND_LOGONCONTROL (0x16)

#define NDR_WINBIND_GETFORESTTRUSTINFORMATION (0x17)

#define NDR_WINBIND_SENDTOSAM (0x18)

#define NDR_WINBIND_CALL_COUNT (25)
void ndr_print_wbint_TransID(struct ndr_print *ndr, const char *name, const struct wbint_TransID *r);
void ndr_print_wbint_TransIDArray(struct ndr_print *ndr, const char *name, const struct wbint_TransIDArray *r);
enum ndr_err_code ndr_push_wbint_userinfo(struct ndr_push *ndr, int ndr_flags, const struct wbint_userinfo *r);
enum ndr_err_code ndr_pull_wbint_userinfo(struct ndr_pull *ndr, int ndr_flags, struct wbint_userinfo *r);
void ndr_print_wbint_userinfo(struct ndr_print *ndr, const char *name, const struct wbint_userinfo *r);
enum ndr_err_code ndr_push_wbint_SidArray(struct ndr_push *ndr, int ndr_flags, const struct wbint_SidArray *r);
enum ndr_err_code ndr_pull_wbint_SidArray(struct ndr_pull *ndr, int ndr_flags, struct wbint_SidArray *r);
void ndr_print_wbint_SidArray(struct ndr_print *ndr, const char *name, const struct wbint_SidArray *r);
enum ndr_err_code ndr_push_wbint_RidArray(struct ndr_push *ndr, int ndr_flags, const struct wbint_RidArray *r);
enum ndr_err_code ndr_pull_wbint_RidArray(struct ndr_pull *ndr, int ndr_flags, struct wbint_RidArray *r);
void ndr_print_wbint_RidArray(struct ndr_print *ndr, const char *name, const struct wbint_RidArray *r);
enum ndr_err_code ndr_push_wbint_Principal(struct ndr_push *ndr, int ndr_flags, const struct wbint_Principal *r);
enum ndr_err_code ndr_pull_wbint_Principal(struct ndr_pull *ndr, int ndr_flags, struct wbint_Principal *r);
void ndr_print_wbint_Principal(struct ndr_print *ndr, const char *name, const struct wbint_Principal *r);
enum ndr_err_code ndr_push_wbint_Principals(struct ndr_push *ndr, int ndr_flags, const struct wbint_Principals *r);
enum ndr_err_code ndr_pull_wbint_Principals(struct ndr_pull *ndr, int ndr_flags, struct wbint_Principals *r);
void ndr_print_wbint_Principals(struct ndr_print *ndr, const char *name, const struct wbint_Principals *r);
enum ndr_err_code ndr_push_wbint_userinfos(struct ndr_push *ndr, int ndr_flags, const struct wbint_userinfos *r);
enum ndr_err_code ndr_pull_wbint_userinfos(struct ndr_pull *ndr, int ndr_flags, struct wbint_userinfos *r);
void ndr_print_wbint_userinfos(struct ndr_print *ndr, const char *name, const struct wbint_userinfos *r);
void ndr_print_wbint_Ping(struct ndr_print *ndr, const char *name, int flags, const struct wbint_Ping *r);
void ndr_print_wbint_LookupSid(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupSid *r);
void ndr_print_wbint_LookupSids(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupSids *r);
void ndr_print_wbint_LookupName(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupName *r);
void ndr_print_wbint_Sids2UnixIDs(struct ndr_print *ndr, const char *name, int flags, const struct wbint_Sids2UnixIDs *r);
void ndr_print_wbint_UnixIDs2Sids(struct ndr_print *ndr, const char *name, int flags, const struct wbint_UnixIDs2Sids *r);
void ndr_print_wbint_AllocateUid(struct ndr_print *ndr, const char *name, int flags, const struct wbint_AllocateUid *r);
void ndr_print_wbint_AllocateGid(struct ndr_print *ndr, const char *name, int flags, const struct wbint_AllocateGid *r);
void ndr_print_wbint_GetNssInfo(struct ndr_print *ndr, const char *name, int flags, const struct wbint_GetNssInfo *r);
void ndr_print_wbint_LookupUserAliases(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupUserAliases *r);
void ndr_print_wbint_LookupUserGroups(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupUserGroups *r);
void ndr_print_wbint_QuerySequenceNumber(struct ndr_print *ndr, const char *name, int flags, const struct wbint_QuerySequenceNumber *r);
void ndr_print_wbint_LookupGroupMembers(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupGroupMembers *r);
void ndr_print_wbint_QueryGroupList(struct ndr_print *ndr, const char *name, int flags, const struct wbint_QueryGroupList *r);
void ndr_print_wbint_QueryUserRidList(struct ndr_print *ndr, const char *name, int flags, const struct wbint_QueryUserRidList *r);
void ndr_print_wbint_DsGetDcName(struct ndr_print *ndr, const char *name, int flags, const struct wbint_DsGetDcName *r);
void ndr_print_wbint_LookupRids(struct ndr_print *ndr, const char *name, int flags, const struct wbint_LookupRids *r);
void ndr_print_wbint_CheckMachineAccount(struct ndr_print *ndr, const char *name, int flags, const struct wbint_CheckMachineAccount *r);
void ndr_print_wbint_ChangeMachineAccount(struct ndr_print *ndr, const char *name, int flags, const struct wbint_ChangeMachineAccount *r);
void ndr_print_wbint_PingDc(struct ndr_print *ndr, const char *name, int flags, const struct wbint_PingDc *r);
void ndr_print_winbind_SamLogon(struct ndr_print *ndr, const char *name, int flags, const struct winbind_SamLogon *r);
void ndr_print_winbind_DsrUpdateReadOnlyServerDnsRecords(struct ndr_print *ndr, const char *name, int flags, const struct winbind_DsrUpdateReadOnlyServerDnsRecords *r);
void ndr_print_winbind_LogonControl(struct ndr_print *ndr, const char *name, int flags, const struct winbind_LogonControl *r);
void ndr_print_winbind_GetForestTrustInformation(struct ndr_print *ndr, const char *name, int flags, const struct winbind_GetForestTrustInformation *r);
void ndr_print_winbind_SendToSam(struct ndr_print *ndr, const char *name, int flags, const struct winbind_SendToSam *r);
#endif /* _HEADER_NDR_winbind */
