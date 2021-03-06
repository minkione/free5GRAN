/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MeasResultSCG-Failure.h"

static asn_TYPE_member_t asn_MBR_MeasResultSCG_Failure_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultSCG_Failure, measResultPerMOList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2NR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultPerMOList"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultSCG_Failure, locationInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationInfo-r16"
		},
};
static const int asn_MAP_MeasResultSCG_Failure_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MeasResultSCG_Failure_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultSCG_Failure_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultPerMOList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* locationInfo-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultSCG_Failure_specs_1 = {
	sizeof(struct MeasResultSCG_Failure),
	offsetof(struct MeasResultSCG_Failure, _asn_ctx),
	asn_MAP_MeasResultSCG_Failure_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasResultSCG_Failure_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultSCG_Failure = {
	"MeasResultSCG-Failure",
	"MeasResultSCG-Failure",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultSCG_Failure_tags_1,
	sizeof(asn_DEF_MeasResultSCG_Failure_tags_1)
		/sizeof(asn_DEF_MeasResultSCG_Failure_tags_1[0]), /* 1 */
	asn_DEF_MeasResultSCG_Failure_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultSCG_Failure_tags_1)
		/sizeof(asn_DEF_MeasResultSCG_Failure_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultSCG_Failure_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultSCG_Failure_specs_1	/* Additional specs */
};

