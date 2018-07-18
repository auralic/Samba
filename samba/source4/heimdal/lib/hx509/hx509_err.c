#include "config.h"
/* Generated from /home/changpeng/aa/samba-4.7.6/source4/heimdal/lib/hx509/hx509_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "hx509_err.h"

#define N_(x) (x)

static const char *hx_error_strings[] = {
	/* 000 */ N_("ASN.1 failed call to system time library"),
	/* 001 */ N_("Extension not found"),
	/* 002 */ N_("Certification path not found"),
	/* 003 */ N_("Parent certificate is not a CA"),
	/* 004 */ N_("CA path too deep"),
	/* 005 */ N_("Signature algorithm not supported"),
	/* 006 */ N_("Signature algorithm doesn't match certificate key"),
	/* 007 */ N_("Certificate used before it became valid"),
	/* 008 */ N_("Certificate used after it became invalid"),
	/* 009 */ N_("Private key required for the operation is missing"),
	/* 010 */ N_("Algorithm not supported"),
	/* 011 */ N_("Issuer couldn't be found"),
	/* 012 */ N_("Error verifing constraints"),
	/* 013 */ N_("Number too large"),
	/* 014 */ N_("Error while verifing name constraints"),
	/* 015 */ N_("Path is too long, failed to find valid anchor"),
	/* 016 */ N_("Required keyusage for this certificate is missing"),
	/* 017 */ N_("Certificate not found"),
	/* 018 */ N_("Unknown lock command"),
	/* 019 */ N_("Parent certificate is a CA"),
	/* 020 */ N_("Extra data was found after the structure"),
	/* 021 */ N_("Proxy certificate is invalid"),
	/* 022 */ N_("Proxy certificate name is wrong"),
	/* 023 */ N_("Name is malformated"),
	/* 024 */ N_("Certificate is malformated"),
	/* 025 */ N_("Certificate is missing a required EKU"),
	/* 026 */ N_("Proxy certificate not canonicalize"),
	/* 027 */ "Reserved hx error (27)",
	/* 028 */ "Reserved hx error (28)",
	/* 029 */ "Reserved hx error (29)",
	/* 030 */ "Reserved hx error (30)",
	/* 031 */ "Reserved hx error (31)",
	/* 032 */ N_("Failed to create signature"),
	/* 033 */ N_("Missing signer data"),
	/* 034 */ N_("Couldn't find signers certificate"),
	/* 035 */ N_("No data to perform the operation on"),
	/* 036 */ N_("Data in the message is invalid"),
	/* 037 */ N_("Padding in the message invalid"),
	/* 038 */ N_("Couldn't find recipient certificate"),
	/* 039 */ N_("Mismatch bewteen signed type and unsigned type"),
	/* 040 */ "Reserved hx error (40)",
	/* 041 */ "Reserved hx error (41)",
	/* 042 */ "Reserved hx error (42)",
	/* 043 */ "Reserved hx error (43)",
	/* 044 */ "Reserved hx error (44)",
	/* 045 */ "Reserved hx error (45)",
	/* 046 */ "Reserved hx error (46)",
	/* 047 */ "Reserved hx error (47)",
	/* 048 */ "Reserved hx error (48)",
	/* 049 */ "Reserved hx error (49)",
	/* 050 */ "Reserved hx error (50)",
	/* 051 */ "Reserved hx error (51)",
	/* 052 */ "Reserved hx error (52)",
	/* 053 */ "Reserved hx error (53)",
	/* 054 */ "Reserved hx error (54)",
	/* 055 */ "Reserved hx error (55)",
	/* 056 */ "Reserved hx error (56)",
	/* 057 */ "Reserved hx error (57)",
	/* 058 */ "Reserved hx error (58)",
	/* 059 */ "Reserved hx error (59)",
	/* 060 */ "Reserved hx error (60)",
	/* 061 */ "Reserved hx error (61)",
	/* 062 */ "Reserved hx error (62)",
	/* 063 */ "Reserved hx error (63)",
	/* 064 */ N_("Internal error in the crypto engine"),
	/* 065 */ N_("External error in the crypto engine"),
	/* 066 */ N_("Signature missing for data"),
	/* 067 */ N_("Signature is not valid"),
	/* 068 */ N_("Sigature doesn't provide confidentiality"),
	/* 069 */ N_("Invalid format on signature"),
	/* 070 */ N_("Mismatch bewteen oids"),
	/* 071 */ N_("No prompter function defined"),
	/* 072 */ N_("Signature require signer, but non available"),
	/* 073 */ N_("RSA public encryption failed"),
	/* 074 */ N_("RSA private encryption failed"),
	/* 075 */ N_("RSA public decryption failed"),
	/* 076 */ N_("RSA private decryption failed"),
	/* 077 */ N_("Algorithm has passed its best before date"),
	/* 078 */ N_("Key format is unsupported"),
	/* 079 */ "Reserved hx error (79)",
	/* 080 */ "Reserved hx error (80)",
	/* 081 */ "Reserved hx error (81)",
	/* 082 */ "Reserved hx error (82)",
	/* 083 */ "Reserved hx error (83)",
	/* 084 */ "Reserved hx error (84)",
	/* 085 */ "Reserved hx error (85)",
	/* 086 */ "Reserved hx error (86)",
	/* 087 */ "Reserved hx error (87)",
	/* 088 */ "Reserved hx error (88)",
	/* 089 */ "Reserved hx error (89)",
	/* 090 */ "Reserved hx error (90)",
	/* 091 */ "Reserved hx error (91)",
	/* 092 */ "Reserved hx error (92)",
	/* 093 */ "Reserved hx error (93)",
	/* 094 */ "Reserved hx error (94)",
	/* 095 */ "Reserved hx error (95)",
	/* 096 */ N_("CRL used before it became valid"),
	/* 097 */ N_("CRL used after it became invalid"),
	/* 098 */ N_("CRL have invalid format"),
	/* 099 */ N_("Certificate is revoked"),
	/* 100 */ N_("No revoke status found for certificates"),
	/* 101 */ N_("Unknown extension"),
	/* 102 */ N_("Got wrong CRL/OCSP data from server"),
	/* 103 */ N_("Doesn't have same parent as other certificates"),
	/* 104 */ N_("Certificates not in OCSP reply"),
	/* 105 */ "Reserved hx error (105)",
	/* 106 */ "Reserved hx error (106)",
	/* 107 */ "Reserved hx error (107)",
	/* 108 */ N_("No local key attribute"),
	/* 109 */ N_("Failed to parse key"),
	/* 110 */ N_("Unsupported operation"),
	/* 111 */ N_("Unimplemented operation"),
	/* 112 */ N_("Failed to parse name"),
	/* 113 */ "Reserved hx error (113)",
	/* 114 */ "Reserved hx error (114)",
	/* 115 */ "Reserved hx error (115)",
	/* 116 */ "Reserved hx error (116)",
	/* 117 */ "Reserved hx error (117)",
	/* 118 */ "Reserved hx error (118)",
	/* 119 */ "Reserved hx error (119)",
	/* 120 */ "Reserved hx error (120)",
	/* 121 */ "Reserved hx error (121)",
	/* 122 */ "Reserved hx error (122)",
	/* 123 */ "Reserved hx error (123)",
	/* 124 */ "Reserved hx error (124)",
	/* 125 */ "Reserved hx error (125)",
	/* 126 */ "Reserved hx error (126)",
	/* 127 */ "Reserved hx error (127)",
	/* 128 */ N_("No smartcard reader/device found"),
	/* 129 */ N_("No smartcard in reader"),
	/* 130 */ N_("No supported mech(s)"),
	/* 131 */ N_("Token or slot failed in inconsistent way"),
	/* 132 */ N_("Failed to open session to slot"),
	/* 133 */ N_("Failed to login to slot"),
	/* 134 */ N_("Failed to load PKCS module"),
	NULL
};

#define num_errors 135

void initialize_hx_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, hx_error_strings, num_errors, ERROR_TABLE_BASE_hx);
}

void initialize_hx_error_table(void)
{
    init_error_table(hx_error_strings, ERROR_TABLE_BASE_hx, num_errors);
}
