// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8520 size=0xc
#include "CTextConsoleProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CTextConsoleProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100c8530 size=0x1e
#include "CTextConsoleProxy.h"

// VC6 writes CTextConsoleProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextConsoleProxy *pcd_emit_100c8530() { return new CTextConsoleProxy; }

// TARGET: ??_GCTextConsoleProxy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c86f0 size=0x28
#include "CTextConsoleProxy.h"
struct M100c86f0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual int v11(const char *, char *, bool);
};
struct T100c86f0 { int vt; int m_p; };
bool CTextConsoleProxy::vfunc0(void *pMat, void *)
{
	char *const &r = *(char *const *)&pMat;
	((T100c86f0 *)this)->m_p = ((M100c86f0 *)pMat)->v11("$basetexture", (char *)&pMat, false);
	return (bool)*(volatile char *)&pMat;
}
// END FUNCTION
