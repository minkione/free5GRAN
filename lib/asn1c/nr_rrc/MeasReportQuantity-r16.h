/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasReportQuantity_r16_H_
#define	_MeasReportQuantity_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasReportQuantity-r16 */
typedef struct MeasReportQuantity_r16 {
	BOOLEAN_t	 cbr_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasReportQuantity_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasReportQuantity_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasReportQuantity_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasReportQuantity_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasReportQuantity_r16_H_ */
#include "asn_internal.h"
