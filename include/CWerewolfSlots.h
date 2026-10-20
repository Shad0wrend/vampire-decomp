// CWerewolfSlots: the virtual table of an AI NPC viewed as a plain list of slots up to slot 167, used to call slots 158 and
// 167 of an object whose class does not model its vtable (CNPC_VWerewolf and the object slot 167 returns).
#pragma once

#include "CCineNPCSlots.h"

class CWerewolfSlots
{
public:
	CCS_V100(a)
	CCS_V10(b0) CCS_V10(b1) CCS_V10(b2) CCS_V10(b3) CCS_V10(b4)
	CCS_V(b150) CCS_V(b151) CCS_V(b152) CCS_V(b153) CCS_V(b154) CCS_V(b155) CCS_V(b156) CCS_V(b157)
	virtual bool slot158();
	CCS_V(b159)
	CCS_V(b160) CCS_V(b161) CCS_V(b162) CCS_V(b163) CCS_V(b164) CCS_V(b165) CCS_V(b166)
	virtual CWerewolfSlots *slot167();	// the NPC's target / leader
};
