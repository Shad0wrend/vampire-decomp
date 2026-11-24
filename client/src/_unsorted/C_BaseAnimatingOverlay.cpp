// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10097210 size=0x1e
#include "C_BaseAnimatingOverlay.h"

// VC6 writes C_BaseAnimatingOverlay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseAnimatingOverlay *pcd_emit_10097210() { return new C_BaseAnimatingOverlay; }

// TARGET: ??_GC_BaseAnimatingOverlay@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10097360 size=0x6
#include "C_BaseAnimatingOverlay.h"
namespace lifted {
extern char g_102ae334;
}
int C_BaseAnimatingOverlay::vfunc16()
{
    return (int)&lifted::g_102ae334;
}
// END FUNCTION

// FUNCTION: 0x10097370 size=0x3
#include "C_BaseAnimatingOverlay.h"
int C_BaseAnimatingOverlay::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10097950 size=0x6
#include "C_BaseAnimatingOverlay.h"
namespace lifted {
extern char g_102ae31c;
}
int C_BaseAnimatingOverlay::vfunc17()
{
    return (int)&lifted::g_102ae31c;
}
// END FUNCTION

// FUNCTION: 0x10097960 size=0x41
#include "C_BaseAnimatingOverlay.h"

struct Blob4C { int d[0x13]; };
struct Elem { Blob4C a; Blob4C b; Blob4C c; };

struct OverlayView
{
	char m_pad[0x790];
	Elem m_elems[4];
};

int C_BaseAnimatingOverlay::vfunc70()
{
	OverlayView *v = (OverlayView *)this;
	Elem *e = v->m_elems;
	for ( int i = 4; i--; )
	{
		Blob4C *p = &e->b;
		p[-1] = p[0];
		p[0] = p[1];
		e++;
	}
	return C_BaseAnimating::vfunc70();
}
// END FUNCTION
