
tooltip = "Author: Bartoneye\n\n";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_B_CDF_SNW_2"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_LegStrapBag_black_F"};
    headgear[] = {"CUP_H_C_Ushanka_02"};
    goggles[] = {"CUP_G_ESS_KHK_Facewrap_White"};
    hmd[] = {};
    faces[] = {"Jeong","Lee","Tung","Wong","Ximi","Yeung"};
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {"ACRE_PRC343"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
    // These are put into the backpack
    backpackItems[] = 
	{
		LIST_2("ACE_elasticBandage"),
		LIST_2("ACE_packingBandage"),
		"ACE_morphine",
		"ACE_tourniquet"
	};
    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_arifle_AK47_Early"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_7("CUP_30Rnd_762x39_AK47_M"),
        LIST_2("CUP_8Rnd_9x18_Makarov_M"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_AKS74U_top_rail"};
	scope[] = {"rhs_acc_rakursPM"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] =
	{
		LIST_7("CUP_30Rnd_545x39_AK74_plum_M"),
		LIST_2("CUP_8Rnd_9x18_Makarov_M"),
		LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"B_Messenger_Gray_F"};
	backpackItems[] =
	{
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_4("ACE_splint"),
			LIST_3("ACE_bloodIV_250"),
			LIST_5("ACE_bloodIV_500"),
			LIST_2("ACE_bloodIV"),
			LIST_1("ACE_personalAidKit")
	};
};
class ftl : r
{
    displayName = "Fireteam Leader";
	primaryWeapon[] = {"CUP_arifle_AKS74_top_rail"};
	scope[] = {"CUP_optic_ZeissZPoint"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] =
	{
		LIST_7("CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M"),
		LIST_2("CUP_8Rnd_9x18_Makarov_M"),
		LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class co
{
    displayName = "Platoon Leader";
	uniform[] = {"MNP_CombatUniform_WW_C"};
    vest[] = {"CUP_V_PMC_CIRAS_Black_TL"};
    backpack[] = {"B_LegStrapBag_black_F"};
    headgear[] = {"CUP_H_CDF_OfficerCap_SNW"};
    goggles[] = {};
    faces[] = {"Jeong","Lee","Tung","Wong","Ximi","Yeung"};
	primaryWeapon[] = {};
    sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] = 
	{
		LIST_8("rhs_mag_9x18_8_57N181S"),
		LIST_3("HandGrenade"),
		LIST_3("SmokeShell"),
		LIST_2("SmokeShellRed")
	};
    items[] = 
	{
		"ACRE_PRC343",
		"ACRE_PRC148",
	};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
		"Binocular",
        "ItemWatch"
    };
    backpackItems[] = 
	{
		LIST_4("ACE_elasticBandage"),
		LIST_4("ACE_packingBandage"),
		LIST_2("ACE_morphine"),
		LIST_2("ACE_epinephrine"),
		"ACE_splint",
		"ACE_tourniquet"
	};
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_RPK74_top_rail"};
	backpack[] = {"B_AssaultPack_blk"};
    magazines[] =
    {
        LIST_6("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
        LIST_2("CUP_8Rnd_9x18_Makarov_M"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_AssaultPack_blk"};
    backpackItems[] +=
    {
        LIST_4("100Rnd_65x39_caseless_mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	backpack[] = {"B_AssaultPack_blk"};
    magazines[] +=
    {
       LIST_2("MRAWS_HEAT_F")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m38"};
    magazines[] =
    {
        LIST_11("rhsgref_5Rnd_762x54_m38"),
		List_2("CUP_8Rnd_9x18_Makarov_M"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class matac : aar
{
    displayName = "AT Ammo Carrier";
    backpackItems[] +=
    {
        LIST_2("CUP_launch_MAAWS")
    };
};
class matag : car
{
    displayName = "AT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] +=
    {
        "CUP_launch_MAAWS"
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"CUP_srifle_Mosin_Nagant"};
    scope[] = {"CUP_optic_PEM"};
    sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_7("CUP_5Rnd_762x54_Mosin_M"),
        LIST_2("HandGrenade"),
		LIST_2("SmokeShell"),
        LIST_4("CUP_8Rnd_9x18_Makarov_M")
    };
};
class sp : car
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
};
class pp : car
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_CDF_SNW_2"};
	backpack[] = {};
	goggles[] = {"CUP_PMC_Facewrap_Winter"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    linkedItems[] += {"ItemGPS"};
	magazines[] =
	{
		LIST_7("CUP_30Rnd_545x39_AK74_plum_M"),
		LIST_2("CUP_8Rnd_9x18_Makarov_M"),
		"HandGrenade",
        "SmokeShell"
    };
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
    linkedItems[] += {"ItemGPS"};
};
class jp : car
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_HeliPilotCoveralls"};
	backpack[] = {};
	goggles[] = {"CUP_PMC_Facewrap_Winter"};
    headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
    linkedItems[] += {"ItemGPS"};
	magazines[] =
	{
		LIST_7("CUP_30Rnd_545x39_AK74_plum_M"),
		LIST_2("CUP_8Rnd_9x18_Makarov_M"),
		"HandGrenade",
        "SmokeShell"
    };
};
