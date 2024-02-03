class base {
    displayName = "base";
    uniform[] = {"MNP_CombatUniform_IR_IRGC_Med_B"};
    vest[] = {"CUP_V_B_RRV_Scout3"};
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"MNP_Helmet_PAGST_IRGC"};
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
	primaryWeapon[] = {"arifle_Katiba_F"};
    attachment[] = {"rhs_acc_perst1ik_ris"};
	scope[] = {"CUP_optic_AC11704_Black"};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {"hgun_Rook40_F"}; 
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_9("30Rnd_65x39_caseless_Green"),
		LIST_3("30Rnd_65x39_caseless_Green_mag_tracer"), 
        LIST_2("rhs_mag_rgo"),
		LIST_2("SmokeShell"),
		LIST_4("16Rnd_9x21_Mag"); 
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_Katiba_GL_F"};
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
	primaryWeapon[] = {"arifle_Katiba_C_F"};
   };
class m : car
{
    displayName = "Medic";
	backpack[] = {"CUP_B_TK_Medic_Desert"};
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
    primaryWeapon[] = {"CUP_arifle_SR3M_Vikhr"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x39_SP5_VIKHR_M"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	scope[] = {"optic_MRCO"}; 
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeBlue_Grenade_shell")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	uniform[] = {"MNP_CombatUniform_IR_IRGC_A"}; 
	items[] += {"ACRE_PRC148"};
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
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	primaryAttachments[] = {};
    bipod[] = {};
	scope[] = {"rhs_acc_1p63"};
    magazines[] =
    {
        LIST_3("rhs_75Rnd_762x39mm_tracer"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("rhs_75Rnd_762x39mm_tracer")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_RPG26_Loaded"};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_svdp"};
	primaryAttachments[] = {""};
    scope[] = {"rhs_acc_pso1m21_svd"};
	bipod[] = {""};
    magazines[] =
    {
        LIST_4("10Rnd_762x54_Mag"),
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_MG3_rail"};
	scope[] = {"optic_MRCO"}; 
    magazines[] =
    {
        LIST_4("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"),
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
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
        LIST_3("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
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
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7VL_mag"),
		LIST_2("rhs_rpg7_OG7V_mag")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
		LIST_2("rhs_rpg7_OG7V_mag")
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
	primaryWeapon[] = {"RHS_weap_t5000"}; 
	primaryAttachments[] = {"CUP_bipod_VLTOR_Modpod_black"}; 
	scope[] = {"rhs_acc_dh520x56"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_7("CUP_5Rnd_762x67_G22")
	}; 
	
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
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"MNP_CombatUniform_IR_IRGC_A"}; 
	vest[] = {"V_BandollierB_cbr"}; 
	backPack[] = {"B_LegStrapBag_coyote_F"}; 
	headgear[] = {"rhs_tsh4"}; 
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
	uniform[] = {"CUP_U_B_USMC_PilotOverall"}; 
	vest[] = {"V_HarnessO_brn"}; 
	headgear[] = {"H_PilotHelmetHeli_O"}; 
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
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
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"CUP_B_RPGPack_Khaki"};
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
	backpack[] = {"CUP_B_RPGPack_Khaki"};
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