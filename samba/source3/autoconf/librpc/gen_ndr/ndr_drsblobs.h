/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/drsblobs.h"

#ifndef _HEADER_NDR_drsblobs
#define _HEADER_NDR_drsblobs

#include "../librpc/ndr/ndr_drsblobs.h"
#define NDR_DRSBLOBS_UUID "12345778-1234-abcd-0001-00000001"
#define NDR_DRSBLOBS_VERSION 0.0
#define NDR_DRSBLOBS_NAME "drsblobs"
#define NDR_DRSBLOBS_HELPSTRING "Active Directory Replication LDAP Blobs"
extern const struct ndr_interface_table ndr_table_drsblobs;
#define NDR_DECODE_REPLPROPERTYMETADATA1 (0x00)

#define NDR_DECODE_REPLPROPERTYMETADATA (0x01)

#define NDR_DECODE_REPLUPTODATEVECTOR (0x02)

#define NDR_DECODE_REPSFROMTO (0x03)

#define NDR_DECODE_PARTIALATTRIBUTESET (0x04)

#define NDR_DECODE_PREFIXMAP (0x05)

#define NDR_DECODE_LDAPCONTROLDIRSYNC (0x06)

#define NDR_DECODE_SUPPLEMENTALCREDENTIALS (0x07)

#define NDR_DECODE_PACKAGES (0x08)

#define NDR_DECODE_PRIMARYKERBEROS (0x09)

#define NDR_DECODE_PRIMARYCLEARTEXT (0x0a)

#define NDR_DECODE_PRIMARYWDIGEST (0x0b)

#define NDR_DECODE_PRIMARYSAMBAGPG (0x0c)

#define NDR_DECODE_PRIMARYUSERPASSWORDBLOB (0x0d)

#define NDR_DECODE_TRUSTAUTHINOUT (0x0e)

#define NDR_DECODE_TRUSTDOMAINPASSWORDS (0x0f)

#define NDR_DECODE_EXTENDEDERRORINFO (0x10)

#define NDR_DECODE_FORESTTRUSTINFO (0x11)

#define NDR_DRSBLOBS_CALL_COUNT (18)
enum ndr_err_code ndr_push_replPropertyMetaData1(struct ndr_push *ndr, int ndr_flags, const struct replPropertyMetaData1 *r);
enum ndr_err_code ndr_pull_replPropertyMetaData1(struct ndr_pull *ndr, int ndr_flags, struct replPropertyMetaData1 *r);
void ndr_print_replPropertyMetaData1(struct ndr_print *ndr, const char *name, const struct replPropertyMetaData1 *r);
void ndr_print_replPropertyMetaDataCtr1(struct ndr_print *ndr, const char *name, const struct replPropertyMetaDataCtr1 *r);
void ndr_print_replPropertyMetaDataCtr(struct ndr_print *ndr, const char *name, const union replPropertyMetaDataCtr *r);
enum ndr_err_code ndr_push_replPropertyMetaDataBlob(struct ndr_push *ndr, int ndr_flags, const struct replPropertyMetaDataBlob *r);
enum ndr_err_code ndr_pull_replPropertyMetaDataBlob(struct ndr_pull *ndr, int ndr_flags, struct replPropertyMetaDataBlob *r);
void ndr_print_replPropertyMetaDataBlob(struct ndr_print *ndr, const char *name, const struct replPropertyMetaDataBlob *r);
void ndr_print_replUpToDateVectorCtr1(struct ndr_print *ndr, const char *name, const struct replUpToDateVectorCtr1 *r);
void ndr_print_replUpToDateVectorCtr2(struct ndr_print *ndr, const char *name, const struct replUpToDateVectorCtr2 *r);
void ndr_print_replUpToDateVectorCtr(struct ndr_print *ndr, const char *name, const union replUpToDateVectorCtr *r);
enum ndr_err_code ndr_push_replUpToDateVectorBlob(struct ndr_push *ndr, int ndr_flags, const struct replUpToDateVectorBlob *r);
enum ndr_err_code ndr_pull_replUpToDateVectorBlob(struct ndr_pull *ndr, int ndr_flags, struct replUpToDateVectorBlob *r);
void ndr_print_replUpToDateVectorBlob(struct ndr_print *ndr, const char *name, const struct replUpToDateVectorBlob *r);
enum ndr_err_code ndr_push_repsFromTo1OtherInfo(struct ndr_push *ndr, int ndr_flags, const struct repsFromTo1OtherInfo *r);
enum ndr_err_code ndr_pull_repsFromTo1OtherInfo(struct ndr_pull *ndr, int ndr_flags, struct repsFromTo1OtherInfo *r);
void ndr_print_repsFromTo1OtherInfo(struct ndr_print *ndr, const char *name, const struct repsFromTo1OtherInfo *r);
size_t ndr_size_repsFromTo1OtherInfo(const struct repsFromTo1OtherInfo *r, int flags);
enum ndr_err_code ndr_push_repsFromTo1(struct ndr_push *ndr, int ndr_flags, const struct repsFromTo1 *r);
enum ndr_err_code ndr_pull_repsFromTo1(struct ndr_pull *ndr, int ndr_flags, struct repsFromTo1 *r);
void ndr_print_repsFromTo1(struct ndr_print *ndr, const char *name, const struct repsFromTo1 *r);
size_t ndr_size_repsFromTo1(const struct repsFromTo1 *r, int flags);
enum ndr_err_code ndr_push_repsFromTo2OtherInfo(struct ndr_push *ndr, int ndr_flags, const struct repsFromTo2OtherInfo *r);
enum ndr_err_code ndr_pull_repsFromTo2OtherInfo(struct ndr_pull *ndr, int ndr_flags, struct repsFromTo2OtherInfo *r);
void ndr_print_repsFromTo2OtherInfo(struct ndr_print *ndr, const char *name, const struct repsFromTo2OtherInfo *r);
size_t ndr_size_repsFromTo2OtherInfo(const struct repsFromTo2OtherInfo *r, int flags);
enum ndr_err_code ndr_push_repsFromTo2(struct ndr_push *ndr, int ndr_flags, const struct repsFromTo2 *r);
enum ndr_err_code ndr_pull_repsFromTo2(struct ndr_pull *ndr, int ndr_flags, struct repsFromTo2 *r);
void ndr_print_repsFromTo2(struct ndr_print *ndr, const char *name, const struct repsFromTo2 *r);
size_t ndr_size_repsFromTo2(const struct repsFromTo2 *r, int flags);
void ndr_print_repsFromTo(struct ndr_print *ndr, const char *name, const union repsFromTo *r);
enum ndr_err_code ndr_push_repsFromToBlob(struct ndr_push *ndr, int ndr_flags, const struct repsFromToBlob *r);
enum ndr_err_code ndr_pull_repsFromToBlob(struct ndr_pull *ndr, int ndr_flags, struct repsFromToBlob *r);
void ndr_print_repsFromToBlob(struct ndr_print *ndr, const char *name, const struct repsFromToBlob *r);
enum ndr_err_code ndr_push_scheduleHeader(struct ndr_push *ndr, int ndr_flags, const struct scheduleHeader *r);
enum ndr_err_code ndr_pull_scheduleHeader(struct ndr_pull *ndr, int ndr_flags, struct scheduleHeader *r);
void ndr_print_scheduleHeader(struct ndr_print *ndr, const char *name, const struct scheduleHeader *r);
enum ndr_err_code ndr_push_scheduleSlots(struct ndr_push *ndr, int ndr_flags, const struct scheduleSlots *r);
enum ndr_err_code ndr_pull_scheduleSlots(struct ndr_pull *ndr, int ndr_flags, struct scheduleSlots *r);
void ndr_print_scheduleSlots(struct ndr_print *ndr, const char *name, const struct scheduleSlots *r);
enum ndr_err_code ndr_push_schedule(struct ndr_push *ndr, int ndr_flags, const struct schedule *r);
enum ndr_err_code ndr_pull_schedule(struct ndr_pull *ndr, int ndr_flags, struct schedule *r);
void ndr_print_schedule(struct ndr_print *ndr, const char *name, const struct schedule *r);
void ndr_print_partialAttributeSetCtr1(struct ndr_print *ndr, const char *name, const struct partialAttributeSetCtr1 *r);
void ndr_print_partialAttributeSetCtr(struct ndr_print *ndr, const char *name, const union partialAttributeSetCtr *r);
enum ndr_err_code ndr_push_partialAttributeSetBlob(struct ndr_push *ndr, int ndr_flags, const struct partialAttributeSetBlob *r);
enum ndr_err_code ndr_pull_partialAttributeSetBlob(struct ndr_pull *ndr, int ndr_flags, struct partialAttributeSetBlob *r);
void ndr_print_partialAttributeSetBlob(struct ndr_print *ndr, const char *name, const struct partialAttributeSetBlob *r);
enum ndr_err_code ndr_push_schemaInfoBlob(struct ndr_push *ndr, int ndr_flags, const struct schemaInfoBlob *r);
enum ndr_err_code ndr_pull_schemaInfoBlob(struct ndr_pull *ndr, int ndr_flags, struct schemaInfoBlob *r);
void ndr_print_schemaInfoBlob(struct ndr_print *ndr, const char *name, const struct schemaInfoBlob *r);
void ndr_print_drsuapi_MSPrefixMap_Entry(struct ndr_print *ndr, const char *name, const struct drsuapi_MSPrefixMap_Entry *r);
enum ndr_err_code ndr_push_drsuapi_MSPrefixMap_Ctr(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_MSPrefixMap_Ctr *r);
enum ndr_err_code ndr_pull_drsuapi_MSPrefixMap_Ctr(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_MSPrefixMap_Ctr *r);
void ndr_print_drsuapi_MSPrefixMap_Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_MSPrefixMap_Ctr *r);
size_t ndr_size_drsuapi_MSPrefixMap_Ctr(const struct drsuapi_MSPrefixMap_Ctr *r, int flags);
void ndr_print_prefixMapVersion(struct ndr_print *ndr, const char *name, enum prefixMapVersion r);
void ndr_print_prefixMapCtr(struct ndr_print *ndr, const char *name, const union prefixMapCtr *r);
enum ndr_err_code ndr_push_prefixMapBlob(struct ndr_push *ndr, int ndr_flags, const struct prefixMapBlob *r);
enum ndr_err_code ndr_pull_prefixMapBlob(struct ndr_pull *ndr, int ndr_flags, struct prefixMapBlob *r);
void ndr_print_prefixMapBlob(struct ndr_print *ndr, const char *name, const struct prefixMapBlob *r);
void ndr_print_ldapControlDirSyncExtra(struct ndr_print *ndr, const char *name, const union ldapControlDirSyncExtra *r);
void ndr_print_ldapControlDirSyncBlob(struct ndr_print *ndr, const char *name, const struct ldapControlDirSyncBlob *r);
enum ndr_err_code ndr_push_ldapControlDirSyncCookie(struct ndr_push *ndr, int ndr_flags, const struct ldapControlDirSyncCookie *r);
enum ndr_err_code ndr_pull_ldapControlDirSyncCookie(struct ndr_pull *ndr, int ndr_flags, struct ldapControlDirSyncCookie *r);
void ndr_print_ldapControlDirSyncCookie(struct ndr_print *ndr, const char *name, const struct ldapControlDirSyncCookie *r);
enum ndr_err_code ndr_push_supplementalCredentialsPackage(struct ndr_push *ndr, int ndr_flags, const struct supplementalCredentialsPackage *r);
enum ndr_err_code ndr_pull_supplementalCredentialsPackage(struct ndr_pull *ndr, int ndr_flags, struct supplementalCredentialsPackage *r);
void ndr_print_supplementalCredentialsPackage(struct ndr_print *ndr, const char *name, const struct supplementalCredentialsPackage *r);
enum ndr_err_code ndr_push_supplementalCredentialsSignature(struct ndr_push *ndr, int ndr_flags, enum supplementalCredentialsSignature r);
enum ndr_err_code ndr_pull_supplementalCredentialsSignature(struct ndr_pull *ndr, int ndr_flags, enum supplementalCredentialsSignature *r);
void ndr_print_supplementalCredentialsSignature(struct ndr_print *ndr, const char *name, enum supplementalCredentialsSignature r);
enum ndr_err_code ndr_push_supplementalCredentialsSubBlob(struct ndr_push *ndr, int ndr_flags, const struct supplementalCredentialsSubBlob *r);
enum ndr_err_code ndr_pull_supplementalCredentialsSubBlob(struct ndr_pull *ndr, int ndr_flags, struct supplementalCredentialsSubBlob *r);
void ndr_print_supplementalCredentialsSubBlob(struct ndr_print *ndr, const char *name, const struct supplementalCredentialsSubBlob *r);
enum ndr_err_code ndr_push_supplementalCredentialsBlob(struct ndr_push *ndr, int ndr_flags, const struct supplementalCredentialsBlob *r);
enum ndr_err_code ndr_pull_supplementalCredentialsBlob(struct ndr_pull *ndr, int ndr_flags, struct supplementalCredentialsBlob *r);
void ndr_print_supplementalCredentialsBlob(struct ndr_print *ndr, const char *name, const struct supplementalCredentialsBlob *r);
enum ndr_err_code ndr_push_package_PackagesBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PackagesBlob *r);
enum ndr_err_code ndr_pull_package_PackagesBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PackagesBlob *r);
void ndr_print_package_PackagesBlob(struct ndr_print *ndr, const char *name, const struct package_PackagesBlob *r);
void ndr_print_package_PrimaryKerberosString(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosString *r);
void ndr_print_package_PrimaryKerberosKey3(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosKey3 *r);
void ndr_print_package_PrimaryKerberosCtr3(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosCtr3 *r);
void ndr_print_package_PrimaryKerberosKey4(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosKey4 *r);
void ndr_print_package_PrimaryKerberosCtr4(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosCtr4 *r);
void ndr_print_package_PrimaryKerberosCtr(struct ndr_print *ndr, const char *name, const union package_PrimaryKerberosCtr *r);
enum ndr_err_code ndr_push_package_PrimaryKerberosBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryKerberosBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryKerberosBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryKerberosBlob *r);
void ndr_print_package_PrimaryKerberosBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosBlob *r);
enum ndr_err_code ndr_push_package_PrimaryCLEARTEXTBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryCLEARTEXTBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryCLEARTEXTBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryCLEARTEXTBlob *r);
void ndr_print_package_PrimaryCLEARTEXTBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryCLEARTEXTBlob *r);
void ndr_print_package_PrimaryWDigestHash(struct ndr_print *ndr, const char *name, const struct package_PrimaryWDigestHash *r);
enum ndr_err_code ndr_push_package_PrimaryWDigestBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryWDigestBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryWDigestBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryWDigestBlob *r);
void ndr_print_package_PrimaryWDigestBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryWDigestBlob *r);
enum ndr_err_code ndr_push_package_PrimarySambaGPGBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimarySambaGPGBlob *r);
enum ndr_err_code ndr_pull_package_PrimarySambaGPGBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimarySambaGPGBlob *r);
void ndr_print_package_PrimarySambaGPGBlob(struct ndr_print *ndr, const char *name, const struct package_PrimarySambaGPGBlob *r);
void ndr_print_package_PrimaryUserPasswordValue(struct ndr_print *ndr, const char *name, const struct package_PrimaryUserPasswordValue *r);
enum ndr_err_code ndr_push_package_PrimaryUserPasswordBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryUserPasswordBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryUserPasswordBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryUserPasswordBlob *r);
void ndr_print_package_PrimaryUserPasswordBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryUserPasswordBlob *r);
void ndr_print_AuthInfoNone(struct ndr_print *ndr, const char *name, const struct AuthInfoNone *r);
void ndr_print_AuthInfoNT4Owf(struct ndr_print *ndr, const char *name, const struct AuthInfoNT4Owf *r);
void ndr_print_AuthInfoClear(struct ndr_print *ndr, const char *name, const struct AuthInfoClear *r);
void ndr_print_AuthInfoVersion(struct ndr_print *ndr, const char *name, const struct AuthInfoVersion *r);
void ndr_print_AuthInfo(struct ndr_print *ndr, const char *name, const union AuthInfo *r);
enum ndr_err_code ndr_push_AuthenticationInformation(struct ndr_push *ndr, int ndr_flags, const struct AuthenticationInformation *r);
enum ndr_err_code ndr_pull_AuthenticationInformation(struct ndr_pull *ndr, int ndr_flags, struct AuthenticationInformation *r);
void ndr_print_AuthenticationInformation(struct ndr_print *ndr, const char *name, const struct AuthenticationInformation *r);
enum ndr_err_code ndr_push_AuthenticationInformationArray(struct ndr_push *ndr, int ndr_flags, const struct AuthenticationInformationArray *r);
enum ndr_err_code ndr_pull_AuthenticationInformationArray(struct ndr_pull *ndr, int ndr_flags, struct AuthenticationInformationArray *r);
void ndr_print_AuthenticationInformationArray(struct ndr_print *ndr, const char *name, const struct AuthenticationInformationArray *r);
size_t ndr_size_AuthenticationInformationArray(const struct AuthenticationInformationArray *r, int flags);
enum ndr_err_code ndr_push_trustAuthInOutBlob(struct ndr_push *ndr, int ndr_flags, const struct trustAuthInOutBlob *r);
enum ndr_err_code ndr_pull_trustAuthInOutBlob(struct ndr_pull *ndr, int ndr_flags, struct trustAuthInOutBlob *r);
void ndr_print_trustAuthInOutBlob(struct ndr_print *ndr, const char *name, const struct trustAuthInOutBlob *r);
size_t ndr_size_trustAuthInOutBlob(const struct trustAuthInOutBlob *r, int flags);
enum ndr_err_code ndr_push_trustDomainPasswords(struct ndr_push *ndr, int ndr_flags, const struct trustDomainPasswords *r);
enum ndr_err_code ndr_pull_trustDomainPasswords(struct ndr_pull *ndr, int ndr_flags, struct trustDomainPasswords *r);
void ndr_print_trustDomainPasswords(struct ndr_print *ndr, const char *name, const struct trustDomainPasswords *r);
enum ndr_err_code ndr_push_DsCompressedChunk(struct ndr_push *ndr, int ndr_flags, const struct DsCompressedChunk *r);
enum ndr_err_code ndr_pull_DsCompressedChunk(struct ndr_pull *ndr, int ndr_flags, struct DsCompressedChunk *r);
void ndr_print_DsCompressedChunk(struct ndr_print *ndr, const char *name, const struct DsCompressedChunk *r);
void ndr_print_ExtendedErrorAString(struct ndr_print *ndr, const char *name, const struct ExtendedErrorAString *r);
void ndr_print_ExtendedErrorUString(struct ndr_print *ndr, const char *name, const struct ExtendedErrorUString *r);
void ndr_print_ExtendedErrorBlob(struct ndr_print *ndr, const char *name, const struct ExtendedErrorBlob *r);
void ndr_print_ExtendedErrorComputerNamePresent(struct ndr_print *ndr, const char *name, enum ExtendedErrorComputerNamePresent r);
void ndr_print_ExtendedErrorComputerNameU(struct ndr_print *ndr, const char *name, const union ExtendedErrorComputerNameU *r);
void ndr_print_ExtendedErrorComputerName(struct ndr_print *ndr, const char *name, const struct ExtendedErrorComputerName *r);
void ndr_print_ExtendedErrorParamType(struct ndr_print *ndr, const char *name, enum ExtendedErrorParamType r);
void ndr_print_ExtendedErrorParamU(struct ndr_print *ndr, const char *name, const union ExtendedErrorParamU *r);
void ndr_print_ExtendedErrorParam(struct ndr_print *ndr, const char *name, const struct ExtendedErrorParam *r);
enum ndr_err_code ndr_push_ExtendedErrorInfo(struct ndr_push *ndr, int ndr_flags, const struct ExtendedErrorInfo *r);
enum ndr_err_code ndr_pull_ExtendedErrorInfo(struct ndr_pull *ndr, int ndr_flags, struct ExtendedErrorInfo *r);
void ndr_print_ExtendedErrorInfo(struct ndr_print *ndr, const char *name, const struct ExtendedErrorInfo *r);
void ndr_print_ExtendedErrorInfoPtr(struct ndr_print *ndr, const char *name, const struct ExtendedErrorInfoPtr *r);
void ndr_print_ForestTrustString(struct ndr_print *ndr, const char *name, const struct ForestTrustString *r);
void ndr_print_ForestTrustDataDomainInfo(struct ndr_print *ndr, const char *name, const struct ForestTrustDataDomainInfo *r);
void ndr_print_ForestTrustDataBinaryData(struct ndr_print *ndr, const char *name, const struct ForestTrustDataBinaryData *r);
void ndr_print_ForestTrustData(struct ndr_print *ndr, const char *name, const union ForestTrustData *r);
void ndr_print_ForestTrustInfoRecordType(struct ndr_print *ndr, const char *name, enum ForestTrustInfoRecordType r);
enum ndr_err_code ndr_push_ForestTrustInfoRecord(struct ndr_push *ndr, int ndr_flags, const struct ForestTrustInfoRecord *r);
enum ndr_err_code ndr_pull_ForestTrustInfoRecord(struct ndr_pull *ndr, int ndr_flags, struct ForestTrustInfoRecord *r);
void ndr_print_ForestTrustInfoRecord(struct ndr_print *ndr, const char *name, const struct ForestTrustInfoRecord *r);
size_t ndr_size_ForestTrustInfoRecord(const struct ForestTrustInfoRecord *r, int flags);
void ndr_print_ForestTrustInfoRecordArmor(struct ndr_print *ndr, const char *name, const struct ForestTrustInfoRecordArmor *r);
enum ndr_err_code ndr_push_ForestTrustInfo(struct ndr_push *ndr, int ndr_flags, const struct ForestTrustInfo *r);
enum ndr_err_code ndr_pull_ForestTrustInfo(struct ndr_pull *ndr, int ndr_flags, struct ForestTrustInfo *r);
void ndr_print_ForestTrustInfo(struct ndr_print *ndr, const char *name, const struct ForestTrustInfo *r);
void ndr_print_decode_replPropertyMetaData1(struct ndr_print *ndr, const char *name, int flags, const struct decode_replPropertyMetaData1 *r);
void ndr_print_decode_replPropertyMetaData(struct ndr_print *ndr, const char *name, int flags, const struct decode_replPropertyMetaData *r);
void ndr_print_decode_replUpToDateVector(struct ndr_print *ndr, const char *name, int flags, const struct decode_replUpToDateVector *r);
void ndr_print_decode_repsFromTo(struct ndr_print *ndr, const char *name, int flags, const struct decode_repsFromTo *r);
void ndr_print_decode_partialAttributeSet(struct ndr_print *ndr, const char *name, int flags, const struct decode_partialAttributeSet *r);
void ndr_print_decode_prefixMap(struct ndr_print *ndr, const char *name, int flags, const struct decode_prefixMap *r);
void ndr_print_decode_ldapControlDirSync(struct ndr_print *ndr, const char *name, int flags, const struct decode_ldapControlDirSync *r);
void ndr_print_decode_supplementalCredentials(struct ndr_print *ndr, const char *name, int flags, const struct decode_supplementalCredentials *r);
void ndr_print_decode_Packages(struct ndr_print *ndr, const char *name, int flags, const struct decode_Packages *r);
void ndr_print_decode_PrimaryKerberos(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryKerberos *r);
void ndr_print_decode_PrimaryCLEARTEXT(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryCLEARTEXT *r);
void ndr_print_decode_PrimaryWDigest(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryWDigest *r);
void ndr_print_decode_PrimarySambaGPG(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimarySambaGPG *r);
void ndr_print_decode_PrimaryUserPasswordBlob(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryUserPasswordBlob *r);
void ndr_print_decode_trustAuthInOut(struct ndr_print *ndr, const char *name, int flags, const struct decode_trustAuthInOut *r);
void ndr_print_decode_trustDomainPasswords(struct ndr_print *ndr, const char *name, int flags, const struct decode_trustDomainPasswords *r);
void ndr_print_decode_ExtendedErrorInfo(struct ndr_print *ndr, const char *name, int flags, const struct decode_ExtendedErrorInfo *r);
void ndr_print_decode_ForestTrustInfo(struct ndr_print *ndr, const char *name, int flags, const struct decode_ForestTrustInfo *r);
#endif /* _HEADER_NDR_drsblobs */
