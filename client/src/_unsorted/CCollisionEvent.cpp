// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10119420 size=0x37
#include "CCollisionEvent.h"
CCollisionEvent::CCollisionEvent()
{
}
// TARGET: ??0CCollisionEvent@@QAE@XZ
// END FUNCTION

// FUNCTION: 0x10119460 size=0x3
// TARGET: sub_10119460
void __stdcall sub_10119460(int)
{
}
// END FUNCTION

// FUNCTION: 0x10119470 size=0x1
#include "CCollisionEvent.h"

// TARGET: CCollisionEvent::vfunc7
void CCollisionEvent::vfunc7()
{
}
// END FUNCTION

// FUNCTION: 0x10119480 size=0x3
// TARGET: sub_10119480
void __stdcall sub_10119480(int, int)
{
}
// END FUNCTION

// FUNCTION: 0x10119550 size=0x97
#include "CCollisionEvent.h"
struct CCollisionImpact { void *m_pObj[2]; int m_unk8[3]; float m14; float m18; };
struct CGlobal104e0c44 { virtual void v0(); virtual bool v1(); char pad[0x28]; int m2c; };
extern CGlobal104e0c44 *g_104e0c44;
void sub_101201b0(void *, float);
// TARGET: CCollisionEvent::vfunc1
void CCollisionEvent::vfunc1(CCollisionImpact *p)
{
    for (int i = 0; i < 2; i++) {
        void *pObj = p->m_pObj[i];
        if (pObj && p->m14 < 1.0 && !g_104e0c44->v1() && g_104e0c44->m2c)
            sub_101201b0(pObj, p->m14);
    }
    if (p->m14 > 0.1f && p->m18 > 70.0f) {
        sub_101194c0(0, p);
        sub_101194c0(1, p);
    }
}
// END FUNCTION

// FUNCTION: 0x101195f0 size=0x3
#include "CCollisionEvent.h"

// TARGET: CCollisionEvent::vfunc2
void CCollisionEvent::vfunc2(int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x101196f0 size=0x3b
#include "CCollisionEvent.h"
struct OwnerV12 { void sub_10119660(int, int, int); };
struct IObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual int GetId(); };
// TARGET: CCollisionEvent::vfunc3
void CCollisionEvent::vfunc3(IObj *a, IObj *b, int c)
{
	int ia = a->GetId();
	int ib = b->GetId();
	if (!m_flag)
		sub_10119730(ia, ib);
	else
		((OwnerV12 *)this)->sub_10119660(ia, ib, 0);
}
// END FUNCTION

// FUNCTION: 0x10119f00 size=0x4a
#include "CCollisionEvent.h"
struct IObjA { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual int a6(); };
void sub_101197d0(IObjA *, IObjA *, int);
// TARGET: CCollisionEvent::vfunc5
void CCollisionEvent::vfunc5(IObjA *p1, IObjA *p2)
{
	if (p1 && p2) {
		int h = p1->a6();
		if (h) {
			if (!(sub_10119e60(h) < 0.5f))
				sub_101197d0(p2, p1, h);
		}
	}
}
// END FUNCTION
