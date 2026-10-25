// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010fef0 size=0x3a
#include "CBreakableSurface.h"

extern int *g_1070b228;
void sub_100154ec();

// TARGET: ?vfunc130@CBreakableSurface@@UAEXH@Z
void CBreakableSurface::vfunc130(int a)
{
    CBaseEntity::vfunc130(a);
    if (m_b4c4) {
        sub_100ac4e0((int)sub_100154ec, 0, 0);
        *(int *)((char *)this + 0x17c) = g_1070b228[3];
    }
}
// END FUNCTION

// FUNCTION: 0x101134f0 size=0x72
#include "CBreakableSurface.h"

extern void (*g_109f362c)(const char *fmt, ...);
void sub_101cd940(CBaseEntity *pEntity);

void CBreakableSurface::vfunc103()
{
	sub_1010d6a0();
	if (m_nFaceCheck == 1) {
		g_109f362c("Rejecting func_breakablesurf.  Has multiple faces that aren't NODRAW.\n");
		sub_101cd940(this);
	} else if (m_nFaceCheck == 2) {
		g_109f362c("Rejecting func_breakablesurf.  Drawn face isn't a quad.\n");
		sub_101cd940(this);
	} else {
		sub_100aaa40(4);
		m_b4c4 = 0;
		m_n454 = 0;
	}
	sub_100b3580(0x20000000);
	sub_100a9470(1);
}
// END FUNCTION

// FUNCTION: 0x101135c0 size=0x36
#include "CBreakableSurface.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBreakableSurface *CBreakableSurface::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
