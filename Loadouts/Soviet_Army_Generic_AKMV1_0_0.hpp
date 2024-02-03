class base {
    displayName = "base";
    uniform[] = {"cwr3_o_uniform_m1969_rolled"};
    vest[] = {"cwr3_o_vest_harness_ak74"};
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
	primaryWeapon[] = {"CUP_arifle_AKM_Early"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("CUP_30Rnd_762x39_AK47_bakelite_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_AKM_GL_Early"};
	vest[] = {"cwr3_o_vest_harness_gl"};
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HE_GP25_M"),
        LIST_4("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKMS_Early"};
	magazines[] =
    {
        LIST_8("CUP_30Rnd_762x39_AK47_bakelite_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
    };
   };
class m : car
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
class smg : r
{
    displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_SA61"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_4("CUP_20Rnd_B_765x17_Ball_M"),
		LIST_2("SmokeShell"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"cwr3_o_vest_harness_gl"};
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M")
    };
	backpackItems[] = {
		"ACE_Fortify",
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"cwr3_o_vest_harness_officer"};
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
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] =
    {
        LIST_6("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_1("SmokeShell"),
		LIST_4("CUP_8Rnd_9x18_Makarov_M")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
    backpackItems[] =
    {
        LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M")
    };
    linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
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
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
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
        LIST_2("CUP_Strela_2_M")
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
        LIST_2("CUP_Strela_2_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"vn_o_pack_static_at3_01"};
	items[] += {"ACRE_PRC148"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpack[] = {"vn_o_pack_static_base_01"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Binocular",
	};
};
class sn : r
{
    primaryWeapon[] ={"vn_m9130"};
	scope[] ={"vn_o_3x_m9130"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
    {
        LIST_10("vn_m38_t_mag")
    };
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
	uniform[] = {"cwr3_o_uniform_m1972_tanker"};
	vest[] = {"cwr3_o_vest_beltkit_ak74"};
	headgear[] ={"H_Tank_black_F"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
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