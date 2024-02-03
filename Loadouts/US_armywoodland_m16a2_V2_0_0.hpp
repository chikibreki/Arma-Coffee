
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"CUP_U_B_BDUv2_M81"};
    vest[] = {"CUP_V_B_PASGT_OD"};
    headgear[] = {"CUP_H_PASGTv2_NVG_WDL"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"CUP_arifle_M16A2"};
	secondaryAttachments[] = {};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("CUP_30Rnd_556x45_Stanag"),
        LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
	backpack[] = {"vn_b_pack_lw_01"};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_Colt727"};
	primaryAttachments[] = {};
	magazines[] =
    {
        LIST_8("CUP_30Rnd_556x45_Stanag"),
        LIST_1("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
    }; 
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"vn_b_pack_m5_01"};
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
    primaryWeapon[] = {"CUP_smg_MP5A5"};
	primaryAttachments[] = {};
    magazines[] =
    {
        LIST_5("CUP_30Rnd_9x19_MP5"),
		LIST_1("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	backpack[] = {"vn_b_pack_prc77_01"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACRE_PRC148"};
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
	backpack[] = {"vn_b_pack_lw_02"};
    primaryWeapon[] = {"CUP_lmg_M249_E2"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"vn_b_pack_lw_02"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"vn_m72"};
	magazines[] +=
	{
		LIST_1("vn_m72_mag")
	};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M60"};
	backpack[] = {"vn_b_pack_lw_02"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_1("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
	items[] += {"ACRE_PRC148"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"vn_b_pack_lw_02"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
    };
};
class sn : r
{
	displayName = "Sniper"
	backpack[] = {"vn_b_pack_01"};
	primaryWeapon[] = {"CUP_srifle_M21"};
	scope[] = {"CUP_optic_artel_m14"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_762x51_DMR"),
        LIST_1("HandGrenade"),
		LIST_2("SmokeShell"),
		LIST_2("CUP_15Rnd_9x19_M9")
    };
};
class sp : car
{
	displayName = "Spotter"
	linkedItems[] +=
    {
        "Binocular",
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"VSM_M81_carryall"};
    secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"CUP_optic_MAAWS_Scope"};
    magazines[] +=
    {
        LIST_3("CUP_MAAWS_HEAT_M")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"VSM_M81_carryall"};
    backpackItems[] =
    {
        LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_1("CUP_MAAWS_HEDP_M")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"VSM_M81_carryall"};
    linkedItems[] +=
    {
        "Binocular",
    };
    backpackItems[] =
    {
        LIST_1("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"vn_b_pack_static_tow"};
	items[] += {"ACRE_PRC148"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpack[] = {"vn_b_pack_static_base_01"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] +=
    {
        "Binocular",
	};
};
class samg : car  
{
    displayName = "AA Missile Specialist";
	backpack[] = {"VSM_M81_carryall"};
    secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
    magazines[] +=
    {
        LIST_1("CUP_Stinger_M")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"VSM_M81_carryall"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_1("CUP_Stinger_M")
    };
 };
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"vn_b_uniform_heli_01_01"};
    vest[] = {"vn_b_vest_usarmy_14"};
    headgear[] = {"CUP_H_CVC"};
	backpack[] = {"vn_b_pack_trp_02_02"};
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
	vest[] = {"vn_b_vest_aircrew_05"};
    headgear[] = {"vn_b_helmet_svh4_02_06"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"vn_b_helmet_svh4_02_06"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
	displayName = "Jet Pilot";
	uniform[] = {"vn_b_uniform_k2b_01_01"};
	vest[] = {"vn_b_vest_aircrew_04"};
	headgear[] = {"vn_b_helmet_svh4_02_06"};
	backpack[] = {"B_Parachute"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"VSM_M81_carryall"};
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
	backpack[] = {"VSM_M81_carryall"};
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
