// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bbba0 size=0x1e
#include "C_GameRules.h"

// VC6 writes C_GameRules's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_GameRules *pcd_emit_100bbba0() { return new C_GameRules; }

// TARGET: ??_GC_GameRules@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100bbbc0 size=0x20
#include "C_GameRules.h"
struct CX484 { void sub_100792d0(); };
C_GameRules::~C_GameRules()
{
	CX484 *p = m_pX;
	if (p)
	{
		p->sub_100792d0();
		operator delete(p);
	}
}
// END FUNCTION

// FUNCTION: 0x100bbbe0 size=0x14
#include "C_GameRules.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual int f7(); };
}
int C_GameRules::vfunc6()
{
    if ((*(int *)((char *)this + 4)) == 0) {
        ((lifted::V *)this)->f7();
    }
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x100bbc00 size=0x27
#include "C_GameRules.h"
struct CUnknown100792b0 { char pad[0x484]; CUnknown100792b0 *sub_100792b0(); };
struct R100bbc00 { void *vt; CUnknown100792b0 *m_p; };
int C_GameRules::vfunc7()
{
	CUnknown100792b0 *p = new CUnknown100792b0;
	return (int)(((R100bbc00 *)this)->m_p = p ? p->sub_100792b0() : 0);
}
// END FUNCTION

// FUNCTION: 0x100bbc30 size=0xb
#include "C_GameRules.h"
namespace lifted {
int sub_1012c6d0();
struct V { virtual int f0(); };
}
int C_GameRules::vfunc5()
{
    return ((lifted::V *)(lifted::sub_1012c6d0()))->f0();
}
// END FUNCTION

// FUNCTION: 0x100bbc60 size=0x1
#include "C_GameRules.h"
void C_GameRules::vfunc1()
{
}
// END FUNCTION

// FUNCTION: 0x100bbc70 size=0x1
#include "C_GameRules.h"
void C_GameRules::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x100bbc80 size=0x1
#include "C_GameRules.h"
void C_GameRules::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x100bbc90 size=0x5
#include "C_GameRules.h"
bool C_GameRules::vfunc4(int a0, int a1)
{
    return 0;
}
// END FUNCTION
