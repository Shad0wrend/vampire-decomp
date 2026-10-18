// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cff30 size=0x2b
#include "CEQ_SaveRestoreBlockHandler.h"

extern short g_1055deb0;

void CEQ_SaveRestoreBlockHandler::vfunc6(IRestoreRead *pRestore)
{
	short version;
	pRestore->ReadShort(&version, 1, 0);
	m_bVersionMatches = (version == g_1055deb0);
}
// END FUNCTION
