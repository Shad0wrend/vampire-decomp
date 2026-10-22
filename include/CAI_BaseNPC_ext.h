	bool sub_1027e140(const Vector *pMove, int mask);	// "TryMove": traces from the absolute origin (slot 217) by pMove with mask (sub_101cd110); with the whole way free (and, for entities with flag bit 11, a point contents check at the end point) moves there (slot 216), runs PhysicsTouchTriggers(0) and returns true
	void sub_100a53d0(int a);	// CBaseEntity::PhysicsTouchTriggers (stub 0x10005bcd), called directly
	void sub_10273070(char bForce);	// "CAI_BaseNPC::InitHull"-like: checks the hull (+0x1568) is among the hulls the class precached (DevMsg \"ERROR\" block when not), then, when the hull is not set up yet (byte +0x5f2d) or bForce, sets the hull size and clears the byte; with a navigator object at +0x36c runs sub_10272f40
	void sub_10272f40();	// stub 0x100081c0
