
tooltip = "Author: GunnerRya\Huffer_Fish\n";

class base {
    displayName = "base";
    uniform[] = {"vn_b_uniform_macv_01_01","vn_b_uniform_macv_02_01","vn_b_uniform_macv_03_01","vn_b_uniform_macv_04_01","vn_b_uniform_macv_05_01","vn_b_uniform_macv_06_01"};
    vest[] = {"vn_b_vest_usarmy_02"};
    headgear[] = {"vn_i_helmet_m1_03_01","vn_i_helmet_m1_02_01","vn_b_helmet_m1_01_01"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"vn_m1_garand"};
	scope[] = {};
    attachment[] = {"vn_b_m1_garand"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_15("vn_m1_garand_t_mag"),
        LIST_2("vn_m61_grenade_mag"),
		LIST_1("vn_m18_white_mag")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"vn_b_vest_usarmy_05"};
	backpack[] = {"vn_b_pack_trp_02_02"};
    primaryWeapon[] = {"vn_m1_garand_gl"};
    magazines[] +=
    {
        LIST_8("vn_22mm_m17_frag_mag"),
        LIST_4("vn_22mm_m22_smoke_mag"),
		LIST_6("vn_22mm_m9_heat_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_m1carbine"};
	attachment[] = {"vn_b_carbine"};
	backpack[] = {"vn_b_pack_trp_02_02"};
	primaryAttachments[] = {};
	magazines[] =
	{
		LIST_10("vn_carbine_15_t_mag"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_2("vn_m18_white_mag")
	};
};
class pm : r
{
	displayName = "Pointman";
	primaryWeapon[] = {"vn_m1897"};
	primaryAttachments[] = {};
	attachment[] = {"vn_b_m1897"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_8("vn_m1897_buck_mag"),
		LIST_6("vn_m1897_fl_mag"),
		LIST_4("vn_m1911_mag")
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
        LIST_12("vn_m1a1_20_t_mag"),
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
    linkedItems[] += {"vn_m19_binocs_grn"};
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
		"vn_m19_binocs_grn",
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
	backpack[] = {"vn_b_pack_trp_02_02"};
    primaryWeapon[] = {"vn_m1918"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_10("vn_m1918_t_mag"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("vn_m18_white_mag"),
		LIST_3("vn_m1911_mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"vn_b_pack_trp_02_02"};
    backpackItems[] =
    {
        LIST_10("vn_m1918_mag")
    };
    linkedItems[] += {"Binocular"};
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
	backPack[] = {"vn_b_pack_static_m1919a4_low_01"};
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
    };
};
class mmgac : smg
{
    displayName = "MMG Ammunition Carrier";
	backPack[] = {"vn_b_pack_lw_05"};
	backpackItems[] =
	{
		LIST_2("ace_compat_sog_m1919_250")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
    };
};
class hmgg : smg
{
    displayName = "HMG Gunner";
	backpack[] = {"vn_b_pack_static_m2_low_01"};
	items[] += {"ACRE_PRC148"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
	backpack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "vn_m19_binocs_grn"
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
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"vn_b_pack_trp_03_02"};
    items[] +=
    {
        LIST_6("vn_mine_m14_mag"),
		LIST_4("vn_mine_m16_mag"),
		LIST_4("vn_mine_m18_range_mag"),
        LIST_2("vn_mine_m15_mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
    };
};