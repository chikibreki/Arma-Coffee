
tooltip = "Author: Hadanta\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_DCU","CUP_U_B_BDUv2_gloves_DCU","CUP_U_B_BDUv2_roll_gloves_DCU"};
    vest[] = {"cwr3_b_vest_pasgt_lbv_woodland","cwr3_b_vest_pasgt_lbv_alice_woodland"};
    backpack[] = {"B_Kitbag_Tan"};
    headgear[] = {"CUP_H_PASGTv2_DCU"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","CUP_G_Oakleys_Drk"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base 
{
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_M16A4_Grip"};
	scope[] = {};
    attachment[] = {"cup_acc_anpeq_15_flashlight_black_l"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] =
    {
        LIST_10("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_M16A4_GL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_M4A3_Black"};
	scope[] = {"cup_optic_compm2_low"};
	attachment[] = {"cup_acc_anpeq_15_top_flashlight_black_l"};
	bipod[] = {};
	magazines[] =
    {
        LIST_10("30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_4("SmokeShell")
    }; 
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"B_Kitbag_Tan"};
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
    primaryWeapon[] = {"CUP_smg_MP5A5"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x19_MP5"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell")
    };
};
class breach : r
{
    displayName = "Breacher";
    primaryWeapon[] = {"CUP_sgun_M1014"};
	primaryAttachments[] = {};
	scope[] = {"cup_optic_microt1_low"};
	attachment[] = {"carls_cup_led_flashlight"};
	sidearmWeapon[] = {"CUP_hgun_M9A1"};
    magazines[] =
    {
        LIST_6("CUP_8Rnd_12Gauge_Slug"),
		LIST_6("CUP_8Rnd_12Gauge_Pellets_No00_Buck"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_2("ACE_M84"),
		LIST_2("CUP_15Rnd_9x19_M9")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"CUP_H_PASGTv2_NVG_DCU"};
	hmd[] = {"CUP_NVG_PVS14"};
	sidearmWeapon[] = {"CUP_hgun_M9A1"};
	scope[] = {"cup_optic_compm2_low"};
    magazines[] +=
    {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("SmokeShellGreen"),
		LIST_2("CUP_15Rnd_9x19_M9"),
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
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
};
class fac : sl
{
    displayName = "Forward Air Controller";
	magazines[] =
    {
		LIST_10("30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("SmokeShellGreen"),
		LIST_2("CUP_15Rnd_9x19_M9"),
		LIST_4("1Rnd_SmokeRed_Grenade_shell"),
		LIST_4("1Rnd_SmokeOrange_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_1("Laserbatteries")
    };
	linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"cwr3_b_vest_pasgt_lbv_woodland"};
    primaryWeapon[] = {"CUP_lmg_m249_pip1"};
	scope[] = {};
	attachment[] = {};
    magazines[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_2("CUP_15Rnd_9x19_M9")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_M16A4_Base"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"rhsusf_spc_marksman"};
    primaryWeapon[] = {"CUP_srifle_MK12SPR"};
	primaryAttachments[] = {""};
    scope[] = {"CUP_optic_RCO"};
    bipod[] = {"bipod_01_F_blk"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_11("CUP_20Rnd_556x45_Stanag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240g"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51_m62_tracer"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
    };
};
// class hmgg : car //UNNECESSARY
// {
//     displayName = "HMG Gunner";
//     backPack[] = {"B_HMG_01_weapon_F"};

// };
// class hmgac : r //UNNECESSARY
// {
//     displayName = "HMG Ammo Carrier";
//     backPack[] = {"B_HMG_01_weapon_F"};
// };
// class hmgag : car //UNNECESSARY
// {
//     displayName = "HMG Assistant Gunner";
//     backPack[] = {"B_HMG_01_support_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//		   "Rangefinder",
//         "ItemGPS"
//     };
// };
class matg : car
{
    displayName = "MAT Gunner";
	primaryWeapon[] = {"CUP_arifle_M4A1"};
	scope[] = {};
	attachment[] = {};
    secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {"cup_optic_smaw_scope"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
    {
        LIST_1("CUP_SMAW_HEAA_M"),
		LIST_1("CUP_SMAW_HEDP_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("CUP_SMAW_HEAA_M"),
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
	scope[] = {"cup_optic_acog_ta01b_black"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
		LIST_2("CUP_SMAW_HEDP_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
	vest[] = {"rhsusf_spc_light"};
    backpack[] = {"rhs_Tow_Gun_Bag"};
	items[] += {"ACRE_PRC148"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
	vest[] = {"rhsusf_spc_light"};
    backpack[] = {"B_AT_01_weapon_F"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	vest[] = {"rhsusf_spc_light"};
    backpack[] = {"rhs_TOW_Tripod_Bag"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Rangefinder",
	};
};
// class mtrg : car //UNNECESSARY
// {
//     displayName = "Mortar Gunner";
//     backPack[] = {"B_Mortar_01_weapon_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "ItemGPS"
//     };
// };
// class mtrac : r //UNNECESSARY
// {
//     displayName = "Mortar Ammo Carrier";
//     backPack[] = {"I_Mortar_01_weapon_F"};
// };
// class mtrag : car //UNNECESSARY
// {
//     displayName = "Mortar Assistant Gunner";
//     backPack[] = {"B_HMG_01_support_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "Rangefinder",
//         "ItemGPS"
//     };
// };
// class samg : car //UNNECESSARY
// {
//     displayName = "AA Missile Specialist";
//     secondaryWeapon[] = {"launch_B_Titan_F"};
//     magazines[] +=
//     {
//         LIST_3("Titan_AA")
//     };
// };
// class samag : car //UNNECESSARY
// {
//     displayName = "AA Assistant Missile Specialist";
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "Rangefinder",
//         "ItemGPS"
//     };
//     backpackItems[] =
//     {
//         LIST_2("Titan_AA")
//     };
// };
class sn : r
{
    displayName = "Sniper";
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m40a5_d"};
    scope[] = {"rhsusf_acc_M8541_low_d"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_7("rhsusf_10Rnd_762x51_m118_special_Mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vd : car
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_B_PASGT_no_bags"};
	primaryWeapon[] = {"CUP_arifle_M4A1"};
	scope[] = {};
	attachment[] = {};
    headgear[] = {"H_HelmetCrew_i"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
};
class pp : vd
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
    headgear[] = {"VSM_BackwardsHat_Peltor_US"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"VSM_BackwardsHat_Peltor_US"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
//class jp : smg //UNNECESSARY
//{
//    displayName = "Jet pilot";
//    uniform[] = {"U_B_HeliPilotCoveralls"};
//    vest[] = {"V_TacVest_blk"};
//    backpack[] = {};
//    headgear[] = {"H_PilotHelmetHeli_B"};
//    goggles[] = {"default"};
//};
class eng : r //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpackItems[] = {
		
        LIST_2("SatchelCharge_Remote_Mag")
		
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	vest[] = {"rhsusf_spc_light"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy_engineer"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
	vest[] = {"rhsusf_spc_light"};
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};
