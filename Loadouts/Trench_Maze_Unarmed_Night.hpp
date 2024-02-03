class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"vn_o_uniform_nva_army_08_03","vn_b_uniform_macv_06_02","vn_o_uniform_nva_navy_03","vn_o_uniform_nva_army_04_01","vn_b_uniform_macv_06_08","vn_b_uniform_macv_01_03"};
    vest[] = {"vn_b_vest_usarmy_01"};
    backpack[] = {"vn_o_pack_05","vn_b_pack_trp_03","vn_b_pack_m5_01","vn_b_pack_trp_03_02","vn_c_pack_01","vn_o_pack_04"};
    headgear[] = {};
    goggles[] = {};
    hmd[] = {};

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"vn_mx991_m1911"};
    sidearmAttachments[] = {};
    magazines[] = 
	{
		LIST_2("vn_m1911_mag")
	};
    items[] = 
	{
		LIST_2("ACE_elasticBandage")
	};
    // These are added directly into their respective slots
    linkedItems[] = {};

    // These are put into the backpack
    backpackItems[] = {};

};
