// CUtlSymbolLessCtx.h: the symbol table's less-function context (the string being looked up and the table); the
// source of the lookup defines its own copy, so the initializer units alone see this one, with its constructor.
#pragma once
#ifdef PCD_INITIALIZERS
struct CUtlSymbolLessCtx
{
	CUtlSymbolLessCtx() { m_pUserString = 0; m_pTable = 0; }
	const char *m_pUserString;
	void *m_pTable;
};
#endif
