
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_CDF_SNW_2"};
    vest[] = {"CUP_V_CDF_6B3_1_SNW","CUP_V_CDF_6B3_2_SNW"};
    backpack[] = {""};
    headgear[] = {"CUP_H_CDF_H_PASGT_SNW"};
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
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_545x39_AK_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_CDF_6B3_4_SNW"};
    primaryWeapon[] = {"CUP_arifle_AK74_GL"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HE_GP25_M"),
        LIST_4("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_AKS74"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
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
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_arifle_AKS74U"};
	primaryAttachments[] = {};
};
class ftl : g
{
    displayName = "Fireteam Leader";
	backpack[] = {"B_FieldPack_oucamo"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_4("CUP_8Rnd_9x18_Makarov_M")
    };
	items[] += {"ACE_Fortify"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_CDF_6B3_5_SNW"};
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
	vest[] = {"CUP_V_CDF_6B3_3_SNW"};
	backpack[] = {"B_FieldPack_oucamo"};
    primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_10("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_oucamo"};
    backpackItems[] =
    {
        LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M")
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
    scope[] = {"CUP_optic_PSO_1_AK"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_PKM"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_FieldPack_oucamo"};
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
	backpack[] = {"CUP_B_CDF_RPG_Backpack"};
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"CUP_PG7VL_M"};
    magazines[] +=
    {
        LIST_3("CUP_PG7VM_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_CDF_RPG_Backpack"};
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_CDF_RPG_Backpack"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"CUP_B_Kornet_Gun_Bag"};
	items[] += {"ACRE_PRC148"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"CUP_B_Kornet_Tripod_Bag"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Rangefinder",
	};
};
class sn : r
{
    displayName = "Sniper";
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
    backpack[] = {"B_AssaultPack_cbr"};
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
    backpack[] = {};
    headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class eng : car 
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_oucamo"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car 
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_Carryall_oucamo"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};
