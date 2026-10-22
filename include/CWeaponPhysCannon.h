// CWeaponPhysCannon: the physics cannon weapon (derived from CBaseCombatWeapon).
#pragma once
#include "CBaseCombatWeapon.h"
#include "CUnknown1040cb60.h"

class CWeaponPhysCannon : public CBaseCombatWeapon
{
public:
	virtual void vfunc291();
	virtual void vfunc318();	// slot 318: eases the glow value (+0x928) towards its target (+0x92c) by 0.1 per call, mirrors it into the "active" pose parameter of the owner's first view model, and while the grab byte at +0x911 is set runs sub_10410620
	virtual void vfunc319();	// slot 319: refreshes the owner's unarmed weapon handle (+0xea4) and forwards to slot 456 of the owner
	virtual void vfunc326();	// slot 326: once the time at +0x730 has passed, with an owner whose character object is set and the byte at +0x911 set: asks the character for its position (sub_100b7fa0), the tuning block (0x10739d08) for a float, hands both to sub_10410bf0 and runs slot 307(0xc0)
	virtual void vfunc327();	// slot 327: once the time at +0x734 has passed, with an owner character that has a player object (+0xa8): a held object with the player flag 0x800 is dropped (sub_104106a0(1, 0), slot 307(0xbc)), else by the state sub_1040e9c0() the next time is pushed out (0: slot 307(0xbc), 0.5s, the player's bits at +0x2088 are or-ed into +0x91c; 1: 0.1s; 2: 0.01s)
	void sub_10410bf0(Vector *pPos, float flValue);	// stub 0x1000776b
	void sub_104106a0(int unused, char bFlag);	// drops the carried object: while the grab byte at +0x911 is set, remembers the owner's player entity and the entity of the grab handle (+0xab8), releases the grab (sub_1040cb60), tells the entity about the owner (sub_100a8340 with 10.0f) and hands (entity, owner, 2 or 3 by bFlag) to sub_101895d0; clears the byte
	int sub_1040e9c0();	// stub 0x10003355: the state of the grab
	void sub_10410620();	// stub 0x10011c84, tail called by slot 318 while the grab byte is set

	char m_pad0898[0x911 - 0x898];
	char m_bGrab911;	// 0x911
	char m_pad0912[0x928 - 0x912];
	float m_flGlow928;	// 0x928: the glow value, eased towards m_flGlowTarget92c
	float m_flGlowTarget92c;	// 0x92c
	char m_pad0930[0x96c - 0x930];
	CUnknown1040cb60 m_grab;	// 0x96c: the grab controller, its entity handle is at +0xab8
};
