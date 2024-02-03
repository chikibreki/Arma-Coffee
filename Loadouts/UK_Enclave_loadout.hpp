
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_roll2_gloves_dirty_DDPM"};
    vest[] = {"V_PlateCarrierL_CTRG"};
    backpack[] = {};
    headgear[] = {"CUP_H_Ger_M92_Tan"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
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
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "Rifleman";
	primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden_railed"};
    scope[] = {"CUP_optic_ZeissZPoint"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] = 
	{
		LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
		LIST_3("CUP_7Rnd_45ACP_1911"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"
	};
};
class g : r
{
    displayName = "Grenadier";
	headgear[] = {"CUP_H_Ger_M92_GG"};
    primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
    magazines[] =
    {
        LIST_8("CUP_1Rnd_HE_M203"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_6("CUP_20Rnd_B_765x17_Ball_M")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_AKS74U_top_rail"};
	scope[] = {"CUP_optic_ZeissZPoint_wood"};
	magazines[] =
	{
		LIST_7("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_camo_M"),
		LIST_3("CUP_7Rnd_45ACP_1911"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"
	};
};
class m : car
{
    displayName = "Medic";
	goggles[] = {"G_Aviator"};
	backpack[] = {"B_AssaultPack_cbr"};
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
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
	scope[] = {"CUP_optic_ZeissZPoint_wood"};
    magazines[] =
    {
        LIST_7("CUP_30Rnd_9x19_MP5"),
		LIST_3("CUP_7Rnd_45ACP_1911"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	headgear[] = {"CUP_H_Ger_M92_Tan_GG"};
	goggles[] = {"G_Aviator"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACRE_PRC148"};
};
class co : sl
{
    displayName = "Platoon Leader";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	goggles[] = {"G_Aviator"};
    primaryWeapon[] = {"CUP_lmg_FNMAG_RIS"};
    magazines[] =
    {
        LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_3("CUP_7Rnd_45ACP_1911"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_AssaultPack_cbr"};
    backpackItems[] =
    {
        LIST_3("CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M72A6"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"CUP_optic_RCO"};
};
class matg : car
{
    displayName = "MAT Gunner";
	headgear[] = {"CUP_H_Ger_M92_GG"};
    secondaryWeapon[] = {"rhs_weap_smaw"};
	backpack[] = {"B_AssaultPack_cbr"};
	backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEDP")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_AssaultPack_cbr"};
    linkedItems[] +=
    {
        "Binocular",
    };
    backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEDP")
    };
};
class sn : r
{
    displayName = "Sniper";
    goggles[] = {"G_Aviator"};
    primaryWeapon[] = {"CUP_srifle_SVD_top_rail"};
    scope[] = {"CUP_optic_LeupoldMk4"};
    magazines[] =
    {
        LIST_7("CUP_10Rnd_762x54_SVD_M"),
		LIST_3("CUP_7Rnd_45ACP_1911"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"		
    };
	items[] += {"ACRE_PRC148"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] +=
    {
        "Binocular",
    };
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
	goggles[] = {"G_Lowprofile"};
	items[] += {"ACRE_PRC148"};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
	goggles[] = {"G_Lowprofile"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};