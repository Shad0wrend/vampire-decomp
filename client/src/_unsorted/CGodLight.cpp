// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a000 size=0x1e
#include "CGodLight.h"

// VC6 writes CGodLight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CGodLight *pcd_emit_1004a000(const CGodLight &other) { return new CGodLight(other); }

// TARGET: ??_GCGodLight@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1004a020 size=0x7e
#include "CGodLight.h"
struct SCol { unsigned char r, g, b, a; SCol() {} SCol(int _r, int _g, int _b, int _a) { r = _r; g = _g; b = _b; a = _a; } };
void CGodLight::vfunc1()
{
	CLightRays::vfunc1();
	if (m_Rays.Count() != 0) {
		SCol black;
		SCol tint(100, 100, 80, 255);
		black.r = 0;
		black.g = 0;
		black.b = 0;
		black.a = 0;
		for (int i = 0; i < m_Rays.Count(); i++) {
			const SCol *c = (m_Rays[i].n28 % 3) ? &black : &tint;
			m_Rays[i].m_unk14 = *(int *)c;
			m_Rays[i].m_unk10 = *(int *)c;
		}
	}
}
// END FUNCTION
