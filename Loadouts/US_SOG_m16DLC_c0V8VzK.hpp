
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"vn_b_uniform_macv_01_07","vn_b_uniform_macv_01_07","vn_b_uniform_macv_01_01","vn_b_uniform_macv_02_07","vn_b_uniform_macv_02_01","vn_b_uniform_macv_03_07","vn_b_uniform_macv_03_01","vn_b_uniform_macv_04_07","vn_b_uniform_macv_04_01","vn_b_uniform_macv_05_07","vn_b_uniform_macv_05_01"};
    vest[] = {};
	backpack[] = {"vn_b_pack_lw_01"};
    headgear[] = {"vn_b_helmet_m1_01_01","vn_b_helmet_m1_02_01","vn_b_helmet_m1_03_01","vn_b_helmet_m1_05_01","vn_b_helmet_m1_06_01","vn_b_helmet_m1_07_01"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};

class r : base {
    displayName = "rifleman";
	vest[] = {"vn_b_vest_usarmy_02","vn_b_vest_usarmy_03"};
	primaryWeapon[] = {"vn_m16","vn_m16_camo"};
	magazines[] +=
    {
        LIST_10("CUP_20Rnd_556x45_Stanag"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")

	};
};

class reod : r {
    displayName = "rifleman eod";
	backpackItems[] +=
	 {
			
			LIST_1("vn_b_item_trapkit"),
            LIST_1("ACE_DefusalKit")
           
			
	};
};

class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"vn_m16_xm148"};
	headgear[] = {"vn_b_helmet_m1_04_01"};
	vest[] = {"vn_b_vest_usarmy_05"};
    magazines[] +=
    {
        LIST_8("RHS_mag_M397_HET"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};

class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_m45"};
    magazines[] =
    {
        LIST_10("vn_m45_mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_m2carbine"};
    magazines[] =
    {
        LIST_10("vn_carbine_15_mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
};

class m : car
{
    displayName = "Medic";
	vest[] = {"vn_b_vest_usarmy_07"};
	backpack[] = {"vn_b_pack_lw_07"};
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
			LIST_10("ACE_splint"),
			LIST_4("rhs_mag_an_m8hc")
	};
};

class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"vn_b_vest_usarmy_09"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("vn_m1911_mag"),
		LIST_5("UGL_FlareGreen_F"),
		LIST_5("UGL_FlareWhite_F"),
		LIST_5("UGL_FlareRed_F")
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
        "Rangefinder"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : sl
{
    displayName = "Forward Air Controller";
	backpack[] = {"vn_b_pack_lw_06"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"vn_m60"};
	vest[] = {"vn_b_vest_usarmy_06"};
	backpack[] = {"vn_b_pack_lw_02"};
    bipod[] = {"rhsusf_acc_saw_bipod"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_4("vn_m60_100_mag"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("vn_m1911_mag")
    };
};

class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"vn_b_pack_lw_05"};
    backpackItems[] =
    {
        LIST_4("vn_m60_100_mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"vn_m72"};
};

class vd : smg
{
    displayName = "Vehicle Driver";
	vest[] = {"vn_b_vest_usarmy_10"};
	goggles[] = {"rhs_googles_clear"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
};

class pp : vd
{
    displayName = "Helicopter Pilot";
	vest[] = {"vn_b_vest_aircrew_01"};
	headgear[] = {"vn_b_helmet_aph6_02_03","vn_b_helmet_aph6_01_02","vn_b_helmet_aph6_02_02","vn_b_helmet_aph6_01_05","vn_b_helmet_aph6_02_05","vn_b_helmet_aph6_01_03","vn_b_helmet_aph6_01_04","vn_b_helmet_aph6_02_04"};
	items[] += {"ACRE_PRC148"};
};


