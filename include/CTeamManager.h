// CTeamManager: declared by pcdecomp transplant for 0x102307e0 from CNPC_VGargoyle (0x10377b60);
// only what matched code needs, as plain members.
#pragma once

#ifdef PCD_INITIALIZERS
#include "GameSystemRoot.h"	// the initializer units: Source's CAutoGameSystem root
#include "CUtlSymbolTable.h"
#endif

class CTeamManager
#ifdef PCD_INITIALIZERS
	: public CAutoGameSystem	// the base the flat model leaves out
#endif
{
public:
	CTeamManager *vfunc8(unsigned int flags);
public:
#ifdef PCD_INITIALIZERS
	CUtlSymbolTable m_symbols;	// 0x08: the team names
#else	// the root's slots 2 and 5 return void there: these int forms would not override them
	int vfunc2();
	int vfunc5();
#endif
};
