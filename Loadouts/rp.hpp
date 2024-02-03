
tooltip = "Author: Barton\n\n";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    uniform[] = {"CUP_U_CRYE_BLK_Full"};
    vest[] = {"V_TacVest_blk_POLICE"};
    headgear[] = {"CUP_H_Ger_M92_Black"};
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
		LIST_1("ACE_CableTie"),
		"vn_b_acc_m17_01",
		"H_CrewHelmetHeli_B"
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
    primaryWeapon[] = {"CUP_smg_MP5A5_flashlight"};
    scope[] = {"CUP_optic_MicroT1_low"};
    attachment[] = {"CUP_acc_Flashlight"};
	sidearmWeapon[] = {"CUP_hgun_Duty"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
	items[] += {};
    magazines[] =
	{
		LIST_8("CUP_30Rnd_9x19_MP5"),
        LIST_3("16Rnd_9x21_Mag"),
		LIST_3("SmokeShellYellow")
    };
};

class car : baseMan
{
    displayName = "Ballistic Shield";
    primaryWeapon[] = {"CUP_hgun_BallisticShield_Armed"};
	attachment[] = {};
	magazines[] =
	{
	
		LIST_10("CUP_15Rnd_9x19_M9"),
	};
	
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
	sidearmWeapon[] = {"rhs_weap_m320"};
    backpackItems[] =
	{
        LIST_10("CUP_1Rnd_SmokeYellow_M203"),
		LIST_3("SmokeShellYellow"),
		LIST_3("HandGrenade_Stone")
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



