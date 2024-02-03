class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_M81"};
    vest[] = {"CUP_V_B_PASGT_OD"};
    backpack[] = {"CUP_B_AlicePack_OD"};
    headgear[] = {"CUP_H_PASGTv2_WDL"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","CUP_PMC_Facewrap_Black","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS", "CUP_NVG_HMNVS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_PASGTv2_WDL"};
	primaryWeapon[] = {"CUP_arifle_M16A2"};
	uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_M81"}; 
	magazines[] +=
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_grenade_anm8_mag"); 
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"CUP_B_AlicePack_OD"};
	uniform[] = {"CUP_U_B_BDUv2_roll2_M81"}; 
	headgear[] = {"CUP_H_PASGTv2_NVG_WDL_GG_CB"}; 
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"), 
		LIST_2("1Rnd_SmokeRed_Grenade_shell"), 
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_Colt727"};
	uniform[] = {"CUP_U_B_BDUv2_roll2_gloves_M81"};  
	magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag")
    };
   };
class m : car
{
    displayName = "Medic";
	backpack[] = {"CUP_B_AlicePack_OD"};
	uniform[] = {"CUP_U_B_BDUv2_dirty_M81"}; 
	 items[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_bloodIV_250"),
			LIST_5("ACE_bloodIV_500"),
			LIST_2("ACE_bloodIV"),
			LIST_1("ACE_splint"),
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
	uniform[] = {"CUP_U_B_BDUv2_gloves_M81"};
	headgear[] = {"CUP_H_USA_Boonie_wdl"}; 
    primaryWeapon[] = {"CUP_smg_MP5A5"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x19_MP5"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"}; 
	backack[] = {"CUP_V_B_PASGT_OD"}; 
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeBlue_Grenade_shell"),
		LIST_2("1Rnd_SmokePurple_Grenade_shell"),
		LIST_3("9Rnd_45ACP_Mag")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	headgear[] = {"CUP_H_PASGTv2_NVG_WDL_CF"}; 
	uniform[] = {"CUP_U_B_BDUv2_roll_gloves_dirty_M81"};  
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
	items[] += {"ACRE_PRC148"};
	backPack[] = {"CUP_B_AlicePack_OD"}; 
	magazines[] +=
	{
		LIST_3("9Rnd_45ACP_Mag")
		
	};
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
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	backpack[] = {"CUP_B_AlicePack_OD"};
	uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_M81"}; 
	primaryWeapon[] = {"rhs_weap_m249"};
	primaryAttachments[] = {};
    bipod[] = {};
	scope[] = {};
	sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("rhsusf_200rnd_556x45_M855_mixed_box"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	uniform[] = {"CUP_U_B_BDUv2_roll2_dirty_M81"}; 
	headgear[] = {"CUP_H_PASGTv2_NVG_WDL_CF"}; 
	backpack[] = {"CUP_B_AlicePack_OD"};
    backpackItems[] =
    {
        LIST_4("rhsusf_200rnd_556x45_M855_mixed_box")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M72A6_Loaded"};
	uniform[] = {"CUP_U_B_BDUv2_roll2_gloves_dirty_M81"}; 
	headgear[] = {"CUP_H_PASGTv2_NVG_WDL_CF"}; 
};
class dm : r
{
    displayName = "Designated Marksman";
	uniform[] = {"CUP_U_B_BDUv2_roll2_dirty_M81"}; 
	headgear[] = {"CUP_H_PASGTv2_WDL"}; 
	primaryWeapon[] = {"rhs_weap_m14_rail"};
	primaryAttachments[] = {};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
	bipod[] = {"rhsusf_acc_m14_bipod"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_20Rnd_762x51_m118_special_Mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
		LIST_3("9Rnd_45ACP_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M60"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"}; 
	scope[] = {""}; 
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
		LIST_3("9Rnd_45ACP_Mag")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	headgear[] = {"CUP_H_PASGTv2_NVG_WDL_CF"}; 
	uniform[] = {"CUP_U_B_BDUv2_roll_gloves_dirty_M81"}; 
	backpack[] = {"CUP_B_AlicePack_OD"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51_m62_tracer")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"CUP_B_AlicePack_OD"};
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
//  class hmgg : car
//	{
 //   displayName = "HMG Gunner";
//    backPack[] = {"ace_compat_rhs_gref3_dshkm_carry"};
//	};
//	class hmgac : r //UNNECESSARY
//	{
 //   displayName = "HMG Ammo Carrier";
//	backPack[] = {"B_HMG_01_weapon_F"};
//	};
//class hmgag : car //UNNECESSARY
//{
//    displayName = "HMG Assistant Gunner";
//    backPack[] = {"B_HMG_01_support_F"};
//    linkedItems[] =
//   {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//        "ItemWatch",
//        "Rangefinder",
//        "ItemGPS"
//    };
//};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"B_Carryall_oli"};
	vest[] = {"CUP_V_B_PASGT_no_bags_OD"}; 
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"CUP_optic_MAAWS_Scope"};
    magazines[] +=
    {
        LIST_3("CUP_MAAWS_HEAT_M"),
		LIST_1("CUP_MAAWS_HEDP_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	uniform[] = {"CUP_U_B_BDUv2_roll_gloves_dirty_M81"}; 
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
};
//class hatg : car //UNNECESSARY
//{
//    displayName = "HAT Gunner";
//    backpack[] = {"rhs_Tow_Gun_Bag"};
//};
//class hatac : r //UNNECESSARY
//{
//    displayName = "HAT Ammo Carrier";
//    backpack[] = {"B_AT_01_weapon_F"};
//};
//class hatag : car //UNNECESSARY
//{
//   displayName = "HAT Assistant Gunner";
//    backpack[] = {"rhs_TOW_Tripod_Bag"};
//	items [] += {"ACRE_PRC148"};
//    linkedItems[] +=
//    {
//        "Rangefinder",
//        };
//};
//class mtrg : car //UNNECESSARY
//{
//    displayName = "Mortar Gunner";
//   backPack[] = {"B_Mortar_01_weapon_F"};
//    linkedItems[] =
//    {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//        "ItemWatch",
//       "ItemGPS"
//    };
//};
//class mtrac : r //UNNECESSARY
//{
//   displayName = "Mortar Ammo Carrier";
//    backPack[] = {"I_Mortar_01_weapon_F"};
//};
//class mtrag : car //UNNECESSARY
//{
//    displayName = "Mortar Assistant Gunner";
//    backPack[] = {"B_HMG_01_support_F"};
//    linkedItems[] =
//    {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//        "ItemWatch",
//        "Rangefinder",
//       "ItemGPS"
//    };
//};
//class samg : car //UNNECESSARY
//{
//    displayName = "AA Missile Specialist";
//    secondaryWeapon[] = {"launch_B_Titan_F"};
//    magazines[] +=
//    {
//        LIST_3("Titan_AA")
//    };
//};
//class samag : car //UNNECESSARY
//{
//    displayName = "AA Assistant Missile Specialist";
//    linkedItems[] =
//    {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//       "ItemWatch",
//        "Rangefinder",
//        "ItemGPS"
//    };
//    backpackItems[] =
//    {
//        LIST_2("Titan_AA")
//    };
//};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] = {"CUP_srifle_M24_blk"}; 
	primaryAttachments[] = {}; 
	bipod[] = {"bipod_01_F_blk"}; 
	scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	items[] += {"ACRE_PRC148"};
	backpack[] = {};
	magazines[] +=
	{
		LIST_7("CUP_5Rnd_762x51_M24")
	}; 
	
    };
class sp : r
{
    displayName = "Spotter";
	uniform[] = {"CUP_U_B_BDUv2_roll_gloves_dirty_M81"}; 
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"CUP_U_B_BDUv2_roll_gloves_base"}; 
	vest[] = {"CUP_V_CDF_OfficerBelt"}; 
	headgear[] = {"rhsusf_cvc_green_helmet"}; 
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"}; 
    linkedItems[] += {"ItemGPS"};
	backpack[] = {"CUP_B_AlicePack_OD"}; 
    backpackItems[] = {"ToolKit"};
	magazines[] += 
	{
			LIST_3 ("9Rnd_45ACP_Mag")
	}; 
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
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"}; 
	vest[] = {"CUP_V_B_PilotVest"}; 
	headgear[] = {"CUP_H_SPH4_khaki"}; 
	backpack[] = {}; 
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_SPH4_khaki"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	headgear[] = {"CUP_H_SPH4_khaki"}; 
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
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"CUP_B_AlicePack_OD"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"CUP_B_AlicePack_OD"};
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
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};