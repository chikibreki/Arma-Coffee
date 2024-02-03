
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"VSM_ProjectHonor_Camo"};
    vest[] = {"VSM_RAV_operator_ProjectHonor"};
    headgear[] = {"VSM_ProjectHonor_OPS_2"};
	backpack[] = {"VSM_ProjectHonor_Backpack_Compact"};
	hmd[] = {"CUP_NVG_GPNVG_green"};
    primaryWeapon[] = {};
	sidearmWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_XM8_Carbine_FG"};
	silencer[] = {"CUP_muzzle_snds_XM8"};
    attachment[] = {};
	secondaryAttachments[] = {};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    sidearmAttachments[] = {"muzzle_snds_acp","CUP_acc_MLPLS_Laser","optic_MRD"};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_XM8"),
		LIST_3("11Rnd_45ACP_Mag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_XM8_Carbine_GL"};
	vest[] = {"VSM_RAV_Breacher_ProjectHonor"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HEDP_M203"),
        LIST_6("CUP_1Rnd_Smoke_M203"),
		LIST_3("ACE_HuntIR_M203")
    };
	items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_XM8_Compact"};
	primaryAttachments[] = {};
	magazines[] =
    {
        LIST_8("CUP_30Rnd_556x45_XM8"),
		LIST_2("11Rnd_45ACP_Mag"),
        LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
    }; 
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
    primaryWeapon[] = {"CUP_smg_MP7"};
	scope[] = {"CUP_optic_AC11704_Black"};
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
	magazines[] +=
	{
		LIST_1("Laserbatteries")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Laserdesignator_01_khk_F",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACRE_PRC148"};
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
	vest[] = {"VSM_RAV_MG_ProjectHonor"};
	backpack[] = {"VSM_ProjectHonor_Backpack_Kitbag"};
	primaryWeapon[] = {"CUP_arifle_XM8_Carbine_FG"};
	scope[] = {"CUP_optic_Eotech553_Black"};
	bipod[] = {"CUP_bipod_VLTOR_Modpod_black"};
    magazines[] =
    {
        LIST_7("CUP_100Rnd_556x45_BetaCMag"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"VSM_ProjectHonor_Backpack_Kitbag"};
    backpackItems[] =
    {
        LIST_5("CUP_100Rnd_556x45_BetaCMag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_Mk48_nohg"};
	scope[] = {"CUP_optic_VortexRazor_UH1_Black"};
    magazines[] =
    {
        LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"VSM_ProjectHonor_Backpack_Kitbag"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
        LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_xm8_sharpshooter"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_TE1_Red_Tracer_556x45_XM8"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"VSM_ProjectHonor_carryall"};
    secondaryWeapon[] = {"launch_MRAWS_olive_F"};
    magazines[] +=
    {
        LIST_2("MRAWS_HEAT_F"),
		LIST_1("MRAWS_HE_F")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"VSM_ProjectHonor_carryall"};
    backpackItems[] =
    {
        LIST_1("MRAWS_HEAT_F"),
		LIST_1("MRAWS_HE_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"VSM_ProjectHonor_carryall"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"VSM_ProjectHonor_carryall"};
	secondaryWeapon[] = {"launch_I_Titan_short_F"};
	magazines[] +=
    {
        LIST_2("Titan_AT")
    };
	items[] += {"ACRE_PRC148"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"VSM_ProjectHonor_carryall"};
	magazines[] +=
    {
        LIST_2("Titan_AT")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"VSM_ProjectHonor_carryall"};
	magazines[] +=
    {
        LIST_2("Titan_AT")
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
	backpack[] = {"VSM_ProjectHonor_carryall"};
    secondaryWeapon[] = {"launch_B_Titan_tna_F"};
    magazines[] +=
    {
        LIST_2("Titan_AA")
    };
};
class samag : car //UNNECESSARY
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"VSM_ProjectHonor_carryall"};
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
        LIST_2("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"CUP_srifle_M107_Pristine"};
    scope[] = {"optic_Nightstalker"};
	silencer[] = {"CUP_muzzle_mfsup_Suppressor_M107_Black"};
    magazines[] =
    {
        LIST_5("CUP_10Rnd_127x99_M107"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell"),
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
    vest[] = {"VSM_FAPC_Operator_ProjectHonor"};
    backpack[] = {"B_AssaultPack_blk"};
    headgear[] = {"H_HelmetCrew_B"};
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
    backpack[] = {};
    headgear[] = {"H_CrewHelmetHeli_B"};
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
	headgear[] = {"H_PilotHelmetFighter_B"};
	uniform[] = {"U_B_PilotCoveralls"};
	vest[] = {"G_Tactical_Clear"};
	backpack[] = {"ACE_NonSteerableParachute"};
	items[] += {"ACRE_PRC148"};
};
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"VSM_ProjectHonor_carryall"};
	Items[] = {
        "MineDetector",
        "ToolKit",
		"ACE_clacker",
        LIST_4("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"VSM_ProjectHonor_carryall"};
    backpackitems[] +=
    {
        LIST_6("APERSBoundingMine_Range_Mag"),
        LIST_2("ATMine_Range_Mag"),
		"MineDetector",
        "ToolKit",
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {
		"ACRE_PRC148",
		"ACE_UAVBattery"
	};
};
