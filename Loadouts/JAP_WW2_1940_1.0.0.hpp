
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"EAW_Type90_Uniform_Transition"};
    vest[] = {"EAW_Type90_RifleKit"};
    headgear[] = {"EAW_Type92"};
    items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_splint","ACE_tourniquet"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class r : base {
    displayName = "rifleman";
	primaryWeapon[] = {"EAW_Type38_Base_Bayonet"};
    attachment[] = {"eaw_type30_bayonet_attach"};
	magazines[] +=
    {
        LIST_15("EAW_Type38_Magazine"),
        LIST_2("EAW_Type91_Mag")
    }; 
};

class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"EAW_Type38_Carbine"};
	attachment[] = {""};
};

class g : r
{
    displayName = "Grenadier";
    vest[] = {"EAW_Type90_GrenadierKit"};
	secondaryWeapon[] = {"EAW_Type89_Discharger"};
    magazines[] +=
    {
        LIST_8("EAW_Type89_Grenade_HE"),
    };
};

class m : car
{
    displayName = "Medic";
	uniform[] = {"EAW_Type90_SenPrivate_Uniform_Transition"};
    vest[] = {"EAW_Type90_RifleKit_Medic"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
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
    primaryWeapon[] = {"EAW_MP28"};
	vest[] = {"EAW_IJA_SMG_Kit"};
    magazines[] =
    {
        LIST_10("EAW_MP28_20_Magazine"),
		LIST_2("EAW_Type91_Mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	uniform[] = {"EAW_Type90_Sergeant_Uniform_Transition"};
	vest[] = {"EAW_Type90_RifleKit_Type95"};
	sidearmWeapon[] = {"EAW_Type95"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	uniform[] = {"EAW_Type90_2LT_Uniform_Transition"};
};

class co : sl
{
    displayName = "Platoon Leader";
	uniform[] = {"EAW_Type90_Captain_Uniform_Transition"};
};


class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"EAW_IJA_LMG_Kit"};
    primaryWeapon[] = {"EAW_Type96"};
    magazines[] =
    {
        LIST_4("EAW_Type96_Magazine"),
		LIST_1("EAW_Type91_Mag"),
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	vest[] = {"EAW_IJA_LMG_AmmoBearer_Kit"};
	backpack[] = {"EAW_Japanese_Backpack_Type5"};
    backpackItems[] =
    {
        LIST_4("EAW_Type96_Magazine")
    };
    linkedItems[] += {"Binocular"};
};

class rad : car
{
	displayName = "Radio Operator";
	uniform[] = {"EAW_Type90_SenPrivate_Uniform_Transition"};
	backpack[] = {"vn_o_pack_t884_01"};
	items[] += {"ACRE_PRC148"};
};