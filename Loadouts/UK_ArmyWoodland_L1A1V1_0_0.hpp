class base {
    displayName = "base";
    uniform[] = {"cwr3_b_uk_uniform_dpm_weathered"};
    vest[] = {"cwr3_b_uk_vest_58webbing"};
    backpack[] = {""};
    headgear[] = {"cwr3_b_uk_headgear_mk5_helmet_scrim_camo"};
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
	primaryWeapon[] = {"cwr3_arifle_l1a1"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_1("CUP_HandGrenade_L109A1_HE"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class m : r
{
    displayName = "Medic";
	vest[] = {"cwr3_b_uk_vest_58webbing_medic"};
	backpack[] = {"cwr3_b_uk_backpack_medic_empty"};
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
			LIST_2("SmokeShell")
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"cwr3_smg_sterling"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_6("cwr3_30rnd_sterling_m"),
		LIST_2("SmokeShell"),
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	backpack[] = {"cwr3_b_backpack_radio"};
	magazines[] += 
	{
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellPurple")
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
        "ItemWatch"
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
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"cwr3_launch_m72a3"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	backpack[] = {"cwr3_b_uk_backpack_l4a3"};
	primaryWeapon[] = {"cwr3_lmg_bren"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
	magazines[] =
    {
        LIST_14("cwr3_30rnd_762x51_bren_m"),
		LIST_1("HandGrenade"),
		LIST_2("SmokeShell"),
		LIST_4("CUP_13Rnd_9x19_Browning_HP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"cwr3_b_uk_backpack_l4a3"};
    backpackItems[] =
    {
        LIST_6("cwr3_30rnd_762x51_bren_m")
    };
    linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backpack[] = {"cwr3_b_uk_backpack_l7a2"};
    primaryWeapon[] = {"CUP_lmg_L7A2_Flat"};
	magazines[] =
	{
		LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"cwr3_b_uk_backpack_l7a2"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"cwr3_b_uk_backpack_l7a2"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryAttachments[] = {""};
    scope[] = {"cwr3_optic_suit"};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_M"),
        LIST_1("HandGrenade"),
		LIST_2("SmokeShell")
    };
};
class sn : r
{
	displayName = "Sniper"
	primaryWeapon[] = {"cwr3_srifle_l42a1"};
	scope[] = {"CUP_optic_no23mk2"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
    magazines[] =
    {
        LIST_8("CUP_5Rnd_762x51_M24"),
        LIST_1("HandGrenade"),
		LIST_2("SmokeShell"),
		LIST_4("CUP_13Rnd_9x19_Browning_HP")
    };
};
class sp : r
{
	displayName = "Spotter"
	linkedItems[] +=
    {
        "Binocular",
    };
};
class matg : smg
{
    displayName = "MAT Gunner";
	backpack[] = {"cwr3_b_uk_backpack_carlgustaf"};
    secondaryWeapon[] = {"cwr3_launch_carlgustaf"};
    magazines[] +=
    {
        LIST_3("cwr3_carlgustaf_heat_m"),
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"cwr3_b_uk_backpack_carlgustaf"};
	linkedItems[] +=
    {
        "Binocular",
    };
    backpackItems[] =
    {
        LIST_2("cwr3_carlgustaf_heat_m"),
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"cwr3_b_uk_backpack_carlgustaf"};
    linkedItems[] +=
    {
        "Binocular",
    };
    backpackItems[] =
    {
        LIST_2("cwr3_carlgustaf_heat_m"),
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"cwr3_launch_javelin"};
    magazines[] +=
    {
        LIST_2("cwr3_javelin_m")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
    };
    backpackItems[] =
    {
        LIST_2("cwr3_javelin_m")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"cwr3_i_uniform_coverall_grey"};
    headgear[] = {"cwr3_b_uk_headgear_beret_headset_tank"};
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
	uniform[] = {"cwr3_b_uk_uniform_pilot"};
	vest[] = {"cwr3_b_vest_pilot"};
    backpack[] = {};
    headgear[] = {"cwr3_b_headgear_pilot"};
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"cwr3_b_headgear_pilot"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
	displayName = "Jet Pilot";
	backpack[] = {"B_Parachute"};
	headgear[] = {"cwr3_b_headgear_pilot_visor_white"};
};
class eng : r 
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"cwr3_b_uk_backpack_sapper"};
	vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_Fortify",
		"ACE_DefusalKit",
		"ACE_Clacker",
        LIST_6("DemoCharge_Remote_Mag"),
    };
};
class engm : r 
{
    displayName = "Combat Engineer (Mines)";
	vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
	backpack[] = {"cwr3_b_uk_backpack_sapper"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_Fortify",
        "ATMine_Range_Mag",
		"ACE_DefusalKit"
    };
};