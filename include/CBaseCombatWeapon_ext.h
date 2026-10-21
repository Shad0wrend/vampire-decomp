	char sub_102524f0(CBaseCombatCharacter *pOwner);	// like sub_102525e0 but compares the ammo table entry's value plus the owner's field at +0x2668 with the clip (+0x74c) plus the character's ammo count of the type at +0x744
	void sub_10253110();	// stub 0x100138fe, called directly by vfunc321
	void sub_10257640();	// stub 0x10005d30, tail called at the end of vfunc321
	int vfunc361(int act);	// slot 361 "CBaseCombatWeapon::ActivityOverride": looks act up in the weapon's activity translation table (slots 362 / 363); the record's weapon activity is returned when the owner's model has a sequence for it (or the owner's player object's), else act
	void sub_1024f7b0();	// stub 0x10003ca1: run on a weapon the owner just gave up
