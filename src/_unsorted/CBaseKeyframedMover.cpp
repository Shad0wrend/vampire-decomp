// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
