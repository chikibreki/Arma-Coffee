
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_BG_Guerrilla_6_1"};
    vest[] = {};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"rhsusf_mich_helmet_marpatwd"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = 
	{
		LIST_3("11Rnd_45ACP_Mag")
	};
    items[] = 
	{
		"ACRE_PRC343",
		LIST_2("ACE_elasticBandage"),
		LIST_2("ACE_packingBandage"),
		"ACE_packingBandage",
		"ACE_tourniquet",
		"ACE_morphine",
		"ACE_splint"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
	vest[] = {"CUP_V_B_RRV_Scout_CB"};
	primaryWeapon[] = {"CUP_arifle_ACR_DMR_wdl_68"};
	scope[] = {"cup_optic_acog_reflex_wood"};
    primaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] += 
	{
		LIST_10("CUP_30Rnd_680x43_Stanag_Tracer_Red"),
		LIST_2("rhs_mag_m67"),
		"rhs_grenade_anm8_mag"
	};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"B_FieldPack_khk"};
    primaryWeapon[] = {"CUP_arifle_ACR_EGLM_wdl_68"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_ACR_DMR_wdl_68"};
	scope[] = {"cup_optic_microt1_low"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_RRV_Medic_CB"};
	backpack[] = {"B_FieldPack_khk"};
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
    primaryWeapon[] = {"CUP_smg_MP7"};
	primaryAttachments[] = {"cup_optic_microt1_low"};
    magazines[] =
    {
        LIST_10("30Rnd_9x21_Mag_SMG_02"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"rhsusf_mich_helmet_marpatwd_alt_headset"};
	vest[] = {"CUP_V_B_RRV_TL_CB"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
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
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_AutomaticRifleman"};
	backpack[] = {"B_FieldPack_khk"};
	primaryWeapon[] = {"CUP_lmg_minimipara"};
    magazines[] =
    {
        LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_2("rhs_mag_m67"),
		LIST_1("rhs_grenade_anm8_mag"),
		LIST_3("11Rnd_45ACP_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_khk"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	backpack[] = {"B_FieldPack_khk"};
	magazines[] +=
	{
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};