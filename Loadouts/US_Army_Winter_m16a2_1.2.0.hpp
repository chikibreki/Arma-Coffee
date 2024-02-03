
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_gloves_dirty_Winter_M81"};
    vest[] = {"CUP_V_B_PASGT_winter"};
    backpack[] = {"CUP_B_AlicePack_Bedroll"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White","murshun_cigs_cigpack","murshun_cigs_lighter"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
    headgear[] = {"CUP_H_PASGTv2_winter"};
	primaryWeapon[] = {"CUP_arifle_M16A2"};
	scope[] = {};
    attachment[] = {};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_Stanag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShellOrange")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_B_PASGT_winter"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("CUP_1Rnd_SmokeRed_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_Colt727"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_PASGT_winter"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
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
    primaryWeapon[] = {"vn_m3a1"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_10("vn_m3a1_mag"),
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
	vest[] = {"CUP_V_B_PASGT_winter"};
	headgear[] = {"CUP_H_PASGTv2_winter"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"CUP_H_PASGTv2_winter"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_B_PASGT_winter"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
    primaryWeapon[] = {"CUP_lmg_M249_E1"};
	scope[] = {};
    bipod[] = {};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
    magazines[] =
    {
        LIST_4("CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShellOrange"),
		LIST_3("CUP_7Rnd_45ACP_1911")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"vn_m72"};
	 backpackItems[] =
    {
        LIST_1("vn_m72_mag")
    };
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
    backpack[] = {"CUP_B_AlicePack_Bedroll"};
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
    headgear[] = {"H_PilotHelmetHeli_B"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"H_PilotHelmetHeli_B"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class RUWO {
    displayName = "RUWO";
    uniform[] = {"CUP_U_O_RUS_Ratnik_Winter"};
    vest[] = {"CUP_V_O_Ins_Carrier_Rig"};
    headgear[] = {"MNP_Helmet_SOV_Steel"};
    goggles[] = {"CUP_G_RUS_Balaclava_Ratnik_winter"};
    primaryWeapon[] = {"CUP_arifle_AK74_GL"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {"SmokeShell","CUP_1Rnd_SmokeGreen_GP25_M","CUP_1Rnd_SmokeGreen_GP25_M","CUP_1Rnd_SmokeGreen_GP25_M","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_IlumFlareWhite_GP25_M","CUP_IlumFlareWhite_GP25_M","CUP_IlumFlareWhite_GP25_M"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class RUWR {
    displayName = "RUWR";
    uniform[] = {"CUP_U_O_RUS_Ratnik_Winter"};
    vest[] = {"CUP_V_O_Ins_Carrier_Rig"};
    headgear[] = {"MNP_Helmet_SOV_Steel"};
    goggles[] = {"CUP_G_RUS_Balaclava_Ratnik_winter_v2"};
    primaryWeapon[] = {"CUP_arifle_AK74"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {"30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_F"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class RUAT : RUWR {
    displayName = "RUAT";
    uniform[] = {"CUP_U_O_RUS_Ratnik_Winter"};
    vest[] = {"CUP_V_O_Ins_Carrier_Rig"};
    headgear[] = {"MNP_Helmet_SOV_Steel"};
    goggles[] = {"CUP_G_RUS_Balaclava_Ratnik_winter"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	backpack[] = {"CUP_O_RUS_Patrol_bag_Winter_AT"};
	
    items[] = {"FirstAidKit"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class RUAR : RUWR {
    displayName = "RUAR";
    uniform[] = {"CUP_U_O_RUS_Ratnik_Winter"};
    vest[] = {"CUP_V_O_Ins_Carrier_Rig"};
    headgear[] = {"MNP_Helmet_SOV_Steel"};
    goggles[] = {"CUP_G_RUS_Balaclava_Ratnik_winter_v2"};
    primaryWeapon[] = {"CUP_lmg_PKM"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    backpack[] = {"CUP_O_RUS_Patrol_bag_Winter_AT"};
	backpackItems[] =
    {
        LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
    };
	items[] = {"FirstAidKit"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};