// CLogicSquadCondition: declared by pcdecomp transplant for 0x10136210 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "CUnknown103160c0.h"

class CLogicSquadCondition
{
public:
	CLogicSquadCondition *vfunc5(unsigned int flags);

	char m_pad0000[0x450];
	const char *m_name450;	// +0x450: name of the condition
	const char *m_name454;	// +0x454: name of the squad
	char m_pad0458[0x488 - 0x458];
	CUnknown103160c0 *m_pSquad488;	// +0x488: the cached squad
	int m_nCondition;	// +0x48c: the condition id (not positive when the name was invalid)

	CUnknown103160c0 *sub_10135bd0();	// the cached squad, looked up by name (sub_10315790) when not cached yet (stub 0x10009f70)
	const char *sub_1000b5cd();	// stub 0x1000b5cd: CBaseEntity::GetDebugName
	bool sub_10135c10();	// tests the condition on the squad's members; warns when the condition is invalid or the squad is missing
	void vfunc113();	// slot 113 "Activate" (plain member): resolves the squad, looks the condition name up (the global condition table, sub_102c8cc0) into +0x48c and, when it is not positive, writes a warning with the debug name and the condition name on screen at the origin (a red cross and the text, 10000 seconds)
public:
	datamap_t * vfunc82();
};
