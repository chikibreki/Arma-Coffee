
tooltip = "Author: Hadanta\n\n";

class base {
    displayName = "base";
    uniform[] = {"Alpine_Crye_Camo","Alpine_white_Crye_Camo"};
    vest[] = {"dr_Alpinepar_op"};
    backpack[] = {""};
    headgear[] = {"Alpine_opscore_2","Alpine_opscore","White_opscore_2","White_opscore"};
	hmd[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","VSM_Balaclava2_black_Goggles"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base 
{
    displayName = "rifleman";
	vest[] = {"dr_Alpinefacp_op"};
	backpack[] = {""};
	primaryWeapon[] = {"CUP_arifle_HK416_Black"};
	scope[] = {"CUP_optic_CompM2_low"};
    attachment[] = {""};
	silencer[] = {"CUP_muzzle_snds_G36_black"};
	sidearmWeapon[] = {"CUP_hgun_M17_black"};
	sidearmAttachments[] = 
	{
		LIST_1("cup_acc_glock17_flashlight")
	};
	secondaryAttachments[] = {};
	magazines[] =
    {
		LIST_10("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
		LIST_2("CUP_21Rnd_9x19_M17_Black"),
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_HK416_M203_Black"};
    magazines[] =
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_10("CUP_30Rnd_556x45_Emag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
		LIST_2("CUP_21Rnd_9x19_M17_Black"),
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_HK416_CQB_Black"};
	scope[] = {"CUP_optic_compm2_black"};
	attachment[] = {"cup_acc_anpeq_15_top_flashlight_black_l"};
	vest[] = {"dr_Alpinepar_op"};
	primaryAttachments[] = {};
	magazines[] =
    {
        LIST_10("CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red"),
		LIST_4("SmokeShell")
    }; 
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP7"};
	scope[] = {"CUP_optic_microt1_low"};
    attachment[] = {"CUP_acc_anpeq_15_flashlight_black_l"};
	silencer[] = {"CUP_muzzle_snds_mp7"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("CUP_40Rnd_46x30_MP7"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_2("CUP_21Rnd_9x19_M17_Black"),
    };
};
class m : smg
{
    displayName = "Medic";
	vest[] = {"dr_Alpinepar_op"};
	backpack[] = {"Alpine_Backpack_kitbag"};
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
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"dr_Alpinelbt_op"};
	backpack[] = {"Alpine_Backpack_compact"};
    magazines[] +=
    {
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("SmokeShell")
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
		LIST_10("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl"),
		LIST_2("SmokeShellGreen"),
		LIST_2("CUP_21Rnd_9x19_M17_Coyote"),
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
	backpack[] = {"Alpine_Backpack_kitbag"};
	vest[] = {"dr_Alpinepar_mg"};
    primaryWeapon[] = {"CUP_lmg_m249_pip1"};
	scope[] = {"CUP_optic_Eotech553_black"};
	silencer[] = {"cup_muzzle_snds_m16"};
	attachment[] = {};
    magazines[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_2("CUP_21Rnd_9x19_M17_Black")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	scope[] = {"CUP_optic_compm4"};
	attachment[] = {""};
	backpack[] = {"Alpine_Backpack_kitbag"};
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
    primaryWeapon[] = {"cup_lmg_Mk48"};
	scope[] = {"CUP_optic_Eotech553_Black"};
	silencer[] = {"muzzle_snds_H_MG_blk_F"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
		LIST_2("CUP_17Rnd_9x19_glock17"),
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"Alpine_Backpack_kitbag"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M")
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
        LIST_3("CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M")
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
	vest[] = {"rhsusf_spc_light"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    magazines[] +=
    {
        LIST_3("rhs_mag_smaw_HEDP")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	vest[] = {"rhsusf_spc_light"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEDP")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	vest[] = {"rhsusf_spc_light"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEDP")
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
    headgear[] = {"VSM_Beanie_OD"};
	vest[] = {"VSM_FAPC_Operator_M81"};
	backpack[] = {};
    primaryWeapon[] = {"CUP_srifle_M24_wdl"};
    scope[] = {"cup_optic_leupoldmk4_10x40_lrt_woodland"};
	attachment[] = {"cup_mxx_camo"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	silencer[] = {"muzzle_snds_b"};
	sidearmWeapon[] = {"CUP_hgun_M17_Black"};
    magazines[] =
    {
        LIST_15("CUP_5Rnd_762x51_M24"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_21Rnd_9x19_M17_Black"),
       };
	items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","VSM_Facemask_OD_Peltor"};
};
class sp : r
{
    displayName = "Spotter";
	vest[] = {"VSM_LBT6094_operator_M81"};
	backpackItems[] = 
	{
		LIST_10("CUP_5Rnd_762x51_M24")
	
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
	items[] += {"ACRE_PRC148"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"VSM_MBSS_PACA_CB"};
    headgear[] = {};
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
	headgear[] = {"VSM_BackwardsHat_Peltor_US"};
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
