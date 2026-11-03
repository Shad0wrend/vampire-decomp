// CUnknown103bf200: an NPC (called from CNPC_VTzimisce::vfunc448) holding a CUtlVector of (id, expiry time) pairs of
// 8 bytes at +0x6690 (memory, allocation count, grow size, size, element pointer); real class not yet known.
#pragma once

#include "CBaseHandle.h"

class CUnknown103bf200
{
public:
	char m_pad0000[0x6690];
	char *m_pTimedMemory;	// 0x6690
	int m_nTimedAlloc;	// 0x6694
	int m_nTimedGrow;	// 0x6698
	int m_nTimedSize;	// 0x669c
	char *m_pTimedElements;	// 0x66a0

	void sub_103bf200(int id);	// appends (id, gpGlobals->curtime + 20.0f) to the vector at +0x6690
	void sub_103bf200(CBaseHandle hEntity);	// the same function as the game's callers see it: the id is passed as a by-value CBaseHandle (real name ?sub_103bf200@CUnknown103bf200@@QAEXVCBaseHandle@@@Z)
};
