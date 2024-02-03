
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_C_Tracksuit_01","CUP_U_C_Tracksuit_02","CUP_U_C_Tracksuit_03","CUP_U_C_Tracksuit_04","CUP_U_C_racketeer_01","CUP_U_C_racketeer_02","CUP_U_C_racketeer_03","CUP_U_C_racketeer_04"};
    vest[] = {"V_BandollierB_blk","V_BandollierB_rgr","V_BandollierB_khk","V_BandollierB_oli"};
    backpack[] = {"CUP_B_CivPack_WDL","CUP_B_HikingPack_Civ","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll","CUP_B_AlicePack_OD","CUP_B_HikingPack_Civ"};
    headgear[] = {};
	goggles[]= {"G_Balaclava_blk","G_Bandanna_blk","G_Bandanna_aviator",""};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"vn_m9130","vn_m1891","vn_m38"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("vn_m38_mag"),
		LIST_2("vn_f1_grenade_mag"),
		LIST_2("vn_rdg2_mag")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_ppsh41"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("vn_ppsh41_35_mag"),
		LIST_2("vn_f1_grenade_mag"),
		LIST_2("vn_rdg2_mag"),
    };
};
class rak : r
{
    displayName = "Rifleman (AK)";
primaryWeapon[] = {"CUP_arifle_AK47_Early","CUP_arifle_AKM_Early","CUP_arifle_AKMS_Early","CUP_arifle_AKS"};
	magazines[] =
	{
		LIST_6("CUP_30Rnd_762x39_AK47_M"),
		LIST_2("vn_f1_grenade_mag"),
		LIST_2("vn_rdg2_mag"),
	};
};
class g : smg
{
    displayName = "Grenadier";
	vest[] = {"V_Chestrig_blk","V_Chestrig_rgr","V_Chestrig_khk","V_Chestrig_oli"};
    magazines[] +=
    {
        LIST_6("vn_f1_grenade_mag"),
        LIST_2("vn_rdg2_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_sks"};
	primaryAttachments[] = {};
	magazines[] =
    {
        LIST_10("vn_sks_mag"),
		LIST_2("vn_f1_grenade_mag"),
		LIST_2("vn_rdg2_mag")
    }; 
};
class m : smg
{
    displayName = "Medic";
	vest[] = {"CUP_V_RUS_Smersh_New_Full"};
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
class ftl : rak
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_RUS_Smersh_New_Full"};
	sidearmWeapon[] = {"vn_tt33"};
    magazines[] +=
    {
		LIST_3("vn_rdg2_mag"),
		LIST_3("vn_tt33_mag")
    };
    linkedItems[] += {"Binocular"};
};
class sl : car
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_RUS_Smersh_New_Full"};
	primaryWeapon[] = {"vn_sks_gl"};
	sidearmWeapon[] = {"vn_tt33"};
	magazines[] +=
	{
		LIST_6("vn_22mm_m60_frag_mag"),
		LIST_5("vn_22mm_m22_smoke_mag"),
		LIST_3("vn_tt33_mag")
		
	};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
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
    primaryWeapon[] = {"vn_dp28"};
	sidearmWeapon[] = {"vn_tt33"};
    magazines[] =
    {
        LIST_6("vn_dp28_mag"),
		LIST_3("vn_tt33_mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	vest[] = {"V_Chestrig_blk","V_Chestrig_rgr","V_Chestrig_khk","V_Chestrig_oli"};
    backpackItems[] =
    {
        LIST_6("vn_dp28_mag"),
    };
    linkedItems[] += {"Binocular"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"vn_m9130"};
	primaryAttachments[] = {""};
    scope[] = {"vn_o_3x_m9130"};
	sidearmWeapon[] = {"vn_tt33"};
    magazines[] =
    {
        LIST_10("vn_m38_t_mag"),
		LIST_3("vn_tt33_mag")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
    magazines[] +=
    {
        LIST_2("CUP_PG7V_M"),
		LIST_1("CUP_OG7_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
    backpackItems[] =
    {
        LIST_1("CUP_PG7V_M"),
		LIST_1("CUP_OG7_M")
    };
};
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("CUP_PipeBomb_M")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (IED)";
    items[] +=
    {
        LIST_2("IEDLandSmall_Remote_Mag"),
        LIST_1("CUP_IED_V4_M")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
    };
};
