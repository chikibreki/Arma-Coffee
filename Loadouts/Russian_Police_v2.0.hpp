
tooltip = "Author: Barton\n\n";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    uniform[] = {"CUP_U_CRYE_BLK_RUS_Roll"};
    vest[] = {"V_TacVest_blk_POLICE"};
    headgear[] = {"H_Cap_police"};
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
    primaryWeapon[] = {"CUP_arifle_AK74M_top_rail"};
    scope[] = {"CUP_optic_1P87_RIS"};
    attachment[] = {"CUP_acc_Flashlight"};
	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
	items[] += {"CUP_muzzle_PBS4"};
    magazines[] =
	{
		LIST_8("CUP_30Rnd_545x39_AK74M_M"),
        LIST_3("16Rnd_9x21_Mag"),
        LIST_2("rhs_mag_mk84"),
        LIST_2("SmokeShell")
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_AKS74U_top_rail"};
	scope[] = {"CUP_optic_MicroT1_low"};
	attachment[] = {};
};
class m : r
{
    displayName = "Medic";
	backpack[] = {"B_FieldPack_blk"};
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
	backpack[] = {"B_FieldPack_blk"};
	primaryWeapon[] = {"CUP_arifle_AK74M_GL_top_rail"};
    backpackItems[] =
	{
        LIST_8("CUP_1Rnd_SMOKE_GP25_M"),
		LIST_5("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_5("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_5("CUP_FlareRed_GP25_M"),
		LIST_5("CUP_FlareGreen_GP25_M")
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