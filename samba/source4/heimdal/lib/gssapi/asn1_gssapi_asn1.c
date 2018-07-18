#include "config.h"
/* Generated from /home/changpeng/aa/samba-4.7.6/source4/heimdal/lib/gssapi/mech/gssapi.asn1 */
/* Do not edit */
#include "source4/heimdal_build/config.h"
#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include <gssapi_asn1.h>
#include <gssapi_asn1-priv.h>
#include <asn1_err.h>
#include <der.h>
#include <der-private.h>
#include <asn1-template.h>
#include <parse_units.h>

int ASN1CALL
encode_GSSAPIContextToken(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const GSSAPIContextToken *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* innerContextToken */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_heim_any_set(p, len, &(data)->innerContextToken, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* thisMech */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_oid(p, len, &(data)->thisMech, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_OID, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_APPL, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_GSSAPIContextToken(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, GSSAPIContextToken *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen, Top_oldlen;
Der_type Top_type;
e = der_match_tag_and_length(p, len, ASN1_C_APPL, &Top_type, 0, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if(e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t thisMech_datalen, thisMech_oldlen;
Der_type thisMech_type;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &thisMech_type, UT_OID, &thisMech_datalen, &l);
if (e == 0 && thisMech_type != PRIM) { e = ASN1_BAD_ID; }
if(e) goto fail;
p += l; len -= l; ret += l;
thisMech_oldlen = len;
if (thisMech_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = thisMech_datalen;
e = der_get_oid(p, len, &(data)->thisMech, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = thisMech_oldlen - thisMech_datalen;
}
e = decode_heim_any_set(p, len, &(data)->innerContextToken, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_GSSAPIContextToken(data);
return e;
}

void ASN1CALL
free_GSSAPIContextToken(GSSAPIContextToken *data)
{
der_free_oid(&(data)->thisMech);
free_heim_any_set(&(data)->innerContextToken);
}

size_t ASN1CALL
length_GSSAPIContextToken(const GSSAPIContextToken *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_oid(&(data)->thisMech);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_heim_any_set(&(data)->innerContextToken);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_GSSAPIContextToken(const GSSAPIContextToken *from, GSSAPIContextToken *to)
{
memset(to, 0, sizeof(*to));
if(der_copy_oid(&(from)->thisMech, &(to)->thisMech)) goto fail;
if(copy_heim_any_set(&(from)->innerContextToken, &(to)->innerContextToken)) goto fail;
return 0;
fail:
free_GSSAPIContextToken(to);
return ENOMEM;
}

