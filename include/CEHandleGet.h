// CEHandleGet: the game's entity handle resolution (EHANDLE::Get -> CBaseHandle::Get -> CBaseEntityList::LookupEntity),
// written as three nested inline functions taking the handle BY REFERENCE (the game passes &pEntity->m_hXxx, which
// shows as `add eax, 0xfe8 ; mov eax, [eax]`).
//
// Use it as `pEnt = EHandle_Get(pPlayer->m_hTarget);` instead of an open-coded `h != -1 && slot.serial == h >> 13`:
//  - the lookup result stays in EAX across the join of the found / not found paths, and VC6 then saves the
//    callee-saved registers LAZILY (the `push ebx / push esi` after the lookup block instead of in the prologue),
//    which is what the game's code does (0x10089550 matched this way; a single flat helper coalesces the result
//    straight into ESI and pushes at the top);
//  - the by-reference parameter stops VC6 from reusing an earlier load of the same handle (CSE).
#pragma once

#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

static inline CGlobalEntityList_Ent *EHandle_LookupEntity(const unsigned int &rh)
{
	if (rh == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[rh & 0x1fff];
	if (pSlot->m_Serial == (int)(rh >> 13))
		return pSlot->m_pEntity;
	return 0;
}

static inline CGlobalEntityList_Ent *EHandle_GetBase(const unsigned int &rh)
{
	return EHandle_LookupEntity(rh);
}

static inline CGlobalEntityList_Ent *EHandle_Get(const unsigned int &rh)
{
	return EHandle_GetBase(rh);
}
