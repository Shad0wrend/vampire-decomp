// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10223160 size=0x6
#include "datamap.h"
#include "CBaseKeyframedMover.h"
namespace lifted {
extern char g_105b1a6c;
}
datamap_t * CBaseKeyframedMover::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b1a6c);
}
// END FUNCTION

// FUNCTION: 0x102233d0 size=0x78
#include "CBaseKeyframedMover.h"
void sub_100aa7b0(void *p);

CBaseKeyframedMover *CBaseKeyframedMover::vfunc5(unsigned int flags)
{
	m_Output5e8.sub_100cd2d0();
	m_Output5d0.sub_100cd2d0();
	m_Output5b8.sub_100cd2d0();
	m_Output5a0.sub_100cd2d0();
	m_Output588.sub_100cd2d0();
	m_Output570.sub_100cd2d0();
	m_Output4bc.sub_100cd2d0();
	m_Output4a4.sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10223600 size=0x6d
#include "CBaseKeyframedMover.h"
#include "CEntityVSlots.h"

void CBaseKeyframedMover::vfunc113()
{
	CBaseEntity::vfunc113();
	sub_10010c35();
	if (m_nDirection == 1)
		sub_1000b94c(sub_10015217()->m_n454);
	else if (m_nDirection == -1)
		sub_1000b94c(sub_10015217()->m_n458);
	else
		m_n568 = -1;
	((CEntityVSlots *)this)->slot93(8, 0);
	CBaseEntity::sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x10223a10 size=0x10
#include "CBaseKeyframedMover.h"
#include "CBaseToggle.h"
// TARGET: CBaseKeyframedMover::vfunc133
void CBaseKeyframedMover::vfunc133()
{
	CBaseToggle::vfunc133();
	sub_10223a80();
}
// END FUNCTION
