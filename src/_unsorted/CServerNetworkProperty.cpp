// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ab410 size=0x3
#include "CServerNetworkProperty.h"
int CServerNetworkProperty::vfunc12()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101ab430 size=0x4
#include "CServerNetworkProperty.h"
int CServerNetworkProperty::vfunc13()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x101ab450 size=0x8
#include "CServerNetworkProperty.h"
#include "CUnknown10146700.h"

int CServerNetworkProperty::vfunc10()
{
	return ((CUnknown10146700 *)((char *)this + 0x10))->sub_10146700();
}
// END FUNCTION

// FUNCTION: 0x101ab470 size=0x8
#include "CServerNetworkProperty.h"
struct CUnknown10146790 { char a; char b; char c; void sub_10146790(); };
// TARGET: CServerNetworkProperty::vfunc11
void CServerNetworkProperty::vfunc11() { ((CUnknown10146790*)m_unk10)->sub_10146790(); }
// END FUNCTION

// FUNCTION: 0x101ab490 size=0x4
#include "CServerNetworkProperty.h"
int CServerNetworkProperty::vfunc4()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x101ab4b0 size=0x41
#include "CServerNetworkProperty.h"
struct CNetPropView { virtual void s0(); virtual void s1(); virtual int GetFlags(); virtual void SetFlags(int f); };
int CServerNetworkProperty::vfunc7()
{
    CNetPropView *v = (CNetPropView *)this;
    if (v->GetFlags() & 0x10000) {
        v->SetFlags(v->GetFlags() & ~0x10000);
        engine->vfunc121(*(int *)((char *)this + 0xc), (int *)((char *)this + 0x18));
    }
    return *(int *)((char *)this + 0x80);
}
// END FUNCTION

// FUNCTION: 0x101ab520 size=0x1e
#include "CServerNetworkProperty.h"

// TARGET: CServerNetworkProperty::vfunc14
CServerNetworkProperty *CServerNetworkProperty::vfunc14(unsigned int flags)
{
	sub_10004246();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ab650 size=0x4
#include "CServerNetworkProperty.h"
int CServerNetworkProperty::vfunc0()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x101ab670 size=0xf
#include "CServerNetworkProperty.h"

struct CNetPropSlot5View
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5(int a);
};

// TARGET: CServerNetworkProperty::vfunc6
void CServerNetworkProperty::vfunc6()
{
	CNetPropSlot5View *p = *(CNetPropSlot5View **)((char *)this + 4);
	if (p)
	{
		p->vfunc5(1);
	}
}
// END FUNCTION

// FUNCTION: 0x101ab690 size=0xb
#include "CServerNetworkProperty.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7)
	virtual void d0(); virtual void d1(); virtual void d2();
	virtual void target();
};

// TARGET: CServerNetworkProperty::vfunc2
void CServerNetworkProperty::vfunc2()
{
	((CSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x101ab6b0 size=0xb
#include "CServerNetworkProperty.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
	virtual void target();
};

// TARGET: CServerNetworkProperty::vfunc3
void CServerNetworkProperty::vfunc3()
{
	((CSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x101ab6d0 size=0xb
#include "CServerNetworkProperty.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7)
	virtual void target();
};

// TARGET: CServerNetworkProperty::vfunc1
void CServerNetworkProperty::vfunc1()
{
	((CSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x101ab6f0 size=0x14
#include "CServerNetworkProperty.h"
extern char g_106b8540[];
struct string_t_v { const char *pszValue; };
struct COuterV { char pad[0x11c]; string_t_v m_iClassname; };
inline const char *STRING_V(const string_t_v *s) { return s->pszValue ? s->pszValue : g_106b8540; }

// TARGET: CServerNetworkProperty::vfunc5
const char *CServerNetworkProperty::vfunc5()
{
	COuterV *o = (COuterV *)m_pOuter;
	return STRING_V(&o->m_iClassname);
}
// END FUNCTION

// FUNCTION: 0x101ab760 size=0x5d
#include "CServerNetworkProperty.h"

struct CNetOuter101ab760
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
	virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74();
	virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84();
	virtual void v85();
	virtual char Check(int a, int b, int c, int d, int e);
	virtual void Notify(const int *pBox);
};
struct CNetHook101ab760
{
	virtual void v0();
	virtual char Check(int a, int b, int c, int d, char bPrev);
};
struct CNetView101ab760
{
	void *m_vptr;
	CNetOuter101ab760 *m_pOuter;
	CNetHook101ab760 *m_pHook;
};

void CServerNetworkProperty::vfunc8(const int *pBox)
{
	CNetView101ab760 *p = (CNetView101ab760 *)this;
	char bResult = p->m_pOuter->Check(0, pBox[0], pBox[1], pBox[2], pBox[3]);
	if (p->m_pHook)
		bResult = p->m_pHook->Check(pBox[0], pBox[1], pBox[2], pBox[3], bResult);
	if (bResult)
		p->m_pOuter->Notify(pBox);
}
// END FUNCTION

// FUNCTION: 0x101ab7e0 size=0xb
#include "CBaseEntitySlots.h"
#include "CServerNetworkProperty.h"
void CServerNetworkProperty::vfunc9()
{
	// the outer entity's slot 86 with no arguments of its own (the game jumps to it: its caller's arguments)
	((CBaseEntitySlots *)m_pOuter)->slot86();
}
// END FUNCTION
