	void vfunc338(int a, char b, int c);	// slot 338: CBaseCombatCharacter::AddPreDisciplineEffect (0x1033cc30), a narrow second argument
	void sub_1033cc30(int a, char b, int c);	// CBaseCombatCharacter::AddPreDisciplineEffect, called directly
	void sub_101728b0();	// resets +0x20e8 to -1, clears +0x229a / +0x1a84 / +0x1a94, then slot 444
	void vfunc21(int a);	// slot 21 (plain member): stamps m_f1DD0 with gpGlobals->curtime
	void vfunc22(int a);	// slot 22 (plain member): stamps m_f1DD0 with gpGlobals->curtime
	void vfunc23(int a);	// slot 23 (plain member): stamps m_f1DD0 with gpGlobals->curtime
	void vfunc130(char bFlag);	// slot 130: CBaseCombatCharacter::vfunc130, then resets the vector pair at +0x1efc / +0x1f08, the stat-bound fields (+0x1adc.. / +0x1b20..) and the keyring
	void sub_1000bfcd(char bFlag);	// CBaseCombatCharacter::vfunc130, called directly
	void sub_1017cc20(const char *pszQuest, int nStep);	// "SetQuest" (the Python SetQuest(name, step) call): the global journal's quest of that name, when it has that step: stamps the quest's order number (+0xc) when it has none, makes step - 1 current (+0x10), and when sub_10182420 allows runs the completion state: money (sub_10340e50), a hud message, a Python snippet in __main__ (PyRun_ConsoleString), sub_1017c900(1), sub_10182260, and the view message (sub_101cebc0(this, 7, 0)) for a state of kind 2
	void sub_10340e50(int amount);	// CBaseCombatCharacter::MoneyAdd worker (stub 0x1000a5fb), called directly
	char sub_10182420(int iQuest, int iStep);	// stub 0x1001140f: whether the quest step may be completed now
	void sub_1015f630(const char *pszAward);	// stub 0x100153c5, function 0x1015f630: "GiveExperienceAward": unless the name is empty or already in m_Awards1d7c (Q_strnicmp over the name's length), finds the award (g_10750930 CExperienceTable::sub_10222500, -1 returns), sub_101cebc0(this, 0x17, idx), exp = sub_10222670(idx)->m_b (+8) (>= 300: plus (int)(stat 0x1d of the stat list set with type 0, via CVStatListSet::Of(this)->Find(0) -> sub_102012d0(0x1d)) * 100.0f, at least 100), sub_1015f8b0((float)exp, 1), then appends a 0x34-byte CBasePlayerAward (Q_strncpy name, 0x30) to m_Awards1d7c
	void sub_1015f8b0(float flAmount, char bFlag);	// stub 0x10012f62 (function 0x1015f8b0, matched as CBasePlayerUnit::sub_1015f8b0): adds flAmount to m_flExperience19F8 and m_flExperience19FC; every 100 points go to stat 0x22 (and the view message sub_101cebc0(this, 9, n) when bFlag)
	void sub_1017c900(char bFlag);	// stub 0x100050ec
	void sub_10182260(const char *pszQuest, int iQuest, int iStep, int iOrder);	// stub 0x1000b195: tells the quest log about the step
	void sub_1017d6d0(float flMinimum);	// extends the running fade: the longest fade time of the entities at +0x19c0 / +0x19cc (slot 53) and flMinimum becomes the new duration (negative = fading out) when the current one is not running out
	int vfunc126(int a);	// slot 126 (plain member): the three save-state arrays (+0x1ce0 / +0x1ce4 / +0x1cf8) are prepared, the flag bytes at +0x1dc0 / +0x1dc8 and the timer at +0x1564 updated, the field at +0x1e24 created when empty, then CBaseCombatCharacter::vfunc126(a), the arrays handed back and a final cleanup of a
	int sub_10348980(int a);	// CBaseCombatCharacter::vfunc126 (stub 0x1000e534), called directly
	void sub_1016fa90();	// stub 0x10008e77, run when the field at +0x1e24 had to be created
	int sub_10178470(CBaseEntity *pKeyring);	// stub 0x100075a9: a value derived from the keyring item the player holds (negative when none), the hud message argument of the lock code
	void sub_101710b0(const Vector *pImpulse);	// slot 169 "CBasePlayer::vfunc169" (plain member): in the cases the global at 0x10725de4 allows adds 20 * pImpulse to the vector at +0x1f08
	void sub_1017f170(void *pSpawner);	// the immediate cop spawn of a "CSActs" spawner entity: DevMsg when the global at 0x107258dc allows, fires the output of the spawner picked by the state at +0x1dcc (0: +0x450, 1/2: +0x468, 3/4: +0x480), the +0x4c8 / +0x4e0 outputs by the two state checks, and resets the state fields (+0x1d10 / +0x1d14 / +0x1dc4 / +0x1dc8 / +0x1dcc)
	void sub_10335470(void *pWeapon);	// CBaseCombatCharacter member (stub 0x10013601): takes the weapon (the carried-weapon lookup of the "give up weapon" path), called with the result of sub_10335950
	void vfunc151(CBaseCombatWeapon *pWeapon);	// slot 151 (plain member): a weapon is being removed from the player: when it is the active weapon runs sub_10177120, its slot 316(0), clears its next think and its think function, zeroes +0x1c50; clears the handles at +0xea4 (slot 443(0)), +0x10dc and +0x10e0 that name it, then sub_1032cbe0(pWeapon)
	void sub_1032cbe0(CBaseCombatWeapon *pWeapon);	// CBaseCombatCharacter member (stub 0x10004877), called directly by vfunc151
	void sub_10164040(int type, int *pActivity, int *pOut);	// the thaumaturgy purge step of the activity machine (called by slot 417): for type 0xc steps the activity at +0xff0 through 0x1065 -> 0x1066 (the blood pool at +0x14a0 drains by up to 2 per call until a "Thaumaturgy_Purge" discipline check passes) -> 0x1067 -> 1; stores the activity in *pActivity and 0 in *pOut
	void sub_101641d0(int type);	// type 0xc with the byte at +0x1cb0 set: runs sub_10164040 and hands its results to sub_101644f0(.., .., 1), then stores 0xc at +0x1cb4
	char sub_10338df0(char bFlag);	// CBaseCombatCharacter::DecBloodPool-like (scope traced), called directly with 1
	char sub_1033d2f0(unsigned int discipline);	// CBaseCombatCharacter member (stub 0x1000d3d7): whether the character has the discipline, called directly
	char vfunc425(CBaseEntity *pTarget);	// slot 425 "BeFedOnByZombie": false while the grapple target (handle +0x1538, +0x153c set) is live; with pTarget and a successful sub_10328df0(pTarget, 8): the active weapon gets slot 66, the target flags (+0x14a8 / +0x1475) are set and the fade times (+0x1478 / +0x147c) stamped, true; otherwise false, with feed trace messages when the dev flag object allows
	char sub_10328df0(CBaseEntity *pTarget, int a);	// stub 0x1000df99: starts the grapple attack on pTarget
	char vfunc420(int unused);	// slot 420 (plain member): the activity machine of slot 422 for the activities 0xfa5 / 0xfae -> 0xfc0 or 0xfb7 by the target's stat 0xc, or 0xfae while +0x14a8 is set
	char vfunc422(int unused);	// slot 422 (plain member): runs sub_101644f0(-1, 0, 0), drops the target flags (+0x14a8 / +0x1475 / +0x1478) unless the target of the handle at +0x1538 (when +0x153c is set) answers slot 158, and with the byte at +0x65c set steps the activity at +0xff0 (0x1027: starts the activity 0x1039, or 0x1030 while +0x14a8 is set; 0x1030: remembers the target in the handle at +0x149c and starts 0x1039 unless sub_103395f0 holds); false except for other activities
	char sub_103395f0();	// CBaseCombatCharacter member (stub 0x1000c8a1), called directly by vfunc422
	char vfunc419(int unused);	// slot 419 (plain member): the same activity machine as slot 422 for the activities 0xf5b / 0xf64 -> 0xf91 / 0xf9a, or 0xf76 while +0x14a8 is set; 0xf76 / 0xf7f -> 0xf7f (and the byte +0x1b6c) while +0x14a8 and sub_103395f0 hold, else 0xf88 / 0xf9a by slot 426); true for other activities, false otherwise
	void vfunc112(int unused, int nArg);	// slot 112 (plain member): when nArg is the value at +0x14b0 and +0x14b4 is set, sub_10099400 accepting it starts the activity (sub_101644f0(-1, x, 1)) of +0x14b0 when sub_10099430(0) holds, else of +0x14b4
	char sub_10099400(int a);	// stub 0x100082b0 (function 0x10099400)
	char sub_10099430(int a);	// stub 0x10001f19 (function 0x10099430)
	char vfunc423(int unused);	// slot 423 (plain member): the same activity machine as slot 419 for the activities 0xfca / 0xfd3 (-> 0x1000 / 0x1009 by slot 427, or 0xfdc while +0x14a8 is set) and 0xfdc / 0xfe5 (-> 0xfe5 and the byte +0x1b6c while +0x14a8 and sub_103395f0 hold, else 0xff7 / 0x1009 by slot 427); true for other activities, false otherwise
	void sub_1016b270();	// the discipline effect tick (called by slot 436): every 2 seconds, for each of the eight effect bits 0x8000 << i set in the mask at +0xe98: heals 10 per tick (TakeHealth, slot 143) towards the target of the effects 2 (counters +0x228c / +0x2290) and 4 (+0x2284 / +0x2288), and counts the per-bit byte at +0xe9c + i down, clearing the bit when it reaches zero
	void sub_1015ef40();	// stub 0x10011f68 (function 0x1015ef40): sets the byte at +0x19f7
	void sub_1015ef60();	// stub 0x1000336e (function 0x1015ef60), run by the use-entity hooks of the props
	void sub_10167fd0();	// stub 0x10014a6a (function 0x10167fd0), called directly
	void sub_10178590(Vector vecPos);	// stub 0x1000c79d (function 0x10178590): takes a position by value
	void sub_101815b0(unsigned int flags);	// stub 0x10008562 (function 0x101815b0): clears the flag bits in the word at +0x1d60
	CBaseEntity *sub_10161d20();	// resolves the placeholder entity of the handle at +0x1da4 (looked up through the "npc_VPlaceholder" object's link when stale) and, when found, places it at the player: origin / angles, owner, model name, sub_101d1280, the sub-object at +0x270 (slots 1 / 2) handed to sub_10011432, sub_10008c5b, flag bits 0x60 at +0x19c, slot 614; returns it
	void sub_1017e760(int level);	// "Celerity %d" step: with level above 1 and a vector pair at +0x3c8 / +0x3d4 whose squared lengths are above 0 / 12, lowers the scrambled value of sub_1017df50 by one level
	void sub_1016af80(void *pCmd, void *pHelper);	// slot 462 (the CBasePlayer::PlayerRunCommand-like override): clears the byte at +0x2128, remembers the command's byte at +0x2c at +0x233c, with flag bit 5 set clears the command's movement and copies the view angles (+0x206c) into it, with sub_10160ec0 zeroes forward / side move, runs sub_10356430(this, pCmd, pHelper) and rounds the float at +0x2358 to a multiple of 0.001 (inline floor through the x87 control word)
	int sub_100b3700();	// "CBaseEntity::GetFlags" (stub 0x10008b84)
	char sub_10160ec0();	// stub 0x1001327d
	float sub_10346070();	// "CBaseCombatCharacter::GetRawAttackValue" (stub 0x10009511), called directly
	void sub_10160520();	// resets the meter (+0x1ddc = 99.0f) and the view pair (+0x1de4 / +0x1de8) to the current angles + the vector at +0x1efc
	void sub_10160560();	// adds the active ranged weapon's current attack value (interpolated between its roll slot's values at +0x3d0 / +0x3d4, minus +0x3cc, times +0x400) to the meter at +0x1ddc, clamped to 0..99
	void sub_10178660(CBaseEntity *pEnt, char bCenter);	// slot 306: hands sub_10178590 the entity's position: its centre (slot 192) when bCenter, else its camera position (the object at +0x98's worker, or slot 193) unless that is the zero vector, then the centre
	void *sub_1008d990(int sequence);	// CBaseAnimating member (stub 0x1000b4f6): the sequence descriptor (a float at +0x2f8), 0 when none; called directly
	char sub_10344da0(int activity);	// CBaseCombatCharacter member (stub 0x10010c3f): whether the activity is one of the character's own, called directly
	char sub_10161380();	// stub 0x1000a6a5: an activity-machine check on the player, called directly
	void sub_1017f2a0(int priority, CBaseEntity *pEntity, const Vector *pPos);	// "CBasePlayer::NoticeCriminalAct"-like: with the global at 0x107258dc allowing it, stamps the witness (+0x63a4 = curtime + 20) and prints "CSActs: Criminal act witnessed by %s"; then, when the local player object (global 0x107532e8) has the field +0x49c, sends the player view message (sub_101cebc0(this, 5, 0)) and records the act (sub_1017ed00)
	void sub_1017f4a0(int priority, CBaseEntity *pEntity, const Vector *pPos);	// the supernatural-act twin of sub_1017f2a0: stamps the witness (+0x63a8 = curtime + 20), prints "CSActs: Supernatural act witnessed by %s"; when the local player object has the field +0x49c: the view message (free function sub_1022dea0(this, 1)) at most every few seconds (time at +0x1dbc), then sub_1017ed00 when the global at 0x10725804 allows
	void sub_1017ed00(int priority, CBaseEntity *pEntity, const Vector *pPos);	// stub 0x10010eb0: stores the highest priority criminal act (+0x1cfc priority, +0x1d00 witness handle, +0x1d04 position) and arms the timer at +0x1cf8; called directly
	bool sub_10178170();	// "is the player visible / noticed": true from sub_1017f8d0, a recent timer (slot 1 of the value table, within 10 s), the timers at +0x1dd0 / +0x1dd8, a positive count from sub_1017f770 / sub_1017f8b0, or an armed act timer (+0x1cf8 not FLT_MAX), else sub_10175180
	char sub_1017f8d0();	// stub 0x1000ae3e
	int sub_1017f770();	// stub 0x10007ee6
	int sub_1017f8b0();	// stub 0x100063f7
	char sub_10175180();	// stub 0x1000a6fa
	int sub_10175220();	// the value slot 444 hands on: 0x8c while sub_10175180 holds, 0x10 with bit 0 of the byte at +0x2454, 0x28 when sub_10146a80 holds, else 0xf below move type 3 (+0x3e0) and 0 otherwise
	char sub_10146a80();	// CBaseCombatCharacter member (stub 0x1000e971), called directly
	char vfunc379(int a, int b, int c, int d, int e, int f, int g);	// slot 379 (plain member): CBaseCombatCharacter::vfunc379 and, when it succeeds, sub_10181580(1)
	char sub_10329760(int a, int b, int c, int d, int e, int f, int g);	// CBaseCombatCharacter::vfunc379 (stub 0x100152da), called directly
	char sub_10334c20(CBaseCombatWeapon *pWeapon);	// CBaseCombatCharacter member (stub 0x100112d9), called directly
	void sub_10181580(unsigned int flags);	// ORs flags into the player's dword at +0x14b8 (as CAI_BaseNPCTroika::sub_102a97a0), stub 0x10013d63
	void sub_10167d70(CBaseEntity *pEnt);	// PlayerUse start: when pEnt (slot 32(this)) accepts, it becomes the use entity (handle +0x1040), takes this player as its user (handle +0x8c) and gets slot 39(this)
	void sub_1017f6e0();	// OnCopPursuitStart: counts the pursuit counter at +0x1d10 down; at zero runs sub_10370630(this) and sub_1017f9c0, then the CSActs debug text when the flag convar (global 0x107258dc) allows
	int sub_10182780();	// the edict index of the entity the selected command slot range (+0x1b70 / +0x1b78) resolves to, 0 while the player is busy (sub_10175180 / sub_101681a0) or that entity's object at +0x98 has its byte at +0x63d8 set
	char sub_101787a0(CBaseEntity *pEnt, float flRate);	// turns the view angles (+0x206c) towards the entity's aim point (the object at +0x98's point, else its eye position, else its centre) by at most flRate * frametime per axis, hands the new angles to sub_10178550; true when the target was reached on every axis
	void sub_10178550(Vector vecAngles);	// stub 0x10012efe, takes the angles by value
	void sub_10167e00();	// the use-entity (handle at +0x1040) range check of PlayerUse: the closest point of the entity's world bounds to the player's slot 193 position; out of reach (its slot 37 range not above the 2D distance) the entity gets slot 43(this); else slot 41(this) when it has no weapon name (slot 36) or the active weapon already has that classname, else when the player carries that weapon (sub_10335950) slot 457(name, 0) and slot 40(this)
	void vfunc385(CBaseEntity *pWeapon, int a, char bFlag);	// slot 385 "Weapon_Drop"-like (plain member, ret 0xc): never for the "item_w_unarmed" weapon; the removal path of slot 151 (unless the active weapon is a stack of more than one) and then CBaseCombatCharacter::vfunc385; when the dropped weapon was the active one and the player has no default weapon switch, the entity of the handle a gets slot 66
	void sub_1032d0c0(CBaseEntity *pWeapon, int a, int b);	// CBaseCombatCharacter::vfunc385 (stub 0x10002815), called directly
	void *sub_102517b0();	// stub 0x10010ea6, run on a weapon: the game object with the dword at +0x4fe9c
	void vfunc436();	// slot 436 "CBasePlayer::Think"-like (plain member): unless the global byte 0x1070ba2c or the field at +0x2304 is set: sub_10174c10, sub_10166120, sub_10176520(0.087f), slot 444, sub_1016b270, sub_1016b440, then by the field at +0x3e0 (2: sub_10166500, 0: RemoveFlag(4)); with health (+0x200) below 1 runs slots 433 / 434 by the flag word at +0x2088 and toggles flag bit 1 by +0x208c, and while the flags do not have bit 0 stores -(the float at +0x3c4) at +0x1ee8
	void sub_10174c10();	// CBaseCombatCharacter member (stub 0x10009cf0), called directly by slot 436
	void sub_10166120();	// stub 0x100120ad, called by slot 436
	Vector sub_10176520(float flScale);	// stub 0x1000518c: returns a vector by value (hidden pointer, ret 8)
	void sub_1016b440();	// stub 0x1000470a: forwards to slot 21 of the game rules global at 0x1070ba0c, called by slot 436
	void sub_10166500();	// stub 0x10015640, called by slot 436
	int sub_10337860();	// CBaseCombatCharacter member (stub 0x100040d9): the index of the character's template, called directly
	void *sub_10178120();	// stub 0x10012ab2: the CDialog object at +0x1d24
	void sub_10171da0(inputdata_t *pInput);	// input handler: only for the "Player_Malkavian" template; the input as text (a string input as is, "" when empty) is handed to the whisper object (global 0x1073dbfc, sub_101f6530) when the dialog partner (handle +0xfe8) is gone, else stored as the pending whisper text of the dialog object (sub_10178120()->sub_100e09a0)
	void sub_10175400(char bFade);	// the screen fade user message to this player only (reliable single user filter): the flags 0x81 with the amount (255 at most, 0 at least) from the time left until the float at +0x1478 over the fade duration (global 0x10739d08), or 0x82 with amount 0 when bFade is clear; the message is built as (flags, amount, 0, 0)
	bool vfunc360();	// slot 360 "CheckForPlayerFrenzy" (plain member): fails (with a DevWarning) while the player grapples, without close NPCs; otherwise creates the "npc_VFrenzyShadow" controller, equips the fists, raises the criminal level and tells the frenzy list
	void *sub_10161a70(const char *pszClassname);	// stub 0x1000cc93: creates the entity of that class for the player
	void sub_10147a30(int a);	// stub 0x10001d8e
	void sub_10147a60();	// stub 0x100087dd, tail called by sub_10170750
	void sub_10170750();	// on a level change: with the local player object (0x1023bd00) world area type 2 equips "item_w_unarmed" then sub_10147a60; with 1 runs sub_10147a30(3) and (0xb)
	void sub_1016fed0();	// "CBasePlayer::OnRestore"-like (called by slot 103 and sub_101707c0): resets the use handles (+0x1e04 / +0x1e08 / +0x1e0c), sub_10178140, then with "developer" set validates the player (sub_10170340) and marks the level changes whose landmark cannot be found; with sub_100df7b0 set runs the dialog script dump over every entity that has a dialog (+0x98 object with +0x128)
	void sub_10178140();	// stub 0x10013c7d: resets the fields +0x1d2c / +0x1d40 / +0x1dd0 / +0x1dd8
	char sub_10170340();	// stub 0x10012314: validates the player entity (solid flags, collision group, move type, bounds, required items), true when everything is fine
	void vfunc104();	// slot 104 "CBasePlayer::Precache" (plain member): clears the discipline effect mask (+0xe98), the stat bar pair (+0x2294 = -1), precaches the glow / spread indicator materials (+0x1c44 / +0x1c48 / +0x1c4c) and four sounds, sets +0x22a4 = 5 (and the byte +0x2298 under the debug global 0x10580ae8), runs sub_1015d6d0(0) / (1), slot 266(0) of the object sub_1015d680(1) finds, then the used-hull-bits check of the graph (slot 337)
	CBaseEntity *sub_1015d680(int index);	// the entity of the handle in the viewmodel array at +0x2308 (index 0..n); null when stale
	CBaseEntity *sub_10180100(int index);	// the entity of the handle in the array at +0x1d3c (index 0..n); null when stale
	void sub_1016b0e0(unsigned int buttons);	// the button state update (CHL2_Player::vfunc462 calls it): the previous buttons (+0x2098) go to +0x20a4, the new ones are stored at +0x2098, the newly pressed bits to +0x209c and the released bits to +0x20a0
	void sub_10170cf0(unsigned int flags, char bSet);	// sets (bSet) or clears the bits of the flag word at +0x20f0
	Vector vfunc197(const Vector &posSrc, char bRandom, char bAddViewOffset);	// slot 197 "BodyTarget" (plain member, hidden return, ret 0x10): with bRandom the view offset (+0x184) scaled by RandomFloat(0.5, 1.0) added to the origin (slot 220); else with bAddViewOffset the unscaled view offset added to the origin; else the centre (slot 192)
	bool sub_10330020(int a, int b);	// CBaseCombatCharacter::vfunc334 (stub 0x10005b5a), called directly
	char sub_10335a70(CBaseCombatWeapon *pWeapon);	// CBaseCombatCharacter member (stub 0x10003d9b), called directly by vfunc457
	void sub_10183330();	// hands the classname and slot 296 value of the entity behind the handle at +0x1dfc to slot 457, then clears the handle
	int sub_10165790(CBaseEntity *pEntity);	// called by slots 426 / 427 with the grapple target (the handle at +0x1538): traces the entity's hull from its origin 100 units back along its facing; true when the way is blocked
	void vfunc426();	// slot 426 (plain member): sub_10165790 on the grapple target (handle +0x1538, when +0x153c is set), else on null
	void sub_10161f10();	// ends the placeholder: the entity of the handle at +0x1da4 gets its think function reset (sub_100ac4e0) and the next think in 0.01 s, then the handle is cleared
	Vector vfunc389(const Vector &vecPos);	// slot 389 (plain member, hidden return, ret 8): the view offset (+0x184) plus vecPos
	void sub_10146e20(int a, int b);	// stub 0x10012562 (function 0x10146e20): last step of slot 449, called with the dword at +0xff0
	void sub_10329560();
	void sub_10181680(int a, int b);	// stub 0x1000d91d (function 0x10181680): m_b65c = 1, AddFlag(0x40000000) (sub_100b3580), then slot 449(0, b); called by 0x10206da0 (with 0, 1) and 0x10207c70
	void sub_100b3580(unsigned int flags);	// "CBaseEntity::AddFlag" (stub 0x10003620), called directly	// CBaseCombatCharacter member (stub 0x1000acc2), called directly
	void sub_1016cf30();	// "CBasePlayer::InitCommandSlots"-like (called by 0x100d7340 on the local player when its +0xa8 object exists): copies the ten dwords at 0x10583630 to m_aSlotType2018 and the ten at 0x107260b0 to m_aSlotValue2040, then m_aSlotValue2040[0] = CRC32("item_w_fists"), [1] = CRC32("item_w_thirtyeight") (CRC32_Init sub_1023f040 / CRC32_ProcessBuffer 0x1023f0c0 / CRC32_Final sub_1023f060, strlen inlined), and for i in 0..2 fills the pairs from [2] up: idx = ((CUnknown10182dd0 *)this)->sub_10182dd0(i, 0) (-1 skips); info = g_1074e098.sub_10200370(idx); first = idx | (info->m_flags bit 1 ? 0 : 1) << 16; second = idx | (1 + (bit 1 ? -1 : CVStatListSet::Of(this)->Find(2)->sub_102012d0(idx) > 1)) << 16 (sub_102012d0 = GetBoundedBase, CVStatList_t.h). Slot arrays: CBasePlayer.h m_aSlotType2018 / m_aSlotValue2040
	void sub_1032c580(CBaseEntity *pVictim, int b, char bQuiet);	// CBaseCombatCharacter::vfunc300 (stub 0x100051b9), called directly first by vfunc300 with its own arguments
	char sub_1033d580(CBasePlayer *pOther);	// CBaseCombatCharacter member (stub 0x1000cb35): called on the victim (pVictim, ecx) with the player as argument by vfunc300: cast `((CBasePlayer *)pVictim)->sub_1033d580(this)`
	void sub_10177ba0();	// releases the held state: when the field at +0x2304 is set, RemoveFlag(0x4020), SetMoveType(3, 0) (slot 93) and the field cleared
	void vfunc380();	// slot 380 (plain member) "end of the feeding": CBaseCombatCharacter::vfunc380 (sub_10329a70), sub_101815b0(1), m_b1B6C = 0, sub_1017cef0(0); with the grapple target (m_h1538 when m_n153C != -1) slot 306(target, 0) and by the blood pool m_n14A0 the feeding reactions (sub_101cebc0(this, 0x4a / 0x11 / 0x35, 0), slot 449(0xc, 1))
	void sub_10329a70();	// CBaseCombatCharacter::vfunc380 (stub 0x10005d94), called directly
	char sub_10339cd0();	// CBaseCombatCharacter member (stub 0x1000150a): blue-blood-only check, called directly
	char sub_10339b50();	// CBaseCombatCharacter member (stub 0x1000f939), called on the target
	char sub_10339c10();	// CBaseCombatCharacter member (stub 0x100144d9), called on the target
	char vfunc321(int unused);	// slot 321 (plain member): re-arms the random view punch timer (+0x1da8) when it is due, then punches the view by a random angle scaled by the player and punch convars (slot 169)
	float vfunc465();	// slot 465: the constant 60.0f
	void *vfunc198();	// slot 198: the address of the field at +0x211c
	int vfunc200();	// slot 200 (plain member): the dword at +0x233c
	char sub_1015dd50();	// slot 117: CBaseEntity::vfunc117 masked with 0xfd
	void vfunc410();	// slot 410 (plain member): the float at +0x19b0 = gpGlobals->curtime
