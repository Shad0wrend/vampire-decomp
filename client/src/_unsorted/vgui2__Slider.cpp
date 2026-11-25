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

// FUNCTION: 0x101bb7d0 size=0x47
#include "vgui2__Slider.h"
struct SliderView { char pad[0x78]; int m_lo; int m_hi; int m_val; };
// TARGET: ?vfunc107@Slider@vgui2@@UAEXH@Z
void vgui2::Slider::vfunc107(int value)
{
	SliderView *s = (SliderView *)this;
	int old = s->m_val;
	if (value < s->m_lo)
		value = s->m_lo;
	if (value > s->m_hi)
		value = s->m_hi;
	s->m_val = value;
	vfunc118();
	if (s->m_val != old)
		vfunc120();
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

// FUNCTION: 0x101bb840 size=0xa0
#include "vgui2__Slider.h"
struct SliderV {
	char pad0[0x58];
	int m_nob;
	char pad1[0x60 - 0x5c];
	int m_nobPos0;
	int m_nobPos1;
	char pad2[0x78 - 0x68];
	int m_rangeMin;
	int m_rangeMax;
	int m_value;
};
// TARGET: vgui2::Slider::vfunc118
void vgui2::Slider::vfunc118()
{
	SliderV *s = (SliderV *)this;
	int wide, tall;
	vfunc65(wide, tall);
	float fnob = (float)s->m_nob;
	float fvalue = (float)(s->m_value - s->m_rangeMin);
	float frange = (float)(s->m_rangeMax - s->m_rangeMin);
	float fper = fvalue / frange;
	float freepixels = (float)wide - fnob;
	float firstpixel = freepixels * fper + fnob * 0.5f;
	s->m_nobPos0 = (int)(firstpixel - (float)(s->m_nob / 2));
	s->m_nobPos1 = (int)((float)(s->m_nob / 2) + firstpixel);
	if (s->m_nobPos1 > wide) {
		s->m_nobPos0 = wide - s->m_nob;
		s->m_nobPos1 = wide;
	}
	vfunc6();
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

// FUNCTION: 0x101bb940 size=0x45
#include "vgui2__Slider.h"
struct KV101b56c0 { KV101b56c0 *sub_101b56c0(const char *, const char *, int); };
void *sub_101b6840(int);
// TARGET: vgui2::Slider::vfunc120
int vgui2::Slider::vfunc120()
{
	KV101b56c0 *kv = (KV101b56c0 *)sub_101b6840(0x1c);
	return vfunc43(kv ? kv->sub_101b56c0("SliderMoved", "position", m_h80) : 0);
}
// END FUNCTION

// FUNCTION: 0x101bb990 size=0x68
#include "vgui2__Slider.h"
#include "vgui2__Panel.h"

extern int sub_101ac8d0();

using namespace vgui2;

class SchemeView
{
public:
	virtual void s0(); virtual void s1(); virtual void s2();
	virtual void s3(); virtual void s4(); virtual void s5();
	virtual void s6(); virtual void s7(); virtual void s8();
	virtual int vfunc9(const char *, int);
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17();
	virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21();
	virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25();
	virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33();
	virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37();
	virtual void s38();
	virtual void vfunc39(int &, int &);
};

void vgui2::Slider::vfunc75(int pScheme)
{
	int a, b;
	((SchemeView *)sub_101ac8d0())->vfunc39(a, b);
	((Panel *)this)->Panel::vfunc75(pScheme);
	int thumbwidth = ((SchemeView *)pScheme)->vfunc9("thumbwidth", 0);
	if ( thumbwidth )
	{
		double scaled = a * 0.0009765625;
		vfunc116((int)(scaled * thumbwidth));
	}
}
// END FUNCTION

// FUNCTION: 0x101bba00 size=0x55
#include "vgui2__Slider.h"

struct Color101bba00 { int m_dw; };

class ISchemeView101bba00
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual int GetBorder(const char *pName);
	virtual void v4();
	virtual void v5();
	virtual Color101bba00 &GetSchemeColor(Color101bba00 &col, const char *pName);
};

// TARGET: vgui2::Slider::vfunc74
int vgui2::Slider::vfunc74(int pScheme)
{
	Panel::vfunc74(pScheme);
	Color101bba00 col;
	vfunc51(((ISchemeView101bba00 *)pScheme)->GetSchemeColor(col, "Slider/SliderFgColor").m_dw);
	*(int *)((char *)this + 0x88) = ((ISchemeView101bba00 *)pScheme)->GetBorder("ButtonBorder");
	return (*(int *)((char *)this + 0x8c) = ((ISchemeView101bba00 *)pScheme)->GetBorder("ButtonDepressedBorder"));
}
// END FUNCTION

// FUNCTION: 0x101bba60 size=0x85
#include "vgui2__Slider.h"
struct SurfV121
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34();
	virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38();
	virtual void GetScreenSize(int &wide, int &tall);
};
SurfV121 *sub_101ac8d0();
// TARGET: vgui2::Slider::vfunc121
void vgui2::Slider::vfunc121(int &x, int &y, int &w, int &h)
{
	int wide, tall;
	vfunc65(wide, tall);
	int sw, st;
	sub_101ac8d0()->GetScreenSize(sw, st);
	double f = st * 0.0013020833333333333;
	x = (int)m_p58 / 2;
	y = (int)(f * 36.0);
	w = wide - (int)m_p58;
	h = (int)(f * 4.0);
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

// FUNCTION: 0x101bbe90 size=0x82
#include "vgui2__Slider.h"
#include "vgui2__TextImage.h"

struct SchemeMgrView
{
	virtual void m0();
	virtual void m1();
	virtual void m2();
	virtual void m3();
	virtual void *GetFont(void *scheme);
};

struct FontObjView
{
	virtual void m0();
	virtual void m1();
	virtual void m2();
	virtual void m3();
	virtual void *GetFont(const char *name);
};

struct SliderView
{
	char pad[0x98];
	vgui2::TextImage *m_pTextImage;
};

void *sub_101ac8c0();

// TARGET: vgui2::Slider::vfunc117
void vgui2::Slider::vfunc117(const char *text)
{
	if (!text)
		return;
	SliderView *s = (SliderView *)this;
	if (s->m_pTextImage)
		delete s->m_pTextImage;
	s->m_pTextImage = new vgui2::TextImage(text, sub_101aa220());
	void *obj = ((SchemeMgrView *)sub_101ac8c0())->GetFont((void *)sub_101aa220());
	s->m_pTextImage->vfunc30((int)((FontObjView *)obj)->GetFont("Copperplate"));
}
// END FUNCTION

// FUNCTION: 0x101bc020 size=0xa1
#include "vgui2__Slider.h"
struct ColX { unsigned char r, g, b, a; ColX() {} ColX(int R, int G, int B, int A) { r = R; g = G; b = B; a = A; } };
struct ISurfY {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void SetColor(ColX);
	virtual void v11();
	virtual void FillRect(int, int, int, int);
};
struct IChildX { virtual void v0(); virtual void SetBounds(int, int, int, int); };
ISurfY *sub_101ac8d0();
// TARGET: vgui2::Slider::vfunc97
void vgui2::Slider::vfunc97()
{
	Panel::vfunc97();
	int x, y, w, h;
	vfunc121(x, y, w, h);
	ColX c(31, 31, 31, 255);
	sub_101ac8d0()->SetColor(c);
	sub_101ac8d0()->FillRect(x, y, x + w, y + h);
	IChildX *child = *(IChildX **)&m_unk8c;
	if (child)
		child->SetBounds(x, y, x + w, y + h);
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

// FUNCTION: 0x101bc110 size=0xb4
#include "vgui2__Slider.h"
struct CSurf101bc110 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(int *a, int *b); };
CSurf101bc110 *sub_101ac8b0();
struct SliderView101bc110 { char pad[0x5c]; char m_bOn; int m_unk60; int m_n64; int m_n68; int m_n6c; int m_n70; };
void vgui2::Slider::vfunc84(int wide, int tall)
{
	SliderView101bc110 *s = (SliderView101bc110 *)this;
	if (s->m_bOn)
	{
		int w, h;
		sub_101ac8b0()->v27(&wide, &tall);
		vfunc27(&wide, &tall);
		vfunc65(w, h);
		s->m_unk60 = s->m_n68 - s->m_n70 + wide;
		s->m_n64 = s->m_n6c - s->m_n70 + wide;
		if (s->m_n64 > w)
		{
			s->m_unk60 -= s->m_n64 - w;
			s->m_n64 = w;
		}
		if (s->m_unk60 < 0)
		{
			s->m_n64 -= s->m_unk60;
			s->m_unk60 = 0;
		}
		vfunc119();
		vfunc6();
		vfunc120();
	}
}
// END FUNCTION

// FUNCTION: 0x101bc1d0 size=0xcf
#include "vgui2__Slider.h"

struct InputView
{
	virtual void v0();
	virtual void SetMouseCapture(int vpanel);
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void GetCursorPos(int &x, int &y);
};

struct SliderView
{
	char m_pad[0x5c];
	bool m_bDrag;
	int m_n60;
	int m_n64;
	int m_n68;
	int m_n6c;
	int m_n70;
	int m_n74;
};

struct PV
{
	int sub_101ab130();
};

extern int sub_101ac8b0();

// TARGET: vgui2::Slider::vfunc87
void vgui2::Slider::vfunc87(int code)
{
	int x, y;
	((InputView *)sub_101ac8b0())->GetCursorPos(x, y);
	vfunc27(&x, &y);

	SliderView *s = (SliderView *)this;
	if ( x >= s->m_n60 && x < s->m_n64 )
	{
		s->m_bDrag = true;
		((InputView *)sub_101ac8b0())->SetMouseCapture(vfunc0());
		s->m_n68 = s->m_n60;
		s->m_n6c = s->m_n64;
		s->m_n70 = x;
		s->m_n74 = y;
	}
	else
	{
		int nMin, nMax;
		vfunc110((int)&nMin, (int)&nMax);
		int wide = ((PV *)this)->sub_101ab130();
		vfunc107((int)((float)(nMax - nMin) / wide * x) + nMin);
	}
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
