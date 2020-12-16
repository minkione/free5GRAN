/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasResults_H_
#define	_MeasResults_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasId.h"
#include "MeasResultServMOList.h"
#include "MeasResultListNR.h"
#include "MeasResultListEUTRA.h"
#include "MeasResultListUTRA-FDD-r16.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResults__measResultNeighCells_PR {
	MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	MeasResults__measResultNeighCells_PR_measResultListNR,
	/* Extensions may appear below */
	MeasResults__measResultNeighCells_PR_measResultListEUTRA,
	MeasResults__measResultNeighCells_PR_measResultListUTRA_FDD_r16
} MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct MeasResultServFreqListEUTRA_SCG;
struct MeasResultServFreqListNR_SCG;
struct MeasResultSFTD_EUTRA;
struct MeasResultCellSFTD_NR;
struct MeasResultCellListSFTD_NR;
struct MeasResultForRSSI_r16;
struct LocationInfo_r16;
struct UL_PDCP_DelayValueResultList_r16;
struct MeasResultsSL_r16;
struct MeasResultCLI_r16;

/* MeasResults */
typedef struct MeasResults {
	MeasId_t	 measId;
	MeasResultServMOList_t	 measResultServingMOList;
	struct MeasResults__measResultNeighCells {
		MeasResults__measResultNeighCells_PR present;
		union MeasResults__measResultNeighCells_u {
			MeasResultListNR_t	 measResultListNR;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			MeasResultListEUTRA_t	 measResultListEUTRA;
			MeasResultListUTRA_FDD_r16_t	 measResultListUTRA_FDD_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultServFreqListEUTRA_SCG	*measResultServFreqListEUTRA_SCG	/* OPTIONAL */;
	struct MeasResultServFreqListNR_SCG	*measResultServFreqListNR_SCG	/* OPTIONAL */;
	struct MeasResultSFTD_EUTRA	*measResultSFTD_EUTRA	/* OPTIONAL */;
	struct MeasResultCellSFTD_NR	*measResultSFTD_NR	/* OPTIONAL */;
	struct MeasResultCellListSFTD_NR	*measResultCellListSFTD_NR	/* OPTIONAL */;
	struct MeasResultForRSSI_r16	*measResultForRSSI_r16	/* OPTIONAL */;
	struct LocationInfo_r16	*locationInfo_r16	/* OPTIONAL */;
	struct UL_PDCP_DelayValueResultList_r16	*ul_PDCP_DelayValueResultList_r16	/* OPTIONAL */;
	struct MeasResultsSL_r16	*measResultsSL_r16	/* OPTIONAL */;
	struct MeasResultCLI_r16	*measResultCLI_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResults;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResults_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResults_1[13];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultServFreqListEUTRA-SCG.h"
#include "MeasResultServFreqListNR-SCG.h"
#include "MeasResultSFTD-EUTRA.h"
#include "MeasResultCellSFTD-NR.h"
#include "MeasResultCellListSFTD-NR.h"
#include "MeasResultForRSSI-r16.h"
#include "LocationInfo-r16.h"
#include "UL-PDCP-DelayValueResultList-r16.h"
#include "MeasResultsSL-r16.h"
#include "MeasResultCLI-r16.h"

#endif	/* _MeasResults_H_ */
#include "asn_internal.h"