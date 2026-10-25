// CTriggerTeleport: declared by pcdecomp transplant for 0x101c90e0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

class CTriggerTeleport : public CBaseEntity
{
public:
	CTriggerTeleport();
	CTriggerTeleport *sub_101c91e0();
	char pad_base[0x564 - sizeof(CBaseEntity)];
	int m_i564;	// 0x564: -1 when none
	COutputEvent m_out568;	// 0x568
	COutputEvent m_out580;	// 0x580
	int m_i59c;	// 0x59c
};
