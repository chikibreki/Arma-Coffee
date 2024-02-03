
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_CRYE_G3C_M81_US_V2"};
    vest[] = {"CUP_V_B_Ciras_Olive_USSF"};
    backpack[] = {};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","murshun_cigs_cigpack","murshun_cigs_lighter","ACE_CableTie","CUP_NVG_PVS15_black"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
		"ItemGPS"
    };
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_USArmy_Helmet_ECH1_Sand"};
	primaryWeapon[] = {"CUP_arifle_M4A1_SOMMOD_black"};
	scope[] = {"CUP_optic_Eotech553_OD"};
    attachment[] = {"Carls_LLM_irLASER_CUPVarioRay_Brown"};
	silencer[] = {"CUP_muzzle_snds_M16_coyote"};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_Stanag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShellOrange")
    }; 
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_B_Ciras_Olive_USSF"};
	backpack[] = {"B_Kitbag_cbr"};
    primaryWeapon[] = {"CUP_arifle_M4A1_BUIS_camo_GL"};
	scope[] = {"CUP_optic_Elcan_SpecterDR_coyote_PIP"};
    attachment[] = {"Carls_LLM_irLASER_CUPVarioRay_OD"};
	silencer[] = {"CUP_muzzle_snds_M16_camo"};
	items[] = {"ACE_HuntIR_monitor"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("CUP_1Rnd_SmokeRed_M203"),
		LIST_3("ACE_HuntIR_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_wdl"};
	scope[] = {"CUP_optic_Eotech553_OD"};
    attachment[] = {"Carls_LLM_irLASER_CUPVarioRay_OD"};
	silencer[] = {"muzzle_snds_m_khk_F"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_Ciras_Olive_USSF"};
	backpack[] = {"B_Kitbag_cbr"};
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
    primaryWeapon[] = {"CUP_arifle_M4A1_black"};
	scope[] = {"CUP_optic_Eotech553_Black"};
    attachment[] = {"Carls_LLM_irLASER_CUP_anpeq15_flash_TAN_top"};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShellOrange")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("CUP_7Rnd_45ACP_1911")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_B_Ciras_Olive_USSF"};
	headgear[] = {"CUP_H_USArmy_Helmet_ECH1_Sand"};
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
	headgear[] = {"CUP_H_USArmy_Helmet_ECH1_Sand"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_B_Ciras_Olive_USSF"};
	backpack[] = {"B_Kitbag_cbr"};
    primaryWeapon[] = {"CUP_lmg_Mk48_wdl"};
	scope[] = {"CUP_optic_Eotech553_OD"};
    attachment[] = {"CUP_optic_ACOG_TA31_KF_Wood_PIP"};
	silencer[] = {"muzzle_snds_H_MG_khk_F"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShellOrange"),
		LIST_3("CUP_7Rnd_45ACP_1911")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_M136"};
};
class mat : car
{
    displayName = "Rifleman (MAT)";
    secondaryWeapon[] = {"CUP_launch_M47"};
	 backpackItems[] =
    {
        LIST_2("CUP_Dragon_EP1_M")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"vn_b_vest_usarmy_13"};
    backpack[] = {"B_Kitbag_cbr"};
    headgear[] = {"CUP_H_CZ_Helmet05"};
	goggles[] = {"CUP_G_ESS_BLK"};
    linkedItems[] += {};
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
	uniform[] = {"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"};
	vest[] = {"Aircrew_vest_2_NH"};
    headgear[] = {"H_CrewHelmetHeli_B"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"H_CrewHelmetHeli_B"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
