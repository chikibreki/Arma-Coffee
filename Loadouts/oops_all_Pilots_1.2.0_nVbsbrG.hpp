
tooltip = "Author: Pouchy\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_LIB_US_Pilot_2"};
    vest[] = {"V_LIB_SOV_RA_MosinBelt"};
    backpack[] = {"fow_b_parachute"};
    headgear[] = {};
    primaryWeapon[] = {};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_Chemlight_White"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class r : base {
    displayName = "US_pilot";
    headgear[] = {"H_LIB_US_Helmet_Pilot_Respirator_Glasses_Down"};
	uniform[] = {"U_LIB_US_Pilot_2"};
    vest[] = {"V_LIB_SOV_RA_MosinBelt"};
    backpack[] = {"fow_b_parachute"};
	sidearmWeapon[] = {"vn_m1911"};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("vn_m1911_mag"),
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class g : base {
    displayName = "GER_pilot";
    headgear[] = {"H_LIB_GER_LW_PilotHelmet"};
	uniform[] = {"U_LIB_GER_LW_pilot"};
    vest[] = {"V_LIB_SOV_RA_MosinBelt"};
    backpack[] = {"fow_b_parachute"};
	sidearmWeapon[] = {"LIB_P08"};
    sidearmAttachments[] = {};
	magazines[] +=
    {
        LIST_10("LIB_8Rnd_9x19_P08"),
    }; 
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};