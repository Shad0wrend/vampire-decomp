// CWerewolfEnemySlots: the virtual table of an AI NPC viewed as a plain list of slots up to slot 530, used to call slots 167,
// 217 and 530 of an object whose class does not model its vtable (CNPC_VWerewolf).
#pragma once

#include "CCineNPCSlots.h"

class CWerewolfEnemySlots
{
public:
	CCS_V100(a)
	CCS_V10(b0) CCS_V10(b1) CCS_V10(b2) CCS_V10(b3) CCS_V10(b4) CCS_V10(b5)
	CCS_V(b160) CCS_V(b161) CCS_V(b162) CCS_V(b163) CCS_V(b164) CCS_V(b165) CCS_V(b166)
	virtual void *slot167();	// the NPC's enemy / target
	CCS_V(b168) CCS_V(b169)
	CCS_V10(c17) CCS_V10(c18) CCS_V10(c19) CCS_V10(c20)
	CCS_V(c210) CCS_V(c211) CCS_V(c212) CCS_V(c213) CCS_V(c214) CCS_V(c215) CCS_V(c216)
	virtual float *slot217();	// GetAbsOrigin
	CCS_V(d218) CCS_V(d219)
	CCS_V10(e22) CCS_V10(e23) CCS_V10(e24) CCS_V10(e25) CCS_V10(e26) CCS_V10(e27) CCS_V10(e28) CCS_V10(e29)
	CCS_V10(e30) CCS_V10(e31) CCS_V10(e32) CCS_V10(e33) CCS_V10(e34) CCS_V10(e35) CCS_V10(e36) CCS_V10(e37) CCS_V10(e38) CCS_V10(e39)
	CCS_V10(e40) CCS_V10(e41) CCS_V10(e42) CCS_V10(e43) CCS_V10(e44) CCS_V10(e45) CCS_V10(e46) CCS_V10(e47) CCS_V10(e48) CCS_V10(e49)
	CCS_V10(e50) CCS_V10(e51) CCS_V10(e52)
	virtual char slot530(void *pEnemy);	// whether the enemy counts as reachable-or-ignorable for the werewolf
};
