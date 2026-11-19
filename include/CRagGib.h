// CRagGib: declared by pcdecomp transplant for 0x1012b6e0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseAnimating.h"

class CRagGib : public CBaseAnimating
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void sub_10015c17(int a, int b, int c);	// stub 0x10015c17, called on the "raggib" entity by CRagGib creation (0x1012b320)
	char m_pad04a4[0x730 - 0x4a4];
};
