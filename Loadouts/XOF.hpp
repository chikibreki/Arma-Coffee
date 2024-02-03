class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"CUP_V_CZ_NPP2006_vz95_black"};
    backpack[] = {"B_ViperHarness_blk_F"};
    headgear[] = {"CUP_H_RUS_6B47_v2_Winter"};
    goggles[] = {"CUP_G_ESS_BLK_Facewrap_Black"};
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
    backpackItems[] = {"CUP_G_ESS_BLK_Facewrap_Black"};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};


class test {
    displayName = "test";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"CUP_V_CZ_NPP2006_vz95_black"};
    backpack[] = {"B_ViperHarness_blk_F"};
    headgear[] = {"CUP_H_RUS_6B47_v2_Winter"};
    goggles[] = {"CUP_G_ESS_BLK_Facewrap_Black"};
    primaryWeapon[] = {"CUP_hgun_BallisticShield_Armed"};
    primaryAttachments[] = {"CUP_muzzle_snds_M9"};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"CUP_hgun_M9"};
    sidearmAttachments[] = {"CUP_muzzle_snds_M9"};
    magazines[] = {"rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ"};
    items[] = {"vn_b_item_firstaidkit"};
    linkedItems[] = {"vn_b_item_map","vn_b_item_compass_sog","vn_b_item_watch","vn_b_item_radio_urc10","vn_m19_binocs_grn"};
};

class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_smg_Mac10"};
    attachment[] = {"CUP_muzzle_mfsup_Suppressor_Mac10"};
    magazines[] =
    {
        LIST_12("CUP_30Rnd_45ACP_MAC10_M"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
class m : r
{
    displayName = "Medic";
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
class ftl : r
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"rhs_weap_m21s"};
    attachment[] = {"rhsusf_acc_rotex5_grey"};
    magazines[] +=
    {
        LIST_10("rhsgref_30rnd_556x45_m21")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    magazines[] +=
    {
        LIST_4("11Rnd_45ACP_Mag")
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
    primaryWeapon[] = {"CUP_hgun_BallisticShield_Armed"};
    attachment[] = {"CUP_muzzle_snds_M9"};
    sidearmWeapon[] = {"CUP_hgun_M9"};
    sidearmAttachments[] = {"CUP_muzzle_snds_M9"};
    magazines[] =
    {
        LIST_10("rhsusf_mag_15Rnd_9x19_FMJ"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
        "HandGrenade",
        "SmokeShell",
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("100Rnd_65x39_caseless_mag")
    };
    linkedItems[] += {"Binocular"};
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
class matg
{
    uniform[] = {"CUP_U_B_BDUv2_roll2_gloves_OD"};
    vest[] = {"CUP_V_B_PASGT_OD"};
    backpack[] = {"B_ViperLightHarness_oli_F"};
    headgear[] = {"CUP_H_PMC_EP_Headset"};
    goggles[] = {"G_Balaclava_TI_blk_F"};
    displayName = "enemy";
    primaryWeapon[] = {"CUP_arifle_M16A1"};
    secondaryWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] =
    {
        LIST_13("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("CUP_7Rnd_45ACP_1911")
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
class jp : smg
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_HeliPilotCoveralls"};
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