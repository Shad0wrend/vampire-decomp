// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d8230 size=0xc
#include "CShadowProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CShadowProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100d8270 size=0x23
#include "CShadowProxy.h"
struct IMatV { virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3(); virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7(); virtual int v8(); virtual int v9(); virtual int v10(); virtual int FindVar(const char *, void *, bool); };
// TARGET: CShadowProxy::vfunc0
bool CShadowProxy::vfunc0(void *a, void *b) { IMatV *m = (IMatV *)a; m_unk4 = m->FindVar("$basetexture", &a, false); return *(bool *)&a; }
// END FUNCTION

// FUNCTION: 0x100d82a0 size=0x3c
#include "CShadowProxy.h"
struct ShadowMgrView { int sub_100d5d30(void *a); };
extern ShadowMgrView g_104cf0d8;
struct ShadowVarView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17();
	virtual int v18();
	virtual void v19(int a);
	virtual void v20(); virtual void v21(); virtual void v22();
	virtual int v23();
};
void CShadowProxy::vfunc1(int arg)
{
	int v = g_104cf0d8.sub_100d5d30((void *)arg);
	ShadowVarView *p = (ShadowVarView *)m_unk4;
	if (p->v23() != 3 || v != ((ShadowVarView *)m_unk4)->v18())
		((ShadowVarView *)m_unk4)->v19(v);
}
// END FUNCTION
