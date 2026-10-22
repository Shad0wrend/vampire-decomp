// CTriggerPlayerActivityLevel: declared by pcdecomp transplant for 0x102106c0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CTriggerPlayerActivityLevel : public CBaseEntity
{
public:
	CTriggerPlayerActivityLevel *sub_102107c0();
	void vfunc175(CBaseEntity *pOther);	// slot 175 "Touch": unless the byte at +0x55c is set and when pOther has a player object (+0xa8), resets that player's three levels (+0x598 / +0x59c / +0x5a0) that are not negative, the first two with time -1.0f and a text naming this trigger

	char m_pad03e0[0x55c - sizeof(CBaseEntity)];
	char m_bDisabled;	// 0x55c
	char m_pad055d[0x598 - 0x55d];
	int m_nLevelA;	// 0x598
	int m_nLevelB;	// 0x59c
	int m_nLevelC;	// 0x5a0
};
