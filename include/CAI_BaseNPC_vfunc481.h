// View of CAI_BaseNPC for CAI_BaseNPC::vfunc481 (0x10270b20, slot 481, ret 4: "CAI_BaseNPC_GatherEnemyConditions"
// with the vprof sub-scopes "..._Outputs" and "..._SeeEnemy"; argument = the enemy entity). CAI_BaseNPC itself
// declares no data members, so the function's fields are given here as a derived view (define the function on
// CAI_BaseNPC and cast `this`).
#pragma once

#include "CAI_BaseNPC.h"
#include "ehandle.h"
#include "COutputEvent.h"

class CAI_BaseNPCUnit481 : public CAI_BaseNPC
{
public:
	char m_pad0004[0x98 - 4];
	CAI_BaseNPC *m_pAI0098;		// 0x98: the NPC object whose flags (+0x14b8, bit 15 = 0x8000) the function clears
	char m_pad009c[0x5b98 - 0x9c];
	int m_nSeeFailCount;		// 0x5b98: consecutive failed enemy-visibility checks (slot 201 with mask 0x2804091), capped at 10
	char m_pad5b9c[0x5ce0 - 0x5b9c];
	EHANDLE m_hFocus5ce0;		// 0x5ce0: the handle slot 167's focus falls back to
	char m_pad5ce4[0x5d34 - 0x5ce4];
	class CAI_Navigator *m_pNavigator5d34;	// 0x5d34: byte at +0x34 = the navigator is busy
	char m_pad5d38[0x5d8c - 0x5d38];
	unsigned int m_flags5d8c;	// 0x5d8c: bit 17 (0x20000) = the enemy was lost, outputs already fired
	char m_pad5d90[0x5de4 - 0x5d90];
	float m_flt5de4;		// 0x5de4: the shortest weapon distance limit (condition 0x55 when the enemy is farther)
	char m_pad5de8[0x5e54 - 0x5de8];
	COutputEvent m_OnE5e54;		// 0x5e54: output fired with the lost enemy (focus object has a name)
	COutputEvent m_OnE5e6c;		// 0x5e6c: "OnLostEnemy"-like output, fired when the enemy was lost
	char m_pad5e84[0x5e9c - 0x5e84];
	COutputEvent m_OnE5e9c;		// 0x5e9c: variant of the above fired with the focus' own object
	COutputEvent m_OnE5eb4;		// 0x5eb4: output fired when the focus object has a name

	void sub_10269a20(int condition);	// CAI_BaseNPC::sub_10269a20 (set condition), already in CAI_BaseNPC.h
	float sub_10270890(CBaseEntity *pEnemy);	// 0x10270890 (stub 0x10009106): the distance-like value to the enemy, returns st0
	void sub_10271900();		// 0x10271900 (stub 0x10004403): run after the weapon-range conditions
};
