/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_BAP_RoutingID_r16_H_
#define	_BAP_RoutingID_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BAP-RoutingID-r16 */
typedef struct BAP_RoutingID_r16 {
	BIT_STRING_t	 bap_Address_r16;
	BIT_STRING_t	 bap_PathId_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BAP_RoutingID_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BAP_RoutingID_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_BAP_RoutingID_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_BAP_RoutingID_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BAP_RoutingID_r16_H_ */
#include "asn_internal.h"