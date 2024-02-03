
class base {
    displayName = "base";
    uniform[] = {"JMSLLTE_ScumSnow_base_F_CombatUniform"};
    vest[] = {"JMSLLTE_SnowCommandoBelt_armor"};
	backpack[] = {"JMSLLTE_back_rebpack_v1_snow"};
    headgear[] = {"JMSLLTE_Snow_1_helmet"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};

class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"JMSLLTE_a280stock"};
	magazines[] +=
    {
        LIST_10("JMSLLTE_A280_30Rnd_Mag"),
        LIST_2("ls_mag_classA_thermalDet"),
		LIST_2("rhs_mag_an_m8hc")
	};
};


class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"JMSLLTE_dh17rifle"};
    magazines[] =
    {
        LIST_10("JMSLLTE_DH17_60Rnd_Mag"),
		LIST_2("ls_mag_classA_thermalDet"),
		LIST_1("rhs_mag_an_m8hc")
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"JMSLLTE_a300c"};
    magazines[] =
    {
        LIST_10("JMSLLTE_A300_30Rnd_Mag"),
		LIST_2("ls_mag_classA_thermalDet"),
		LIST_1("rhs_mag_an_m8hc")
    };
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"JMSLLTE_back_rebsmall_v1"};
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

class ftl : r
{
    displayName = "Fireteam Leader";
	primaryWeapon[] = {"JMSLLTE_a280c"};
    magazines[] +=
    {
        LIST_10("JMSLLTE_A280C_20rnd_Mag"),
        LIST_2("ls_mag_classA_thermalDet"),
		LIST_2("rhs_mag_an_m8hc")
	};
	linkedItems[] += {"JMSLLTE_W_TD23_black_F"};
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
    primaryWeapon[] = {"JMSLLTE_rt97cBlasterRifle"};
    magazines[] =
    {
        LIST_5("JMSLLTE_RT97C_150Rnd_Mag"),
		LIST_1("ls_mag_classA_thermalDet"),
		LIST_1("rhs_mag_an_m8hc"),
    };
};

class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("JMSLLTE_RT97C_150Rnd_Mag")
    };
    linkedItems[] += {"JMSLLTE_W_TD23_black_F"};
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

class p : base
{
    displayName = "Pilot";
	uniform[] = {"JMSLLTE_ScumPilot_orange_F_CombatUniform"};
	headgear[] = {"JMSLLTE_Pilot_white_helmet"};
	sidearmWeapon[] = {"JMSLLTE_dl44pistol"};
	magazines[] +=
    {
        LIST_5("JMSLLTE_DL44_10rnd_Mag"),
		LIST_2("rhs_mag_an_m8hc")
	};
	items[] += {"ACRE_PRC148"};
};

class vc : smg
{
    displayName = "Vehicle Crew";
	headgear[] = {"JMSLLTE_Path_1_black_cap"};
	backpackItems[] += {"ToolKit"};
};

class vo : vc
{
    displayName = "Vehicle Officer";
	linkedItems[] += {"JMSLLTE_W_TD23_black_F"};
	items[] += {"ACRE_PRC148"};
};

class sn : r {
    displayName = "Sniper";
	primaryWeapon[] = {"JMSLLTE_dlt20a"};	
	scope[] = {"jmsltte_a280c_bl_scope"};
    magazines[] =
    {
        LIST_8("JMSLLTE_DLT20a_10Rnd_Mag"),
		LIST_2("ls_mag_classA_thermalDet"),
		LIST_1("rhs_mag_an_m8hc")
    };
};