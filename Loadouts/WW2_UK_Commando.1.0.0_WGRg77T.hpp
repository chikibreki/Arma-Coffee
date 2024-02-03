
tooltip = "Author: Pouchy\n\n";

class base {
    displayName = "base";
    uniform[] = {"fow_u_uk_bd40_commando_01_private"};
    vest[] = {"fow_v_uk_base_green"};
    backpack[] = {"B_LIB_UK_HSack_Blanco_Cape"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
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
		LIST_2("fow_e_no73")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"fow_v_uk_sten_green"};
	backpack[] = {"B_LIB_UK_HSack_Blanco_Cape"};
	silencer[] = {"LIB_ACC_GL_Enfield_CUP_Empty"};
    magazines[] +=
    {
        LIST_6("LIB_1Rnd_G_MillsBomb"),
        LIST_4("fow_e_no73")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"LIB_LeeEnfield_No4"};
	primaryAttachments[] = {};
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
    primaryWeapon[] = {"fow_w_sten_mk2"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("fow_32Rnd_9x19_sten"),
		LIST_2("fow_e_no36mk1"),
		LIST_1("fow_e_no73")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"LIB_Webley_mk6"};
    magazines[] +=
    {
        LIST_2("fow_e_no73"),
		LIST_3("LIB_6Rnd_455")
    };
    linkedItems[] += {"Binocular"};
};
class sl : smg
{
    displayName = "Squad Leader";
	vest[] = {"fow_v_uk_base_green"};
	headgear[] = {"fow_h_uk_beret_commando"};
	sidearmWeapon[] = {"LIB_Webley_mk6"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_3("LIB_6Rnd_455")
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
	scope[] = {""};
    bipod[] = {""};
	sidearmWeapon[] = {"LIB_Webley_mk6"};
    magazines[] =
    {
        LIST_4("LIB_30Rnd_770x56"),
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
    secondaryWeapon[] = {"LIB_M1A1_Bazooka"};
	backpack[] = {"vn_b_pack_p44_01"};
	backpackItems[] +=
    {
        LIST_2("LIB_1Rnd_60mm_M6")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"fow_v_uk_base_green"};
    primaryWeapon[] = {"LIB_LeeEnfield_No4_Scoped"};
	primaryAttachments[] = {""};
    scope[] = {""};
    bipod[] = {""};
	sidearmWeapon[] = {"LIB_Webley_mk6"};
    magazines[] =
    {
        LIST_10("LIB_10Rnd_770x56"),
		LIST_3("LIB_6Rnd_455")
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
