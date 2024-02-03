class base {
    displayName = "base";
    uniform[] = {"CUP_I_B_PARA_Unit_4"};
    vest[] = {"MNP_Vest_ISRKahki_2"};
    backpack[] = {"B_Kitbag_cbr"};
    headgear[] = {"CUP_H_RUS_K6_3_Goggles"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
	sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    magazines[] = {
	};  
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS", "CUP_NVG_HMNVS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_RUS_K6_3_Goggles"};
	primaryWeapon[] = {"rhs_weap_vhsd2"};
	scope[] = {"CUP_optic_VortexRazor_UH1_Black"};
	primaryAttachments[] = {"CUP_acc_Flashlight", "rhsusf_acc_SFMB556"}; 
	uniform[] = {"CUP_I_B_PARA_Unit_4"}; 
	magazines[] +=
    {
        LIST_6("rhsgref_30rnd_556x45_vhs2"),
		LIST_3("rhsgref_30rnd_556x45_vhs2_t"), 
        LIST_2("rhs_grenade_m1939l_f_mag"),
		LIST_2("rhs_mag_an_m8hc"); 
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"B_Kitbag_cbr"};
	uniform[] = {"CUP_I_B_PARA_Unit_1"}; 
	headgear[] = {"CUP_H_RUS_K6_3_Goggles"}; 
    primaryWeapon[] = {"rhs_weap_vhsd2_bg"};
	scope[] = {"CUP_optic_VortexRazor_UH1_Black"};
	primaryAttachments[] = {"CUP_acc_Flashlight", "rhsusf_acc_SFMB556"}; 
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"), 
		LIST_2("1Rnd_SmokeRed_Grenade_shell"), 
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"rhs_weap_vhsk2"};
	uniform[] = {"CUP_U_B_BDUv2_roll2_gloves_M81"};  
	scope[] = {"CUP_optic_VortexRazor_UH1_Black"};
	primaryAttachments[] = {"CUP_acc_Flashlight", "rhsusf_acc_SFMB556"}; 
	magazines[] =
    {
        LIST_6("rhsgref_30rnd_556x45_vhs2"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag")
    };
   };
class m : car
{
    displayName = "Medic";
	backpack[] = {"CUP_B_GER_Medic_Desert"};
	uniform[] = {"CUP_I_B_PARA_Unit_4"}; 
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
	uniform[] = {"CUP_I_B_PARA_Unit_4"};
	headgear[] = {"CUP_H_RUS_K6_3_Goggles"}; 
    primaryWeapon[] = {"CUP_arifle_X95"};
	scope[] = {"CUP_optic_MicroT1"};
	primaryAttachments[] = {"CUP_muzzle_mfsup_SCAR_L","CUP_acc_Flashlight"};
    magazines[] =
    {
		LIST_2("rhs_grenade_m1939l_f_mag"),
		LIST_2("rhs_grenade_anm8_mag")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	backack[] = {"CUP_V_B_PASGT_OD"}; 
	scope[] = {"optic_MRCO"}; 
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeBlue_Grenade_shell"),
		LIST_2("1Rnd_SmokePurple_Grenade_shell"),
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	headgear[] = {"CUP_H_RUS_K6_3_Goggles"}; 
	uniform[] = {"CUP_I_B_PARA_Unit_4"};  
	items[] += {"ACRE_PRC148"};
	backPack[] = {"B_Kitbag_cbr"}; 
	magazines[] +=
	{
		
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
	backpack[] = {"B_Kitbag_cbr"};
	headgear[] = {"CUP_H_RUS_K6_3_Shield_Down"}; 
	uniform[] = {"CUP_I_B_PARA_Unit_4"}; 
	primaryWeapon[] = {"LMG_Mk200_F"};
	primaryAttachments[] = {"ACE_muzzle_mzls_H","rhsusf_acc_M952V"};
    bipod[] = {"bipod_01_F_blk"};
	scope[] = {"CUP_optic_HoloBlack"};
    magazines[] =
    {
        LIST_4("200Rnd_65x39_cased_Box_Tracer_Red"),
		LIST_1("rhs_grenade_m1939l_f_mag"),
		LIST_1("rhs_mag_an_m8hc"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	uniform[] = {"CUP_I_B_PARA_Unit_1"}; 
	headgear[] = {"CUP_H_RUS_K6_3_Goggles"}; 
	backpack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_4("200Rnd_65x39_cased_Box_Tracer_Red")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
	uniform[] = {"CUP_I_B_PARA_Unit_4"}; 
};
class dm : r
{
    displayName = "Designated Marksman";
	uniform[] = {"CUP_I_B_PARA_Unit_1"}; 
	primaryWeapon[] = {"rhs_weap_m14ebrri"};
	primaryAttachments[] = {};
    scope[] = {"CUP_optic_SB_11_4x20_PM"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_4("CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"),
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_Mk48"};
	scope[] = {"CUP_optic_AIMM_COMPM4_BLK"}; 
	primaryAttachments[] = {"ACE_muzzle_mzls_B","rhsusf_acc_wmx_bk"}; 
    magazines[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	uniform[] = {"CUP_I_B_PARA_Unit_4"}; 
	backpack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"B_Kitbag_cbr"};
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
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	backpack[] = {"rhs_tortila_khaki"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    magazines[] +=
    {
        LIST_3("CUP_SMAW_HEAA_M"),
		LIST_1("CUP_SMAW_HEDP_M"),
		LIST_3("rhs_mag_smaw_SR")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	uniform[] = {"CUP_I_B_PARA_Unit_1"}; 
	backpack[] = {"rhs_tortila_khaki"};
    backpackItems[] =
    {
        LIST_2("CUP_SMAW_HEAA_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"rhs_tortila_khaki"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_SMAW_HEAA_M"),
		LIST_2("CUP_SMAW_HEDP_M"),
		LIST_3("rhs_mag_smaw_SR") 
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
	primaryWeapon[] = {"rhs_weap_M107"}; 
	primaryAttachments[] = {}; 
	bipod[] = {}; 
	scope[] = {"rhsusf_acc_nxs_5522x56_md_sun"};
	items[] += {"ACRE_PRC148"};
	backpack[] = {};
	magazines[] +=
	{
		LIST_5("rhsusf_mag_10Rnd_STD_50BMG_M33")
	}; 
	
    };
class sp : r
{
    displayName = "Spotter";
	uniform[] = {"CUP_I_B_PARA_Unit_4"}; 
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
	uniform[] = {"CUP_I_B_PARA_Unit_7"}; 
	vest[] = {"V_HarnessO_gry"}; 
	headgear[] = {"rhs_6b48"};  
    linkedItems[] += {"ItemGPS"};
	backpack[] = {"B_LegStrapBag_coyote_F"}; 
    backpackItems[] = {"ToolKit"};
	magazines[] += 
	{
			
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
	uniform[] = {"CUP_I_B_PMC_Unit_39"}; 
	vest[] = {"rhs_6sh46"}; 
	headgear[] = {"rhs_6m2_1"}; 
	backpack[] = {"B_LegStrapBag_coyote_F"}; 
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"rhs_6m2_1"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	headgear[] = {"rhs_6m2_1"}; 
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
    backpack[] = {"B_Kitbag_cbr"};
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
	backpack[] = {"B_Kitbag_cbr"};
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
class brchr : SMG
{
	displayName = "Breacher";
	primaryWeapon[] = {"CUP_sgun_M1014_Entry_vfg"}; 
	scope[] = {"CUP_optic_MicroT1"};
	primaryAttachments[] = {"CUP_acc_ANPEQ_15_Top_Flashlight_Black_L"}; 
	magazines[] = {
		LIST_6("CUP_6Rnd_12Gauge_Pellets_No00_Buck"),
		LIST_3("CUP_6Rnd_12Gauge_Slug"),
		LIST_8("rhs_grenade_m1939l_f_mag"),
		LIST_2("rhs_grenade_anm8_mag"),
		LIST_2("ACE_M84"),
		LIST_2("rhs_grenade_m1939l_mag")
	}; 
	items[] += {
		LIST_3("rhs_ec75_mag")
	};
	linkedItems[] += {
		"ACE_EntrenchingTool",
		"ACE_wirecutter",
		"ACE_Clacker"
	};
};