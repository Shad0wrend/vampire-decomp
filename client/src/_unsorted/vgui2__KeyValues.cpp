// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b57a0 size=0x3b
#include "vgui2__KeyValues.h"
#include <stdlib.h>
int sub_101b6860(int);
vgui2::KeyValues::~KeyValues()
{
	vgui2::KeyValues *p = m_pSub;
	if (p) {
		do {
			vgui2::KeyValues *next = p->m_pPeer;
			p->~KeyValues();
			sub_101b6860((int)p);
			p = next;
		} while (p);
	}
	free(m_pName);
}
// END FUNCTION

// FUNCTION: 0x101b57e0 size=0x15
#include "vgui2__KeyValues.h"
namespace lifted {
int sub_101ac930();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); };
}
int vgui2::KeyValues::vfunc0()
{
    return ((lifted::V *)(lifted::sub_101ac930()))->f4(*(int *)((char *)this + 4));
}
// END FUNCTION

// FUNCTION: 0x101b5800 size=0x4
#include "vgui2__KeyValues.h"
int vgui2::KeyValues::vfunc1()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x101b6430 size=0x4
#include "vgui2__KeyValues.h"
int vgui2::KeyValues::vfunc7()
{
    return *(int *)((char *)this + 0x18);
}
// END FUNCTION

// FUNCTION: 0x101b6440 size=0x4
#include "vgui2__KeyValues.h"
int vgui2::KeyValues::vfunc8()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x101b64a0 size=0x28
#include "vgui2__KeyValues.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int); };
}
int vgui2::KeyValues::vfunc12(int a0, int a1)
{
    int t0 = ((lifted::V *)this)->f4(a0, 0);
    if (t0 != 0) {
        if ((*(int *)((char *)t0 + 0x10)) != 4) {
            return 0;
        }
        return *(int *)((char *)t0 + 0xc);
    }
    return a1;
}
// END FUNCTION

// FUNCTION: 0x101b6640 size=0x21
#include "vgui2__KeyValues.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int); };
}
int vgui2::KeyValues::vfunc15(int a0, int a1)
{
    int t0 = ((lifted::V *)this)->f4(a0, 1);
    if (t0 != 0) {
        *(int *)((char *)t0 + 0x10) = 2;
        *(int *)((char *)t0 + 0xc) = a1;
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101b6670 size=0x21
#include "vgui2__KeyValues.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int); };
}
int vgui2::KeyValues::vfunc16(int a0, int a1)
{
    int t0 = ((lifted::V *)this)->f4(a0, 1);
    if (t0 != 0) {
        *(int *)((char *)t0 + 0x10) = 3;
        *(int *)((char *)t0 + 0xc) = a1;
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101b66a0 size=0x21
#include "vgui2__KeyValues.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int); };
}
int vgui2::KeyValues::vfunc17(int a0, int a1)
{
    int t0 = ((lifted::V *)this)->f4(a0, 1);
    if (t0 != 0) {
        *(int *)((char *)t0 + 0x10) = 4;
        *(int *)((char *)t0 + 0xc) = a1;
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101b67a0 size=0x2d
#include "vgui2__KeyValues.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int); };
}
bool vgui2::KeyValues::vfunc13(int a0)
{
    int t0 = ((lifted::V *)this)->f4(a0, 0);
    if (t0 == 0) {
        return 1;
    }
    if ((*(int *)((char *)t0 + 0x10)) == 0) {
        if ((*(int *)((char *)t0 + 0x18)) == 0) {
            return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b67d0 size=0x28
#include "vgui2__KeyValues.h"
namespace lifted {
struct C101b57a0 { int sub_101b57a0(); };
int sub_101b6860(int);
}
void vgui2::KeyValues::vfunc19()
{
    int t0 = *(int *)((char *)this + 0x18);
    if (t0 != 0) {
        ((lifted::C101b57a0 *)t0)->sub_101b57a0();
        lifted::sub_101b6860(t0);
    }
    *(int *)((char *)this + 0x18) = 0;
    *(int *)((char *)this + 0x10) = 0;
}
// END FUNCTION

// FUNCTION: 0x101b6800 size=0x1b
#include "vgui2__KeyValues.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int); };
}
int vgui2::KeyValues::vfunc20(int a0)
{
    int t0 = ((lifted::V *)this)->f4(a0, 0);
    if (t0 != 0) {
        return *(int *)((char *)t0 + 0x10);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b6820 size=0x17
#include "vgui2__KeyValues.h"
namespace lifted {
int sub_101b57a0();
int sub_101b6860(int);
}
void vgui2::KeyValues::vfunc21()
{
    if (((int)this) != 0) {
        lifted::sub_101b57a0();
        lifted::sub_101b6860((int)this);
    }
}
// END FUNCTION
