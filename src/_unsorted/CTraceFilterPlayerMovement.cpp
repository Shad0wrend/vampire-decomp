// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
