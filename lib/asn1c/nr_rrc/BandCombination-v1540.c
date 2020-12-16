/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BandCombination-v1540.h"

static int
memb_bandList_v1540_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bandList_v1540_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_bandList_v1540_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bandList_v1540_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_bandList_v1540_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandList_v1540_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandParameters_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_bandList_v1540_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandList_v1540_specs_2 = {
	sizeof(struct BandCombination_v1540__bandList_v1540),
	offsetof(struct BandCombination_v1540__bandList_v1540, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandList_v1540_2 = {
	"bandList-v1540",
	"bandList-v1540",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandList_v1540_tags_2,
	sizeof(asn_DEF_bandList_v1540_tags_2)
		/sizeof(asn_DEF_bandList_v1540_tags_2[0]) - 1, /* 1 */
	asn_DEF_bandList_v1540_tags_2,	/* Same as above */
	sizeof(asn_DEF_bandList_v1540_tags_2)
		/sizeof(asn_DEF_bandList_v1540_tags_2[0]), /* 2 */
	{ &asn_OER_type_bandList_v1540_constr_2, &asn_PER_type_bandList_v1540_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_bandList_v1540_2,
	1,	/* Single element */
	&asn_SPC_bandList_v1540_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandCombination_v1540_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombination_v1540, bandList_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bandList_v1540_2,
		0,
		{ &asn_OER_memb_bandList_v1540_constr_2, &asn_PER_memb_bandList_v1540_constr_2,  memb_bandList_v1540_constraint_1 },
		0, 0, /* No default value */
		"bandList-v1540"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombination_v1540, ca_ParametersNR_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-v1540"
		},
};
static const int asn_MAP_BandCombination_v1540_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_BandCombination_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombination_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandList-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ca-ParametersNR-v1540 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1540_specs_1 = {
	sizeof(struct BandCombination_v1540),
	offsetof(struct BandCombination_v1540, _asn_ctx),
	asn_MAP_BandCombination_v1540_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandCombination_v1540_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombination_v1540 = {
	"BandCombination-v1540",
	"BandCombination-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombination_v1540_tags_1,
	sizeof(asn_DEF_BandCombination_v1540_tags_1)
		/sizeof(asn_DEF_BandCombination_v1540_tags_1[0]), /* 1 */
	asn_DEF_BandCombination_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombination_v1540_tags_1)
		/sizeof(asn_DEF_BandCombination_v1540_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombination_v1540_1,
	2,	/* Elements count */
	&asn_SPC_BandCombination_v1540_specs_1	/* Additional specs */
};
