
tooltip = "Author: Rockcabbage\n\n";

class base {
    displayName = "base"
    uniform[] = {"CUP_U_B_BDUv2_dirty_Winter"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    backpack[] = {"Black_Backpack_Compact"};
    headgear[] = {"CUP_H_RUS_Altyn_black"};
    goggles[] = {"CUP_G_Scarf_Face_White"};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet",};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_arifle_AK15_winter"};
    primaryAttachments[] = {,"ACE_acc_pointer_green"};
    magazines[] = {
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_10("CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M"),
        };
};
class g : r
{
    displayName = "Grenadier";

};
class car : r
{
    displayName = "Carabinier";
};
class m : base
{
    displayName = "Medic";
    uniform[] = {"CUP_U_B_BDUv2_Winter"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    backpack[] = {"Black_Carryall"};
    headgear[] = {"CUP_H_US_patrol_cap_winter"};
    goggles[] = {"G_Respirator_white_F"};
    primaryWeapon[] = {"CUP_arifle_AK15_winter"};
    primaryAttachments[] = {"CUP_muzzle_mfsup_Flashhider_762x39_Black"};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
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
class smg : car
{
    displayName = "Submachinegunner";
};
class ftl : base
{
    displayName = "Fireteam Leader";
    uniform[] = {"CUP_U_B_BDUv2_gloves_Winter"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    backpack[] = {"B_FieldPack_blk"};
    headgear[] = {"CUP_H_PMC_Beanie_Headphones_Winter"};
    primaryWeapon[] = {"CUP_arifle_AK15_GP34_winter"};
    primaryAttachments[] = {"CUP_muzzle_mfsup_Flashhider_762x39_Black","CUP_acc_ANPEQ_15_Black","CUP_optic_G33_HWS_BLK"};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    backpackItems[] += {
        LIST_2("SmokeShellRed"),
        LIST_1("vn_v40_grenade_mag"),
        LIST_10("CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M"),
        LIST_5("CUP_1Rnd_HE_GP25_M"),
        LIST_3("CUP_1Rnd_SmokeRed_GP25_M"),
        LIST_2("CUP_IlumFlareGreen_GP25_M"),
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Rangefinder", "ItemGPS"};
};
class sl : base
{
    displayName = "Squad Leader";
    uniform[] = {"CUP_U_B_CDF_SNW_1"};
    vest[] = {"CUP_V_CDF_6B3_5_SNW"};
    headgear[] = {"CUP_H_CDF_OfficerCap_SNW"};
    goggles[] = {"CUP_G_PMC_RadioHeadset_Glasses_Dark"};
    hmd[] = {"immersion_cigs_cigar0_nv"};
    primaryWeapon[] = {"CUP_arifle_AK19_snowtiger"};
    primaryAttachments[] = {"CUP_muzzle_mfsup_SCAR_L","CUP_acc_LLM_black","CUP_optic_AIMM_ZDDOT_BLK"};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] += {
        LIST_10("CUP_30Rnd_556x45_TE1_Tracer_Green_AK19_Grey_M"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("vn_prop_drink_07_01"),
        LIST_1("vn_prop_drink_09_01"),
        LIST_1("vn_v40_grenade_mag"),
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","immersion_cigs_cigar0_nv","Laserdesignator_01_khk_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_Winter"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    backpack[] = {"MNP_B_RUW_FP"};
    headgear[] = {"CUP_H_RUS_Altyn_black"};
    goggles[] = {"G_Balaclava_combat"};
    primaryWeapon[] = {"CUP_lmg_Mk48"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellRed","vn_v40_grenade_mag"};
    backpackItems[] = {
        LIST_2("150Rnd_762x51_Box_Tracer"),
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    uniform[] = {"CUP_U_B_BDUv2_dirty_Winter"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    headgear[] = {"CUP_H_RUS_Altyn_black"};
    goggles[] = {"G_Balaclava_TI_blk_F"};
    primaryWeapon[] = {"CUP_arifle_AK15_winter"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellRed","vn_v40_grenade_mag","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellRed"};
    backpackItems[] = {
        LIST_4("150Rnd_762x51_Box_Tracer"),
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Rangefinder"};
};
class rat : base
{
    displayName = "Rifleman (AT)";
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_Winter"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    headgear[] = {"CUP_H_RUS_Altyn_black"};
    goggles[] = {"G_Balaclava_lowprofile"};
    primaryWeapon[] = {"CUP_arifle_AK15_winter"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellRed","vn_v40_grenade_mag","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M"};
    backpackItems[] = {
        LIST_12("vn_rkg3_grenade_mag")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Rangefinder"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"CUP_optic_PSO_1_AK"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_PKM"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_FieldPack_oucamo"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
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
        LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"CUP_B_CDF_RPG_Backpack"};
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"CUP_PG7VL_M"};
    magazines[] +=
    {
        LIST_3("CUP_PG7VM_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_CDF_RPG_Backpack"};
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"CUP_B_CDF_RPG_Backpack"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("CUP_PG7VM_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"CUP_B_Kornet_Gun_Bag"};
	items[] += {"ACRE_PRC148"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"CUP_B_Kornet_Tripod_Bag"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Rangefinder",
	};
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"CUP_srifle_SVD"};
    scope[] = {"CUP_optic_PSO_1"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
    magazines[] =
    {
        LIST_8("CUP_10Rnd_762x54_SVD_M"),
		LIST_1("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : dm
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
    vest[] = {"CUP_V_CDF_CrewBelt"};
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
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
    backpack[] = {};
    headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class eng : car 
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_oucamo"};
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
class engm : car 
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_Carryall_oucamo"};
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
