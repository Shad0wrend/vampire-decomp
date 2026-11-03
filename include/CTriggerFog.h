// CTriggerFog: declared by pcdecomp transplant for 0x101ca4e0 from CAI_Hint (0x102d0860);
// only what matched code needs, as plain members.
#pragma once
#include "Vector.h"

class CTriggerFog
{
public:
	char m_pad0000[0x1ec];
	void *m_pfnTouch1ec;	// 0x1ec
	void vfunc103();	// slot 103: CTriggerMultiple::vfunc103, then the touch function at +0x1ec = sub_101ca510
	void sub_101c6860();	// CTriggerMultiple::vfunc103 (stub 0x100048ef), called directly
	char m_pad01f0[0x5b0 - 0x1f0];
};
