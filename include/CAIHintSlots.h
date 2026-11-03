// CAIHintSlots: virtual-slot call helpers for the AI hint search (0x102d1760 / 0x102d1af0) and its siblings.
// CAI_Hint.h stops at slot 181 and cannot take new identifiers (0x103a0ab0 breaks), CAI_BaseNPC.h likewise,
// so the slots the hint search calls are written as calls through the vtable of the object.
// A __fastcall pointer gives `mov edx, [ecx]; call [edx + N*4]` with the argument pushed (the callee pops it).
#pragma once

#include "Vector.h"

class CAI_Hint;

extern CAI_Hint *g_10925450;	// 0x10925450: head of the global AI hint list (next link at CAI_Hint::m_pNext +0x5d8; m_n5dc +0x5dc = hint type)
extern CAI_Hint *g_10925454;	// 0x10925454: the hint the last hint search picked

// The hint search's temporary list is a CUtlVector of 4-byte elements whose out-of-line instantiations are
// UtlMem::sub_102d41a0 (constructor, grow 0), CUtlVector4::sub_102d4210 (grow), UtlVec8::sub_102d42d0
// (ShiftElementsRight), sub_102d4320 (element store, cdecl), UtlMem::sub_102d4350 (purge) and
// sub_102d41f0; use those exact classes/addresses rather than a generic CUtlVector<CAI_Hint*> to get the same calls.

typedef const Vector *(__fastcall *CAIHintSlotGetVector)(void *pThis, void *pEdx);
typedef char (__fastcall *CAIHintSlotValidate)(void *pThis, void *pEdx, void *pHint);
typedef const Vector *(__fastcall *CAIHintSlotGetVectorOut)(void *pThis, void *pEdx, Vector *pOut);

// slot 217 (+0x364) GetAbsOrigin of an entity (a CAI_Hint or a CAI_BaseNPC): returns a pointer to the origin
inline const Vector *CAIHintSlots_GetAbsOrigin(void *pEntity)
{
	return (*(CAIHintSlotGetVector **)pEntity)[217](pEntity, 0);
}

// slot 566 (+0x8d8) of a CAI_BaseNPC "FValidateHintType": whether the NPC may use the hint
inline char CAIHintSlots_ValidateHint(void *pNPC, void *pHint)
{
	return (*(CAIHintSlotValidate **)pNPC)[566](pNPC, 0, pHint);
}

// slot 193 (+0x304) of a CAI_BaseNPC "EyePosition" (hidden result pointer, ret 4): the eye position
inline const Vector *CAIHintSlots_EyePosition(void *pNPC, Vector *pOut)
{
	return (*(CAIHintSlotGetVectorOut **)pNPC)[193](pNPC, 0, pOut);
}
