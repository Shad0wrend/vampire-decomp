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
