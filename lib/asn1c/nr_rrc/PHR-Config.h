/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PHR_Config_H_
#define	_PHR_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "BOOLEAN.h"
#include "NULL.h"
#include "MPE-Config-FR2-r16.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PHR_Config__phr_PeriodicTimer {
	PHR_Config__phr_PeriodicTimer_sf10	= 0,
	PHR_Config__phr_PeriodicTimer_sf20	= 1,
	PHR_Config__phr_PeriodicTimer_sf50	= 2,
	PHR_Config__phr_PeriodicTimer_sf100	= 3,
	PHR_Config__phr_PeriodicTimer_sf200	= 4,
	PHR_Config__phr_PeriodicTimer_sf500	= 5,
	PHR_Config__phr_PeriodicTimer_sf1000	= 6,
	PHR_Config__phr_PeriodicTimer_infinity	= 7
} e_PHR_Config__phr_PeriodicTimer;
typedef enum PHR_Config__phr_ProhibitTimer {
	PHR_Config__phr_ProhibitTimer_sf0	= 0,
	PHR_Config__phr_ProhibitTimer_sf10	= 1,
	PHR_Config__phr_ProhibitTimer_sf20	= 2,
	PHR_Config__phr_ProhibitTimer_sf50	= 3,
	PHR_Config__phr_ProhibitTimer_sf100	= 4,
	PHR_Config__phr_ProhibitTimer_sf200	= 5,
	PHR_Config__phr_ProhibitTimer_sf500	= 6,
	PHR_Config__phr_ProhibitTimer_sf1000	= 7
} e_PHR_Config__phr_ProhibitTimer;
typedef enum PHR_Config__phr_Tx_PowerFactorChange {
	PHR_Config__phr_Tx_PowerFactorChange_dB1	= 0,
	PHR_Config__phr_Tx_PowerFactorChange_dB3	= 1,
	PHR_Config__phr_Tx_PowerFactorChange_dB6	= 2,
	PHR_Config__phr_Tx_PowerFactorChange_infinity	= 3
} e_PHR_Config__phr_Tx_PowerFactorChange;
typedef enum PHR_Config__phr_ModeOtherCG {
	PHR_Config__phr_ModeOtherCG_real	= 0,
	PHR_Config__phr_ModeOtherCG_virtual	= 1
} e_PHR_Config__phr_ModeOtherCG;
typedef enum PHR_Config__mpe_Reporting_FR2_r16_PR {
	PHR_Config__mpe_Reporting_FR2_r16_PR_NOTHING,	/* No components present */
	PHR_Config__mpe_Reporting_FR2_r16_PR_release,
	PHR_Config__mpe_Reporting_FR2_r16_PR_setup
} PHR_Config__mpe_Reporting_FR2_r16_PR;

/* PHR-Config */
typedef struct PHR_Config {
	long	 phr_PeriodicTimer;
	long	 phr_ProhibitTimer;
	long	 phr_Tx_PowerFactorChange;
	BOOLEAN_t	 multiplePHR;
	BOOLEAN_t	 dummy;
	BOOLEAN_t	 phr_Type2OtherCell;
	long	 phr_ModeOtherCG;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PHR_Config__mpe_Reporting_FR2_r16 {
		PHR_Config__mpe_Reporting_FR2_r16_PR present;
		union PHR_Config__mpe_Reporting_FR2_r16_u {
			NULL_t	 release;
			MPE_Config_FR2_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mpe_Reporting_FR2_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PHR_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_phr_PeriodicTimer_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phr_ProhibitTimer_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phr_Tx_PowerFactorChange_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phr_ModeOtherCG_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PHR_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PHR_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PHR_Config_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PHR_Config_H_ */
#include "asn_internal.h"