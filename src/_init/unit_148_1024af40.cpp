// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1024af40 size=0xa
#define PCD_INITIALIZERS
#include "CUtlSymbolTable.h"
// utlsymbol.cpp: the table CUtlSymbol makes on first use (CUtlSymbol::s_pSymbolTable), deleted at exit by a helper
// object whose class has only a destructor (its construct is a bare `ret`)
CUtlSymbolTable *g_1088ae3c = 0;

class CCleanupUtlSymbolTable
{
public:
	~CCleanupUtlSymbolTable()
	{
		delete g_1088ae3c;
		g_1088ae3c = 0;
	}
};
static CCleanupUtlSymbolTable g_CleanupSymbolTable;
// END FUNCTION

// FUNCTION: 0x1024b110 size=0x5
#define PCD_INITIALIZERS
#include "CUtlSymbolLessCtx.h"
CUtlSymbolLessCtx g_1088ae34;
// END FUNCTION
