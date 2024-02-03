
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_O_CHDKZ_Kam_02","CUP_U_O_CHDKZ_Kam_01","CUP_U_O_CHDKZ_Kam_03","CUP_U_O_CHDKZ_Kam_05"};
    vest[] = {"CUP_V_CPC_communicationsbelt_rngr"};
    backpack[] = {"B_Kitbag_cbr"};
    headgear[] = {"H_Watchcap_cbr","H_Watchcap_khk","H_Watchcap_camo"};
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
	primaryWeapon[] = {"CUP_arifle_ACRC_snw_556"};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_ACRC_EGLM_snw_556"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
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
        
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
		
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
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
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_ACR_DMR_snw_556"};
	scope[] = {"CUP_optic_RCO"};
    bipod[] = {"CUP_bipod_Harris_1A2_L_BLK"};
	sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15"),
		LIST_1("HandGrenade"),
		LIST_1("SmokeShell")
		
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_RPG26"};
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {};
    primaryWeapon[] = {"CUP_srifle_MK12SPR"};
	primaryAttachments[] = {""};
    scope[] = {"CUP_optic_RCO"};
    bipod[] = {"bipod_01_F_blk"};
	sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_11("CUP_20Rnd_556x45_Stanag")
		
    };
};









