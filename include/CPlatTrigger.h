// CPlatTrigger: declared by pcdecomp transplant for 0x1015a520 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CFuncPlat.h"

class CBaseEntity;

class CPlatTrigger
{
public:
	CPlatTrigger *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc175(CBaseEntity *pOther);	// slot 175 "CPlatTrigger::Touch" (plain member): for a living entity with an edict, a platform at the bottom (state 1) is sent up (slot 242), one at the top (state 0) gets its move done time pushed back by one second

	char m_pad0000[0x450];
	CFuncPlat *m_pPlatform;	// 0x450
};
