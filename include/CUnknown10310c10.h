// CUnknown10310c10: a spawner helper object (the CSActs cop spawner of CBasePlayer::sub_1017ee80) holding the factory of
// the NPCs it makes at +0x28 (-1 for none); real name not yet known.
#pragma once

class CUnknown10310c10
{
public:
	char m_pad0000[0x28];
	void *m_pFactory;	// 0x28: the NPC factory (a polymorphic object whose slot 617 makes an NPC), -1 when there is none

	void sub_10310bc0();	// stub 0x10006267: run first by the maker
	char sub_10310d70(void *pSpawnPoint, void *pNpc, float *pOutOrigin);	// stub 0x1000affb: places the new NPC, its origin goes to pOutOrigin; false when it cannot be placed
	void *sub_10310c10(void *pSpawnPoint, int hIdeal);	// \"MakeNPC\"-like (ret 8): asks the factory for an NPC (DevMsg \"Failed to spawn with NPCMaker( %s )\" when it makes none), places it (removing it again when that fails), sets its origin (slot 62) and, with a second argument, the state (1 when the byte at +0x65f6 is set, else 3) and sub_102ae8e0(arg); returns the NPC or null
};
