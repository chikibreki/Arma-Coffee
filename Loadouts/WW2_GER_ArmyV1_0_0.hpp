
tooltip = "Author: GunnerRya\Huffer_Fish\n";

class base {
    displayName = "base";
    uniform[] = {"U_LIB_GER_Schutze"};
    vest[] = {"V_LIB_GER_VestKar98"};
    headgear[] = {"H_LIB_GER_Helmet"};
	backpack[] = {"B_LIB_GER_A_frame"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"LIB_K98"};
	scope[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_20("LIB_5Rnd_792x57"),
        LIST_2("LIB_Shg24"),
		LIST_1("LIB_NB39")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
	silencer[] = {"LIB_ACC_GW_SB_Empty"};
    magazines[] +=
    {
        LIST_6("LIB_1Rnd_G_SPRGR_30"),
        LIST_4("LIB_NB39"),
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryAttachments[] = {};
	magazines[] =
	{
		LIST_8("LIB_5Rnd_792x57"),
        LIST_1("LIB_Shg24"),
		LIST_2("LIB_NB39")
	};
};
class m : car
{
    displayName = "Medic";
	uniform[] = {"U_LIB_GER_Medic"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	helmet[] = {"H_LIB_GER_Helmet"};
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
	vest[] = {"V_LIB_GER_VestMP40"};
    primaryWeapon[] = {"LIB_MP40"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("LIB_32Rnd_9x19"),
		LIST_1("LIB_Shg24"),
		LIST_2("LIB_NB39")
    };
};
class ftl : smg
{
    displayName = "Fireteam Leader";
	backpack[] = {"B_LIB_GER_Backpack"};
	sidearmWeapon[] = {"LIB_M1908"};
	magazines[] +=
    {
		LIST_3("LIB_8Rnd_9x19_P08"),
		LIST_1("LIB_Shg24"),
		LIST_4("LIB_NB39")
	};
    linkedItems[] += {"LIB_Binocular_GER"};
};
class sl : smg
{
    displayName = "Squad Leader";
	vest[] = {"V_LIB_GER_VestUnterofficer"};
	backpack[] = {"B_LIB_GER_Backpack"};
	sidearmWeapon[] = {"LIB_M1908"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
    {
		LIST_3("LIB_8Rnd_9x19_P08"),
		LIST_1("LIB_Shg24"),
		LIST_4("LIB_NB39")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
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
class rat : g
{
    displayName = "Rifleman (AT)";
	magazines[] =
    {
		LIST_6("LIB_1Rnd_G_M9A1")
	};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"V_LIB_GER_VestSTG"};
	backpack[] = {"B_LIB_GER_Backpack"};
    primaryWeapon[] = {"LIB_MP44"};
    magazines[] =
    {
        LIST_10("LIB_30Rnd_792x33"),
		LIST_1("LIB_Shg24"),
		LIST_1("LIB_NB39"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	primaryWeapon[] = {"LIB_G43"};
	scope[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] =
    {
        LIST_15("LIB_10Rnd_792x57"),
        LIST_3("LIB_Shg24"),
		LIST_2("LIB_NB39")
	};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryWeapon[] = {"LIB_K98ZF39"};
	sidearmWeapon[] = {"LIB_M1908"};
    magazines[] +=
    {
		LIST_3("LIB_8Rnd_9x19_P08")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"B_LIB_GER_Backpack"};
	backpackItems[] =
    {
        LIST_4("LIB_50Rnd_792x57")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
		"LIB_Binocular_GER"
    };
};
class mmgac : r
{
    displayName = "MMG Ammunition Carrier";
	backpack[] = {"B_LIB_GER_Backpack"};
	backpackItems[] =
	{
		LIST_4("LIB_50Rnd_792x57")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
		"LIB_Binocular_GER"
    };
};
class mmgg : r
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"LIB_MG42"};
	backpack[] = {"B_LIB_GER_Backpack"};
	backpackItems[] =
    {
        LIST_4("LIB_50Rnd_792x57")
    };
	magazines[] =
    {
		LIST_3("LIB_8Rnd_9x19_P08"),
		LIST_2("LIB_50Rnd_792x57")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"B_LIB_GER_Panzer_Empty"};
	secondaryWeapon[] = {"LIB_RPzB"};
	magazines[] +=
	{
		LIST_2("LIB_1Rnd_RPzB")
	};
	items[] += {"ACRE_PRC148"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
	backpack[] = {"B_LIB_GER_Panzer_Empty"};
	magazines[] +=
	{
		LIST_2("LIB_1Rnd_RPzB")
	};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpack[] = {"B_LIB_GER_Panzer_Empty"};
	magazines[] +=
	{
		LIST_2("LIB_1Rnd_RPzB")
	};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "LIB_Binocular_GER",
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"U_LIB_GER_Tank_crew_private"};
    vest[] = {"V_LIB_GER_TankPrivateBelt"};
    headgear[] = {"H_LIB_GER_TankPrivateCap"};
	primaryWeapon[] = {""};
	primaryAttachments[] = {};
	sidearmWeapon[] = {"LIB_M1908"};
    magazines[] =
    {
        LIST_5("LIB_8Rnd_9x19_P08"),
    };
    backpackItems[] = 
	{
		"ToolKit"
	};
};
class vc : vd
{
    displayName = "Vehicle Commander";
	uniform[] = {"U_LIB_GER_Tank_crew_leutnant"};
    vest[] = {"V_LIB_GER_OfficerVest"};
    headgear[] = {"H_LIB_GER_TankOfficerCap"};
    linkedItems[] += {"LIB_Binocular_GER"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : vd
{
    displayName = "Helicopter Pilot";
	uniform[] = {"U_LIB_US_Pilot"};
	vest[] = {"V_LIB_US_LifeVest"};
    backpack[] = {"B_LIB_US_TypeA3"};
    headgear[] = {"H_LIB_GER_Helmet_Pilot"};
	items[] += {"ACRE_PRC148"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"vn_b_pack_trp_03_02"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_Clacker",
        LIST_4("DemoCharge_Remote_Mag"),
        LIST_1("SatchelCharge_Remote_Mag")
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