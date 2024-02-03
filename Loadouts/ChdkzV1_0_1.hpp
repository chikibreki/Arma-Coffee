class base {
    displayName = "base";
    uniform[] = {"CUP_U_O_CHDKZ_Kam_01","CUP_U_O_CHDKZ_Kam_02","CUP_U_O_CHDKZ_Kam_03","CUP_U_O_CHDKZ_Kam_04","CUP_U_O_CHDKZ_Kam_05","CUP_U_O_CHDKZ_Kam_06","CUP_U_O_CHDKZ_Kam_07","CUP_U_O_CHDKZ_Kam_08"};
    vest[] = {"CUP_V_RUS_6B3_1"};
    backpack[] = {"CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll","CUP_B_AlicePack_OD"};
    headgear[] = {"CUP_H_RUS_SSH68_cover_vsr93"};
	goggles[] = {"","CUP_G_Scarf_Face_Blk","CUP_G_Scarf_Face_Grn","CUP_G_Scarf_Face_White","G_Bandanna_oli","G_Bandanna_blk","G_Balaclava_blk","G_Balaclava_oli"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Flashlight_MX991"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_AK47_Early","CUP_arifle_AKM_Early","CUP_arifle_AKMS_Early","CUP_arifle_AKS"};
	attachment[] = {""};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("CUP_30Rnd_762x39_AK47_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_AKM_GL"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HE_GP25_M"),
        LIST_4("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS"};
	magazines[] =
    {
        LIST_8("CUP_30Rnd_762x39_AK47_M"),
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
    primaryWeapon[] = {"CUP_smg_SA61"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_6("CUP_20Rnd_B_765x17_Ball_M"),
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
	backpackItems[] = {
		"ACE_Fortify",
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
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
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] =
    {
        LIST_6("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
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
        LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
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
	vest[] = {"CUP_Vest_RUS_6B45_Sh117_PKP";"CUP_Vest_RUS_6B45_Sh117_PKP_Nut","CUP_Vest_RUS_6B45_Sh117_PKP_Del","CUP_Vest_RUS_6B45_Sh117_PKP_Del_Nut","CUP_Vest_RUS_6B45_Sh117_PKP_Full"};
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
    magazines[] +=
    {
        LIST_3("CUP_PG7VL_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("CUP_PG7VL_M")
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
        LIST_2("CUP_PG7VL_M")
    };
};
class hatg : car 
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
    backpack[] = {"B_Carryall_oli"};
	magazines[] +=
    {
        LIST_3("CUP_PG7VR_M")
    };
};
class hatac : r 
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
	magazines[] +=
    {
        LIST_3("CUP_PG7VR_M")
    };
};
class samg : car 
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_Igla"};
	backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_3("CUP_Igla_M")
    };
};
class samag : car 
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
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
	vest[] ={"V_LIB_SOV_RA_MGBelt"};
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
		"ACE_Fortify",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car 
{
    displayName = "Combat Engineer (Mines)";
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
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};