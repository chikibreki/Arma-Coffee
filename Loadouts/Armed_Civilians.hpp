
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_I_G_Story_Protagonist_F"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_AssaultPack_blk"};
    headgear[] = {"H_Cap_oli"};
    primaryWeapon[] = {"CUP_srifle_M21"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ"};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "rifleman";
    items[] = {"FirstAidKit","ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class m : r
{
    displayName = "Medic";
	primaryWeapon[] = {"CUP_arifle_SR3M_Vikhr"};
	primaryAttachments[] = {"CUP_optic_Kobra"};
	 magazines[] =
    {
        LIST_10("CUP_30Rnd_9x39_SP5_VIKHR_M"),
		LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
    };
	backpack[] = {"B_AssaultPack_blk"};
	 backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_salineIV_250"),
			LIST_5("ACE_salineIV_500"),
			LIST_2("ACE_salineIV"),
			LIST_1("ACE_personalAidKit")
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_arifle_SR3M_Vikhr"};
	primaryAttachments[] = {"CUP_optic_Kobra"};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x39_SP5_VIKHR_M"),
		LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
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
	primaryWeapon[] = {"CUP_arifle_RPK74_top_rail"};
	primaryAttachments[] = {"optic_Yorris"};
    magazines[] =
    {
        LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
    linkedItems[] += {"Binocular"};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_M21_ris"};
    scope[] = {"ACE_optic_Hamr_PIP"};
    magazines[] =
    {
        LIST_11("CUP_20Rnd_762x51_DMR"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};

// class hmgg : car //UNNECESSARY
// {
//     displayName = "HMG Gunner";
//     backPack[] = {"B_HMG_01_weapon_F"};

// };
// class hmgac : r //UNNECESSARY
// {
//     displayName = "HMG Ammo Carrier";
//     backPack[] = {"B_HMG_01_weapon_F"};
// };
// class hmgag : car //UNNECESSARY
// {
//     displayName = "HMG Assistant Gunner";
//     backPack[] = {"B_HMG_01_support_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//		   "Rangefinder",
//         "ItemGPS"
//     };
// };
// class mtrg : car //UNNECESSARY
// {
//     displayName = "Mortar Gunner";
//     backPack[] = {"B_Mortar_01_weapon_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "ItemGPS"
//     };
// };
// class mtrac : r //UNNECESSARY
// {
//     displayName = "Mortar Ammo Carrier";
//     backPack[] = {"I_Mortar_01_weapon_F"};
// };
// class mtrag : car //UNNECESSARY
// {
//     displayName = "Mortar Assistant Gunner";
//     backPack[] = {"B_HMG_01_support_F"};
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "Rangefinder",
//         "ItemGPS"
//     };
// };
// class samg : car //UNNECESSARY
// {
//     displayName = "AA Missile Specialist";
//     secondaryWeapon[] = {"launch_B_Titan_F"};
//     magazines[] +=
//     {
//         LIST_3("Titan_AA")
//     };
// };
// class samag : car //UNNECESSARY
// {
//     displayName = "AA Assistant Missile Specialist";
//     linkedItems[] =
//     {
//         "ItemMap",
//         "ItemCompass",
//         "ItemRadio",
//         "ItemWatch",
//         "Rangefinder",
//         "ItemGPS"
//     };
//     backpackItems[] =
//     {
//         LIST_2("Titan_AA")
//     };
// };
