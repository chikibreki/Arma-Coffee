class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
    backpack[] = {"B_Kitbag_sgg"};
    headgear[] = {};
    goggles[] = {"default"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:african", "faceset:caucasian"};
    // Leave empty to not change faces.
    insignias[] = {"111thID"};
    // Leave empty to not change insignias

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {"FirstAidKit"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};

class r : baseMan
{
    displayName = "Rifleman";
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_OD_US"};
    vest[] = {"CUP_V_B_PASGT"};
    headgear[] = {"CUP_H_C_MAGA_01"};
    primaryWeapon[] = {"CUP_SKS_rail"};
    scope[] = {"CUP_optic_Aimpoint_5000"};
    magazines[] +=
    {
        LIST_10("CUP_10Rnd_762x39_SKS_M")
    };
};

class r2 : baseMan
{
    displayName = "Rifleman";
    uniform[] = {"CUP_U_B_USArmy_ACU_Rolled_UCP"};
    vest[] = {"CUP_V_B_PASGT_no_bags_CCE"};
    headgear[] = {"CUP_H_CZ_Hat03"};
    primaryWeapon[] = {"rhs_weap_m14_rail"};
    scope[] = {"CUP_optic_Aimpoint_5000"};
    magazines[] +=
    {
        LIST_10("10Rnd_Mk14_762x51_Mag")
    };
};

class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MX_GL_F"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"arifle_MXC_F"};
};
class m : car
{
    displayName = "Medic";
    uniform[] = {"CUP_I_B_PARA_Unit_1"};
    vest[] = {"rhsusf_mbav_medic"};
    headgear[] = {"CUP_H_SLA_BeretRed"};
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    magazines[] +=
    {
        LIST_10("rhsusf_8Rnd_00Buck")
    };
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
    magazines[] =
    {
        LIST_10("30Rnd_45ACP_Mag_SMG_01"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    uniform[] = {"CUP_U_B_USMC_FROG2_WMARPAT"};
    vest[] = {"rhsusf_plateframe_teamleader"};
    hmd[] = {"CUP_NVG_GPNVG_black"};
    headgear[] = {"rhsusf_opscore_ut_pelt_nsw_cam"};
    primaryWeapon[] = {"CUP_arifle_M4A1_SOMMOD_black"};
    scope[] = {"rhsusf_acc_EOTECH"};
    attachment[] = {"rhsusf_acc_anpeq15_wmx_light"};
    sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
    magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_PMAG_QP_Olive"),
        LIST_4("CUP_17Rnd_9x19_glock17")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};

class ftl2 : g
{
    displayName = "Fireteam Leader";
    uniform[] = {"CUP_U_B_USMC_MCCUU_roll_2_pads_gloves"};
    vest[] = {"CUP_V_B_Armatus_US_MCam"};
    hmd[] = {"CUP_NVG_GPNVG_black"};
    headgear[] = {"rhsusf_mich_bare_norotos_arc_alt"};
    primaryWeapon[] = {"rhs_weap_ak103_zenitco01_b33"};
    scope[] = {"rhsusf_acc_eotech_552"};
    attachment[] = {"CUP_acc_ANPEQ_15_Top_Flashlight_Black_L"};
    sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
    magazines[] +=
    {
        LIST_10("rhs_30Rnd_762x39mm_polymer"),
        LIST_4("CUP_17Rnd_9x19_glock17")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};



class sl : ftl
{
    displayName = "Squad Leader";
    uniform[] = {"CUP_I_B_PMC_Unit_42"};
    vest[] = {"CUP_V_B_Armatus_BB_OD"};
    hmd[] = {"CUP_NVG_GPNVG_black"};
    headgear[] = {"rhsusf_protech_helmet_rhino"};
    primaryWeapon[] = {"CUP_lmg_m249_para"};
    sidearmWeapon[] = {"CUP_hgun_Mk23"};
    magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_PMAG_QP"),
        LIST_4("CUP_12Rnd_45ACP_mk23")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
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
    uniform[] = {"CUP_U_B_BDUv2_roll_dirty_M81_US"};
    vest[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2"};
    headgear[] = {"CUP_H_USA_Boonie_wdl"};
    primaryWeapon[] = {"rhs_weap_mosin_sbr"};
    scope[] = {"rhsusf_acc_ACOG2"};
    magazines[] +=
    {
        LIST_10("rhsgref_5Rnd_762x54_m38")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};


class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    uniform[] = {"CUP_U_B_USArmy_Soft"};
    vest[] = {"CUP_V_PMC_CIRAS_OD_Empty"};
    headgear[] = {"CUP_H_RUS_K6_3_Shield_Up_khaki"};
    primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden"};
    magazines[] +=
    {
        LIST_10("CUP_20Rnd_762x51_FNFAL_M")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};


class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
    magazines[] +=
    {
        "NLAW_F"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_DMR_03_tan_F"};
    scope[] = {"optic_MRCO"};
    bipod[] = {"bipod_01_F_snd"};
    magazines[] =
    {
        LIST_11("20Rnd_762x51_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_sand_F"};
    scope[] = {"optic_MRCO"};
    magazines[] =
    {
        LIST_5("130Rnd_338_Mag"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_weapon_F"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_NLAW_F"};
    magazines[] +=
    {
        LIST_3("NLAW_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("NLAW_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("NLAW_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"B_AT_01_weapon_F"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_AT_01_weapon_F"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_B_Titan_F"};
    magazines[] +=
    {
        LIST_3("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_B_GhillieSuit"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_LRR_F"};
    scope[] = {"optic_SOS"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    magazines[] =
    {
        LIST_7("7Rnd_408_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {"optic_MRCO"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {"B_AssaultPack_mcamo"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {"B_AssaultPack_mcamo"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
    vest[] = {};
    backpack[] = {};
    sidearmWeapon[] = {"CUP_hgun_Deagle"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};



class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"V_PlateCarrier3_rgr"};
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
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"V_PlateCarrier3_rgr"};
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
};