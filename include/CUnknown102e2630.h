// CUnknown102e2630: AI helper component with the owning animating entity pointer at +4; real name not yet known.
#pragma once

#include "CBaseAnimating.h"

class CUnknown102e2630
{
public:
	char pad0[4];
	CBaseAnimating *m_pOuter;

	int sub_102e2630(int activity);	// outer->SelectWeightedSequence(activity, -1)
};
