/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SIB12_IEs_r16_H_
#define	_SIB12_IEs_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SL-ConfigCommonNR-r16.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SIB12-IEs-r16 */
typedef struct SIB12_IEs_r16 {
	SL_ConfigCommonNR_r16_t	 sl_ConfigCommonNR_r16;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB12_IEs_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB12_IEs_r16;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB12_IEs_r16_H_ */
#include "asn_internal.h"