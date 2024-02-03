
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"MNP_CombatUniform_OD_Rg"};
    vest[] = {"MNP_Vest_Light_OD"};
    backpack[] = {"CUP_O_RUS_Patrol_bag_Summer_Shovel"};
    headgear[] = {"rhsgref_helmet_M1_bare"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};

class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_M16A1"};
	magazines[] +=
    {
        LIST_10("CUP_20Rnd_556x45_Stanag"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
	};
};

class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_M16A1GL"};
    magazines[] +=
    {
        LIST_8("RHS_mag_M397_HET"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};

class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m3a1"};
    magazines[] =
    {
        LIST_10("rhsgref_30rnd_1143x23_M1911B_SMG"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
};

class m : smg
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
			LIST_10("ACE_splint"),
			LIST_4("rhs_mag_an_m8hc")
	};
};

class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("CUP_7Rnd_45ACP_1911")
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
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_M60E4_norail"};
    bipod[] = {"rhsusf_acc_saw_bipod"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		LIST_1("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("CUP_7Rnd_45ACP_1911")
    };
};

class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M72A6"};
};

class vd : smg
{
    displayName = "Vehicle Driver";
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
