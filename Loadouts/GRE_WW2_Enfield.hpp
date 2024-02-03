
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"vn_o_uniform_nva_army_01_01","vn_o_uniform_nva_army_01_02","vn_o_uniform_nva_army_02_01","vn_o_uniform_nva_army_02_02","vn_o_uniform_nva_army_03_01","vn_o_uniform_nva_army_03_02","vn_o_uniform_nva_army_04_01","vn_o_uniform_nva_army_04_02"};
    vest[] = {};
	backpack[] = {"vn_b_pack_lw_01"};
	headgear[] = {"CUP_H_Ger_Beret_KSK_Red"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};

class r : base {
    displayName = "rifleman";
	vest[] = {"vn_b_vest_usarmy_02","vn_b_vest_usarmy_03"};
	primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
	magazines[] +=
    {
        LIST_20("CUP_10x_303_M"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
	};
};

class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"vn_m1carbine_gl"};
	vest[] = {"vn_b_vest_usarmy_05"};
    magazines[] =
    {
		LIST_20("vn_carbine_15_t_mag"),
        LIST_8("RHS_mag_M397_HET"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};

class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_sten"};
    magazines[] =
    {
        LIST_10("vn_sten_mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_m3a1"};
    magazines[] =
    {
        LIST_10("vn_m3a1_t_mag"),
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
	primaryWeapon[] = {"vn_m1a1_tommy"};
	vest[] = {"vn_b_vest_usarmy_09"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
		LIST_10("vn_m1a1_20_t_mag"),
		LIST_3("vn_m1911_mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	primaryWeapon[] = {"rhs_weap_MP44"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
	magazines[] =
    {
		LIST_10("rhsgref_30Rnd_792x33_SmE_StG"),
		LIST_3("vn_m1911_mag"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
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
	 magazines[] +=
    {
        LIST_3("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_5("1Rnd_SmokeRed_Grenade_shell")
    };
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
	magazines[] +=
    {
		LIST_2("vn_m72_mag"),
    };
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
	headgear[] = {"vn_b_helmet_aph6_02_03"};
	items[] += {"ACRE_PRC148"};
};