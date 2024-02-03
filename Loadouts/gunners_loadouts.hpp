
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_dirty_OD_US"};
    vest[] = {"rhsusf_spc_rifleman"};
    backpack[] = {};
    headgear[] = {"rhsgref_hat_M1951"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_Ger_M92"};
	vest[] = {"CUP_V_JPC_Fastbelt_rngr"};
	primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden_railed"};
    scope[] = {"CUP_optic_ZeissZPoint"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] = 
	{
		LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
		LIST_3("CUP_7Rnd_45ACP_1911"),
	};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_tourniquet","HandGrenade","HandGrenade","SmokeShell"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	headgear[] = {"CUP_H_Ger_M92_GG"};
    primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
    magazines[] =
    {
        LIST_8("CUP_1Rnd_HE_M203"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_6("CUP_20Rnd_B_765x17_Ball_M")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_AKS74U_top_rail"};
	scope[] = {"CUP_optic_ZeissZPoint_wood"};
	magazines[] =
	{
		LIST_7("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_camo_M"),
		LIST_3("CUP_7Rnd_45ACP_1911")
	};
};
class m : car
{
    displayName = "Medic";
	goggles[] = {"G_Aviator"};
	vest[] = {"CUP_V_JPC_medical_rngr"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	 backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_4("ACE_splint"),
			LIST_3("ACE_bloodIV_250"),
			LIST_5("ACE_bloodIV_500"),
			LIST_2("ACE_bloodIV"),
			LIST_1("ACE_personalAidKit")
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
	vest[] = {"CUP_V_B_JPC_OD_Light"};
    primaryWeapon[] = {"CUP_arifle_SR3M_Vikhr_top_rail"};
	scope[] = {"CUP_optic_ZeissZPoint_wood"};
    magazines[] =
    {
        LIST_10("CUP_20Rnd_9x39_SP5_VSS_M"),
		LIST_3("CUP_7Rnd_45ACP_1911")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	vest[] = {"CUP_V_JPC_tl_rngr"};
	headgear[] = {"CUP_H_Ger_M92_GG"};
	goggles[] = {"G_Aviator"};
    magazines[] +=
    {
        LIST_2("SmokeShell")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	headgear[] = {"rhsgref_hat_M1951"};
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
	headgear[] = {"rhsgref_hat_M1951"};
	vest[] = {"CUP_V_B_JPC_OD_Light"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	goggles[] = {"G_Aviator"};
    primaryWeapon[] = {"CUP_lmg_MG3"};
    magazines[] =
    {
        LIST_4("CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		LIST_3("CUP_7Rnd_45ACP_1911")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
    backpackItems[] =
    {
        LIST_4("rhsusf_200Rnd_556x45_mixed_box")
    };
    linkedItems[] += {"Binocular"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"CUP_optic_RCO"};
};
class matg : car
{
    displayName = "MAT Gunner";
	vest[] = {"CUP_V_JPC_weaponsbelt_rngr"};
	headgear[] = {"CUP_H_Ger_M92_GG"};
    secondaryWeapon[] = {"rhs_weap_smaw"};
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
	backpackItems[] =
    {
        LIST_3("rhs_mag_smaw_HEDP")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	vest[] = {"CUP_V_JPC_weaponsbelt_rngr"};
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
    linkedItems[] +=
    {
        "Rangefinder",
    };
    backpackItems[] =
    {
        LIST_3("rhs_mag_smaw_HEDP")
    };
};
class sn : r
{
    displayName = "Sniper";
	vest[] = {"CUP_V_JPC_lightbelt_rngr"};
	headgear[] = {"rhsgref_hat_M1951"};
    goggles[] = {"G_Aviator"};
    primaryWeapon[] = {"CUP_srifle_SVD_top_rail"};
    scope[] = {"CUP_optic_LeupoldMk4"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] =
    {
        LIST_7("CUP_10Rnd_762x54_SVD_M"),
		LIST_3("CUP_7Rnd_45ACP_1911")
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : r
{
    displayName = "Spotter";
	headgear[] = {"rhsgref_hat_M1951"};
	vest[] = {"CUP_V_JPC_lightbelt_rngr"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
