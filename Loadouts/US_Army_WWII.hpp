
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_LIB_US_Private"};
    vest[] = {"V_LIB_US_Vest_Garand"};
    backpack[] = {"B_LIB_US_Bandoleer"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"H_LIB_US_Helmet"};
	primaryWeapon[] = {"LIB_M1_Garand"};
	scope[] = {};
    attachment[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] =
    {
        LIST_10("LIB_8Rnd_762x63"),
        LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red")
    }; 
};
class radio : r {
    displayName = "radioman";
	backpack[] = {"B_LIB_US_Radio_ACRE2"};
	backpackItems[] = {"ACRE_PRC77"};
};
class g : r
{
    displayName = "Grenadier";
	uniform[] = {"U_LIB_US_Private_1st"};
	headgear[] = {"H_LIB_US_Helmet_Net"};
    primaryWeapon[] = {"vn_m1_garand_gl"};
    magazines[] =
    {
        LIST_10("vn_m1_garand_mag"),
        LIST_2("vn_22mm_m17_frag_mag"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red"),
		LIST_2("LIB_US_Mk_2")
    };
};
class car : r
{
    displayName = "Carabinier";
	vest[] = {"V_LIB_US_Vest_Carbine"};
    primaryWeapon[] = {"LIB_M1_Carbine"};
	primaryAttachments[] = {};
	magazines[] =
	{
		LIST_6("LIB_15Rnd_762x33"),
		LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red")
	};
};
class m : car
{
    displayName = "Medic";
	headgear[] = {"H_LIB_US_Helmet_Med", "H_LIB_US_Helmet_Med_ns", "H_LIB_US_Helmet_Med_os"};
	uniform[] = {"U_LIB_US_Private_1st"};
	vest[] = {"V_LIB_US_Vest_Medic", "V_LIB_US_Vest_Medic2"};
	backpack[] = {"vn_b_pack_m5_01"};
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
	magazines[] =
	{
		LIST_6("LIB_15Rnd_762x33"),
		LIST_2("LIB_US_Mk_2"),
		LIST_3("LIB_US_M18"),
		LIST_2("LIB_US_M18_Green")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
	vest[] = {"V_LIB_US_Vest_Thompson"};
    primaryWeapon[] = {"LIB_M1928A1_Thompson"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_5("LIB_30Rnd_45ACP"),
        LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red")
    }; 
};
class ftl : g
{
    displayName = "Fireteam Leader";
	uniform[] = {"U_LIB_US_Corp"};
	headgear[] = {"H_LIB_US_Helmet_Net_os"};
	backpack[] = {"B_LIB_US_Backpack_Bandoleer"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
    magazines[] +=
    {
        LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Green"),
		LIST_3("LIB_7Rnd_45ACP")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	uniform[] = {"U_LIB_US_Sergeant"};
	headgear[] = {"H_LIB_US_Helmet_NCO"};
	vest[]= {"V_LIB_US_Vest_45"};
};
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"H_LIB_US_Helmet_First_lieutenant"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
	headgear[] = {"H_LIB_US_Helmet_Second_lieutenant"};
	backpack[] = {"B_LIB_US_Radio_ACRE2"};
	backpackItems[] = {"ACRE_PRC77"};
    magazines[] =
    {
        LIST_6("vn_m1_garand_mag"),
        LIST_3("vn_22mm_m17_frag_mag"),
		LIST_1("LIB_US_M18_Green"),
		LIST_3("LIB_7Rnd_45ACP")
    };	
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"V_LIB_US_Vest_Bar"};
    primaryWeapon[] = {"LIB_M1918A2_BAR"};
	magazines[] =
    {
        LIST_10("LIB_20Rnd_762x63"),
        LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red")
    }; 
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	vest[] = {"V_LIB_US_Vest_Asst_MG"};
	backpack[] ={"B_LIB_US_Backpack"}; 
    backpackItems[] =
    {
        LIST_10("LIB_20Rnd_762x63")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
	backpack[] = {"B_LIB_US_RocketBag_Empty"};
    secondaryWeapon[] = {"LIB_M1A1_Bazooka"};
	backpackItems[] =
	{
		LIST_2("LIB_1Rnd_60mm_m6")
	};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"LIB_M1903A3_Springfield"};
    magazines[] =
    {
        LIST_10("LIB_5Rnd_762x63"),
        LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	uniform[] = {"U_LIB_US_Eng"};
	vest[] = {"V_LIB_US_Vest_M1919"};
	backpack[] = {"B_LIB_US_M36"};
    primaryWeapon[] = {"LIB_M1919A6"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};	
    magazines[] =
    {
        LIST_5("LIB_50Rnd_762x63"),
        LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red"),
		LIST_3("LIB_7Rnd_45ACP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_LIB_US_M36"};
	uniform[] = {"U_LIB_US_Private_1st"};
    backpackItems[] =
    {
        LIST_5("LIB_50Rnd_762x63")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	headgear[] = {"H_LIB_US_Helmet_NCO"};
	backpack[] = {"B_LIB_US_Radio_ACRE2"};
	uniform[] = {"U_LIB_US_Corp"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] +=
	{
		LIST_3("LIB_7Rnd_45ACP")
	};
	backpackItems[] =
	{
		LIST_1("ACRE_PRC77")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
 class mtrg : car 
 {
    displayName = "Mortar Gunner";
    backpack[] = {"B_LIB_US_RocketBag_Empty"};
	secondaryWeapon[] = {"LIB_M2_60_Barrel"};
	magazines[] +=
	{
		LIST_5("LIB_15Rnd_762x33")
	};
	backpackItems[] =
	{
		LIST_3("LIB_1rnd_60mmHE_m2")
	};
     linkedItems[] =
     {
         "ItemMap",
         "ItemCompass",
     };
 };
 class mtrac : r 
 {
    displayName = "Mortar Ammo Carrier";
    backpack[] = {"B_LIB_US_RocketBag_Empty"};
	secondaryWeapon[] = {"LIB_M2_60_Tripod"};
	magazines[] +=
	{
		LIST_5("LIB_15Rnd_762x33")
	};
	backpackItems[] =
	{
		LIST_3("LIB_1rnd_60mmHE_m2")
	};
     linkedItems[] =
     {
         "ItemMap",
         "ItemCompass",
     };
 };
 class mtrag : car 
 {
    displayName = "Mortar Assistant Gunner";
	headgear[] = {"H_LIB_US_Helmet_NCO"};
	backpack[] = {"B_LIB_US_Radio_ACRE2"};
	uniform[] = {"U_LIB_US_Corp"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] +=
	{
		LIST_3("LIB_7Rnd_45ACP")
	};
	backpackItems[] =
	{
		LIST_1("ACRE_PRC77")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
 };
class matg : rat
{
    displayName = "MAT Gunner";
	uniform[] = {"U_LIB_US_Eng"};
	backpackItems[] =
	{
		LIST_3("LIB_1Rnd_60mm_m6")
	};

};
class matac : rat
{
    displayName = "MAT Ammo Carrier";
	secondaryWeapon[] = {};
	uniform[] = {"U_LIB_US_Private_1st"};
	magazines[] =
	{
		LIST_6("LIB_15Rnd_762x33"),
		LIST_1("LIB_US_M1A1_ATMINE_mag"),
		LIST_1("LIB_US_M18")
	};
	backpackItems[] =
	{
		LIST_3("LIB_1Rnd_60mm_m6")
	};
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	headgear[] = {"H_LIB_US_Helmet_NCO"};
	backpack[] = {"B_LIB_US_Radio_ACRE2"};
	uniform[] = {"U_LIB_US_Corp"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] +=
	{
		LIST_3("LIB_7Rnd_45ACP")
	};
	backpackItems[] =
	{
		LIST_1("ACRE_PRC77")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};

class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"LIB_M1903A4_Springfield"};
	uniform[] = {"U_LIB_US_Corp"};
    magazines[] =
    {
        LIST_10("LIB_5Rnd_762x63"),
        LIST_2("LIB_US_Mk_2"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Red")
    };
};
class sp : r
{
    displayName = "Spotter";
	headgear[] = {"H_LIB_US_Helmet_NCO"};
	backpack[] = {"B_LIB_US_Radio_ACRE2"};
	uniform[] = {"U_LIB_US_Sergeant"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] +=
	{
		LIST_3("LIB_7Rnd_45ACP")
	};
	backpackItems[] =
	{
		LIST_1("ACRE_PRC77")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
	headgear[] = {"H_LIB_US_Helmet_Pilot"};
	uniform[] = {"U_LIB_US_Eng"};
    backpack[] = {"B_LIB_US_M36"};
    backpackItems[] = {"ToolKit"};
    magazines[] =
    {
        LIST_5("LIB_30Rnd_45ACP"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Green")
    }; 
};
class vc : smg
{
    displayName = "Vehicle Commander";
	headgear[] = {"H_LIB_US_Helmet_NCO"};
	uniform[] = {"U_LIB_US_Sergeant"};
    backpack[] = {"B_LIB_US_Radio_ACRE2"};
    linkedItems[] += {"Binocular"};
	backpackItems[] = {"ACRE_PRC77"};
    magazines[] =
    {
        LIST_5("LIB_30Rnd_45ACP"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Green")
    }; 
};
class vg : smg
{
    displayName = "Vehicle Gunner";
	headgear[] = {"H_LIB_US_Helmet_Pilot"};
	uniform[] = {"U_LIB_US_Eng"};
};
class eng : car
{
    displayName = "Combat Engineer (M2 Flamethrower)";
	uniform[] = {"U_LIB_US_Eng"};
    backpack[] = {"B_LIB_US_M2Flamethrower"};
	primaryWeapon[] = {"LIB_M2_Flamethrower"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] +=
	{
		LIST_3("LIB_7Rnd_45ACP")
	};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	uniform[] = {"U_LIB_US_Eng"};
	backpack[] = {"B_LIB_US_M36_Rope"};
	vest[]= {"V_LIB_US_Vest_45"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] +=
	{
		LIST_3("LIB_7Rnd_45ACP")
	};
    items[] =
    {
		LIST_1("ACE_DefusalKit"),
		LIST_1("ACE_EntrenchingTool"),
		LIST_1("ACE_rope3")
    };
    backpackItems[] =
	{
		LIST_2("LIB_US_M1A1_ATMINE_mag") 
    };
};
class fp : car
{
    displayName = "Fighter pilot";
    uniform[] = {"U_LIB_US_Pilot", "U_LIB_US_Pilot_2"};
    vest[] = {"V_LIB_US_LifeVest"};
    backpack[] = {"B_LIB_US_TypeA3"};
    headgear[] = {"H_LIB_US_Helmet_Pilot", "H_LIB_US_Helmet_Pilot_Glasses_Up"};
	primaryWeapon[] = {"LIB_M1A1_Carbine"};
	sidearmWeapon[] = {"LIB_Colt_M1911"};
	magazines[] =
    {
        LIST_5("LIB_15Rnd_762x33"),
		LIST_3("LIB_7Rnd_45ACP"),
		LIST_1("LIB_US_M18"),
		LIST_1("LIB_US_M18_Green")
    }; 
};