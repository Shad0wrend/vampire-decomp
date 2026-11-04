// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ccec0 size=0x39
#include "CTraceFilterPlayerMovement.h"

struct CPassEntView101ccec0
{
	char m_pad0000[0xa8];
	void *m_pOwner;
};

static inline void *GetOwner101ccec0(CPassEntView101ccec0 *p)
{
	if (!p)
		return 0;
	return p->m_pOwner;
}

// TARGET: CTraceFilterPlayerMovement::CTraceFilterPlayerMovement
CTraceFilterPlayerMovement::CTraceFilterPlayerMovement(void *pPassEnt, int collisionGroup)
	: CTraceFilterSimple(pPassEnt, collisionGroup)
{
	m_pOwner = GetOwner101ccec0((CPassEntView101ccec0 *)pPassEnt);
}
// END FUNCTION

// FUNCTION: 0x101ccf10 size=0x2c
#include "CTraceFilterPlayerMovement.h"

unsigned char __fastcall sub_100b39c0(void *pHandleEntity);

// TARGET: CTraceFilterPlayerMovement::vfunc0
bool CTraceFilterPlayerMovement::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (sub_100b39c0(pHandleEntity) & 1)
		return false;
	return CTraceFilterSimple::vfunc0(pHandleEntity, contentsMask);
}
// END FUNCTION
