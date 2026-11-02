// CUnk10232540: a per-player "who can see whom" update object (name provisional; its owner method is 0x10232540, the
// updater below is 0x102328c0, called from it). One object per update kind; players are 1..m_nPlayers.
// Globals it works with (placeholders, declare `extern` in the source):
//   g_107516c8  unsigned int[]  per-player bit: "send a reset message" (cleared after the message goes out)
//   g_10751530  unsigned int[]  per-player bit: "player is flagged / active" (tested for the player and for each other player)
//   g_10751538  unsigned int[]  per-player 32-bit visibility mask sent last (ushort-pair?), copied to g_107516d0 after a send
//   g_10751648  unsigned int[]  per-player mask computed this round (last sent); g_107516d0 the mask snapshot of g_10751538
//   g_107515bc  an object (slot 1 = bool "debug allows all"; byte/dword at +0x2c): if its slot 1 holds the all-visible bit is 0
//   g_1070b230  an interface; slot 2 (+8) is called (iPlayer, iOther(1-based), bVisible) once per other player
#pragma once

class CBaseEntity;

class CUnk10232540Rules	// the object at +0x10: slot 1 is the per-pair test
{
public:
	virtual void v0();
	virtual bool vfunc1(CBaseEntity *pFrom, CBaseEntity *pTo);	// slot 1 (+4): may pFrom see pTo
};

class CUnk10232540
{
public:
	int m_vtable_or_pad04;	// 0x04
	int m_nMessageId08;	// 0x08: user message id sent with the new masks (engine slot 65 UserMessageBegin(filter, id))
	int m_nMessageId0c;	// 0x0c: user message id sent for the reset (cleared bit of g_107516c8)
	CUnk10232540Rules *m_pRules;	// 0x10: pairwise test object
	int m_nPlayers;	// 0x14: number of players to walk (1-based indices 1..m_nPlayers)
	unsigned int m_nMask18;	// 0x18: zeroed on entry (and the second dword at +0x1c)
	unsigned int m_nMask1c;	// 0x1c

	void sub_102328c0();	// 0x102328c0 (no stack arguments, this in ecx): see the comments above; per player i: UTIL_PlayerByIndex (sub_101cd9e0, cdecl) with an object at +0xa8, a CSingleUserRecipientFilter on it (vptr 0x104540e8, destroyed at the end of the iteration: RemoveAll 0x100047aa + CUtlMemory<int>::Purge 0x10007275 + Plat_Free inline), the reset message (engine slots 65 / 66) when its g_107516c8 bit is set, then the visibility mask over the other players (rules slot 1 or, when g_107515bc says all visible, unconditional) compared with g_10751648 / g_10751538 via CPair10232c70::sub_10232c70 (a 1-dword equality test), and when it changed the message with the two masks (engine slot 71 x2, slot 67 with the flag bit, slot 66), then the per-other-player calls g_1070b230 slot 2
};
