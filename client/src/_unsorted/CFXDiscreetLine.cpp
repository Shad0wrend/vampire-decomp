// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10044f50 size=0x1e
#include "CFXDiscreetLine.h"

// VC6 writes CFXDiscreetLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXDiscreetLine *pcd_emit_10044f50(const CFXDiscreetLine &other) { return new CFXDiscreetLine(other); }

// TARGET: ??_GCFXDiscreetLine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10045670 size=0x18
#include "CFXDiscreetLine.h"
bool CFXDiscreetLine::vfunc3()
{
	if (m_flUnk10 > 0.0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10045690 size=0x1a
#include "CFXDiscreetLine.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual int f13(int); };
}
void CFXDiscreetLine::vfunc4()
{
    if ((*(int *)((char *)this + 0xc)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 0xc)))->f13(0);
        *(int *)((char *)this + 0xc) = 0;
    }
}
// END FUNCTION
