
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"OPTRE_UNSC_ODST_Uniform"};
	vest[] = {"OPTRE_UNSC_M52D_Armor_Rifleman"};
    sidearmWeapon[] = {"OPTRE_M6G_SF"};
	sidearmAttachments[] = {"OPTRE_M6G_Scope","OPTRE_M6G_Flashlight"};
    headgear[] = {"OPTRE_UNSC_CH252D_Helmet"};
	backpack[] = {"OPTRE_ILCS_Rucksack_Black"};
    items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","OPTRE_NVG","ItemGPS"};
	magazines[] =
    {
        LIST_3("OPTRE_8Rnd_127x40_Mag_Tracer"),
        LIST_2("OPTRE_M2_Smoke"),
		LIST_2("OPTRE_M9_Frag"),
		LIST_1("OPTRE_M2_Smoke_Green")
    };
};

class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"OPTRE_MA5C_AC"};
	scope[] = {"OPTRE_MA5C_SmartLink"};
	magazines[] +=
    {
        LIST_10("OPTRE_32Rnd_762x51_Mag_Tracer"),
	};
};

class g : r
{
    displayName = "Grenadier";
	primaryWeapon[] = {"OPTRE_MA5CGL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
    };
};

class smg : base
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"OPTRE_M7S"};
	scope[] = {"OPTRE_M7_Sight"};
    magazines[] +=
    {
        LIST_6("OPTRE_60Rnd_5x23mm_Mag_tracer"),
    };
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"OPTRE_MA5K"};
	scope[] = {"OPTRE_M393_EOTECH"};
};

class m : smg
{
    displayName = "Medic";
	vest[] = {"OPTRE_UNSC_M52D_Armor_Medic"};
	backpack[] = {"OPTRE_ILCS_Rucksack_Medical"};
	backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_5("OPTRE_Biofoam"),
			LIST_20("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_bloodIV_250"),
			LIST_5("ACE_bloodIV_500"),
			LIST_2("ACE_bloodIV"),
			LIST_10("ACE_splint"),
			LIST_3("OPTRE_M2_Smoke_Green")
	};
};

class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
	magazines[] +=
    {
		LIST_3("OPTRE_1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("OPTRE_1Rnd_SmokeRed_Grenade_shell"),
		LIST_3("OPTRE_1Rnd_Smoke_Grenade_Shell"),
    };
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
        "Rangefinder"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : sl
{
    displayName = "Forward Air Controller";
	backpack[] = {"OPTRE_ANPRC_515"};
	magazines[] =
    {
        LIST_4("1Rnd_HE_Grenade_shell"),
		LIST_3("OPTRE_1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("OPTRE_1Rnd_SmokeRed_Grenade_shell"),
		LIST_3("OPTRE_1Rnd_Smoke_Grenade_Shell"),
		LIST_10("OPTRE_32Rnd_762x51_Mag_Tracer"),
		LIST_3("OPTRE_8Rnd_127x40_Mag_Tracer")
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"OPTRE_M73"};
	backpack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
	bipod[] = {"bipod_01_f_blk"};
    magazines[] =
    {
        LIST_4("OPTRE_100Rnd_95x40_Box_Tracer"),
        LIST_2("OPTRE_M2_Smoke"),
		LIST_2("OPTRE_M9_Frag"),
		LIST_1("OPTRE_M2_Smoke_Green"),
		LIST_1("ACE_SpareBarrel")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
    backpackItems[] =
    {
        LIST_3("OPTRE_100Rnd_95x40_Box_Tracer"),
		LIST_2("ACE_SpareBarrel")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"OPTRE_M41_SSR"};
	magazines[] +=
    {
		LIST_1("OPTRE_M41_Twin_HEAT"),
    };
};
class dm : base
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"OPTRE_M392_DMR_ScopedRifle"};
    scope[] = {"OPTRE_M392_Scope"};
    magazines[] +=
    {
        LIST_10("OPTRE_15Rnd_762x51_Mag_Tracer"),
    };
};
class matg : smg
{
    displayName = "MAT Gunner";
	vest[] = {"OPTRE_UNSC_M52D_Armor_Scout"};
	backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
    secondaryWeapon[] = {"OPTRE_M41_SSR_G"};
    magazines[] +=
    {
        LIST_2("OPTRE_M41_Twin_HEAT_G")
    };
	items[] += {"ACRE_PRC148"};
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
	vest[] = {"OPTRE_UNSC_M52D_Armor_Scout"};
	backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
    backpackItems[] =
    {
        LIST_2("OPTRE_M41_Twin_HEAT_G")
    };
};
class matag : smg
{
    displayName = "MAT Assistant Gunner";
	vest[] = {"OPTRE_UNSC_M52D_Armor_Scout"};
	backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
    linkedItems[] +=
    {
        "Rangefinder",
            };
    backpackItems[] =
    {
        LIST_2("OPTRE_M41_Twin_HEAT_G")
    };
};
class sn : base
{
    displayName = "Sniper";
	vest[] = {"OPTRE_UNSC_M52D_Armor_Scout"};
    primaryWeapon[] = {"OPTRE_SRS99D_SC_LS"};
	backpack[] = {""};
    scope[] = {"OPTRE_SRS99_Scope"};
    magazines[] +=
    {
        LIST_10("OPTRE_4Rnd_145x114_APFSDS_Mag"),
       };
	  items[] += {"ACRE_PRC148"};
};
class sp : smg
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
	vest[] = {"OPTRE_UNSC_M52A_Armor3_MAR"};
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
    headgear[] = {"OPTRE_UNSC_CH252_Helmet_Vacuum_MAR"};
	items[] += {"ACRE_PRC148"};
};
class pcc : vd
{

    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};

//EXTRA LOADOUT - NOT STANDARD, USE AS YOU WISH

class br : dm
{
    displayName = "Battle Rifleman";
    primaryWeapon[] = {"OPTRE_BR55HB_ScopedRifle"};
    scope[] = {"OPTRE_BR55HB_Scope"};
    magazines[] +=
    {
        LIST_10("OPTRE_36Rnd_95x40_Mag_Tracer"),
    };
};

class sh : smg
{
    displayName = "Breacher";
    primaryWeapon[] = {"OPTRE_M45"};
    magazines[] +=
    {
        LIST_12("OPTRE_6Rnd_8Gauge_Pellets"),
    };
};

//BELOW CLASSES USE 60 ROUND MAGS ONLY, IF YOU USE THESE, YOU MUST CHANGE THE CLASS CONNECTIONS FOR ALL PREVIOUS CLASSES.
//EG, CHANGE AAR TO CONNECT TO "R60" ETC

class r60 : base {
    displayName = "rifleman 60round";
	primaryWeapon[] = {"OPTRE_MA5B"};
	magazines[] +=
    {
        LIST_8("OPTRE_60Rnd_762x51_Mag_Tracer"),
	};
};


class g60 : r60
{
    displayName = "Grenadier 60round";
	primaryWeapon[] = {"OPTRE_MA5BGL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
    };
};