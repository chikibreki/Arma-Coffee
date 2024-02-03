class base {
    displayName = "base";
    uniform[] = {"MNP_CombatUniform_Fin_B"};
    vest[] = {"MNP_Vest_FIN_2"};
    backpack[] = {"B_AssaultPack_sgg"};
    headgear[] = {"rhsusf_opscore_rg_cover_pelt"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
	sidearmWeapon[] = {"CUP_hgun_Glock17"}; 
    sidearmAttachments[] = {"optic_MRD", "CUP_acc_Glock17_Flashlight"};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","CUP_PMC_Facewrap_Black","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS", "CUP_NVG_HMNVS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_Mk16_STD_black"};
	scope[] = {"CUP_optic_CompM4"}; 
	primaryAttachments[] = {"CUP_acc_ANPEQ_15_Flashlight_Black_L", "rhsusf_acc_SFMB556"}; 
	sidearmWeapon[] = {"CUP_hgun_Glock17"}; 
	sidearmAttachments[] = {"optic_MRD", "CUP_acc_Glock17_Flashlight"}; 
	magazines[] +=
    {
        LIST_9("ACE_30Rnd_556x45_Stanag_Mk318_mag"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_grenade_anm8_mag"), 
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP");
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","CUP_NVG_PVS15_black"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_Mk16_STD_EGLM_black"};
	scope[] = {"CUP_optic_CompM4"}; 
    magazines[] +=
    {
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"), 
		LIST_2("1Rnd_SmokeRed_Grenade_shell"), 
    };
	linkedItems[] = {"CUP_NVG_PVS15_black"}; 
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_Mk16_CQC_black"};
	scope[] = {"CUP_optic_CompM4"}; 
	primaryAttachments[] = {"CUP_muzzle_mfsup_Flashhider_556x45_Black", "CUP_acc_ANPEQ_2_grey"}; 
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
    primaryWeapon[] = {"CUP_arifle_X95"};
	primaryAttachments[] = {"ACE_muzzle_mzls_L", "CUP_acc_ANPEQ_2_grey"};
	scope[] = {"CUP_optic_MicroT1"}; 
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	scope[] = {"rhsusf_acc_ACOG2_USMC"}; 
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeBlue_Grenade_shell"),
		LIST_2("1Rnd_SmokePurple_Grenade_shell")
		
    };
    linkedItems[] += {"Rangefinder"};
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
        "ItemGPS",
		"CUP_NVG_PVS15_black"
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
	primaryWeapon[] = {"CUP_arifle_HK_M27_VFG"};
	primaryAttachments[] = {"ACE_muzzle_mzls_L", "CUP_acc_ANPEQ_15_Flashlight_Black_L"};
    bipod[] = {};
	scope[] = {"CUP_optic_Eotech553_Black"};
    magazines[] =
    {
        LIST_3("CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15")
    };
    linkedItems[] += {"Rangefinder"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"}; 
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_svdp_npz"};
	primaryAttachments[] = {};
	bipod[] = {};
    scope[] = {"optic_SOS"};
	sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhs_10Rnd_762x54mmR_7N1"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
		
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	sidearmWeapon[] = {}; 
	scope[] = {""}; 
    magazines[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
		
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M")
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
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M")
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
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    magazines[] +=
    {
        LIST_3("rhs_mag_maaws_HEAT"),
		LIST_1("rhs_mag_maaws_HEDP")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
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
        LIST_2("rhs_mag_maaws_HEAT"),
		LIST_2("rhs_mag_maaws_HEDP")
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
	primaryWeapon[] = {"CUP_srifle_M107_Pristine"}; 
	primaryAttachments[] = {}; 
	bipod[] = {}; 
	scope[] = {"optic_LRPS"};
	items[] += {"ACRE_PRC148"};
	backpack[] = {};
	magazines[] +=
	{
		LIST_7("CUP_10Rnd_127x99_M107")
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
	uniform[] = {"CUP_U_O_RUS_EMR_1"}; 
	vest[] = {"CUP_V_CDF_CrewBelt"}; 
	headgear[] = {"rhs_tsh4"}; 
    linkedItems[] += {"ItemGPS"};
	backpack[] = {"B_LegStrapBag_black_F"}; 
    backpackItems[] = {"ToolKit"};
	magazines[] += 
	{
			
	}; 
};
class vc : vd
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    linkedItems[] += {"Rangefinder"};
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
	uniform[] = {"U_B_HeliPilotCoveralls"}; 
	vest[] = {"CUP_V_CZ_vest20"}; 
	headgear[] = {"H_PilotHelmetHeli_O"}; 
	backpack[] = {}; 
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