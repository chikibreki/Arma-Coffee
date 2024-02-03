
tooltip = "Author: Pouchy\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_I_B_PMC_Unit_20","CUP_I_B_PMC_Unit_35","CUP_I_B_PMC_Unit_15","CUP_I_B_PMC_Unit_22","CUP_I_B_PMC_Unit_14"};
    vest[] = {"CUP_V_B_Ciras_Khaki2"};
    backpack[] = {"CUP_B_AssaultPack_Coyote"};
    headgear[] = {"CUP_H_OpsCore_Tan"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","CUP_NVG_GPNVG_black","CUP_G_ESS_BLK_Scarf_Face_Blk","murshun_cigs_cigpack","murshun_cigs_lighter"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_OpsCore_Tan"};
	primaryWeapon[] = {"CUP_Famas_F1_Arid"};
    attachment[] = {"CUP_muzzle_snds_FAMAS_Arid"};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_4("CUP_25Rnd_556x45_Famas_Arid_Tracer_Red"),
        LIST_6("CUP_25Rnd_556x45_Famas_Arid"),
        LIST_2("vn_m67_grenade_mag"),
		LIST_2("ACE_M84"),
		LIST_2("SmokeShell"),
		LIST_2("ACE_Chemlight_UltraHiOrange"),
		LIST_2("ACE_HandFlare_White")
		
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_Famas_F1_Rail_Arid"};
	scope[] = {"CUP_optic_HoloDesert"};
	attachment[] = {"CUP_acc_ANPEQ_2_Flashlight_Coyote_L"};
	secondaryAttachments[] = {"CUP_muzzle_snds_FAMAS_Arid"};
    magazines[] +=
    {
        LIST_8("vn_40mm_m381_he_mag"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_Famas_F1_Arid"};
    attachment[] = {"CUP_muzzle_snds_FAMAS_Arid"};
};
class m : car
{
    displayName = "Medic";
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
    primaryWeapon[] = {"SMG_05_F"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("30Rnd_9x21_Mag_SMG_02"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"vn_m79_p"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_5("UGL_FlareWhite_F")
		
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
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
	headgear[] = {"CUP_H_OpsCore_Black"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_m249_pip2"};
	scope[] = {"CUP_optic_G33_HWS_BLK"};
	attachment[] = {"ACE_muzzle_mzls_L"};
    bipod[] = {};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_1("ACE_M84"),
		LIST_1("vn_m67_grenade_mag"),
		LIST_3("11Rnd_45ACP_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"CUP_V_B_Ciras_Black"};
    primaryWeapon[] = {"CUP_arifle_ACR_DMR_blk_68"};
	primaryAttachments[] = {"CUP_acc_ANPEQ_15_Black"};
    scope[] = {"CUP_optic_SB_11_4x20_PM"};
    bipod[] = {"CUP_bipod_Harris_1A2_L_BLK"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
    magazines[] =
    {
        LIST_11("CUP_20Rnd_556x45_Stanag"),
		LIST_2("vn_m67_grenade_mag"),
		LIST_1("SmokeShell"),
		LIST_3("11Rnd_45ACP_Mag")
    };
};
class mmgg : ar //PLZ TEST
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M240_B"};
	primaryAttachments[] = {"CUP_acc_ANPEQ_15_Flashlight_OD_L"};
    scope[] = {"CUP_optic_Elcan"};
    magazines[] =
    {
        LIST_5("150Rnd_762x51_Box_Tracer"),
		LIST_1("vn_m67_grenade_mag"),
		LIST_1("SmokeShell"),
		LIST_3("11Rnd_45ACP_Mag")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_AssaultPack_Black"};
    backpackItems[] =
    {
        LIST_3("150Rnd_762x51_Box_Tracer")
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
        LIST_3("150Rnd_762x51_Box_Tracer")
    };
};




