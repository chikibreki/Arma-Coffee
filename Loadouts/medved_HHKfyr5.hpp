
tooltip = "Author: Pouchy\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_O_CHDKZ_Lopotev"};
    vest[] = {"CUP_V_PMC_CIRAS_Black_Veh"};
    backpack[] = {"B_AssaultPack_blk"};
    headgear[] = {"CUP_H_RUS_6B47_headset_goggles"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","murshun_cigs_cigpack","murshun_cigs_lighter",};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_RUS_6B47_headset_goggles"};
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	scope[] = {""};
    attachment[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_545x39_AK74_plum_M"),
        LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_PMC_CIRAS_Black_Veh"};
	backpack[] = {"B_AssaultPack_blk"};
    primaryWeapon[] = {"CUP_arifle_AKS74_GL_top_rail"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_smg_MP5SD6"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_PMC_CIRAS_Black_Veh"};
	backpack[] = {"CUP_B_USPack_Black"};
	 backpackItems[] +=
	 {
			LIST_10("CUP_30Rnd_Subsonic_9x19_MP5"),
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
class dmr : r
{
    displayName = "dmr";
    primaryWeapon[] = {"CUP_arifle_HK417_20_Wood"};
	scope[] = {""};
	primaryAttachments[] = {"",};
    magazines[] =
    {
        LIST_10("CUP_20Rnd_762x51_HK417"),
		LIST_2("HandGrenade"),
		LIST_1("SmokeShell")
    };
};
class smg : r
{
    displayName = "sMG";
    primaryWeapon[] = {"CUP_smg_MP5SD6"};
	scope[] = {};
	primaryAttachments[] = {"",};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_Subsonic_9x19_MP5"),
		LIST_2("HandGrenade"),
		LIST_1("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_PMC_CIRAS_Black_Veh"};
	scope[] = {};
	sidearmWeapon[] = {"CUP_hgun_TEC9_FA"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("CUP_32Rnd_9x19_TEC9")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_PMC_CIRAS_Black_Veh"};
	headgear[] = {"CUP_H_RUS_6B47_headset_goggles"};
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
	headgear[] = {""};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_PMC_CIRAS_Black_Veh"};
	backpack[] = {"CUP_B_USPack_Black"};
    primaryWeapon[] = {"vn_rpd_shorty_01"};
	scope[] = {""};
    bipod[] = {""};
	sidearmWeapon[] = {"CUP_hgun_TEC9_FA"};
    magazines[] =
    {
        LIST_4("vn_rpd_125_mag"),
		LIST_1("HandGrenade"),
		LIST_1("SmokeShell"),
		LIST_4("CUP_32Rnd_9x19_TEC9")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_USPack_Black"};
    backpackItems[] =
    {
        LIST_4("vn_rpd_125_mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : smg
{
    displayName = "Rifleman (AT)";
	scope[] = {""};
    secondaryWeapon[] = {"vn_rpg7"};
	backpackItems[] =
    {
        LIST_4("CUP_PG7V_M")
    };
};
class pilot : smg
{
    displayName = "pilot";
	 headgear[] = {"vn_o_helmet_tsh3_01"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"V_Chestrig_blk"};
    backpack[] = {"B_Carryall_khk"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Rangefinder",
	};
};
