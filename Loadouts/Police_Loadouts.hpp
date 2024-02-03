
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"MNP_CombatUniform_Police"};
    vest[] = {"V_TacVest_blk_POLICE"};
    backpack[] = {};
    headgear[] = {};
    primaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	vest[] = {"V_TacVest_blk_POLICE"};
	backpack[] = {"CUP_B_USPack_Black"};
    headgear[] = {"H_Cap_police"};
	primaryWeapon[] = {"CUP_arifle_AKM_top_rail"};
    scope[] = {"CUP_optic_AC11704_Black"};
    attachment[] = {"rhsusf_acc_wmx_bk"};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {"CUP_hgun_Duty"};	
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] = {"CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    items[] = {"FirstAidKit","ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"CUP_B_USPack_Black"};
	vest[] = {"CUP_V_PMC_IOTV_Black_Patrol"};
	headgear[] = {"CUP_H_Ger_M92_Black_GG"};
    primaryWeapon[] = {"CUP_arifle_AKM_GL_top_rail"};
	scope[] = {"CUP_optic_AC11704_Black"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_SMOKE_GP25_M"),       
    };
};

class m : r
{
    displayName = "Medic";
	primaryWeapon[] = {"rhs_weap_savz61"};
	magazines[] +=
	{
		LIST_10("CUP_20Rnd_B_765x17_Ball_M"),
		LIST_4("16Rnd_9x21_Mag")
	};
	backpack[] = {"CUP_B_USPack_Black"};
	 backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_salineIV_250"),
			LIST_5("ACE_salineIV_500"),
			LIST_2("ACE_salineIV"),
			LIST_1("ACE_personalAidKit")
			
	};
};

class ftl : r
{
    displayName = "Fireteam Leader";
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
	headgear[] = {"rhsusf_8point_marpatd"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : base
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_PMC_IOTV_Black_Patrol"};
	backpack[] = {"CUP_B_USPack_Black"};
	headgear[] = {"CUP_H_Ger_M92_Black_GG"};
    primaryWeapon[] = {"CUP_lmg_PKM_top_rail"};
	scope[] = {"CUP_optic_AC11704_Black"};
   	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_4("150Rnd_762x54_Box"),
		LIST_3("16Rnd_9x21_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	vest[] = {"CUP_V_PMC_IOTV_Black_Patrol"};
	headgear[] = {"CUP_H_Ger_M92_Black_GG"};
	backpack[] = {"CUP_B_USPack_Black"};
    backpackItems[] =
    {
        LIST_4("150Rnd_762x54_Box")
    };
    linkedItems[] += {"Binocular"};
};

// class hmgg : car //UNNECESSARY
// {
//     displayName = "HMG Gunner";
//     backPack[] = {"B_HMG_01_weapon_F"};

// };
// class hmgac : r //UNNECESSARY
// {
//     displayName = "HMG Ammo Carrier";
//     backPack[] = {"B_HMG_01_weapon_F"};
// };
// class hmgag : car //UNNECESSARY
// {
//     displayName = "HMG Assistant Gunner";
//     backPack[] = {"B_HMG_01_support_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//		   "Rangefinder",
//         "ItemGPS"
//     };
// };

// class mtrg : car //UNNECESSARY
// {
//     displayName = "Mortar Gunner";
//     backPack[] = {"B_Mortar_01_weapon_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "ItemGPS"
//     };
// };
// class mtrac : r //UNNECESSARY
// {
//     displayName = "Mortar Ammo Carrier";
//     backPack[] = {"I_Mortar_01_weapon_F"};
// };
// class mtrag : car //UNNECESSARY
// {
//     displayName = "Mortar Assistant Gunner";
//     backPack[] = {"B_HMG_01_support_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "Rangefinder",
//         "ItemGPS"
//     };
// };
// class samg : car //UNNECESSARY
// {
//     displayName = "AA Missile Specialist";
//     secondaryWeapon[] = {"launch_B_Titan_F"};
//     magazines[] +=
//     {
//         LIST_3("Titan_AA")
//     };
// };
// class samag : car //UNNECESSARY
// {
//     displayName = "AA Assistant Missile Specialist";
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "Rangefinder",
//         "ItemGPS"
//     };
//     backpackItems[] =
//     {
//         LIST_2("Titan_AA")
//     };
// };
class sn : r
{
    displayName = "Sniper";
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_SVD_top_rail"};
    scope[] = {"CUP_optic_RCO"};
	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_7("CUP_10Rnd_762x54_SVD_M"),
		LIST_3("16Rnd_9x21_Mag")
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
class vd : m
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_PMC_IOTV_Black_Patrol"};
    headgear[] = {"CUP_H_Ger_M92_Black_GG"};
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
	primaryWeapon[] = {"CUP_sgun_Saiga12K_top_rail"};
	scope[] = {"CUP_optic_AC11704_Black"};
	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    backpack[] = {};
	magazines[] =
    {
        LIST_6("CUP_5Rnd_B_Saiga12_Buck_00"),
		LIST_4("16Rnd_9x21_Mag")
       };
};
class pp : vd
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
	headgear[] = {"CUP_H_PMC_EP_Headset"};
	goggles[] = {"G_Aviator"};
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
//class jp : smg //UNNECESSARY
//{
//    displayName = "Jet pilot";
//    uniform[] = {"U_B_HeliPilotCoveralls"};
//    vest[] = {"V_TacVest_blk"};
//    backpack[] = {};
//    headgear[] = {"H_PilotHelmetHeli_B"};
//    goggles[] = {"default"};
//};

