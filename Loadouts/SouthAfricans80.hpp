class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_O_RUS_M88_MSV"};
    vest[] = {"vn_b_vest_seal_05"};
    backpack[] = {"B_Carryall_khk"};
    headgear[] = {"H_Booniehat_khk"};
    goggles[] = {"default"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:caucasian"};
    // Leave empty to not change faces.
    insignias[] = {};
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
        "ItemWatch",
        "ItemGPS"
    };
    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};

class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"rhs_weap_m21a"};
    magazines[] =
    {
        LIST_13("rhsgref_30rnd_556x45_m21"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : baseman
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_glaunch_6G30"};
	sidearmWeapon[] = {"CUP_hgun_TEC9_FA"};
    magazines[] +=
    {
        LIST_8("CUP_6Rnd_HE_GP25_M"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_6("CUP_32Rnd_9x19_TEC9")
    };
};
class car : baseman
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden"};
    magazines[] =
    {
        LIST_12("CUP_20Rnd_762x51_FNFAL_M"),
		LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : r
{
    displayName = "Medic";
	sidearmWeapon[] = {"rhsusf_weap_m9"};
	magazines[] +=
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP")
    };
        backpackItems[] = {
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_20("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_3("ACE_salineIV_250"),
        LIST_5("ACE_salineIV_500"),
        LIST_2("ACE_salineIV"),
        LIST_10("ACE_splint"),
        LIST_2("ACE_bloodIV_500"),

    };
};
class smg : baseMan
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x19_MP5"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};


class ftl : r
{
    displayName = "Fireteam Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
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
    primaryWeapon[] = {"rhs_weap_fnmag"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP"),
		LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("HandGrenade")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden"};
    magazines[] =
    {
        LIST_12("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_2("HandGrenade"),
        "SmokeShell"
    };
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_RPG7_F"};
    magazines[] +=
    {
        "RPG7_F"
    };
	backpackItems[] = {
        LIST_2("RPG7_F")
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

class sn : r
{
    displayName = "Sniper";
    uniform[] = {"CUP_I_B_PMC_Unit_32"};
    vest[] = {"CUP_V_JPC_communicationsbelt_rngr"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_PMC_Cap_Back_PRR_Grey"};
    hmd[] = {"CUP_NVG_GPNVG_black"};
    primaryWeapon[] = {"rhs_weap_ak105_zenitco01_b33"};
    scope[] = {"rhsusf_acc_eotech_552"};
    attachment[] = {"CUP_muzzle_pbs4","CUP_acc_ANPEQ_15_Black","rhsusf_acc_kac_grip"};
    sidearmWeapon[] = {"CUP_hgun_Mk23"};
    sidearmAttachments[] = {"CUP_muzzle_snds_mk23", "CUP_acc_mk23_lam_f"};
    magazines[] =
    {
        LIST_12("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("HandGrenade"),
        LIST_4("CUP_12Rnd_45ACP_mk23")
    };
};


class samag : sn
{
    displayName = "AA Assistant Missile Specialist";
    primaryWeapon[] = {"rhs_weap_m32"};
    sidearmWeapon[] = {"rhsusf_weap_MP7A2_folded"};
    sidearmAttachments[] = {"rhsusf_acc_rotex_mp7", "optic_Yorris"};
        magazines[] = {
        LIST_10("CUP_20Rnd_46x30_MP7"),
        LIST_2("rhsusf_mag_6Rnd_m4009"),
        LIST_4("rhsusf_mag_6Rnd_M441_HE"),
        LIST_2("rhsusf_mag_6Rnd_M714_white"),
        LIST_2("rhsusf_mag_6Rnd_M583A1_white")
    };

};

class sp : sn
{
    displayName = "Spotter";
        backpackItems[] = {
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_20("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_3("ACE_salineIV_250"),
        LIST_5("ACE_salineIV_500"),
        LIST_2("ACE_salineIV"),
        LIST_10("ACE_splint"),
        LIST_2("ACE_bloodIV_500"),

    };
};


class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_B_PASGT_no_bags"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};

class vc : vd
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular","ItemGPS"};
};

class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
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
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class jp : smg
{
    displayName = "Jet pilot";
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
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