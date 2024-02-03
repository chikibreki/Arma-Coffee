


class base {
    displayName = "base";
    uniform[] = {"CUP_O_TKI_Khet_Partug_01","CUP_O_TKI_Khet_Partug_03","CUP_O_TKI_Khet_Partug_04"};
    vest[] = {"CUP_V_OI_TKI_Jacket3_01","CUP_V_OI_TKI_Jacket2_02","CUP_V_OI_TKI_Jacket2_03"};
    backpack[] = {"CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll"};
    headgear[] = {"CUP_H_TKI_Lungee_Open_01","CUP_H_TKI_Lungee_Open_02","CUP_H_TKI_Lungee_Open_03","CUP_H_TKI_Lungee_Open_04","CUP_H_TKI_Lungee_Open_05","CUP_H_TKI_Lungee_Open_06"};
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
	primaryWeapon[] = {"CUP_arifle_AKM_Early"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"),
        LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("vn_rdg2_mag")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"CUP_arifle_AKM_GL_Early"};
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
        LIST_8("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_1("vn_rdg2_mag")
    };
   };
class m : car
{
    displayName = "Medic";
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
        LIST_8("CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M"),
		LIST_3("vn_rdg2_mag"),
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
	sidearmWeapon[] = {"CUP_hgun_TT"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_3("CUP_8Rnd_762x25_TT")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class co : r
{
    displayName = "Platoon Leader";
	primaryWeapon[] = {"CUP_arifle_AKS_Gold"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	sidearmWeapon[] = {"CUP_hgun_TT"};
	magazines[] =
    {
        LIST_5("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_1("vn_rdg2_mag"),
		LIST_3("CUP_8Rnd_762x25_TT")
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
    secondaryWeapon[] = {"CUP_launch_M72A6"};
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
    primaryWeapon[] = {"CUP_lmg_PKM"};
	items[] += {"ACRE_PRC148"};
	backpackItems[] = 
	{
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
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
class hmgg : car
{
    displayName = "HMG Gunner";
	items[] += {"ACRE_PRC148"};
	 backpackItems[] =
    {
        LIST_4("ace_csw_50Rnd_127x108_mag")
    };
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
	 backpackItems[] =
    {
        LIST_4("ace_csw_50Rnd_127x108_mag")
    };
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
	 backpackItems[] =
    {
        LIST_4("ace_csw_50Rnd_127x108_mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll"};
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
    magazines[] +=
    {
        LIST_4("CUP_PG7V_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll"};
    backpackItems[] =
    {
        LIST_4("CUP_PG7V_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll"};
    linkedItems[] +=
    {
        "Binocular",
            };
    backpackItems[] =
    {
        LIST_4("CUP_PG7V_M")
    };
};
class samg : car
{
	displayName = "AA Missile Specialist";
	backpack[] = {"CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll"};
    secondaryWeapon[] = {"vn_sa7"};
    magazines[] +=
    {
        LIST_3("vn_sa7_mag")
    };
	items[] += {"ACRE_PRC148"};
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("vn_sa7_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
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
        "Binocular"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
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
	backpack[] = {"B_Carryall_khk"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
		"ACE_Cellphone",
		"ACE_DefusalKit",
        LIST_6("vn_mine_m15_mag"),
        LIST_8("vn_mine_m14_mag")
    };
};