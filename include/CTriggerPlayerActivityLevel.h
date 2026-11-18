// CTriggerPlayerActivityLevel: declared by pcdecomp transplant for 0x102106c0 from CKeepUpright (0x10029200);
// a CBaseTrigger (which ends at +0x598) with three activity levels.
#pragma once
#include "CBaseTrigger.h"

class CBaseEntity;	// a tail-call override's parameter
class CTriggerPlayerActivityLevel : public CBaseTrigger
{
public:
	CTriggerPlayerActivityLevel();	// 0x102107c0: the base trigger constructor (inlined), the three levels = -1
	CTriggerPlayerActivityLevel *sub_102107c0();	// the constructor above, as the allocating caller calls it
	void vfunc175(CBaseEntity *pOther);	// slot 175 "Touch": unless the byte at +0x55c is set and when pOther has a player object (+0xa8), resets that player's three levels (+0x598 / +0x59c / +0x5a0) that are not negative, the first two with time -1.0f and a text naming this trigger
	void vfunc176(CBaseEntity *pOther);	// slot 176 "EndTouch" (plain member): with a player object at pOther+0xa8, when the trigger flag 0x20 at +0x204 is set resets the player's levels A and B (+0x598 / +0x59c) that are not negative and equal the player's current ones (time -1.0f, the text "CTriggerPlayerActivityLevel::EndTouch %s" with this entity's name); level C (+0x5a0) is reset likewise; then CBaseTrigger::vfunc176
	const char *sub_100ab4f0();	// CBaseEntity::sub_100ab4f0 (stub 0x1000b5cd): the entity's debug name
	void sub_101c55d0(CBaseEntity *pOther);	// CBaseTrigger::vfunc176 (stub 0x1001346c), called directly
	void sub_101c5080();	// the stub 0x1000dfd0: a member of the entity, reached by a jump from vfunc103

	int m_nLevelA;	// 0x598
	int m_nLevelB;	// 0x59c
	int m_nLevelC;	// 0x5a0
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc103();    // slot 103: its own (0x102108a0)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc174(CBaseEntity *);	// slot 174 (0x102108c0): a tail call of CBaseTrigger::vfunc174 (a base declares it plain vfunc174: this one hides it)
};
