// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019ada0 size=0x6
#include "CPython_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1055e570;
}
int CPython_SaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_1055e570;
}
// END FUNCTION

// FUNCTION: 0x1019b0c0 size=0x13
#include "vampire.h"

struct CUnknown1019b0c0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(const void *pData, int a);
};

extern char g_1058f650[];

// TARGET: sub_1019b0c0
void __stdcall sub_1019b0c0(CUnknown1019b0c0 *pObj)
{
	pObj->v8(g_1058f650, 1);
}
// END FUNCTION
