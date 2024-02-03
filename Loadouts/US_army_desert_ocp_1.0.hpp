
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_USArmy_ACU_Kneepad_Gloves_OCP"};
    vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_Deltoid_USArmy"};
    backpack[] = {"CUP_B_US_Assault_OCP"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","CUP_NVG_PVS14"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_USArmy_HelmetACH_GCOVERED_OCP"};
	primaryWeapon[] = {"CUP_arifle_M16A4_Base"};
	scope[] = {"cup_optic_compm2_low"};
    attachment[] = {"cup_acc_anpeq_15_flashlight_black_l"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_Stanag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_B_IOTV_OCP_Grenadier_USArmy"};
    primaryWeapon[] = {"CUP_arifle_M16A4_GL"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HEDP_M203"),
        LIST_4("CUP_1Rnd_Smoke_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_M4A1_Black"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_IOTV_OCP_Medic_USArmy"};
	backpack[] = {"CUP_B_US_Assault_OCP"};
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
	scope[] = {};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x19_MP5"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_B_IOTV_OCP_TL_USArmy"};
	primaryWeapon[] = {"CUP_arifle_M16A4_GL"};
	scope[] = {"CUP_optic_ACOG2"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_B_IOTV_OCP_SL_USArmy"};
	headgear[] = {"CUP_H_USArmy_HelmetACH_GCOVERED_OCP"};
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
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_B_IOTV_OCP_SAW_USArmy"};
	backpack[] = {"CUP_B_US_IIID_OCP"};
    primaryWeapon[] = {"CUP_lmg_M249_pip1"};
	scope[] = {"cup_optic_eotech553_black"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_US_IIID_OCP"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy"};
    primaryWeapon[] = {"CUP_srifle_m110_kac_black"};
	primaryAttachments[] = {"CUP_acc_ANPEQ_15_Flashlight_Black_L"};
    scope[] = {"CUP_optic_ACOG2"};
    bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] =
    {
        LIST_10("CUP_20Rnd_762x51_B_M110"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M240_B"};
	scope[] = {"cup_optic_elcanm145"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_US_IIID_OCP"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy"};
	backpack[] = {"CUP_B_USPack_AT_OCP"};
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"CUP_optic_MAAWS_Scope"};
    magazines[] +=
    {
        LIST_3("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy"};
	backpack[] = {"B_Carryall_mcamo"};
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy"};
	backpack[] = {"B_Carryall_mcamo"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy"};
    backpack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
	items[] += {"ACRE_PRC148"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy"};
    backpack[] = {"B_Carryall_mcamo"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	vest[] = {"CUP_V_B_IOTV_OCP_Rifleman_Deltoid_USArmy"};
    backpack[] = {"B_Carryall_mcamo"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
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
    primaryWeapon[] = {"CUP_srifle_M24_blk"};
    scope[] = {"CUP_optic_LeupoldM3LR"};
	 bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] =
    {
        LIST_8("CUP_5Rnd_762x51_M24"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
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
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_B_IOTV_OCP_Empty_USArmy"};
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"CUP_H_CVC"};
	goggles[] = {"rhs_googles_clear"};
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
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
    backpack[] = {};
    headgear[] = {"CUP_H_SPH4_grey"};
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_SPH4_grey"};
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
    backpack[] = {"B_Carryall_mcamo"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_Carryall_mcamo"};
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
