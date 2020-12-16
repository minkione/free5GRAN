/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PUCCH_SRS_H_
#define	_PUCCH_SRS_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SRS-ResourceId.h"
#include "BWP-Id.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PUCCH-SRS */
typedef struct PUCCH_SRS {
	SRS_ResourceId_t	 resource;
	BWP_Id_t	 uplinkBWP;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_SRS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_SRS;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_SRS_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_SRS_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_SRS_H_ */
#include "asn_internal.h"