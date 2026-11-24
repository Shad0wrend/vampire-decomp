// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e6610 size=0x1e
#include "CFXStaticLine.h"

// VC6 writes CFXStaticLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXStaticLine *pcd_emit_100e6610() { return new CFXStaticLine; }

// TARGET: ??_GCFXStaticLine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e6bf0 size=0x18
#include "CFXStaticLine.h"
bool CFXStaticLine::vfunc3()
{
	if (*(float *)((char *)this + 0x2c) > 0.0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100e6c10 size=0x1a
#include "CFXStaticLine.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual int f13(int); };
}
void CFXStaticLine::vfunc4()
{
    if ((*(int *)((char *)this + 0xc)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 0xc)))->f13(0);
        *(int *)((char *)this + 0xc) = 0;
    }
}
// END FUNCTION
