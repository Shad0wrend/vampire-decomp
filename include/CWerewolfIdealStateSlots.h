// CWerewolfIdealStateSlots: the virtual table of an AI NPC viewed as a plain list of slots up to slot 433, used to call slots
// 158, 167 and 433 of CNPC_VWerewolf (whose class does not model its vtable).
#pragma once

#include "CWerewolfSlots.h"

class CWerewolfIdealStateSlots : public CWerewolfSlots
{
public:
	CCS_V(d168) CCS_V(d169)
	CCS_V10(d17) CCS_V10(d18) CCS_V10(d19) CCS_V10(d20) CCS_V10(d21) CCS_V10(d22) CCS_V10(d23) CCS_V10(d24) CCS_V10(d25) CCS_V10(d26)
	CCS_V10(d27) CCS_V10(d28) CCS_V10(d29) CCS_V10(d30) CCS_V10(d31) CCS_V10(d32) CCS_V10(d33) CCS_V10(d34) CCS_V10(d35) CCS_V10(d36)
	CCS_V10(d37) CCS_V10(d38) CCS_V10(d39) CCS_V10(d40) CCS_V10(d41) CCS_V10(d42)
	CCS_V(d430) CCS_V(d431) CCS_V(d432)
	virtual void slot433();	// the state refresh called first by SelectIdealState
};
