
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BAF_DDPM_UBACSLONG_Gloves"};
    vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Empty"};
    backpack[] = {};
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
    headgear[] = {"CUP_H_BAF_DDPM_Mk6_EMPTY"};
	primaryWeapon[] = {"CUP_arifle_L85A2_G"};
    attachment[] = {"CUP_acc_LLM"};
	scope[] = {"CUP_optic_HoloBlack"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_Stanag_L85"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Grenadier"};
	backpack[] = {"CUP_B_Motherlode_MTP"};
    primaryWeapon[] = {"rhs_weap_m16a4_M203"};
	scope[] = {"CUP_optic_HoloBlack"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m4a1_d"};
	primaryAttachments[] = {};
};
class m : car
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
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_05_F"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("30Rnd_9x21_Mag_SMG_02"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Officer"};
	backpack[] = {"CUP_B_Motherlode_Radio_MTP"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
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
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"rhsusf_8point_marpatd"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Predator_Radio_MTP"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_AutomaticRifleman"};
	backpack[] = {"CUP_B_Motherlode_MTP"};
    primaryWeapon[] = {"rhs_weap_m249_pip"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_Motherlode_MTP"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136_hedp"};
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Scout"};
    primaryWeapon[] = {"CUP_srifle_L129A1_HG"};
	primaryAttachments[] = {};
    scope[] = {"CUP_optic_Leupold_VX3"};
    bipod[] = {"CUP_bipod_Harris_1A2_L"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_L129_M"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_L7A2"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_Motherlode_MTP"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
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
        LIST_3("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
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
	backpack[] = {"CUP_B_Motherlode_MTP"};
    secondaryWeapon[] = {"CUP_launch_Javelin"};
	backpackItems[] =
    {
        LIST_1("CUP_Javelin_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_Motherlode_MTP"};
    backpackItems[] =
    {
        LIST_2("CUP_Javelin_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_Motherlode_MTP"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_Javelin_M")
    };
};
//class hatg : car
//{
//    displayName = "HAT Gunner";
//	  vest[] = {"rhsusf_spc_light"};
//    backpack[] = {"rhs_Tow_Gun_Bag"};
//	  items[] += {"ACRE_PRC148"};
//};
//class hatac : r
//{
//    displayName = "HAT Ammo Carrier";
//	 vest[] = {"rhsusf_spc_light"};
//    backpack[] = {"B_AT_01_weapon_F"};
//};
//class hatag : car
//{
//    displayName = "HAT Assistant Gunner";
//	 vest[] = {"rhsusf_spc_light"};
//   backpack[] = {"rhs_TOW_Tripod_Bag"};
//	 items[] += {"ACRE_PRC148"};
//    linkedItems[] +=
//    {
//        "Rangefinder",
//	};
//};
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
	uniform[] = {"CUP_U_B_BAF_DDPM_GHILLIE"};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Belt"};
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_AS50"};
    scope[] = {"CUP_optic_SB_3_12x50_PMII_PIP"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_7("CUP_5Rnd_127x99_as50_M"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : r
{
    displayName = "Spotter";
	uniform[] = {"CUP_U_B_BAF_DDPM_GHILLIE"};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Belt"};
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
    vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Crewman"};
    backpack[] = {"CUP_B_Motherlode_MTP"};
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
    headgear[] = {"CUP_H_SPH4"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_SPH4"};
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
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"};
    backpack[] = {"CUP_B_Motherlode_MTP"};
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
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"};
	backpack[] = {"CUP_B_Motherlode_MTP"};
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