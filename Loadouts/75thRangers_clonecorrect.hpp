class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_CRYE_G3C_MC_US_V2"};
    vest[] = {"CUP_V_CPC_medicalbelt_mc"};
    backpack[] = {"B_AssaultPack_mcamo"};
    headgear[] = {"CUP_H_OpsCore_Covered_MCAM_US_SF"};
    goggles[] = {"default"};
    hmd[] = {"CUP_NVG_PVS15_black"};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:african", "faceset:caucasian"};
    // Leave empty to not change faces.
    insignias[] = {};
    // Leave empty to not change insignias

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_tourniquet"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemGPS",
		"ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"CUP_H_OpsCore_Covered_MCAM_US_SF"};
    backpack[] = {"B_AssaultPack_mcamo"};
    primaryWeapon[] = {"rhs_weap_m4a1_blockII_KAC"};
    scope[] = {"rhsusf_acc_eotech_xps3"};
	silencer[] = {"rhsusf_acc_nt4_tan"};
    attachment[] = {"rhsusf_acc_anpeq15"};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_CPC_tlbelt_mc"};
    primaryWeapon[] = {"rhs_weap_m4a1_blockII_M203"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
	attachment[] = {"CUP_acc_ANPEQ_15_Flashlight_Tan_L"};
	magazines[] =
    {
		LIST_9("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
    };
	backpackItems[] =
	 {
		LIST_4("rhs_mag_m661_green"),
		LIST_8("rhs_mag_m662_red"),
		LIST_10("rhs_mag_M433_HEDP"),
		
	};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_mk18_KAC"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
	silencer[] = {"rhsusf_acc_nt4_tan"};
	attachment[] = {"CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L"};
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"B_Kitbag_mcamo"};
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
    uniform[] = {"CUP_U_CRYE_G3C_RGR"};
    vest[] = {"CUP_V_PMC_CIRAS_OD_Empty"};
    backpack[] = {};
    headgear[] = {"rhsusf_hgu56p_mask_black_skull"};
    goggles[] = {"default"};
    linkedItems[] = {"ItemGPS", "ACRE_PRC152"};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("ACE_HandFlare_Red"),
		LIST_2("ACE_HandFlare_Green")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] +=
    {
		LIST_1("ACRE_PRC148")
    };
};
class co : sl 
{
    displayName = "Platoon Leader";
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
};
class fac : co
{
    displayName = "Forward Air Controller";
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] +=
	 {
		LIST_1("ACRE_PRC152"),
	};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_CPC_weaponsbelt_mc"};
    primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
	silencer[] = {};
	attachment[] = {"CUP_acc_ANPEQ_15_Flashlight_Black_L"};
	bipod[] = {"rhsusf_acc_saw_bipod"};
    magazines[] =
    {
        LIST_3("rhsusf_200Rnd_556x45_box"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	vest[] = {"CUP_V_CPC_weaponsbelt_mc"};
	backpack[] = {"B_AssaultPack_mcamo"};
    backpackItems[] =
    {
        LIST_4("rhsusf_200Rnd_556x45_box")
    };
    linkedItems[] += {"Rangefinder"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_DMR_03_tan_F"};
    scope[] = {"optic_MRCO"};
    bipod[] = {"bipod_01_F_snd"};
    magazines[] =
    {
        LIST_11("20Rnd_762x51_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_sand_F"};
    scope[] = {"optic_MRCO"};
    magazines[] =
    {
        LIST_5("130Rnd_338_Mag"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"B_HMG_01_weapon_F"};

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
    secondaryWeapon[] = {"launch_NLAW_F"};
    magazines[] +=
    {
        LIST_3("NLAW_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("NLAW_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("NLAW_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"B_AT_01_weapon_F"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_AT_01_weapon_F"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
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
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
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
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_B_Titan_F"};
    magazines[] +=
    {
        LIST_3("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_B_GhillieSuit"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_LRR_F"};
    scope[] = {"optic_SOS"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    magazines[] =
    {
        LIST_7("7Rnd_408_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {"optic_MRCO"};
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
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {"B_AssaultPack_mcamo"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS", "ACRE_PRC152"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS", "ACRE_PRC152"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS", "ACRE_PRC152"};
};
class jp : smg
{
    displayName = "Jet pilot";
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"V_PlateCarrier3_rgr"};
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
    vest[] = {"V_PlateCarrier3_rgr"};
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
};