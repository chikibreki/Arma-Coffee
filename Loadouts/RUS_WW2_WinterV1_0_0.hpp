
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_LIB_NKVD_Strelok"};
    vest[] = {"V_LIB_SOV_RA_MGBelt_Kit"};
    backpack[] = {"B_LIB_SOV_RA_Rucksack2_Gas_Kit_Shinel"};
    headgear[] = {"H_LIB_SOV_RA_Helmet"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","murshun_cigs_lighter","murshun_cigs_cigpack"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    sidearmWeapon[] = {"LIB_TT33"};
    magazines[] = {"LIB_8Rnd_762x25"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"LIB_SVT_40"};
	magazines[] +=
    {
		LIST_10("LIB_10Rnd_762x54"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"vn_sks_gl"};
    magazines[] +=
    {
        LIST_8("vn_sks_mag"),
        LIST_6("vn_22mm_m60_heat_mag"),
        LIST_4("vn_22mm_m22_smoke_mag"),
        LIST_2("fow_e_mk2")     
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_pps43"};
	magazines[] =
    {
        LIST_8("vn_pps_mag"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    }; 
};
class m : car
{
    displayName = "Medic";
	vest[] = {"fow_v_us_carbine"};
	backpack[] = {"B_LIB_SOV_RA_MedicalBag_Empty"};
    sidearmWeapon[] = {""};
    magazines[] =
    {
        LIST_4("vn_pps_mag"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    }; 
	backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_10("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_bloodIV_250"),
			LIST_3("ACE_bloodIV_500"),
			LIST_10("ACE_splint")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_ppsh41"};
	magazines[] =
    {
        LIST_8("vn_ppsh41_35_mag"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18"),
        LIST_2("LIB_8Rnd_762x25")
    };     
    
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"H_LIB_SOV_Ushanka","H_LIB_SOV_Ushanka2"};
    uniform[] = {"U_LIB_NKVD_Sergeant"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	backpack[] = {"B_LIB_SOV_RA_Radio"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
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
    primaryWeapon[] = {"vn_dp28"};
    magazines[] =
    {
        LIST_4("vn_dp28_mag"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	linkedItems[] += {"Binocular"};
    backpackItems[] =
    {
        LIST_4("vn_dp28_mag")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
	backpackItems[] +=
	 {
		LIST_2("fow_1rnd_m6a1")	
	};	
};

class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"H_LIB_SOV_TankHelmet"};
    backpackItems[] = {"ToolKit"};
};

class vc : vd
{
    displayName = "Vehicle Commander";
    
	items[] += {"ACRE_PRC148"};
};

class m2 : base
{
    displayName = "SMG (M2)";
    backpack[] = {"B_LIB_US_M2Flamethrower"};
    primaryWeapon[] = {"LIB_M2_Flamethrower"};
    sidearmWeapon[] = {"LIB_M1895"};
    magazines[] = 
    {
        LIST_1("LIB_M2_Flamethrower_Mag"),
        LIST_4("LIB_7Rnd_762x38"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    };
}

class m2a : smg
{
    displayName = "M2 Assistant";
    backpack[] = {"B_LIB_US_M2Flamethrower"};
    backpackItems[] =
    {
        "LIB_M2_Flamethrower_Mag"
    };
};

class bm37 : smg
{
    displayName = "Mortar Gunner"
    secondaryWeapon[] = {"LIB_BM37_Barrel"};
    backpackItems[] =
    {
        LIST_2("LIB_1Rnd_82mmHE_BM37"),
        LIST_1("LIB_82mm_BM37_SmokeShell")
    };
    
};

class bm37l : bm37
{
    displayName = "Mortar Loader"
    secondaryWeapon[] = {"LIB_BM37_Tripod"};
};

class bm37a : bm37
{
    displayName = "Mortar Assistant"
    secondaryWeapon[] = {""};
};