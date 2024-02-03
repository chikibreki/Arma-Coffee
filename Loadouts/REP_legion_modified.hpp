
tooltip = "Author: GunnerRya & Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"SWLB_clone_uniform"};
    vest[] = {"SWLB_clone_basic_armor"};
	faces[] = {"lsd_gar_cloneA_head", "lsd_gar_cloneB_head", "lsd_gar_cloneC_head", "lsd_gar_cloneD_head", "lsd_gar_cloneE_head", "lsd_gar_cloneF_head", "lsd_gar_cloneG_head", "lsd_gar_cloneH_head"};
	backpack[] = {"SWLB_clone_backpack"};
    headgear[] = {"SWLB_clone_P1_helmet"};
	sidearmWeapon[] = {"JMSLLTE_dc17pistol"};
    magazines[] =
    {
		LIST_3("JMSLLTE_DC17_20Rnd_Mag")
    };
    items[] = {"murshun_cigs_cigpack", "murshun_cigs_lighter", "ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","Chemlight_green","Chemlight_green"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};

class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"JMSLLTE_dc15a"};
	magazines[] +=
    {
        LIST_10("JMSLLTE_DC15A_60Rnd_Mag"),
        LIST_2("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_2("rhs_mag_an_m8hc")
	};
};

class dmr : r {
    displayName = "marksman";
	primaryWeapon[] = {"JMSLLTE_DLT19xRifle"};
	magazines[] +=
    {
        LIST_10("SWLW_DLT19x_10Rnd_Mag"),
        LIST_2("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_2("rhs_mag_an_m8hc")
	};
};

class g : r
{
    displayName = "Grenadier";
	vest[] = {"SWLB_clone_grenadier_armor"};
    primaryWeapon[] = {"JMSLLTE_dc15s"};
    magazines[] =
    {
        LIST_10("JMSLLTE_DC15S_40Rnd_Mag"),
        LIST_4("JMSLLTE_thermaldetonator_HandGrenade")
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"JMSLLTE_dc15s"};
    magazines[] =
    {
        LIST_10("JMSLLTE_DC15S_40Rnd_Mag"),
		LIST_2("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("JMSLLTE_DC17_20Rnd_Mag")
    };
};

class m : car
{
    displayName = "Medic";
	vest[] = {"SWLB_clone_medic_armor"};
	backpack[] = {"SWLB_clone_backpack_medic"};
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
			LIST_10("ACE_splint"),
			LIST_4("rhs_mag_an_m8hc")
	};
};

class ftl : g
{
    displayName = "Fireteam Leader";
    uniform[] = {"SWLB_clone_P1Lieutenant_uniform"};
	backpack[] = {"SWLB_clone_backpack_RTO"};
	headgear[] = {"SWLB_clone_P1Lieutenant_helmet"};
	items[] += {"ACE_EntrenchingTool"};
    linkedItems[] += {"SWLB_clone_binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	uniform[] = {"SWLB_clone_P1Captain_uniform"};
	headgear[] = {"SWLB_clone_P1Captain_helmet"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "SWLB_clone_commander_binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	uniform[] = {"SWLB_clone_P1Commander_uniform"};
	headgear[] = {"SWLB_clone_P1Commander_helmet"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class mmg : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"JMSLLTE_DLT19BlasterRifle"};
    magazines[] =
    {
        LIST_3("JMSLLTE_DLT19_75Rnd_Mag"),
		LIST_1("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("JMSLLTE_DC17_20Rnd_Mag"),
    };
};

class mmga : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] +=
    {
        LIST_3("JMSLLTE_DLT19_75Rnd_Mag")
    };
    linkedItems[] += {"SWLB_clone_binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"JMSLLTE_RPS10_launcher"};
	magazines[] +=
    {
		LIST_1("JMSLLTE_RPS10_Mag"),
    };
};

class p : car
{
    displayName = "Pilot";
	backpack[] = {"SWLB_clone_backpack_RTO"};
	headgear[] = {"SWLB_clone_P1_Pilot_helmet"};
	items[] += {"ACRE_PRC148"};
};