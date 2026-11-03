	bool sub_1027e140(const Vector *pMove, int mask);	// "TryMove": traces from the absolute origin (slot 217) by pMove with mask (sub_101cd110); with the whole way free (and, for entities with flag bit 11, a point contents check at the end point) moves there (slot 216), runs PhysicsTouchTriggers(0) and returns true
	void sub_100a53d0(int a);	// CBaseEntity::PhysicsTouchTriggers (stub 0x10005bcd), called directly
	void sub_10273070(char bForce);	// "CAI_BaseNPC::InitHull"-like: checks the hull (+0x1568) is among the hulls the class precached (DevMsg "ERROR" block when not), then, when the hull is not set up yet (byte +0x5f2d) or bForce, sets the hull size and clears the byte; with a navigator object at +0x36c runs sub_10272f40
	void sub_10272f40();	// stub 0x100081c0
	Vector vfunc574(const Vector &vecPos, int a, int b);	// slot 574 (plain member): the unit direction from vecPos to the point sub_10278650 finds for (vecPos, a, b) -- (point - vecPos) normalised, returned by value
	Vector sub_10278650(const Vector &vecPos, int a, int b);	// stub 0x1001592e, called directly by vfunc574, returns a Vector by value
	void sub_102697b0();	// a think function (next think 0.1 s ahead): while a player (1..maxClients) is closer than 256 units, or within 1500 units and looking at this NPC (the player's view angles at +0x206c), it keeps waiting; otherwise the next think is the function 0x10015b68 (SetThink via sub_100ac4e0)
	void sub_10269f30(int condition);	// "CAI_BaseNPC::ClearCondition" (stub 0x1000c39c): ids below 1000000000 (and -1) are translated through slot 580 first, then the condition bit in the array at +0x5c5c is cleared
	float sub_1027db80(const Vector *pDir);	// the yaw for a direction: the NPC's own yaw (angles, slot 221, y) for a zero direction, else sub_101d2c70(pDir)
	void sub_10266690(void *pInfo, void *pOther);	// hands the damage record pInfo (its damage, 2.5 times) and the point that slot 217 gives for pOther to the rules' slot 33
	const char *sub_1027f290(int unused);	// the class name of the NPC type id at +0x1b2c (a switch over 0..0x2b returning "NONE", "AI_BASENPC", ... "NPC_VZOMBIE"; "**UNKNOWN**" otherwise); takes one unused stack argument
	void sub_10273790(const char *pszRelationship, CBaseEntity *pActivator);	// \"CAI_BaseNPC::AddRelationship\" (stub 0x1000421e): parses \"[entityname|entityclass|player] [D_HT|D_FR|D_LI|D_NU] [priority]\" groups with strtok and adds the entity / class relationships; the activator is unused
	void vfunc504();	// slot 504 (plain member): does nothing, a bare ret
	void vfunc558();	// slot 558 (plain member): does nothing, a bare ret
	void vfunc411();	// slot 411 (plain member): does nothing, a bare ret
	void vfunc511();	// slot 511 (plain member): sends the edict at +0x2e0 to the engine (IndexOfEdict-style slot 35 of 0x1070b22c with a 1) and gives the index to the sound system's slot 5
	void vfunc412();	// slot 412 (plain member): GetLastThink of the default context (sub_100ac720(0)), result unused
	void vfunc413();	// slot 413 (plain member): the same as slot 412
