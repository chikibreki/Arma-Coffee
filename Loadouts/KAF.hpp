class base {
    displayName = "base";
    uniform[] = {"rhsgref_uniform_altis_lizard_olive"};
    vest[] = {"MNP_Vest_ISRKahki_1"};
    backpack[] = {"CUP_B_Kombat_Olive"};
    headgear[] = {"CUP_H_Ger_M92"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS", "CUP_NVG_HMNVS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_Galil_SAR_black"};
	scope[] = {"CUP_optic_AC11704_Black"};
	sidearmWeapon[] = {"hgun_ACPC2_F"}; 
    sidearmAttachments[] = {"CUP_acc_MLPLS_Laser"};
	magazines[] +=
    {
        LIST_9("CUP_35Rnd_556x45_Galil_Mag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("rhs_grenade_anm8_mag"),
		LIST_4("9Rnd_45ACP_Mag"), 
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"SMG_01_F"};
	scope[] = {"CUP_optic_AC11704_Black"}; 
    magazines[] +=
    {
        LIST_2("rhsusf_mag_6Rnd_M441_HE"),
        LIST_2("CUP_6Rnd_Smoke_M203"),
		LIST_6("30Rnd_45ACP_Mag_SMG_01")
    };
	backpackItems[] += {"rhs_weap_m32"}; 
};
class car : r
{
    displayName = "Carabinier";
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
    primaryWeapon[] = {"SMG_01_F"};
	scope[] = {"rhs_acc_1p87"}; 
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("30Rnd_45ACP_Mag_SMG_01"),
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
    
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class sl : ftl
{
    displayName = "Squad Leader";
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
class fac : r
{
    displayName = "Forward Air Controller";
	linkedItems[] =
	{
		"rangefinder",
	}; 
};
class ar : r
{
    displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_Galil_556_black"};
	scope[] = {"CUP_optic_AC11704_Black"};
    magazines[] =
    {
        LIST_8("CUP_50Rnd_556x45_Red_Tracer_Galil_Mag"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"rhs_6b28_green"};
    backpackItems[] =
    {
        LIST_6("CUP_50Rnd_556x45_Red_Tracer_Galil_Mag")
    };
    linkedItems[] += {"rangefinder"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_RSASS_Black"};
	primaryAttachments[] = {"CUP_muzzle_mfsup_SCAR_H"};
    scope[] = {"CUP_optic_SB_11_4x20_PM"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_4("CUP_20Rnd_TE1_Red_Tracer_762x51_M110"),
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"LMG_Zafir_F"};
	scope[] = {"CUP_optic_AC11704_Black"}; 
    magazines[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
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
//class hmgg : car //UNNECESSARY
//{
//    displayName = "HMG Gunner";
//    backPack[] = {"B_HMG_01_weapon_F"};
//};
//class hmgac : r //UNNECESSARY
//{
//    displayName = "HMG Ammo Carrier";
//    backPack[] = {"B_HMG_01_weapon_F"};
//};
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
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"CUP_optic_MAAWS_Scope"};
    magazines[] +=
    {
        LIST_3("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
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
	primaryWeapon[] = {"rhs_weap_XM2010"};
	scope[] = {"CUP_optic_LeupoldMk4_25x50_LRT"}; 
	bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{ 
	LIST_5 ("CUP_5Rnd_762x67_G22"), 
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
	uniform[] = {"MNP_CombatUniform_OD_Rg"}; 
	vest[] = {"V_BandollierB_rgr"}; 
	headgear[] = {"rhsusf_cvc_green_helmet"}; 
	backPack[] = {"CUP_B_IDF_Backpack"}; 
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"rangefinder"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : vd
{
    displayName = "Helicopter Pilot";
	uniform[] = {"rhsgref_uniform_olive"}; 
	vest[] = {"Aircrew_vest_2_NH"}; 
	headgear[] = {"rhsusf_hgu56p_visor_green"}; 
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
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag")
    };
	linkedItems[] += {"ACE_EntrenchingTool", "ACE_M26_Clacker", "ACE_Clacker", "ACE_DefusalKit"}; 

};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"rhs_6b28_green"};
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