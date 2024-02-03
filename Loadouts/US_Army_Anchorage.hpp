
tooltip = "Author: Bartoneye\n\n";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_Winter"};
    vest[] = {"CUP_V_PMC_CIRAS_Winter_Empty"};
    backpack[] = {};
    headgear[] = {"CUP_H_PASGTv2_winter"};
    goggles[] = {"CUP_G_ESS_KHK_Facewrap_White"};
    hmd[] = {};
    faces[] = {};
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"CUP_hgun_Colt1911"};
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
    primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden_railed"};
	scope[] = {"CUP_optic_ZeissZPoint"};
    magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_2("CUP_7Rnd_45ACP_1911"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class r2 : baseMan
{
    displayName = "Rifleman(M1)";
    primaryWeapon[] = {"rhs_weap_m1garand_sa43"};
    magazines[] =
    {
        LIST_7("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("CUP_7Rnd_45ACP_1911"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_Colt727"};
	scope[] = {"CUP_optic_ZeissZPoint"};
	magazines[] =
	{
		LIST_6("CUP_20Rnd_556x45_Stanag"),
		"CUP_20Rnd_556x45_Stanag_Tracer_Red",
		LIST_2("CUP_7Rnd_45ACP_1911"),
		LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"MNP_B_WB_AP"};
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
    linkedItems[] += {"Binocular","ItemGPS"};
	backpack[] = {"MNP_B_WB_AP"};
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
    primaryWeapon[] = {"CUP_lmg_M60"};
	backpack[] = {"B_AssaultPack_blk"};
    magazines[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
        LIST_2("CUP_7Rnd_45ACP_1911"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"MNP_B_WB_AP"};
    backpackItems[] +=
    {
        LIST_3("100Rnd_65x39_caseless_mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	backpack[] = {"MNP_B_WB_AP"};
    magazines[] +=
    {
       LIST_2("MRAWS_HEAT_F")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
	scope[] = {"CUP_optic_HensoldtZO"};
};
class matac : r
{
    displayName = "AT Ammo Carrier";
	backpack[] = {"MNP_B_WB_AP"};
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
	backpack[] = {"MNP_B_WB_AP"};
    backpackItems[] +=
    {
        LIST_2("CUP_launch_MAAWS")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"CUP_srifle_SVD_top_rail"};
    scope[] = {"CUP_optic_LeupoldMk4"};
    magazines[] =
    {
        LIST_7("CUP_10Rnd_762x54_SVD_M"),
        LIST_2("HandGrenade"),
		LIST_2("SmokeShell"),
        LIST_4("CUP_7Rnd_45ACP_1911")
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
	backpack[] = {"MNP_B_WB_AP"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
};
class pp : car
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_Winter"};
	backpack[] = {};
	goggles[] = {"CUP_PMC_Facewrap_Winter"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    linkedItems[] += {"ItemGPS"};
	items[] += {"ACRE_PRC148"};
	magazines[] =
	{
		LIST_6("CUP_20Rnd_556x45_Stanag"),
		"CUP_20Rnd_556x45_Stanag_Tracer_Red",
		LIST_2("CUP_7Rnd_45ACP_1911"),
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