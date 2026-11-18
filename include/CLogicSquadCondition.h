// CLogicSquadCondition: logic_squad_condition (RTTI CLogicSquadCondition : CLogicalEntity), vtable 0x10469b04, size 0x490.
// Constructor: CLogicalEntity (CBaseEntity(0), vtable 0x104475c4), the two COutputEvent constructors, own vftable.
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"
#include "CUnknown103160c0.h"

struct datamap_t;

class CLogicSquadCondition : public CLogicalEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);

	const char *m_name450;	// +0x450: name of the condition
	const char *m_name454;	// +0x454: name of the squad
	COutputEvent m_Out458;	// +0x458 (names unknown)
	COutputEvent m_Out470;	// +0x470
	CUnknown103160c0 *m_pSquad488;	// +0x488: the cached squad
	int m_nCondition;	// +0x48c: the condition id (not positive when the name was invalid)

	CUnknown103160c0 *sub_10135bd0();	// the cached squad, looked up by name (sub_10315790) when not cached yet (stub 0x10009f70)
	bool sub_10135c10();	// tests the condition on the squad's members; warns when the condition is invalid or the squad is missing
	void vfunc113();	// slot 113 "Activate" (plain member): resolves the squad, looks the condition name up (the global condition table, sub_102c8cc0) into +0x48c and, when it is not positive, writes a warning with the debug name and the condition name on screen at the origin (a red cross and the text, 10000 seconds)
public:
	virtual datamap_t * vfunc82();
};
