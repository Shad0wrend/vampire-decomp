// CTeamManager (RTTI .?AVCTeamManager@@): base CAutoGameSystem (GameSystemRoot.h) and the team names' symbol table
// at +8.
#pragma once

#include "GameSystemRoot.h"
#include "CUtlSymbolTable.h"

class CTeamManager : public CAutoGameSystem
{
public:
	CTeamManager *vfunc8(unsigned int flags);	// slot 8 written out: the scalar deleting destructor
	void vfunc2();	// slot 2 (0x10230820): a tail call of sub_10010785 on m_symbols
	void vfunc3();	// slot 3 (0x10230840): a tail call of sub_102308f0
	void vfunc5();	// slot 5 (0x10230860): a tail call of sub_10010785 on m_symbols

	CUtlSymbolTable m_symbols;	// 0x08: the team names
};
