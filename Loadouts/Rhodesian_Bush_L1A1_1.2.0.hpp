
tooltip = "Author: Pouchythepirate\n\n";

class base {
    displayName = "base";
    uniform[] = {"MNP_CombatUniform_AMerc_2"};
    vest[] = {"rhs_chicom_khk"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"vn_b_headband_04"};
	primaryWeapon[] = {"CUP_arifle_FNFAL5061_rhodesian"};
	scope[] = {};
    attachment[] = {"rhsgref_acc_falMuzzle_l1a1"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_Woodland_M"),
        LIST_2("vn_m61_grenade_mag"),
		LIST_2("vn_m34_grenade_mag")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "G3a3";
	vest[] = {"rhs_chicom_khk"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"CUP_arifle_G3A3_ris"};
    magazines[] +=
    {
        LIST_10("CUP_20Rnd_762x51_G3"),
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_m1carbine"};
	primaryAttachments[] = {};
	magazines[] +=
    {
        LIST_10("vn_carbine_30_mag"),
    };
};
class m : car
{
    displayName = "Medic";
	vest[] = {"rhs_chicom_khk"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	 backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_bloodIV_250"),
			LIST_5("ACE_bloodIV_500"),
			LIST_2("ACE_bloodIV"),
			LIST_10("ACE_splint")
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_sten"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("vn_sten_mag"),
		LIST_2("vn_m61_grenade_mag"),
		LIST_1("vn_m34_grenade_mag")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"MNP_Beret_SAS"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
    magazines[] +=
    {
        LIST_2("vn_m34_grenade_mag"),
		LIST_3("CUP_13Rnd_9x19_Browning_HP")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"rhs_chicom_khk"};
	headgear[] = {"MNP_Beret_SAS"};
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
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"rhsusf_8point_marpatd"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"rhs_chicom_khk"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"CUP_lmg_FNMAG"};
	scope[] = {"rhsusf_acc_eotech_552"};
    bipod[] = {"rhsusf_acc_saw_bipod"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("vn_m34_grenade_mag"),
		LIST_3("CUP_hgun_Browning_HP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
    linkedItems[] += {"Binocular"};
};