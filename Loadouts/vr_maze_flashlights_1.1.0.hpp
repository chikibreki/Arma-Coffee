
tooltip = "Author: GunnerRya\n\n";

class base {
    displayName = "base";
    uniform[] = {"U_C_Protagonist_VR"};
    vest[] = {""};
    backpack[] = {};
    headgear[] = {};
    primaryWeapon[] = {"ACE_Flashlight_Maglite_ML300L"};
    primaryAttachments[] = {};
    secondaryAttachments[] = {};
    sidearmAttachments[] = {};
    magazines[] = {};
    items[] = {"ACRE_PRC343","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_IR_Strobe_Item","ACE_morphine","ACE_splint"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class purple : base {
    displayName = "purple";
    uniform[] = {"U_C_Protagonist_VR"};
};
	
	class red : base {
    displayName = "red";
    uniform[] = {"U_O_Protagonist_VR"};
};
	
	class blue : base {
    displayName = "blue";
    uniform[] = {"U_B_Protagonist_VR"};
};
	
	class green : base {
    displayName = "green";
    uniform[] = {"U_I_Protagonist_VR"};
};
