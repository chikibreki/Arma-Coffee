
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_LIB_WP_Soldier_camo_1","U_LIB_WP_Soldier_camo_2","U_LIB_WP_Soldier_camo_3"};
    vest[] = {"V_LIB_WP_Kar98Vest"};
	backpack[] = {"B_LIB_DAK_A_frame"};
    headgear[] = {"H_LIB_WP_Helmet"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","LIB_GER_ItemCompass","LIB_GER_ItemWatch"};
};
class r : base {
    displayName = "rifleman Mosin";
	primaryWeapon[] = {"LIB_M9130"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_15("LIB_5Rnd_762x54_t30"),
        LIST_2("LIB_Shg24"),
		LIST_2("LIB_NB39")
    }; 
    linkedItems[] = {"ItemMap","LIB_GER_ItemCompass","LIB_GER_ItemWatch"};
};
class rs : base {
    displayName = "rifleman G41";
	vest[] = {"V_LIB_WP_G43Vest"};
	primaryWeapon[] = {"LIB_G41"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_12("LIB_10Rnd_792x57_clip"),
        LIST_2("LIB_Shg24"),
		LIST_2("LIB_NB39")
    }; 
};
class smg : r
{
    displayName = "Submachinegunner";
	vest[] = {"V_LIB_UK_P37_Sten_Blanco"};
    primaryWeapon[] = {"LIB_Sten_Mk2"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("LIB_32Rnd_9x19_Sten"),
		LIST_2("LIB_Shg24"),
		LIST_2("LIB_NB39")
    };
};
class ass : smg
{
    displayName = "Assaultman";
	vest[] = {"V_LIB_SOV_IShBrVestPPShMag"};
	backpack[] = {"B_LIB_SOV_RA_Rucksack_Gas_Kit"};
    primaryWeapon[] = {"LIB_PPSh41_d"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_8("LIB_71Rnd_762x25_t"),
		LIST_4("LIB_Shg24"),
		LIST_2("LIB_NB39"),
		LIST_1("LIB_Shg24x7")
    };
};
class g : smg
{
    displayName = "Grenadier";
	vest[] = {"V_LIB_DAK_PioneerVest"};
	backpack[] = {"B_LIB_SOV_RA_Rucksack2_Gas_Kit_Shinel"};
    magazines[] +=
    {
        LIST_4("LIB_Shg24"),
        LIST_2("LIB_NB39"),
		LIST_1("LIB_Shg24x7")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"LIB_M38"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	headgear[] = {"H_LIB_WP_Helmet_med"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	items[] += {"ACRE_PRC343"};
	magazines[] +=
    {
        LIST_2("LIB_NB39")
    };
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
class ftl : smg
{
    displayName = "Fireteam Leader";
	vest[] = {"V_LIB_WP_OfficerVest"};
	backpack[] = {"B_LIB_SOV_RA_Rucksack_Gas_Kit"};
	sidearmWeapon[] = {"LIB_M1895"};
    magazines[] +=
    {
		LIST_3("LIB_7Rnd_762x38"),
		LIST_2("LIB_NB39")
    };
    linkedItems[] += {"LIB_Binocular_GER"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACRE_PRC343"};
    linkedItems[] =
    {
        "ItemMap",
        "LIB_GER_ItemCompass",
        "LIB_GER_ItemWatch",
        "LIB_Binocular_GER",
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
    primaryWeapon[] = {"LIB_M1918A2_BAR"};
	attachment[] = {"LIB_M1918A2_BAR_Handle"};
	bipod[] = {"LIB_M1918A2_BAR_Bipod"};
	sidearmWeapon[] = {"LIB_M1895"};
    magazines[] =
    {
        LIST_12("LIB_20Rnd_762x63"),
		LIST_1("LIB_Shg24"),
		LIST_1("LIB_NB39"),
		LIST_2("LIB_7Rnd_762x38")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_7("LIB_20Rnd_762x63")
    };
    linkedItems[] += {"LIB_Binocular_GER"};
};
class rat : smg
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"LIB_PzFaust_60m"};
	magazines[] +=
	{
		LIST_1("LIB_1Rnd_PzFaust_60m")
	};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"LIB_K98ZF39"};
	sidearmWeapon[] = {"LIB_M1895"};
    magazines[] =
    {
        LIST_10("LIB_5Rnd_792x57_t"),
		LIST_2("LIB_Shg24"),
		LIST_1("LIB_NB39"),
		LIST_3("LIB_7Rnd_762x38")
    };
};
class mmgg : ar // Interchangeable with AR
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"LIB_MG42"};
    magazines[] =
    {
        LIST_8("LIB_50Rnd_792x57"),
		LIST_1("LIB_Shg24"),
		LIST_1("LIB_NB39"),
		LIST_3("LIB_7Rnd_762x38")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r // Can be paired with either AR or MMG 
{
    displayName = "MMG Ammo Carrier";
	secondaryWeapon[] = {"LIB_Laffete_Tripod"}; //Tripod has a scope that cannot be removed
	backpack[] = {"B_LIB_GER_Backpack"};
    backpackItems[] =
    {
        LIST_4("LIB_100Rnd_792x57")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "LIB_GER_ItemCompass",
        "LIB_GER_ItemWatch",
    };
    backpackItems[] =
    {
        LIST_4("LIB_100Rnd_792x57")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"B_LIB_GER_Panzer_Empty"};
    secondaryWeapon[] = {"LIB_RPzB"};
    magazines[] +=
    {
        LIST_3("LIB_1Rnd_RPzB")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : smg
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"B_LIB_GER_Panzer_Empty"};
    backpackItems[] =
    {
        LIST_2("LIB_1Rnd_RPzB")
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_LIB_GER_Panzer_Empty"};
    backpackItems[] =
    {
        LIST_2("LIB_1Rnd_RPzB")
    };
};
class mtrg : r //UNNECESSARY
{
    displayName = "Mortar Gunner";
    secondaryWeapon[] = {"LIB_GrWr34_Barrel_g"};
    linkedItems[] =
    {
        "ItemMap",
        "LIB_GER_ItemCompass",
        "ItemRadio",
        "LIB_GER_ItemWatch",
    };
};
class mtrac : smg //UNNECESSARY
{
    displayName = "Mortar Ammo Carrier";
   secondaryWeapon[] = {"LIB_GrWr34_Tripod_g"};
};
class mtrag : car //UNNECESSARY
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "LIB_GER_ItemCompass",
        "ItemRadio",
        "LIB_GER_ItemWatch",
    };
};
class eng : smg //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
	sidearmWeapon[] = {"ACE_VMM3"};
	vest[] = {"V_LIB_GER_PioneerVest"};
    backpack[] = {"B_LIB_GER_SapperBackpack_empty"};
    backpackItems[] = {
        LIST_4("LIB_Ladung_Small_MINE_mag"),
        LIST_2("LIB_Ladung_Big_MINE_mag")
    };
};
class engap : smg //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (AP Mines)";
	sidearmWeapon[] = {"ACE_VMM3"};
	vest[] = {"V_LIB_GER_PioneerVest"};
	backpack[] = {"B_LIB_SOV_RA_Rucksack2_Gas_Kit"};
    items[] +=
    {
        LIST_2("LIB_STMI_MINE_mag"),
        LIST_6("LIB_shumine_42_MINE_mag")
    };
};
class engat : smg //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (AT Mines)";
	sidearmWeapon[] = {"ACE_VMM3"};
	vest[] = {"V_LIB_GER_PioneerVest"};
	backpack[] = {"B_LIB_SOV_RA_Rucksack2_Gas_Kit"};
    items[] +=
    {
        LIST_2"LIB_TMI_42_MINE_mag"
    };
};