// A data view of CAI_BaseNPC (which models only vtable slots) for the functions that read its members by offset:
// cast the NPC to CAI_NPCTargetView *. Used by 0x1027fc90 (the free function that offers every debug-visible NPC a
// position to walk to, called from 0x10087170) and its caller.
#pragma once

#include "CAI_BaseNPC.h"

class CNavigatorView;	// the navigator at +0x5d34 (CAI_Navigator, sub_102ee250(int) is its stub 0x10006fd7)

struct CAI_NPCTargetView : public CAI_BaseNPC
{
	char m_pad0004[0x224 - sizeof(CAI_BaseNPC)];
	unsigned int m_nDebugFlags224;	// 0x0224: bit 12 (0x1000) = the NPC wants the 'goto' debug move
	char m_pad0228[0x1568 - 0x228];
	int m_nHull1568;	// 0x1568: hull id, handed to sub_102d6120 (mins) / sub_102d6100 (maxs)
	char m_pad156c[0x5cf0 - 0x156c];
	float m_flMoveTime5cf0;	// 0x5cf0: stamped with gpGlobals->curtime (+0xc) when the debug move starts
	char m_pad5cf4[0x5d34 - 0x5cf4];
	CNavigatorView *m_pNavigator5d34;	// 0x5d34
	char m_pad5d38[0x5db8 - 0x5d38];
	Vector m_vecGoal5db8;	// 0x5db8: the position offered to the NPC
	Vector m_vecGoalAngles5dc4;	// 0x5dc4: the target's angles (slot 219 result)
};

// Callees (declare in the source, signatures from the matched twins): sub_102d6120(hull) / sub_102d6100(hull) (cdecl, hull
// extents), Ray_t::sub_1006dec0 (6 args), CTraceFilterSimple ctor 0x101d3190 (this, pEnt, 0), trace through the interface at
// g_1070b254 slot 4, sub_10146570 (7-arg debug box, cdecl), sub_10142b80 (cdecl, 2 args: box, extents), CAI_BaseNPC::sub_10280de0(0x39).
