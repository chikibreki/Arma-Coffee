
tooltip = "Author: Barton\n\n";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    uniform[] = {"CUP_U_CRYE_BLK_RUS_Roll"};
    vest[] = {"CUP_V_PMC_IOTV_Black_AR"};
    backpack[] = {};
    headgear[] = {"CUP_H_RUS_6B47_SF_headset_goggles_black"};
    goggles[] = {};
    hmd[] = {};
    items[] = 
	{
		"ACRE_PRC343",
		LIST_2("ACE_elasticBandage"),
		LIST_2("ACE_packingBandage"),
		"ACE_IR_Strobe_Item",
		"ACE_morphine",
		"ACE_splint",
		"ACE_tourniquet",
		LIST_1("ACE_CableTie")
	};
    linkedItems[] = 
	{
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
    backpackItems[] = {};
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_arifle_AK104_railed"};
    scope[] = {"CUP_optic_1P87_RIS"};
    attachment[] = {"CUP_acc_ANPEQ_15_Flashlight_Black_L"};
	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_2("CUP_30Rnd_762x39_AK103_bakelite_M"),
        LIST_4("16Rnd_9x21_Mag"),
        LIST_2("rhs_mag_mk84"),
        LIST_2("SmokeShell")
    };
	backpack[] = {"B_FieldPack_blk"};
	backpackItems[] =
	{
		LIST_6("CUP_30Rnd_762x39_AK103_bakelite_M")
	};
};
class m : r
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
class ftl : r
{
    displayName = "Fireteam Leader";
	backpackItems[] +=
	{
		LIST_6("CUP_30Rnd_762x39_AK103_bakelite_M"),
		LIST_8("CUP_1Rnd_SMOKE_GP25_M"),
		LIST_5("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_5("CUP_1Rnd_SmokeGreen_GP25_M")
	};
	items[] += {"ACRE_PRC148"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_Pecheneg_top_rail_B50_vfg"};
    scope[] = {};
    attachment[] = {};
	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
        LIST_4("16Rnd_9x21_Mag"),
        LIST_2("rhs_mag_mk84"),
        LIST_2("SmokeShell")
    };
	backpack[] = {"B_FieldPack_blk"};
	backpackItems[] =
	{
		LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpackItems[] +=
	{
		LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
	};
};
class vd : baseMan
{
    displayName = "Vehicle Driver";
    primaryWeapon[] = {"CUP_arifle_SR3M_Vikhr_VFG"};
    scope[] = {};
    attachment[] = {"CUP_acc_Flashlight"};
    magazines[] =
    {
        LIST_3("CUP_30Rnd_9x39_SP5_VIKHR_M"),
        LIST_3("16Rnd_9x21_Mag"),
        LIST_2("rhs_mag_mk84"),
        LIST_2("SmokeShell")
    };
	backpackItems[] =
	{
		"ToolKit",
		LIST_5("CUP_30Rnd_9x39_SP5_VIKHR_M")
	};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
};
class vc : vd
{
    displayName = "Vehicle Commander";
	items[] += {"ACRE_PRC148"};
    linkedItems[] += {"Binocular","ItemGPS"};
};