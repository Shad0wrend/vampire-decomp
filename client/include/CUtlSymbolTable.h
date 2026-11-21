// CUtlSymbolTable.h: Source's CUtlSymbolTable (tier1/utlsymbol.h) as the initializer units see it: its constructor
// 0x1024b2d0 and destructor 0x1024b370 (CUnknown1024b2d0 / CUnknown1024b370 are the matched views of the same table).
// The whole file is guarded: the sources use the views.
#pragma once
#ifdef PCD_INITIALIZERS
class CUtlSymbolTable
{
public:
	CUtlSymbolTable(int growSize = 0, int initSize = 32, bool caseInsensitive = false);	// function 0x1024b2d0
	~CUtlSymbolTable();	// function 0x1024b370
	char m_pad0000[0x2c];
};
#endif
