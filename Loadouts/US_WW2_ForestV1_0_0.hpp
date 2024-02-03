
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"fow_u_us_m41_01_private"};
    vest[] = {"fow_v_us_garand"};
    backpack[] = {"fow_b_us_m1944"};
    headgear[] = {"fow_h_us_m1","fow_h_us_m1_closed","fow_h_us_m1_folded"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"fow_w_m1_garand"};
	magazines[] +=
    {
		LIST_10("fow_8Rnd_762x63"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"vn_m1a1_tommy"};
    magazines[] =
    {
        LIST_10("vn_m1a1_30_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"fow_w_m1_carbine"};
	magazines[] =
    {
        LIST_8("fow_15Rnd_762x33"),
        LIST_2("fow_e_mk2"),
		LIST_2("LIB_US_M18")
    }; 
};
class m : car
{
    displayName = "Medic";
	vest[] = {"fow_v_us_carbine"};
	headgear[] = {"fow_h_us_m1_medic"};
	backpack[] = {"fow_b_uk_bergenpack"};
	 backpackItems[] +=
	 {
			LIST_20("ACE_elasticBandage"),
			LIST_20("ACE_packingBandage"),
			LIST_10("ACE_morphine"),
			LIST_10("ACE_epinephrine"),
			LIST_5("ACE_tourniquet"),
			LIST_3("ACE_bloodIV_250"),
			LIST_3("ACE_bloodIV_500"),
			LIST_10("ACE_splint")
			
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"fow_w_m3"};
    magazines[] =
    {
        LIST_10("fow_30rnd_45acp"),
		
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"fow_h_us_m1_nco"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	headgear[] = {"fow_h_us_m1_officer"};
	backpack[] = {"fow_b_us_radio"};
	items[] += {"ACRE_PRC148"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
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
	headgear[] = {"fow_h_us_m1","fow_h_us_m1_closed","fow_h_us_m1_folded"};
	backpack[] = {"fow_b_us_radio"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"fow_v_us_bar"};
    primaryWeapon[] = {"fow_w_m1918a2"};
    magazines[] =
    {
        LIST_8("fow_20rnd_762x63")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	linkedItems[] += {"Binocular"};
    backpackItems[] =
    {
        LIST_8("fow_20rnd_762x63")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
	backpackItems[] +=
	 {
			LIST_1("fow_1rnd_m6a1"),
			
	};	
};

class vd : smg
{
    displayName = "Vehicle Driver";
	uniform[] = {"fow_u_us_pilot_01"};
    backpackItems[] = {"ToolKit"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
	items[] += {"ACRE_PRC148"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
};