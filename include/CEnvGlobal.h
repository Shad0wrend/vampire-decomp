// CEnvGlobal: declared by pcdecomp transplant for 0x10135ef0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CLogicalEntity.h"

class CEnvGlobal : public CLogicalEntity	// RTTI: CEnvGlobal : CLogicalEntity (slot 117 is CLogicalEntity's 0x100b4360)
{
public:
	CEnvGlobal() : CLogicalEntity() {}
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_10132a00(int unused);	// like sub_10132ae0 with state 1
	void sub_10132a70(int unused);	// like sub_10132ae0 with state 0
	void sub_10132ae0(int unused);	// sets the state (2) of the global named at +0x450: updates its record when there is one, else adds one for the current map
	virtual int vfunc124();	// "DrawDebugTextOverlays": base lines, then (when bit 0 of the byte at +0x224 is set) "State: %s" (+0x450) and "Value: OFF/ON/DEAD" as overlay text on the edict at +0x2e0
	virtual void vfunc103();	// slot 103 "Spawn"-like: removes the entity when it has no global name; with spawn flag bit 0 (a new global) and no record of the name yet, adds one (name, map name, state)

	const char *m_pszGlobalName;	// 0x450
	int m_n0454;
	int m_nInitialState;	// 0x458
public:
    virtual datamap_t * vfunc82();
};
