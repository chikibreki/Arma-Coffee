
tooltip = "Author: GunnerRya feat. Rockcabbage\n\n";

class base {
    displayName = "base";
    uniform[] = {"cwr3_b_uniform_pilot_black"};
    vest[] = {"CUP_V_CZ_NPP2006_nk_black"};
    headgear[] = {"CUP_H_RUS_K6_3_black"};
    hmd[] = {"CUP_NVG_PVS15_black"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White", "SmokeShell", "vn_m67_grenade_mag"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_X95"};
	scope[] = {"CUP_optic_Aimpoint_5000"}; 
    attachment[] = {"ACE_acc_pointer_green"};
    silencer[] = {"CUP_muzzle_mfsup_Flashhider_556x45_Black"};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_12("CUP_30Rnd_556x45_X95_Tracer_Yellow"),
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"Black_Backpack_kitbag"};
    primaryWeapon[] = {"arifle_CTAR_GL_blk_F"};
    scope[] = {"CUP_optic_Aimpoint_5000"}; 
    attachment[] = {"ACE_acc_pointer_green"};
    magazines[] =
    {
        LIST_12("30Rnd_580x42_Mag_F"),
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"Black_CarryAll"};
    primaryWeapon[] = {"CUP_arifle_Fort222"};
	backpackItems[] =
	 {
        LIST_3("SmokeShell"),
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
    magazines[] = 
    {
        LIST_10("CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
};
class ftl : g
{
    displayName = "Fireteam Leader";
    headgear[] = {"CUP_H_RUS_K6_3_Goggles_black"};
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
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"Black_Backpack_Compact"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_Fort222"};
    attachment[] = {"ACE_acc_pointer_green"};
 	backpack[] = {"Black_Backpack_Compact"};
    magazines[] = 
    {
        LIST_10("CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M")
    };
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backpack[] = {"Black_Backpack_kitbag"};
    secondaryWeapon[] = {"vn_m72"};
    backpackItems[] =
        {
            LIST_3("vn_m72_mag")
        };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_G22_blk"};
    silencer[] = {"CUP_muzzle_snds_AWM"};
    scope[] = {"CUP_optic_AN_PVS_10_black"};
    bipod[] = {"CUP_bipod_Harris_1A2_L_BLK"};
    magazines[] =
    {
        LIST_11("CUP_5Rnd_762x67_G22"),
    };
    linkedItems[] += {"Binocular"};
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
    magazines[] = 
    {
        LIST_11("30Rnd_65x39_caseless_green_mag_Tracer")
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
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"rhsusf_cvc_helmet"};
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
    backpack[] = {};
    headgear[] = {"rhsusf_hgu56p"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"rhsusf_hgu56p_mask"};
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
	vest[] = {"rhsusf_spc_light"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy_engineer"};
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
