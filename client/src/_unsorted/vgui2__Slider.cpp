// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bb780 size=0x1e
#include "vgui2__Slider.h"

// VC6 writes vgui2::Slider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Slider *pcd_emit_101bb780(const vgui2::Slider &other) { return new vgui2::Slider(other); }

// TARGET: ??_GSlider@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bb7a0 size=0x22
#include "vgui2__Slider.h"
namespace lifted {
struct C101a98f0 { int sub_101a98f0(int, int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual int f118(); };
}
int vgui2::Slider::vfunc111(int a0, int a1)
{
    ((lifted::C101a98f0 *)this)->sub_101a98f0(a0, a1);
    return ((lifted::V *)this)->f118();
}
// END FUNCTION

// FUNCTION: 0x101bb820 size=0x7
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc108()
{
    return *(int *)((char *)this + 0x80);
}
// END FUNCTION

// FUNCTION: 0x101bb830 size=0x8
#include "vgui2__Slider.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual int f118(); };
}
void vgui2::Slider::vfunc101()
{
    ((lifted::V *)this)->f118();
}
// END FUNCTION

// FUNCTION: 0x101bb8e0 size=0x56
#include "vgui2__Slider.h"

struct SliderFields_101bb8e0
{
	char pad0[0x58];
	int _nobSize;
	int pad1;
	int _nobPos[2];
	char pad2[0x78 - 0x68];
	int _range[2];
	int _value;
};

// TARGET: vgui2::Slider::vfunc119
void vgui2::Slider::vfunc119()
{
	SliderFields_101bb8e0 *self = (SliderFields_101bb8e0 *)this;
	int wide, tall;
	vfunc65(wide, tall);

	float fwide = (float)wide;
	float fvalue = (float)self->_nobPos[0] / (fwide - self->_nobSize);
	self->_value = (int)(fvalue * (double)(self->_range[1] - self->_range[0]) + self->_range[0] + 0.5);
}
// END FUNCTION

// FUNCTION: 0x101bbaf0 size=0x17
#include "vgui2__Slider.h"
namespace lifted {
struct C101bbb20 { int sub_101bbb20(); };
struct C101bbc40 { int sub_101bbc40(); };
struct C101bbde0 { int sub_101bbde0(); };
}
void vgui2::Slider::vfunc98()
{
    ((lifted::C101bbb20 *)this)->sub_101bbb20();
    ((lifted::C101bbc40 *)this)->sub_101bbc40();
    ((lifted::C101bbde0 *)this)->sub_101bbde0();
}
// END FUNCTION

// FUNCTION: 0x101bbb10 size=0xa
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc116(int a0)
{
    *(int *)((char *)this + 0x58) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101bc0d0 size=0x1b
#include "vgui2__Slider.h"
struct SliderView_101bc0d0 { char pad[0x78]; int m_lo; int m_hi; };
// TARGET: vgui2::Slider::vfunc109
void vgui2::Slider::vfunc109(int a, int b)
{
	SliderView_101bc0d0 *v = (SliderView_101bc0d0 *)this;
	int hi = b;
	v->m_lo = a;
	if (hi < a)
		hi = a;
	v->m_hi = hi;
}
// END FUNCTION

// FUNCTION: 0x101bc0f0 size=0x15
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc110(int a0, int a1)
{
    int t0 = *(int *)((char *)this + 0x78);
    *(int *)((char *)a0) = t0;
    int t1 = *(int *)((char *)this + 0x7c);
    *(int *)((char *)a1) = t1;
    return t1;
}
// END FUNCTION

// FUNCTION: 0x101bc2a0 size=0x8
#include "vgui2__Slider.h"
void vgui2::Slider::vfunc88(int a) { vfunc87(a); }
// END FUNCTION

// FUNCTION: 0x101bc2b0 size=0x18
#include "vgui2__Slider.h"
namespace lifted {
int sub_101ac8b0();
struct V { virtual void u0(); virtual int f1(int); };
}
void vgui2::Slider::vfunc89(int a0)
{
    *(char *)((char *)this + 0x5c) = 0;
    a0 = 0;
    ((lifted::V *)(lifted::sub_101ac8b0()))->f1(a0);
}
// END FUNCTION

// FUNCTION: 0x101bc2d0 size=0x15
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc112(int a0, int a1)
{
    int t0 = *(int *)((char *)this + 0x60);
    *(int *)((char *)a0) = t0;
    int t1 = *(int *)((char *)this + 0x64);
    *(int *)((char *)a1) = t1;
    return t1;
}
// END FUNCTION

// FUNCTION: 0x101bc2f0 size=0xd
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc113(int a0)
{
    *(int *)((char *)this + 0x84) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101bc300 size=0xd
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc115(int a0)
{
    *(int *)((char *)this + 0x9c) = a0;
    return a0;
}
// END FUNCTION
