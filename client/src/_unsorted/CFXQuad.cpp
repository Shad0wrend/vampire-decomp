// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e5d20 size=0x1e
#include "CFXQuad.h"

// VC6 writes CFXQuad's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXQuad *pcd_emit_100e5d20(const CFXQuad &other) { return new CFXQuad(other); }

// TARGET: ??_GCFXQuad@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e6530 size=0x13
#include "CFXQuad.h"
bool CFXQuad::vfunc3()
{
	if (m_flB < m_flA)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100e6550 size=0x1a
#include "CFXQuad.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual int f13(int); };
}
void CFXQuad::vfunc4()
{
    if ((*(int *)((char *)this + 0x10)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 0x10)))->f13(0);
        *(int *)((char *)this + 0x10) = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100e6570 size=0xd
struct V_100e6570 { int m_unk[0x38 / 4]; float m_f38; };
// TARGET: sub_100e6570
void __fastcall sub_100e6570(V_100e6570 *self, int edx, double dt)
{
	self->m_f38 += dt;
}
// END FUNCTION
