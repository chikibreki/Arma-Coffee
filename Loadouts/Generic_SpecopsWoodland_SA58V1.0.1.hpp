
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"VSM_Scorpion_Crye_SS_Camo","VSM_Scorpion_Crye_Camo"};
    vest[] = {"VSM_OGA_OD_Vest_3"};
    backpack[] = {"VSM_OGA_OD_Backpack_Compact"};
    headgear[] = {"VSM_OGA_OD_Helmet1"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","CUP_NVG_PVS14"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arfile_Sa58_Carbine_RIS_AFG_woodland"};
	silencer[] = {"CUP_muzzle_mfsup_CSA_woodland"};
	attachment[] = {"CUP_acc_LLM01_od_L"};
	scope[] = {"CUP_optic_TrijiconRx01_kf_od"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_Sa58_woodland_M_TracerG"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_Sa58RIS2_gl_woodland"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HEDP_M203"),
        LIST_4("CUP_1Rnd_Smoke_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_Sa58RIS2_woodland"};
	primaryAttachments[] = {};
};
class m : car
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
			LIST_10("ACE_splint")
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_arifle_Sa58s"};
	scope[] = {};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_5("CUP_20Rnd_Sa58_M"),
		LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"CUP_hgun_TT"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("CUP_8Rnd_762x25_TT")
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
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	backpack[] = {"VSM_OGA_OD_Backpack_Kitbag"};
    primaryWeapon[] = {"CUP_lmg_M60E4_norail_desert"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"VSM_OGA_OD_Backpack_Kitbag"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"vn_m72"};
	magazines[] +=
    {
        LIST_1("vn_m72_mag"),
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_Mk18_wdl"};
    scope[] = {"optic_MRCO"};
    bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
	sidearmWeapon[] = {"CUP_hgun_TT"};
    magazines[] =
    {
        LIST_10("CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_8Rnd_762x25_TT")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backpack[] = {"VSM_OGA_OD_Backpack_Kitbag"};
    primaryWeapon[] = {"CUP_lmg_M60E4_norail_desert"};
	sidearmWeapon[] = {"CUP_hgun_TT"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_8Rnd_762x25_TT")
    };
};
class mmgag : r
{
    displayName = "Assistant MMG";
	backpack[] = {"VSM_OGA_OD_Backpack_Kitbag"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
    linkedItems[] += {"Binocular"};
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"VSM_OGA_OD_carryall"};
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"CUP_optic_MAAWS_Scope"};
    magazines[] +=
    {
        LIST_3("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"VSM_OGA_OD_carryall"};
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"VSM_OGA_OD_carryall"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"VSM_OGA_OD_carryall"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
	items[] += {"ACRE_PRC148"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"VSM_OGA_OD_carryall"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"VSM_OGA_OD_carryall"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Rangefinder",
	};
};
class sn : r
{
    displayName = "Sniper";
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_M24_blk"};
    scope[] = {"CUP_optic_LeupoldM3LR"};
	bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
	sidearmWeapon[] = {"CUP_hgun_TT"};
    magazines[] =
    {
        LIST_8("CUP_5Rnd_762x51_M24"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_8Rnd_762x25_TT")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : r
{
    displayName = "Spotter";
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
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"CUP_H_CVC"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
};
class pp : vd
{
    displayName = "Helicopter Pilot";
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
    backpack[] = {};
    headgear[] = {"CUP_H_SPH4_grey"};
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_SPH4_grey"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"VSM_OGA_OD_carryall"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"VSM_OGA_OD_carryall"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};
