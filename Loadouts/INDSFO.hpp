class base {
    displayName = "base";
    uniform[] = {"CUP_I_B_PARA_Unit_4"};
    vest[] = {"CUP_V_B_Ciras_Olive"};
    backpack[] = {"B_Kitbag_rgr"};
    headgear[] = {"VSM_Bowman_cap_balaclava_Olive"};
    goggles[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_splint","ACE_EntrenchingTool"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_Mk17_STD_AFG_woodland"};
    attachment[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_20Rnd_762x51_B_SCAR_wdl"),
        LIST_2("CUP_HandGrenade_RGD5"),
        LIST_2("SmokeShell")
        
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_Mk17_STD_EGLM_woodland"};
	scope[] = { "CUP_optic_Elcan_SpecterDR_KF_RMR_od"};
    magazines[] +=
    {
       LIST_8("CUP_1Rnd_HE_M203"),
       LIST_2("CUP_1Rnd_Smoke_M203")
    };
};


class car : r
{
    displayName = "Carabinier";
   };
class m : car
{
    displayName = "Medic";
	items[] = {"ACRE_PRC343"};
	 backpackitems[] =
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
    primaryWeapon[] = {};
	attachment[] = {};
    magazines[] =
    {
        LIST_10("30Rnd_9x21_Mag_SMG_02"),
		
		
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
       LIST_2("CUP_1Rnd_SmokeRed_M203"),
       LIST_2("CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl"),
       LIST_2("CUP_1Rnd_SmokeGreen_M203")

    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	sidearmWeapon[] = {};
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
    primaryWeapon[] = {"CUP_lmg_Mk48_od"};
	sidearmWeapon[] = {};
	magazines[] =
    {
        LIST_4("150Rnd_762x51_Box_Tracer"),
		LIST_2("CUP_HandGrenade_RGD5"),
        LIST_2("SmokeShell")

    };
 

};

class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("150Rnd_762x51_Box_Tracer")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AA)";
    secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_SVD"};
	primaryAttachments[] = {"CUP_SVD_camo_d_half"};
    scope[] = {"CUP_optic_PSO_3_open"};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
    magazines[] =
    {
        LIST_8("ACE_10Rnd_762x54_Tracer_mag"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };

};

class mmgg : ar
{
    displayName = "MMG Gunner";
	backpack[] = {};
    primaryWeapon[] = {};
	items[] += {"ACRE_PRC148"};
    };
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {};
    backpackItems[] =
    {
        
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpack[] = {};
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
	backpack[] = {};
    secondaryWeapon[] = {};
	secondaryAttachments[] = {};
    magazines[] +=
    {
       
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {};
    backpackItems[] =
    {
        
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
       
    };
};
//class hatg : car //UNNECESSARY
//{
//    displayName = "HAT Gunner";
//    backpack[] = {};
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
     vest[] = {"CUP_V_RUS_6B45_1"};
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
	uniform[] = {};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
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


