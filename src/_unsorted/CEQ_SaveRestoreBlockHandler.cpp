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

// FUNCTION: 0x100cff00 size=0x13
#include "vampire.h"

struct CUnknown100cff00
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(const void *pData, int a);
};

extern char g_1055deb0[];

// TARGET: sub_100cff00
void __stdcall sub_100cff00(CUnknown100cff00 *pObj)
{
	pObj->v8(g_1055deb0, 1);
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

// FUNCTION: 0x100cff70 size=0x19
#include "CEQ_SaveRestoreBlockHandler.h"
#include "CEventQueue.h"

extern CEventQueue g_106e7050;

// TARGET: CEQ_SaveRestoreBlockHandler::vfunc7
void CEQ_SaveRestoreBlockHandler::vfunc7(int a, int b, int c)
{
	if (m_bVersionMatches)
		g_106e7050.sub_100cfda0((IEQRestore *)a);
}
// END FUNCTION
