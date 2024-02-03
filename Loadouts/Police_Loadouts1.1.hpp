
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"MNP_CombatUniform_Police"};
    vest[] = {"V_TacVest_blk_POLICE"};
    backpack[] = {"CUP_B_USPack_Black"};
    headgear[] = {};
    primaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343"}
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	backpackItems[] =
	{
		"FirstAidKit",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_IR_Strobe_Item",
		"ACE_morphine"
	};
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
    magazines[] = 
	{
		LIST_8("CUP_30Rnd_762x39_AK103_bakelite_M"),
		LIST_4(,"16Rnd_9x21_Mag")
	};
    items[] = {"ACRE_PRC343"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	backpackItems[] =
	{
		"FirstAidKit",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_IR_Strobe_Item",
		"ACE_morphine"
	};
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
			LIST_4("ACE_splint"),
			LIST_3("ACE_salineIV_250"),
			LIST_5("ACE_bloodIV_500"),
			LIST_2("ACE_bloodIV"),
			LIST_1("ACE_personalAidKit")
	};
};

class ftl : r
{
    displayName = "Fireteam Leader";
	linkedItems[] += {"Binocular"};
	items[] = {"ACRE_PRC343"};
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
        "Binocular",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"rhsusf_8point_marpatd"};
};
class ar : base
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_PMC_IOTV_Black_Patrol"};
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

