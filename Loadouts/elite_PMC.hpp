class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_g3_blk"};
    vest[] = {"CUP_V_CZ_NPP2006_ok_black"};
    backpack[] = {"B_SCBA_01_F"};
    headgear[] = {"rhsusf_opscore_bk_pelt"};
    goggles[] = {"G_RegulatorMask_F"};
    hmd[] = {"NVGogglesB_blk_F"};
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
    items[] = {"FirstAidKit","G_RegulatorMask_F"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "NVGogglesB_blk_F"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};

class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_smg_MP7"};
    scope[] = {"rhsusf_acc_mrds"};
    attachment[] = {"CUP_muzzle_snds_MP7"};
    primaryAttachments[] = {"rhsusf_acc_anpeq15side_bk"};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"CUP_hgun_Mk23"};
    sidearmAttachments[] = {"CUP_muzzle_snds_mk23"};
    magazines[] =
    {
        LIST_11("rhsusf_mag_40Rnd_46x30_FMJ"),
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
    vest[] = {"CUP_V_B_Ciras_Black"};
    backpack[] = {"B_FieldPack_blk"};
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
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
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

class ar : r
{
    displayName = "DMR";
    primaryWeapon[] = {"rhs_weap_asval_grip_npz"};
    scope[] = {"CUP_optic_AIMM_MICROT1_BLK"};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_9x39_SP5_VSS_M"),
        "HandGrenade",
        "SmokeShell"
    };
};
class aar : r
{
    displayName = "Spotter";
    linkedItems[] += {"Binocular"};
};

