
tooltip = "Author: Pouchy\n\n";

class base {
    displayName = "base";
    uniform[] = {"fow_u_uk_bd40_pib_01_private"};
    vest[] = {"fow_v_uk_base_green"};
    backpack[] = {"fow_b_uk_p37_blanco"};
    headgear[] = {};
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
    headgear[] = {"fow_h_uk_mk2_net"};
	primaryWeapon[] = {"fow_w_leeenfield_no4mk1"};
	scope[] = {""};
    attachment[] = {""};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("fow_10Rnd_303"),
        LIST_2("fow_e_no36mk1"),
		LIST_2("fow_e_no73")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Leader";
	vest[] = {"fow_v_uk_sten_green"};
	backpack[] = {"fow_b_uk_p37_blanco"};
    primaryWeapon[] = {"fow_w_sten_mk2"};
    magazines[] +=
    {
        LIST_8("fow_32Rnd_9x19_sten"),
        LIST_4("fow_e_no73")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"fow_w_leeenfield_no4mk1"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"fow_v_uk_base_green"};
	backpack[] = {"fow_b_uk_p37_medic"};
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
	sidearmWeapon[] = {"vn_m10"};
    magazines[] +=
    {
        LIST_2("fow_e_no73"),
		LIST_3("vn_m10_mag")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"fow_v_uk_base_green"};
	headgear[] = {"fow_h_uk_mk2_net"};
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
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"fow_v_uk_base_green"};
	backpack[] = {"fow_b_uk_p37_blanco"};
    primaryWeapon[] = {"fow_w_bren"};
	scope[] = {""};
    bipod[] = {""};
	sidearmWeapon[] = {"vn_m10"};
    magazines[] =
    {
        LIST_4("fow_30Rnd_303_bren"),
		LIST_1("fow_e_no36mk1"),
		LIST_1("fow_e_no73"),
		LIST_3("vn_m10_mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"fow_b_uk_p37_blanco"};
    backpackItems[] =
    {
        LIST_4("fow_30Rnd_303_bren")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"fow_w_piat"};
	backpackItems[] =
    {
        LIST_3("fow_1Rnd_piat_HEAT")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"fow_v_uk_base_green"};
    primaryWeapon[] = {"fow_w_m1903A1_sniper"};
	primaryAttachments[] = {""};
    scope[] = {""};
    bipod[] = {""};
	sidearmWeapon[] = {"fow_w_m1911"};
    magazines[] =
    {
        LIST_11("fow_5Rnd_762x63"),
		LIST_2("fow_e_no36mk1"),
		LIST_1("fow_e_no73"),
		LIST_3("fow_7Rnd_45acp")
    };
};
