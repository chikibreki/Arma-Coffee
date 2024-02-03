
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_C_Rescuer_01"};
    vest[] = {"CUP_V_PMC_IOTV_Coyote_Empty"};
    backpack[] = {"rhs_medic_bag"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_C_Fireman_Helmet_01"};
	primaryWeapon[] = { "CUP_sgun_CZ584"};
    attachment[] = {};
	scope[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Grenadier"};
	backpack[] = {"CUP_B_Motherlode_MTP"};
    primaryWeapon[] = {"CUP_sgun_CZ584"};
	scope[] = {};
};
class m : r
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Medic"};
	backpack[] = {"CUP_B_Motherlode_Medic_MTP"};
	 backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_salineIV_250"),
			LIST_5("ACE_salineIV_500"),
			LIST_2("ACE_salineIV"),
			LIST_10("ACE_splint")
			
	};
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Officer"};
	backpack[] = {"CUP_B_Motherlode_Radio_MTP"};
	sidearmWeapon[] = {};
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_12Gauge_Slug"),
		LIST_3("CUP_1Rnd_12Gauge_Slug")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	headgear[] = {"CUP_H_BAF_PARA_PRROVER_BERET"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};