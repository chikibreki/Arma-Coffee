class base {
    displayName = "base";
    uniform[] = {"cwr3_o_uniform_m1969"};
    vest[] = {"cwr3_o_vest_beltkit_rd54"};
    backpack[] = {""};
    headgear[] = {"cwr3_o_headgear_ssh68"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"vn_sks"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("vn_sks_mag"),
        LIST_1("vn_f1_grenade_mag"),
		LIST_2("vn_rdg2_mag")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"vn_sks_gl"};
	vest[] = {"cwr3_o_vest_beltkit_rd54_chicom"};
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
    magazines[] +=
    {
        LIST_8("vn_22mm_m60_frag_mag"),
        LIST_4("vn_22mm_m22_smoke_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
    {
        LIST_6("vn_sks_mag"),
		LIST_1("vn_f1_grenade_mag"),
		LIST_2("vn_rdg2_mag")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
	primaryWeapon[] = {"vn_pps52"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_6("vn_pps_mag"),
		LIST_1("SmokeShell"),
    };
};
class m : smg
{
    displayName = "Medic";
	vest[] = {"cwr3_o_vest_harness_medic"};
	backpack[] = {"cwr3_o_backpack_veshmeshok_medic_empty"};
	 items[] +=
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
			
	};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"cwr3_o_vest_harness_officer"};
	sidearmWeapon[] = {"vn_tt33"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_4("vn_tt33_mag")
	};
	
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
class fac : co
{
    displayName = "Forward Air Controller";
};
class rat : car
{
    displayName = "Rifleman (AT)";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"vn_rpg2"};
	magazines[] =
	{
		LIST_2("vn_rpg2_mag"),
	};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	primaryWeapon[] = {"vn_dp28"};
	sidearmWeapon[] = {"vn_tt33"};
	magazines[] =
    {
        LIST_8("vn_dp28_mag"),
		LIST_1("vn_f1_grenade_mag"),
		LIST_1("vn_rdg2_mag"),
		LIST_4("vn_tt33_mag")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
    backpackItems[] =
    {
        LIST_6("vn_dp28_mag")
    };
    linkedItems[] += {"Binocular"};
};
class mmgg : smg
{
    displayName = "MMG Gunner";
	backpack[] = {"vn_o_pack_static_sgm_low_01"};
	items[] += {"ACRE_PRC148"};
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"vn_o_pack_static_base_01"};
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
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    backpackItems[] =
	{
		LIST_3("vn_rpg2_mag")
	};
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    backpackItems[] =
    {
        LIST_2("vn_rpg2_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    linkedItems[] +=
    {
        "Binocular",
    };
    backpackItems[] =
    {
        LIST_1("vn_rpg2_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
	primaryWeapon[] ={"vn_m9130"};
	scope[] ={"vn_o_3x_m9130"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
    {
        LIST_10("vn_m38_t_mag")
    };
 };
class sp : smg
{
    displayName = "Spotter";
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
	uniform[] = {"cwr3_o_uniform_m1972_tanker"};
	vest[] = {"cwr3_o_vest_beltkit_ak74"};
	headgear[] ={"H_Tank_black_F"};
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
	uniform[] = {"cwr3_o_uniform_pilot"};
	headgear[] ={"CUP_H_RUS_ZSH_Shield_Up","CUP_H_RUS_ZSH_Shield_Down"};
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
	displayName = "Jet Pilot";
	backpack[] = {"vn_o_pack_parachute_01"};
};
class eng : car 
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"cwr3_o_backpack_rd54"};
    backpackItems[] = {
		"ACE_Clacker",
        "MineDetector",
        "ToolKit",
		"ACE_DefusalKit",
        LIST_4("DemoCharge_Remote_Mag"),
    };
};
class engm : car 
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"cwr3_o_backpack_rd54"};
    items[] +=
    {
        LIST_6("APERSMine_Range_Mag"),
        LIST_2("ATMine_Range_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_DefusalKit"
    };
};