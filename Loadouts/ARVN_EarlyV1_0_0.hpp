
tooltip = "Author: GunnerRya\Huffer_Fish\n";

class base {
    displayName = "base";
    uniform[] = {"vn_b_uniform_macv_01_17","vn_b_uniform_macv_02_17","vn_b_uniform_macv_03_17","vn_b_uniform_macv_03_17","vn_b_uniform_macv_04_17","vn_b_uniform_macv_05_17","vn_b_uniform_macv_06_17"};
    vest[] = {"vn_b_vest_usarmy_02"};
    backpack[] = {"vn_b_pack_trp_02_02"};
    headgear[] = {"vn_i_helmet_m1_03_01","vn_i_helmet_m1_02_01","vn_b_helmet_m1_01_01"};
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
	primaryWeapon[] = {"vn_m1_garand"};
	scope[] = {};
    attachment[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("vn_m1_garand_mag"),
        LIST_2("vn_m61_grenade_mag"),
		LIST_2("vn_m18_white_mag")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"vn_b_vest_usarmy_05"};
    primaryWeapon[] = {"vn_m1_garand_gl"};
    magazines[] +=
    {
        LIST_8("vn_22mm_m17_frag_mag"),
        LIST_4("vn_22mm_m22_smoke_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_m1carbine"};
	primaryAttachments[] = {};
	magazines[] =
	{
		LIST_10("vn_carbine_15_mag"),
		LIST_2("vn_m61_grenade_mag"),
		LIST_2("vn_m18_white_mag")
	};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"vn_b_vest_usarmy_07"};
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
    primaryWeapon[] = {"vn_m1a1_tommy"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("vn_m1a1_20_mag"),
		LIST_2("vn_m61_grenade_mag"),
		LIST_1("vn_m18_white_mag")
    };
};
class ftl : smg
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] +=
    {
        LIST_2("vn_m18_red_mag"),
		LIST_3("vn_m1911_mag")
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
	vest[] = {"vn_b_vest_usarmy_09"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"vn_m1918"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_10("vn_m1918_mag"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("vn_m18_white_mag"),
		LIST_3("vn_m1911_mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_8("vn_m1918_mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : g
{
    displayName = "Rifleman (AT)";
    backpackItems[] =
	{
		LIST_10("vn_m1_garand_mag"),
		LIST_5("vn_22mm_m9_heat_mag")
	};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryAttachments[] = {""};
    scope[] = {"vn_o_3x_m84"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] +=
    {
		LIST_3("vn_m1911_mag")
    };
};
class mmgg : car //PLZ TEST
{
    displayName = "MMG Gunner";
	backPack[] = {"vn_b_pack_static_m1919a6_01"};
	items[] += {"ACRE_PRC148"};
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
	backPack[] = {"vn_b_pack_static_base_01"};
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
    vest[] = {"vn_b_vest_usarmy_11"};
    headgear[] = {"vn_b_helmet_t56_02_01"};
	primaryWeapon[] = {"vn_m3a1"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_8("vn_m3a1_mag"),
    };
    linkedItems[] += 
	{
		"ItemGPS"
	};
    backpackItems[] = 
	{
		"ToolKit"
	};
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
	uniform[] = {"vn_b_uniform_k2b_02_01"};
	vest[] = {"vn_b_vest_aircrew_03"};
    backpack[] = {};
    headgear[] = {"vn_b_helmet_svh4_02_05","vn_b_helmet_svh4_02_02","vn_b_helmet_svh4_01_05"};
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
};
class pc : pp
{
    displayName = "Helicopter Crew";
};
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"vn_b_pack_trp_03"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_Clacker",
        LIST_4("DemoCharge_Remote_Mag"),
    };
};
class engfla : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Flamethrower)";
	backpack[] = {"B_LIB_US_M2Flamethrower"};
    primaryWeapon[] = {"LIB_M2_Flamethrower"};
	primaryAttachments[] = {};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_1("LIB_M2_Flamethrower_Mag"),
		LIST_3("vn_m1911_mag")
    };
    linkedItems[] += 
	{
		"ItemGPS"
	};
};
class engflaa : smg
{
    displayName = "Combat Engineer (Flamethrower Assistant)";
	backpack[] = {"B_LIB_US_M2Flamethrower"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] +=
    {
        LIST_1("LIB_M2_Flamethrower_Mag"),
		LIST_3("vn_m1911_mag")
    };
    linkedItems[] += 
	{
		"ItemGPS"
	};
};
class pm : r
{
	displayName = "Pointman";
	primaryWeapon[] = {"vn_m1897"};
	primaryAttachments[] = {};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_6("vn_m1897_buck_mag"),
		LIST_4("vn_m1897_fl_mag"),
		LIST_3("vn_m1911_mag")
    };
};