
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"cwr3_b_uniform_m81_woodland"};
    vest[] = {"cwr3_b_vest_pasgt_alice_woodland"};
    headgear[] = {"cwr3_b_headgear_pasgt_m81_woodland"};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
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
		LIST_2("SmokeShell")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_gl"};
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
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_light"};
    primaryWeapon[] = {"CUP_arifle_Colt727"};
	primaryAttachments[] = {};
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"cwr3_b_backpack_m5_medic_empty"};
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
        LIST_6("CUP_30Rnd_9x19_MP5"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_1("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	backpack[] = {"cwr3_b_backpack_radio"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_3("CUP_15Rnd_9x19_M9")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_officer"};
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
	backpack[] = {"cwr3_b_backpack_alice"};
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_ar"};
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
	backpack[] = {"cwr3_b_backpack_alice"};
    backpackItems[] =
    {
        LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"cwr3_launch_m72a3"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M60"};
	backpack[] = {"cwr3_b_backpack_alice"};
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_mg"};
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
	backpack[] = {"cwr3_b_backpack_alice"};
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
    secondaryWeapon[] = {"cwr3_launch_carlgustaf"};
    magazines[] +=
    {
        LIST_3("cwr3_carlgustaf_heat_m")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"VSM_M81_carryall"};
    backpackItems[] =
    {
        LIST_2("cwr3_carlgustaf_heat_m")
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
        LIST_1("cwr3_carlgustaf_heat_m")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_launch_M47"};
	backpack[] = {"VSM_M81_carryall"};
    magazines[] +=
    {
        LIST_2("CUP_Dragon_EP1_M")
    };
	items[] += {"ACRE_PRC148"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
	backpack[] = {"VSM_M81_carryall"};
	backpackItems[] =
    {
        LIST_1("CUP_Dragon_EP1_M")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpack[] = {"VSM_M81_carryall"};
	items[] += {"ACRE_PRC148"};
	backpackItems[] =
    {
        LIST_1("CUP_Dragon_EP1_M")
    };
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
        LIST_3("CUP_Stinger_M")
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
        LIST_2("CUP_Stinger_M")
    };
 };
class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"cwr3_b_uniform_tanksuit"};
    vest[] = {"cwr3_b_vest_pasgt_alice_od_crew"};
    headgear[] = {"cwr3_b_headgear_cvc"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular"};
	items[] += {"ACRE_PRC148"};
};

class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : vd
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
    headgear[] = {"CUP_H_SPH4_green"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_SPH4_green"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
	displayName = "Jet Pilot";
	backpack[] = {"B_Parachute"};
	headgear[] = {"cwr3_b_headgear_pilot_visor_white"};
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
