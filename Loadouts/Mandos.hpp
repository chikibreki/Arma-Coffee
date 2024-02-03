
tooltip = "Author: Bartoneye\n\n";

class base {
    displayName = "base";
    uniform[] = {"ls_mandalorian_undersuit_uniform"};
    vest[] = {"ls_mandalorian_vizslaGrunt_vest"};
	faces[] = {"lsd_gar_cloneA_head", "lsd_gar_cloneB_head", "lsd_gar_cloneC_head", "lsd_gar_cloneD_head", "lsd_gar_cloneE_head", "lsd_gar_cloneF_head", "lsd_gar_cloneG_head", "lsd_gar_cloneH_head"};
	backpack[] = {"ls_mandalorian_standard_backpack"};
    headgear[] = {"ls_mandalorian_vizslaGrunt_helmet"};
	sidearmWeapon[] = {"SWLW_Westar35SA"};
    magazines[] =
    {
		LIST_3("SWLW_westar35sa_Mag")
    };
    items[] = {"murshun_cigs_cigpack", "murshun_cigs_lighter", "ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","Chemlight_green","Chemlight_green"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};

class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"SWLW_WestarM5"};
	magazines[] +=
    {
        LIST_10("SWLW_WestarM5_standard_Mag"),
        LIST_2("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_2("rhs_mag_an_m8hc")
	};
};

class dmr : r {
    displayName = "marksman";
	primaryWeapon[] = {"SWLW_Sniper"};
	scope[] = {"swlw_sniper_scope"};
	magazines[] +=
    {
        LIST_10("SWLW_sniper_Mag"),
        LIST_2("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_2("rhs_mag_an_m8hc")
	};
};

class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"SWLW_WestarM5_ugl"};
    magazines[] =
    {
        LIST_10("SWLW_WestarM5_standard_Mag"),
		LIST_8("SWLW_WestarM5_g_Mag"),
		LIST_3("SWLW_westar35sa_Mag"),
        LIST_2("JMSLLTE_thermaldetonator_HandGrenade")
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"SWLW_westar35c"};
    magazines[] =
    {
        LIST_10("SWLW_westar35c_Mag"),
		LIST_2("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("SWLW_westar35sa_Mag")
    };
};

class m : car
{
    displayName = "Medic";
	backpack[] = {"ls_mandalorian_medic_backpack"};
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
    vest[] = {"ls_mandalorian_vizslaSergeant_vest"};
	backpack[] = {"ls_mandalorian_rto_backpack"};
	headgear[] = {"ls_mandalorian_vizslaSergeant_helmet"};
	items[] += {"ACE_EntrenchingTool"};
    linkedItems[] += {"SWLB_clone_binocular"};
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
        "SWLB_clone_commander_binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	vest[] = {"ls_mandalorian_vizslaCaptain_vest"};
	headgear[] = {"ls_mandalorian_vizslaCaptain_helmet"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class mmg : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"SWLW_LS150"};
    magazines[] =
    {
        LIST_3("SWLW_LS150_mag"),
		LIST_1("JMSLLTE_thermaldetonator_HandGrenade"),
		LIST_1("rhs_mag_an_m8hc"),
		LIST_3("SWLW_westar35sa_Mag"),
    };
};

class mmga : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] +=
    {
        LIST_1("SWLW_LS150_mag")
    };
    linkedItems[] += {"SWLB_clone_binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"SWLW_E60R"};
	magazines[] +=
    {
		LIST_2("SWLW_e60r_ap_mag")
    };
};

class p : car
{
    displayName = "Pilot";
	items[] += {"ACRE_PRC148"};
};