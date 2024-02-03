
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_C_Poloshirt_burgundy"};
    vest[] = {"MNP_V_HarnessO_brn_Arm"};
    backpack[] = {"CUP_B_AssaultPack_Black"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"H_ShemagOpen_tan"};
	primaryWeapon[] = {"arifle_AKM_F"};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_762x39_AK103_bakelite_M"),
        LIST_2("vn_m61_grenade_mag"),
		LIST_2("SmokeShellGreen")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"MNP_V_HarnessO_brn_Arm"};
	backpack[] = {"CUP_B_AssaultPack_Black"};
    primaryWeapon[] = {"CUP_arifle_AKM_GL_Early"};
    magazines[] +=
    {
        LIST_10("CUP_30Rnd_762x39_AK103_bakelite_M"),
		LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("CUP_1Rnd_SmokeGreen_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_m1a1_tommy_so"};
	magazines[] +=
    {
        LIST_10("vn_m1a1_30_t_mag"),
    };
};
class m : car
{
    displayName = "Medic";
	vest[] = {"MNP_V_HarnessO_brn_Arm"};
	backpack[] = {"CUP_B_GER_Medic_Desert"};
	 backpackItems[] +=
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
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_05_F"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("30Rnd_9x21_Mag_SMG_02"),
		LIST_2("vn_m61_grenade_mag"),
		LIST_1("SmokeShellGreen")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	uniform[] = {"vn_b_uniform_seal_02_05"};
	vest[] = {"MNP_V_HarnessO_brn_Arm"};
	headgear[] = {"CUP_H_SLA_BeretRed"};
	backpack[] = {"CUP_B_AssaultPack_Black"};
	primaryWeapon[] = {"CUP_arifle_AKS_Gold"};
	items[] += {"ACRE_PRC148"};
    magazines[] +=
    {
        LIST_10("CUP_30Rnd_762x39_AK47_bakelite_M"),
        LIST_2("vn_m61_grenade_mag"),
		LIST_2("SmokeShellGreen")
    }; 
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
	headgear[] = {"vn_b_helmet_m1_12_02"};
	vest[] = {"MNP_V_HarnessO_brn_Arm"};
	backpack[] = {"CUP_B_AssaultPack_Black"};
    primaryWeapon[] = {"CUP_arifle_RPK74_45_top_rail"};
	sidearmWeapon[] = {"vn_m712"};
    magazines[] =
    {
        LIST_4("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("SmokeShellGreen"),
		LIST_3("vn_m712_mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AssaultPack_Black"};
    backpackItems[] =
    {
        LIST_4("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_RPG7_F"};
	backpack[] = {"CUP_B_AssaultPack_Black"};
	backpackItems[] +=
	 {
			LIST_3("RPG7_F"),
			
	};
	
};