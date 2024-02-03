class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    uniform[] = {"CUP_U_B_USArmy_ACU_Kneepad_Gloves_OEFCP"};
    vest[] = {"CUP_V_B_IOTV_OEFCP_Rifleman_USArmy"};
    backpack[] = {};
    headgear[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive"};
    goggles[] = {"vn_b_acc_m17_01"};
    hmd[] = {};
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"CUP_hgun_M9A1"};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = 
	{
		LIST_2("ACE_elasticBandage"),
		LIST_2("ACE_packingBandage"),
		"ACE_morphine",
		"ACE_splint",
		"ACE_tourniquet",
		"ACRE_PRC343"
	};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
    backpackItems[] = {};
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_arifle_M4A3_black"};
    scope[] = {"cup_optic_eotech553_black"};
    attachment[] = {};
    magazines[] =
    {
        LIST_7("CUP_30Rnd_556x45_Stanag"),
        LIST_4("CUP_15Rnd_9x19_M9"),
        LIST_2("HandGrenade"),
        "SmokeShell"
    };
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"CUP_B_US_Assault_OEFCP"};
    primaryWeapon[] = {"CUP_arifle_M4A1_GL_carryhandle"};
	magazines[] +=
    {
        LIST_8("CUP_1Rnd_HE_M203"),
        LIST_4("CUP_1Rnd_Smoke_M203")
    };
};
class m : r
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_IOTV_OEFCP_Medic_USArmy"};
    backpack[] = {"CUP_B_US_IIID_OEFCP"};
	backpackItems[] = 
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
	vest[] = {"CUP_V_B_IOTV_OEFCP_TL_USArmy"};
	items[] = 
	{
		"ACRE_PRC148"
	};
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeGreen_M203")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_B_IOTV_OEFCP_SL_USArmy"};
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
	vest[] = {"CUP_V_B_IOTV_OEFCP_MG_USArmy"};
	backpack[] = {"CUP_B_US_Assault_OEFCP"};
    primaryWeapon[] = {"CUP_lmg_m249_pip2"};
	scope[] = {"cup_optic_g33_hws_blk"};
    magazines[] =
    {
        "CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch",
		LIST_2("CUP_15Rnd_9x19_M9"),
        LIST_2("HandGrenade"),
        "SmokeShell",
    };
	backpackItems[] =
	{
		LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_US_Assault_OEFCP"};
    backpackItems[] =
    {
        LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch")
    };
    linkedItems[] += {"Rangefinder"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M72A6"};
};