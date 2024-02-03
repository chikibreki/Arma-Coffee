class baseMan {
    displayName = "Base";
    // All randomized.
    uniform[] = {"OPTRE_MJOLNIR_Undersuit"};
    vest[] = {"OPTRE_MJOLNIR_Mk4Armor_Red"};
    backpack[] = {"OPTRE_UNSC_Rucksack_Spartan"};
    headgear[] = {"OPTRE_MJOLNIR_Mk4Helmet_Red"};
    goggles[] = {};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"Default"};
    // Leave empty to not change faces.
    insignias[] = {};
    // Leave empty to not change insignias

    // All randomized
    primaryWeapon[] = {"OPTRE_MA5C"};
    scope[] = {"optre_m7_sight"};

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"OPTRE_M6G"};
    sidearmAttachments[] = {"optre_m6g_scope"};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = 
	{
		LIST_10("OPTRE_32Rnd_762x51_Mag"),
		LIST_4("OPTRE_8Rnd_127x40_AP_Mag"),
        LIST_2("OPTRE_M2_Smoke"),
		LIST_2("OPTRE_M9_Frag"),
		LIST_1("OPTRE_M2_Smoke_Green")		
	};
    items[] = {"ACRE_PRC343","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_morphine","ACE_splint","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
		"ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
