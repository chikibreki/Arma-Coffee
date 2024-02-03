class base {
    displayName = "base";
    uniform[] = {"CUP_U_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads"};
    vest[] = {"CUP_Vest_RUS_6B45_Sh117_BeigeDigital"};
    backpack[] = {"CUP_O_RUS_Patrol_bag_BeigeDigital"};
    headgear[] = {"CUP_H_RUS_6B47_v2_BeigeDigital"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","CUP_NVG_1PN138"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_AK74M"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("CUP_30Rnd_545x39_AK74M_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_Vest_RUS_6B45_Sh117_VOG_BeigeDigital"};
    primaryWeapon[] = {"CUP_arifle_AK74M_GL"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HE_GP25_M"),
        LIST_4("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AK105"};
	magazines[] =
    {
        LIST_8("CUP_30Rnd_545x39_AK74M_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell")
    };
   };
class m : car
{
    displayName = "Medic";
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
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_vityaz"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_6("CUP_30Rnd_9x19_Vityaz"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	sidearmWeapon[] = {"hgun_Rook40_F"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_3("16Rnd_9x21_Mag")
	};
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
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74M"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] =
    {
        LIST_10("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell"),
		LIST_3("16Rnd_9x21_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_RPG26"};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryAttachments[] = {""};
    scope[] = {"CUP_optic_PSO_1_AK"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	vest[] = {"CUP_Vest_RUS_6B45_Sh117_PKP_BeigeDigital"};
    primaryWeapon[] = {"CUP_lmg_Pecheneg"};
	magazines[] =
	{
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
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
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"CUP_optic_PGO7V3"};
    magazines[] +=
    {
        LIST_3("CUP_PG7VM_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M")
    };
};
class hatg : car 
{
    displayName = "HAT Gunner";
	secondaryWeapon[] ={"CUP_launch_Metis"};
    backpack[] = {"Arid_Carryall"};
	magazines[] +=
    {
        LIST_2("CUP_AT13_M")
    };
};
class hatac : r 
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"Arid_Carryall"};
	magazines[] +=
    {
        LIST_2("CUP_AT13_M")
    };
};
class samg : car 
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_Igla"};
	backpack[] = {"Arid_Carryall"};
    magazines[] +=
    {
        LIST_1("CUP_Igla_M")
    };
};
class samag : car 
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"Arid_Carryall"};
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
        LIST_2("CUP_Igla_M")
    };
};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] ={"CUP_srifle_SVD"};
	scope[] ={"CUP_optic_PSO_1"};
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
	headgear[] ={"H_Tank_black_F"};
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
	headgear[] ={"CUP_H_RUS_ZSH_Shield_Up","CUP_H_RUS_ZSH_Shield_Down"};
	vest[] ={"CUP_V_CDF_CrewBelt"};
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
	displayname = "Jet Pilot"
	backpack[] = {"ACE_NonSteerableParachute"};
};
class eng : car 
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag")
    };
};
class engm : car 
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_4("APERSBoundingMine_Range_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag",
		"ACE_DefusalKit"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};