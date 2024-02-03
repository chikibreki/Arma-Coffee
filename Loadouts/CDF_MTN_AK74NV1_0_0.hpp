
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_CDF_MNT_1","CUP_U_B_CDF_MNT_2"};
    vest[] = {"CUP_V_CDF_6B3_1_MNT","CUP_V_CDF_6B3_2_MNT"};
    backpack[] = {""};
    headgear[] = {"CUP_H_CDF_H_PASGT_MNT"};
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
	primaryWeapon[] = {"CUP_arifle_AK74"};
	scope[] = {""};
    attachment[] = {""};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_545x39_AK_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_CDF_6B3_4_MNT"};
	backpack[] = {"CUP_B_Kombat_Olive"};
    primaryWeapon[] = {"CUP_arifle_AK74_GL"};
    magazines[] +=
    {
        LIST_10("CUP_1Rnd_HE_GP25_M"),
        LIST_6("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_AKS74"};
	primaryAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_545x39_AK_M"),
        LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    }; 
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"CUP_B_Kombat_Olive"};
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
    primaryWeapon[] = {"CUP_arifle_AKS74U"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] +=
    {
        LIST_4("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_CDF_6B3_5_MNT"};
	items[] += {"ACRE_PRC148"};
	magazines[] += 
	{
		LIST_1("Laserbatteries")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_LRTV",
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
	backpack[] = {"CUP_B_Kombat_Olive"};
    primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_10("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_Kombat_Olive"};
    backpackItems[] =
    {
        LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_RPG18"};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryAttachments[] = {""};
    scope[] = {"CUP_optic_PSO_1_AK"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_PKM"};
	vest[] = {"CUP_V_CDF_6B3_3_MNT"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_Kombat_Olive"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
    magazines[] +=
    {
        LIST_3("CUP_PG7VM_M"),
		LIST_2("CUP_OG7_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M"),
		LIST_1("CUP_OG7_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M"),
		LIST_1("CUP_OG7_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"CUP_launch_Metis"};
	magazines[] +=
	{
		LIST_2("CUP_AT13_M")
	};
	items[] += {"ACRE_PRC148"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
	magazines[] +=
	{
		LIST_2("CUP_AT13_M")
	};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
	magazines[] +=
	{
		LIST_2("CUP_AT13_M")
	};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Rangefinder",
	};
};
class samg : car 
{
     displayName = "AA Missile Specialist";
	 backpack[] = {"B_Carryall_oli"};
     secondaryWeapon[] = {"CUP_launch_9K32Strela"};
     magazines[] +=
     {
         LIST_1("CUP_Strela_2_M")
     };
};
class samag : car 
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
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
        LIST_1("CUP_Strela_2_M")
    };
};
class sn : r
{
    displayName = "Sniper";
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_SVD"};
    scope[] = {"CUP_optic_PSO_1"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_8("CUP_10Rnd_762x54_SVD_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : dm
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_CDF_CrewBelt"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
};
class pp : vd
{
    displayName = "Helicopter Pilot";
	vest[] = {"CUP_V_CDF_CrewBelt"};
    backpack[] = {};
    headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	vest[] = {"CUP_V_CDF_CrewBelt"};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
    displayName = "Jet pilot";
    backpack[] = {"ACE_NonSteerableParachute"};
};
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_4("DemoCharge_Remote_Mag"),
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_TacticalPack_oli"};
    items[] +=
    {
        LIST_6("APERSBoundingMine_Range_Mag"),
        LIST_2("ATMine_Range_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};
