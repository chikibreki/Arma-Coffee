
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_B_BDUv2_roll2_gloves_OD"};
    vest[] = {"CUP_V_B_PASGT_OD"};
    backpack[] = {"B_ViperLightHarness_oli_F"};
    headgear[] = {"CUP_H_Ger_Beret_TankCommander_Blk"};
    goggles[] = {"G_Balaclava_TI_blk_F"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {};
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
        "ItemWatch",
        "ItemGps"
    };

    // These are put into the backpack
    backpackItems[] = {"ACRE_PRC343", "ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_arifle_M16A1"};
    secondaryWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] =
    {
        LIST_13("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("CUP_7Rnd_45ACP_1911")
    };
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
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_M60E4_norail"};
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("CUP_7Rnd_45ACP_1911")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};

class eng : r
{
    displayName = "Leader (Demo)";
    backpackItems[] = {
        LIST_3("CUP_PipeBomb_M"),
        LIST_1("ACE_Clacker")
    };
};

