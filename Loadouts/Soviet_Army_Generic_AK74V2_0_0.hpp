class base {
    displayName = "base";
    uniform[] = {"CUP_U_O_RUS_M88_MSV"};
    vest[] = {"CUP_V_CDF_6B3_1_Green"};
    backpack[] = {""};
    headgear[] = {"CUP_H_RUS_SSH68_olive"};
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
	primaryWeapon[] = {"CUP_arifle_AK74"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("CUP_30Rnd_545x39_AK_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_AK74_GL"};
	vest[] = {"CUP_V_CDF_6B3_4_Green"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HE_GP25_M"),
        LIST_4("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS74_Early"};
	magazines[] =
    {
        LIST_8("CUP_30Rnd_545x39_AK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    };
   };
class m : car
{
    displayName = "Medic";
	vest[] = {"cwr3_o_vest_6b2_medic"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
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
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_6("CUP_30Rnd_545x39_AK_M"),
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
	vest[] = {"CUP_V_CDF_6B3_5_Green"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_4("CUP_8Rnd_9x18_Makarov_M")
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
    secondaryWeapon[] = {"CUP_launch_RPG18"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_CDF_6B3_3_Green"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] =
    {
        LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell"),
		LIST_4("CUP_8Rnd_9x18_Makarov_M")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    backpackItems[] =
    {
        LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M")
    };
    linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"CUP_lmg_PKM"};
	magazines[] =
	{
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
	items[] += {"ACRE_PRC148"};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
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
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    backpackItems[] =
    {
        LIST_2("CUP_PG7VL_M")
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
        LIST_2("CUP_PG7VL_M")
    };
};
class samg : car 
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_9K32Strela"};
	backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_1("CUP_Strela_2_M")
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_1("CUP_Strela_2_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"CUP_launch_Metis"};
	backpackItems[] =
    {
        LIST_1("CUP_AT13_M")
    };
	items[] += {"ACRE_PRC148"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
    {
        LIST_1("CUP_AT13_M")
    };
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Binocular",
	};
};
class sn : r
{
    displayName = "Sniper";
	primaryWeapon[] ={"CUP_srifle_SVD"};
	scope[] ={"CUP_optic_PSO_1"};
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
        "Binocular"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
	vest[] = {"CUP_V_CDF_CrewBelt"};
	headgear[] ={"H_Tank_black_F"};
	backpack[] = {"B_FieldPack_oli"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
	backpack[] = {""};
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
	backpack[] = {""};
};
class pp : vd
{
    displayName = "Helicopter Pilot";
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
	backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
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
	backpack[] = {"B_Carryall_oli"};
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