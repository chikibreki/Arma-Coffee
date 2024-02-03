class base {
    displayName = "base";
    uniform[] = {"CUP_U_C_Villager_04";"CUP_U_C_Woodlander_02";"CUP_U_C_Citizen_02";"CUP_O_TKI_Khet_Partug_02";"CUP_O_TKI_Khet_Partug_01";"CUP_O_TKI_Khet_Partug_03";"CUP_O_TKI_Khet_Partug_04"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {"CUP_B_TKI_AlicePack_MG"};
    headgear[] = {"CUP_H_TK_Lungee";"CUP_H_TKI_Pakol_1_01";"CUP_H_TKI_SkullCap_04"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"rhs_weap_ak74"};
    primaryAttachments[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
   	magazines[] +=
    {
        LIST_10("rhs_30Rnd_545x39_7N6M_AK"),
        LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"rhs_weap_ak74_gp25"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"rhs_weap_m38"};
	magazines[] =
    {
        LIST_11("rhsgref_5Rnd_762x54_m38"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc")
    };
   };
class m : car
{
    displayName = "Medic";
	backpack[] = {"CUP_B_TK_AssaultPack_Medic"};
	 items[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_salineIV_250"),
			LIST_5("ACE_salineIV_500"),
			LIST_2("ACE_salineIV"),
			LIST_10("ACE_splint"),
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_ak74su"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N6M_AK"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_mag_an_m8hc"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_VG40OP_green")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
		LIST_3("rhs_mag_9x18_8_57N181S")
	};
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
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
	primaryWeapon[] = {"rhs_weap_pkp"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
	magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
		LIST_1("rhs_mag_rgn"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("rhs_mag_9x18_8_57N181S")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
    backpackItems[] = 
    {
	LIST_1("ACE_DeadManSwitch"),
 	LIST_1("rhs_ec400_sand_mag"),
	};
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
    primaryWeapon[] = {"rhs_weap_pkm"};
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_TKI_Alicepack_MG"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
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
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
//class hmgg : car //UNNECESSARY
//{
//    displayName = "HMG Gunner";
//    backPack[] = {"B_HMG_01_weapon_F"};
//};
//class hmgac : r //UNNECESSARY
//{
//    displayName = "HMG Ammo Carrier";
//    backPack[] = {"B_HMG_01_weapon_F"};
//};
//class hmgag : car //UNNECESSARY
//{
//    displayName = "HMG Assistant Gunner";
//    backPack[] = {"B_HMG_01_support_F"};
//    linkedItems[] =
//   {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//        "ItemWatch",
//        "Rangefinder",
//        "ItemGPS"
//    };
//};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"CUP_B_TKI_Backpack_Gunner_RPG"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7VL_mag")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_TKI_Backpack_Gunner_RPG"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_TKI_Backpack_Gunner_RPG"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
//class hatg : car //UNNECESSARY
//{
//    displayName = "HAT Gunner";
//    backpack[] = {"rhs_Tow_Gun_Bag"};
//};
//class hatac : r //UNNECESSARY
//{
//    displayName = "HAT Ammo Carrier";
//    backpack[] = {"B_AT_01_weapon_F"};
//};
//class hatag : car //UNNECESSARY
//{
//   displayName = "HAT Assistant Gunner";
//    backpack[] = {"rhs_TOW_Tripod_Bag"};
//	items [] += {"ACRE_PRC148"};
//    linkedItems[] +=
//    {
//        "Rangefinder",
//        };
//};
//class mtrg : car //UNNECESSARY
//{
//    displayName = "Mortar Gunner";
//   backPack[] = {"B_Mortar_01_weapon_F"};
//    linkedItems[] =
//    {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//        "ItemWatch",
//       "ItemGPS"
//    };
//};
//class mtrac : r //UNNECESSARY
//{
//   displayName = "Mortar Ammo Carrier";
//    backPack[] = {"I_Mortar_01_weapon_F"};
//};
//class mtrag : car //UNNECESSARY
//{
//    displayName = "Mortar Assistant Gunner";
//    backPack[] = {"B_HMG_01_support_F"};
//    linkedItems[] =
//    {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//        "ItemWatch",
//        "Rangefinder",
//       "ItemGPS"
//    };
//};
//class samg : car //UNNECESSARY
//{
//    displayName = "AA Missile Specialist";
//    secondaryWeapon[] = {"launch_B_Titan_F"};
//    magazines[] +=
//    {
//        LIST_3("Titan_AA")
//    };
//};
//class samag : car //UNNECESSARY
//{
//    displayName = "AA Assistant Missile Specialist";
//    linkedItems[] =
//    {
//        "ItemMap",
//        "ItemCompass",
//        "ItemRadio",
//       "ItemWatch",
//        "Rangefinder",
//        "ItemGPS"
//    };
//    backpackItems[] =
//    {
//        LIST_2("Titan_AA")
//    };
//};
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
        "Rangefinder",
        "ItemGPS"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
	backpack[] = {"CUP_B_AlicePack_Exp"};
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
    backpack[] = {};
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
//class jp : smg //UNNECESSARY
//{
//    displayName = "Jet pilot";
//    uniform[] = {"U_B_HeliPilotCoveralls"};
//    vest[] = {"V_TacVest_blk"};
//    backpack[] = {};
//    headgear[] = {"H_PilotHelmetHeli_B"};
//    goggles[] = {"default"};
//};
class eng : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"CUP_B_AlicePack_Exp"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car //CHECK FOR COMPATIBILITY
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"CUP_B_AlicePack_Exp"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
	items[] += {"ACRE_PRC148"};
};