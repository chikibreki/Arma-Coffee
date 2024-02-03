
tooltip = "Author: Pouchy\n\n";

class base {
    displayName = "base";
    uniform[] = {"fow_u_uk_bd40_commando_01_private"};
    vest[] = {"V_LIB_UK_P37_Rifleman_Blanco"};
    backpack[] = {"B_LIB_UK_HSack_Blanco_Cape"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"fow_h_uk_beret_commando"};
	primaryWeapon[] = {"LIB_LeeEnfield_No4"};
	scope[] = {""};
    attachment[] = {""};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("LIB_10Rnd_770x56"),
        LIST_2("LIB_1Rnd_G_MillsBomb"),
		LIST_1("fow_e_no73")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"V_LIB_UK_P37_Heavy_Blanco"};
	backpack[] = {"B_LIB_UK_HSack_Blanco_Cape"};
	silencer[] = {"LIB_ACC_GL_Enfield_CUP_Empty"};
    magazines[] +=
    {
        LIST_4("LIB_1Rnd_G_MillsBomb"),
        LIST_2("fow_e_no73")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"LIB_DELISLE"};
	primaryAttachments[] = {};
	magazines[] =
	{
		LIST_10("LIB_7Rnd_45ACP_DeLisle"),
		LIST_2("LIB_1Rnd_G_MillsBomb"),
		LIST_1("fow_e_no73")
	};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"fow_v_uk_base_green"};
	backpack[] = {"vn_b_pack_p44_01"};
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
class smg : r
{
    displayName = "Submachinegunner";
	vest[] = {"V_LIB_UK_P37_Sten"};
    primaryWeapon[] = {"vn_sten"};
	silencer[] = {"vn_s_sten"};
    magazines[] =
    {
        LIST_8("vn_sten_mag"),
		LIST_2("LIB_1Rnd_G_MillsBomb"),
		LIST_1("fow_e_no73")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"LIB_Webley_Flare"};
    magazines[] +=
    {
        LIST_2("fow_e_no73"),
		LIST_3("LIB_1Rnd_flare_white"),
		LIST_3("LIB_1Rnd_flare_red"),
		LIST_3("LIB_1Rnd_flare_green"),
		LIST_3("LIB_1Rnd_flare_yellow")
    };
    linkedItems[] += {"Binocular"};
};
class sl : smg
{
    displayName = "Squad Leader";
	vest[] = {"V_LIB_UK_P37_Officer"};
	backpack[] = {"fow_b_uk_p37_radio_blanco"};
	headgear[] = {"fow_h_uk_beret_commando"};
	sidearmWeapon[] = {"LIB_Webley_Flare"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_3("LIB_1Rnd_flare_white"),
		LIST_3("LIB_1Rnd_flare_red"),
		LIST_3("LIB_1Rnd_flare_green"),
		LIST_3("LIB_1Rnd_flare_yellow")
	};
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
	headgear[] = {"fow_h_uk_beret_commando"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"fow_v_uk_base_green"};
	backpack[] = {"fow_b_uk_p37_blanco"};
    primaryWeapon[] = {"LIB_Bren_Mk2"};
	sidearmWeapon[] = {"LIB_Webley_mk6"};
    magazines[] =
    {
        LIST_6("LIB_30Rnd_770x56"),
		LIST_3("LIB_6Rnd_455")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"fow_b_uk_p37_blanco"};
    backpackItems[] =
    {
        LIST_6("LIB_30Rnd_770x56")
    };
    linkedItems[] += {"Binocular"};
};
class rat : smg
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"LIB_PIAT"};
	backpack[] = {"vn_b_pack_p44_01"};
	backpackItems[] +=
    {
        LIST_2("LIB_1Rnd_89m_PIAT")
    };
};
class eng : car
{
    displayName = "Explosives Specialist";
    backpack[] = {"vn_b_pack_p44_01"};
    backpackItems[] = {
		"ACE_LIB_LadungPM",
        LIST_2("LIB_Ladung_Big_MINE_mag"),
    };
};
