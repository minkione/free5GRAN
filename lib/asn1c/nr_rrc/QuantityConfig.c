/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "QuantityConfig.h"

static int
memb_quantityConfigNR_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_quantityConfigNR_List_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_type_quantityConfigNR_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_quantityConfigNR_List_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_memb_quantityConfigNR_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_quantityConfigNR_List_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_QuantityConfigNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_quantityConfigNR_List_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_quantityConfigNR_List_specs_2 = {
	sizeof(struct QuantityConfig__quantityConfigNR_List),
	offsetof(struct QuantityConfig__quantityConfigNR_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_quantityConfigNR_List_2 = {
	"quantityConfigNR-List",
	"quantityConfigNR-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_quantityConfigNR_List_tags_2,
	sizeof(asn_DEF_quantityConfigNR_List_tags_2)
		/sizeof(asn_DEF_quantityConfigNR_List_tags_2[0]) - 1, /* 1 */
	asn_DEF_quantityConfigNR_List_tags_2,	/* Same as above */
	sizeof(asn_DEF_quantityConfigNR_List_tags_2)
		/sizeof(asn_DEF_quantityConfigNR_List_tags_2[0]), /* 2 */
	{ &asn_OER_type_quantityConfigNR_List_constr_2, &asn_PER_type_quantityConfigNR_List_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_quantityConfigNR_List_2,
	1,	/* Single element */
	&asn_SPC_quantityConfigNR_List_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_QuantityConfig_1[] = {
	{ ATF_POINTER, 4, offsetof(struct QuantityConfig, quantityConfigNR_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_quantityConfigNR_List_2,
		0,
		{ &asn_OER_memb_quantityConfigNR_List_constr_2, &asn_PER_memb_quantityConfigNR_List_constr_2,  memb_quantityConfigNR_List_constraint_1 },
		0, 0, /* No default value */
		"quantityConfigNR-List"
		},
	{ ATF_POINTER, 3, offsetof(struct QuantityConfig, quantityConfigEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA"
		},
	{ ATF_POINTER, 2, offsetof(struct QuantityConfig, quantityConfigUTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigUTRA_FDD_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigUTRA-FDD-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct QuantityConfig, quantityConfigCLI_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterConfigCLI_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigCLI-r16"
		},
};
static const int asn_MAP_QuantityConfig_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_QuantityConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* quantityConfigNR-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* quantityConfigEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* quantityConfigUTRA-FDD-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* quantityConfigCLI-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfig_specs_1 = {
	sizeof(struct QuantityConfig),
	offsetof(struct QuantityConfig, _asn_ctx),
	asn_MAP_QuantityConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_QuantityConfig_oms_1,	/* Optional members */
	1, 3,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfig = {
	"QuantityConfig",
	"QuantityConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfig_tags_1,
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QuantityConfig_1,
	4,	/* Elements count */
	&asn_SPC_QuantityConfig_specs_1	/* Additional specs */
};

