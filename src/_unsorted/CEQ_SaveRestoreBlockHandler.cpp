// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cfec0 size=0x6
#include "CEQ_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1055e5bc;
}
int CEQ_SaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_1055e5bc;
}
// END FUNCTION

// FUNCTION: 0x100cfee0 size=0xa
#include "CEQ_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_106e7050;
struct C100024a5 { int sub_100024a5(); };
}
void CEQ_SaveRestoreBlockHandler::vfunc2()
{
    ((lifted::C100024a5 *)((int)&lifted::g_106e7050))->sub_100024a5();
}
// END FUNCTION

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
