
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_GER_Flecktarn_2"};
    vest[] = {"CUP_V_B_GER_PVest_Fleck_RFL"};
    headgear[] = {"CUP_H_Ger_M92_Cover"};
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
	primaryWeapon[] = {"CUP_arifle_G36K_KSK"};
	scope[] = {"CUP_optic_ZeissZPoint"};
    attachment[] = {"CUP_acc_ANPEQ_15_Flashlight_Black_L"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_G36"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_B_GER_PVest_Fleck_Gren"};
    primaryWeapon[] = {"CUP_arifle_AG36"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HEDP_M203"),
        LIST_4("CUP_1Rnd_Smoke_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_G36C"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_GER_PVest_Fleck_Med"};
	backpack[] = {"CUP_B_GER_Medic_Flecktarn"};
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
    primaryWeapon[] = {"CUP_smg_MP7"};
	scope[] = {"CUP_optic_ZeissZPoint"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_5("CUP_40Rnd_46x30_MP7"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_B_GER_PVest_Fleck_TL"};
	scope[] = {"CUP_optic_G36Optics_rds_3D"};
	sidearmWeapon[] = {"CUP_hgun_glock17"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_4("CUP_17Rnd_9x19_glock17")
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
	vest[] = {"CUP_V_B_GER_PVest_Fleck_MG"};
	backpack[] = {"CUP_B_GER_Pack_Flecktarn"};
    primaryWeapon[] = {"CUP_arifle_MG36"};
	scope[] = {"CUP_optic_HoloBlack"};
	sidearmWeapon[] = {"CUP_hgun_glock17"};
    magazines[] =
    {
        LIST_7("CUP_100Rnd_556x45_BetaCMag"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_4("CUP_17Rnd_9x19_glock17")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_GER_Pack_Flecktarn"};
    backpackItems[] =
    {
        LIST_5("CUP_100Rnd_556x45_BetaCMag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_HCPF3"};
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_MG3"};
    magazines[] =
    {
        LIST_5("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_GER_Pack_Flecktarn"};
    backpackItems[] =
    {
        LIST_3("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_HK417_20"};
	primaryAttachments[] = {"CUP_acc_ANPEQ_15_Flashlight_Black_L"};
    scope[] = {"CUP_optic_SB_11_4x20_PM"};
    bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
	sidearmWeapon[] = {"CUP_hgun_glock17"};
    magazines[] =
    {
        LIST_10("CUP_20Rnd_762x51_HK417"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
		LIST_4("CUP_17Rnd_9x19_glock17")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"B_Carryall_oli"};
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
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
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
    backpack[] = {"B_Carryall_oli"};
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
    backpack[] = {"B_Carryall_oli"};
	magazines[] +=
    {
        LIST_1("CUP_Javelin_M")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
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
class samg : car //UNNECESSARY
{
    displayName = "AA Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
    magazines[] +=
    {
        LIST_2("CUP_Stinger_M")
    };
};
class samag : car //UNNECESSARY
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_1("CUP_Stinger_M")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"CUP_srifle_G22_wdl"};
    scope[] = {"CUP_optic_SB_3_12x50_PMII"};
	bipod[] = {"CUP_bipod_Harris_1A2_L"};
	sidearmWeapon[] = {"CUP_hgun_glock17"};
    magazines[] =
    {
        LIST_8("CUP_5Rnd_762x67_G22"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
		LIST_4("CUP_17Rnd_9x19_glock17")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : car
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
	uniform[] = {"CUP_U_B_GER_Fleck_Overalls_Tank"};
    vest[] = {"CUP_V_B_GER_Vest_2"};
    backpack[] = {"B_AssaultPack_blk"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148","CUP_H_Ger_Beret_TankCommander_Grn"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
};
class pp : vd
{
    displayName = "Helicopter Pilot";
	uniform[] = {"CUP_U_B_GER_Fleck_Overalls_Pilot"};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
    backpack[] = {};
    headgear[] = {"CUP_H_SPH4_grey"};
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
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_oli"};
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
	backpack[] = {"B_Carryall_oli"};
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
