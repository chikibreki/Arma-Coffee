class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_gloves_Tigerstripe"};
    vest[] = {"rhs_6b45_rifleman"};
    backpack[] = {"rhs_rk_sht_30_emr"};
    headgear[] = {"CUP_H_PASGTv2_NVG_tigerstripe"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","CUP_PMC_Facewrap_Black","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS", "CUP_NVG_HMNVS"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_HK416_Wood"};
    attachment[] = {};
	scope[] = {"rhs_acc_dtk1l"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_9("CUP_30Rnd_556x45_PMAG_QP_Olive"),
        LIST_2("rhs_mag_rgo"),
		LIST_2("rhs_mag_rdg2_black"),
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_2("rhs_VG40OP_white"),
		LIST_2("rhs_VG40OP_green"),
		LIST_2("rhs_VG40OP_red"),
    };
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
    {
		LIST_2("rhs_mag_rgo"),
		LIST_1("rhs_mag_rdg2_black")
    };
   };
class m : car
{
    displayName = "Medic";
      magazines[] +=
      {
		LIST_8("CUP_30Rnd_556x45_PMAG_QP_Olive")
      };
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
			LIST_1("ACE_splint"),
	    };
};
class smg : r
{
    displayName = "Submachinegunner";
	uniform[] = {"CUP_I_B_PMC_Unit_10"};
    primaryWeapon[] = {"CUP_smg_bizon"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("CUP_64Rnd_9x19_Bizon_M"),
		LIST_2("rhs_mag_rgo"),
		LIST_1("rhs_mag_rdg2_black"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"CUP_arifle_HK416_CQB_AG36_Wood"};
    attachment[] = {};
	scope[] = {"CUP_optic_HensoldtZO"};
    magazines[] +=
    {
        LIST_7("1Rnd_SmokeBlue_Grenade_shell"),
        LIST_7("CUP_1Rnd_HE_M203")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACRE_PRC148"};
	magazines[] +=
	{
	
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
	primaryWeapon[] = {"CUP_arifle_HK416_Wood"};
	primaryAttachments[] = {""};
    bipod[] = {"CUP_bipod_Harris_1A2_L_BLK"}; 
	scope[] = {"rhs_acc_1p63"};
    magazines[] =
    {
        LIST_3("150Rnd_556x45_Drum_Mag_Tracer_F"),
		LIST_1("rhs_mag_rgo"),
		LIST_1("rhs_mag_rdg2_black"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("150Rnd_556x45_Drum_Mag_Tracer_F")
    };
    linkedItems[] += {"rhsusf_bino_m24_ARD"};
};
class rat : r
{
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"rhs_weap_rpg18"};
	secondaryAttachments[] = {"rhs_rpg18_mag"};
	uniform[] = { "CUP_I_B_PMC_Unit_22" };
};
class dm : r
{
    displayName = "Designated Marksman";
	uniform[] = {"CUP_I_B_PMC_Unit_19"}; 
	primaryWeapon[] = {"rhs_weap_svdp"};
	primaryAttachments[] = {""};
    scope[] = {"rhs_acc_pso1m21_svd"};
	bipod[] = {""};
	sidearmWeapon[] = {"CUP_hgun_TT"};
    magazines[] =
    {
        LIST_4("10Rnd_762x54_Mag"),
		LIST_2("rhs_mag_rgo"),
		LIST_1("rhs_mag_rdg2_black"),
		LIST_3("CUP_8Rnd_762x25_TT")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"MMG_02_black_F"};
	scope[] = {"rhsusf_acc_ACOG2_USMC"};
    bipod[] = {"bipod_01_F_blk"}; 
    magazines[] =
    {
        LIST_4("130Rnd_338_Mag"),
		LIST_1("rhs_mag_rgo"),
		LIST_1("rhs_mag_rdg2_black"),
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier"; 
    backpackItems[] =
    {
        LIST_4("130Rnd_338_Mag")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
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
        LIST_3("130Rnd_338_Mag")
    };
    items[] += {"ACRE_PRC148"};
};
  class hmgg : car
	{
    displayName = "HMG Gunner";
    backPack[] = {"ace_compat_rhs_gref3_dshkm_carry"};
	};
	class hmgac : r 
	{
    displayName = "HMG Ammo Carrier";
	backPack[] = {"B_HMG_01_weapon_F"};
	};
class hmgag : car 
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
   {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"B_Bergen_dgtl_F"};
    backpackItems[] =
    {
        LIST_2("CUP_Javelin_M")
    };
    secondaryWeapon[] = {"CUP_launch_Javelin"};
    magazines[] +=
    {
		LIST_8("CUP_30Rnd_556x45_PMAG_QP_Olive")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    magazines[] +=
    {
		LIST_8("CUP_30Rnd_556x45_PMAG_QP_Olive")
    };
	backpack[] = {"B_Bergen_dgtl_F"};
    backpackItems[] =
    {
        LIST_2("CUP_Javelin_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    magazines[] +=
    {
		LIST_8("CUP_30Rnd_556x45_PMAG_QP_Olive")
    };
	backpack[] = {"B_Bergen_dgtl_F"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_Javelin_M")
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
	primaryWeapon[] = {"CUP_srifle_G22_blk"}; 
	primaryAttachments[] = {"CUP_bipod_VLTOR_Modpod_black"}; 
	scope[] = {"rhs_acc_dh520x56"};
	items[] += {"ACRE_PRC148"};
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	magazines[] +=
	{
		LIST_7("CUP_5Rnd_762x67_G22")
	}; 
	
    };
class sp : r
{
    displayName = "Spotter";
	uniform[] = {"CUP_I_B_PMC_Unit_22"}; 
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
	uniform[] = {"CUP_I_B_PMC_Unit_24"}; 
	headgear[] = {"rhs_tsh4"}; 
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
	uniform[] = {"CUP_U_C_Pilot_01"}; 
	headgear[] = {"CUP_H_PMC_Cap_PRR_Tan"}; 
	items[] += {"ACRE_PRC148"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_PMC_Cap_PRR_Tan"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	headgear[] = {"CUP_H_PMC_Cap_PRR_Tan"}; 
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
    backpack[] = {"CUP_B_RPGPack_Khaki"};
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
	backpack[] = {"CUP_B_RPGPack_Khaki"};
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

