// CUnknown10398630: unnamed NPC_VMingXiao-area object (provisional class name from 0x10398630).
// The method is called with the MingXiao entity as `this` (see CNPC_VMingXiao::vfunc442 and sub_1039a250),
// so a caller may cast its CNPC_VMingXiao * to this type to reach it.
#pragma once

#include "Vector.h"

class CUnknown10398630
{
public:
	void sub_10398630(int index, Vector *pOut);	// 0x10398630 (ret 8): the sequence of the index (sub_10398680), its sequence-activity (CBaseAnimating::sub_10092550, 0 when negative) and the bone position (CBaseAnimating::sub_100926e0) written to pOut
};
