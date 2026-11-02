	char sub_102524f0(CBaseCombatCharacter *pOwner);	// like sub_102525e0 but compares the ammo table entry's value plus the owner's field at +0x2668 with the clip (+0x74c) plus the character's ammo count of the type at +0x744
	void sub_10253110();	// stub 0x100138fe, called directly by vfunc321
	void sub_10257640();	// stub 0x10005d30, tail called at the end of vfunc321
	int vfunc361(int act);	// slot 361 "CBaseCombatWeapon::ActivityOverride": looks act up in the weapon's activity translation table (slots 362 / 363); the record's weapon activity is returned when the owner's model has a sequence for it (or the owner's player object's), else act
	void sub_1024f7b0();	// stub 0x10003ca1: run on a weapon the owner just gave up
	int sub_1008dc40(int a, int b);	// CBaseAnimating::SelectWeightedSequence (stub 0x100125c1), called directly on the weapon
	void sub_1008df10(void *pArg);	// CBaseAnimating::vfunc130 (stub 0x10009e6c), called directly by vfunc130
	void sub_10090950();	// CBaseAnimating member (stub 0x100117b1), called directly
	float sub_10091080(int sequence);	// CBaseAnimating::SequenceDuration (stub 0x10009813), called directly
	void sub_10095030(const char *pszName);	// CBaseAnimating::vfunc105 (stub 0x10005100), called directly by vfunc105
	void sub_100adf10(const float *mins, const float *maxs);	// CBaseEntity::SetSize (stub 0x100115e0), called directly
	void sub_1009ee80(CBaseEntity *pEnt);	// "CBaseEntity::SetAimEnt" (stub 0x10003df5), called directly by vfunc299
	void sub_100b2770(const float *pVelocity);	// the absolute velocity setter (stub 0x1000489a), called directly by vfunc299
	void sub_100ac610(float time, const char *szContext);	// "CBaseEntity::SetNextThink" (stub 0x1000326f), called directly
	void sub_1024f840();	// stub 0x1000aec5: the weapon's world setup (bounds, solid flags, think), run by vfunc103 and vfunc299
	void sub_10252e30(CBaseEntity *pPlayer);	// 0x10252e30: with a player whose character (+0xa8) accepts this weapon (CBaseCombatCharacter::sub_10173f90(this, 0, 0, 0)), slot 341 picks it up
	bool sub_10239170();	// true when the weapon's current roll slot (sub_102517e0) has a loaded clip (+0x74c + 4 * the slot's ammo index at +0x10c) and vfunc277(0) holds
