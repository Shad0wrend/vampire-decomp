// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c9e50 size=0x1e
#include "vgui2__ScrollBarSlider.h"

// VC6 writes vgui2::ScrollBarSlider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ScrollBarSlider *pcd_emit_101c9e50(const vgui2::ScrollBarSlider &other) { return new vgui2::ScrollBarSlider(other); }

// TARGET: ??_GScrollBarSlider@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c9e70 size=0x22
#include "vgui2__ScrollBarSlider.h"
namespace lifted {
struct C101a98f0 { int sub_101a98f0(int, int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual int f118(); };
}
int vgui2::ScrollBarSlider::vfunc114(int a0, int a1)
{
    ((lifted::C101a98f0 *)this)->sub_101a98f0(a0, a1);
    return ((lifted::V *)this)->f118();
}
// END FUNCTION

// FUNCTION: 0x101c9ea0 size=0x4
#include "vgui2__ScrollBarSlider.h"
bool vgui2::ScrollBarSlider::vfunc109()
{
    return *(bool *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x101c9eb0 size=0x46
#include "vgui2__ScrollBarSlider.h"
// TARGET: ?vfunc107@ScrollBarSlider@vgui2@@UAEXH@Z
void vgui2::ScrollBarSlider::vfunc107(int v)
{
	int old = m_w7c;
	if (v < m_i74)
		v = m_i74;
	if (v > m_unk78 - m_h80)
		v = m_unk78 - m_h80;
	m_w7c = v;
	vfunc118();
	if (m_w7c != old)
		vfunc120();
}
// END FUNCTION

// FUNCTION: 0x101c9f00 size=0x4
#include "vgui2__ScrollBarSlider.h"
int vgui2::ScrollBarSlider::vfunc108()
{
    return *(int *)((char *)this + 0x7c);
}
// END FUNCTION

// FUNCTION: 0x101c9f10 size=0x13
#include "vgui2__ScrollBarSlider.h"
namespace lifted {
struct C101ab2f0 { int sub_101ab2f0(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual int f118(); };
}
void vgui2::ScrollBarSlider::vfunc101()
{
    ((lifted::V *)this)->f118();
    ((lifted::C101ab2f0 *)this)->sub_101ab2f0();
}
// END FUNCTION

// FUNCTION: 0x101ca190 size=0x6b
#include "vgui2__ScrollBarSlider.h"

bool vgui2::ScrollBarSlider::vfunc116()
{
	int wide, tall;
	vfunc65(wide, tall);
	float flPos = (float)*(int *)((char *)this + 0x80);
	float flExtent = *(char *)((char *)this + 0x58) ? (float)tall : (float)wide;
	if (flPos > 0.0f)
	{
		if (flPos <= (float)*(int *)((char *)this + 0x84) + flExtent)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101ca200 size=0x42
#include "vgui2__ScrollBarSlider.h"
struct KV101b56c0 { KV101b56c0 *sub_101b56c0(const char *, const char *, int); };
void *sub_101b6840(int);
// TARGET: ?vfunc120@ScrollBarSlider@vgui2@@UAEHXZ
int vgui2::ScrollBarSlider::vfunc120()
{
	KV101b56c0 *kv = (KV101b56c0 *)sub_101b6840(0x1c);
	return vfunc43(kv ? kv->sub_101b56c0("ScrollBarSliderMoved", "position", m_w7c) : 0);
}
// END FUNCTION

// FUNCTION: 0x101ca250 size=0x61
#include "vgui2__ScrollBarSlider.h"
#define D1(n) virtual void n(){}
#define D4(p) virtual void p##a(){} virtual void p##b(){} virtual void p##c(){} virtual void p##d(){}
#define D16(p) D4(p##1) D4(p##2) D4(p##3) D4(p##4)
struct Col { unsigned v; };
struct Sch { D1(a1) D1(a2) D1(a3) virtual int GetBorder(const char *); D1(b1) D1(b2) virtual Col GetColor(const char *); };
struct SV {
	D16(a) D16(b) D16(c) D1(d1) D1(d2) virtual void SetBg(Col); virtual void SetFg(Col);
	char pad[0x84]; int border;
};
// TARGET: vgui2::ScrollBarSlider::vfunc74
int vgui2::ScrollBarSlider::vfunc74(int pS)
{
	Sch *s = (Sch *)pS;
	SV *t = (SV *)this;
	sub_101ab490(pS);
	t->SetFg(s->GetColor("ScrollBarSlider/ScrollBarSliderFgColor"));
	t->SetBg(s->GetColor("ScrollBarSlider/ScrollBarSliderBgColor"));
	return t->border = s->GetBorder("ButtonBorder");
}
// END FUNCTION

// FUNCTION: 0x101ca2c0 size=0xdc
#include "vgui2__ScrollBarSlider.h"

int sub_101ac8d0();

struct P53
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
	virtual void v52();
	virtual void v53(int *p);
};

struct SurfaceV
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9();
	virtual void v10(int color);
	virtual void v11();
	virtual void v12(int x0, int y0, int x1, int y1);
};

struct ObjV
{
	virtual void v0();
	virtual void v1(int x0, int y0, int x1, int y1);
};

void vgui2::ScrollBarSlider::vfunc98()
{
	int wide, tall;
	this->vfunc65(wide, tall);

	int range = *(int *)((char *)this + 0x78) - *(int *)((char *)this + 0x74);
	if ( range <= 0 )
		return;
	if ( range <= *(int *)((char *)this + 0x80) )
		return;

	int color;
	((P53 *)this)->v53(&color);
	((SurfaceV *)sub_101ac8d0())->v10(color);

	if ( *(char *)((char *)this + 0x58) )
	{
		((SurfaceV *)sub_101ac8d0())->v12(0, *(int *)((char *)this + 0x5c), wide - 1, *(int *)((char *)this + 0x60));
		void *p = *(void **)((char *)this + 0x88);
		if ( p )
			((ObjV *)p)->v1(0, *(int *)((char *)this + 0x5c), wide - 1, *(int *)((char *)this + 0x60));
	}
	else
	{
		((SurfaceV *)sub_101ac8d0())->v12(*(int *)((char *)this + 0x5c), 0, *(int *)((char *)this + 0x60), tall);
		void *p = *(void **)((char *)this + 0x88);
		if ( p )
			((ObjV *)p)->v1(*(int *)((char *)this + 0x5c) - 1, 1, *(int *)((char *)this + 0x60), tall);
	}
}
// END FUNCTION

// FUNCTION: 0x101ca3a0 size=0x5d
#include "vgui2__ScrollBarSlider.h"

class Color_101ca3a0 {
public:
	int m_v;
	Color_101ca3a0() {}
	Color_101ca3a0(const Color_101ca3a0 &o) { m_v = o.m_v; }
};

struct ISurfaceV_101ca3a0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void DrawSetColor(int col);
	virtual void v11();
	virtual void DrawFilledRect(int x0, int y0, int x1, int y1);
};
extern ISurfaceV_101ca3a0 *sub_101ac8d0();

struct PanelColorsV_101ca3a0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51();
	virtual Color_101ca3a0 GetBgColor();
};

void vgui2::ScrollBarSlider::vfunc97()
{
	int wide, tall;
	vfunc65(wide, tall);
	sub_101ac8d0()->DrawSetColor(((PanelColorsV_101ca3a0 *)this)->GetBgColor().m_v);
	sub_101ac8d0()->DrawFilledRect(0, 0, wide - 1, tall - 1);
}
// END FUNCTION

// FUNCTION: 0x101ca400 size=0x1b
#include "vgui2__ScrollBarSlider.h"
// TARGET: vgui2::ScrollBarSlider::vfunc110
void vgui2::ScrollBarSlider::vfunc110(int min, int max)
{
	int *range = (int *)((char *)this + 0x74);
	if (max < min)
		max = min;
	range[0] = min;
	range[1] = max;
}
// END FUNCTION

// FUNCTION: 0x101ca420 size=0x15
#include "vgui2__ScrollBarSlider.h"
int vgui2::ScrollBarSlider::vfunc111(int a0, int a1)
{
    int t0 = *(int *)((char *)this + 0x74);
    *(int *)((char *)a0) = t0;
    int t1 = *(int *)((char *)this + 0x78);
    *(int *)((char *)a1) = t1;
    return t1;
}
// END FUNCTION

// FUNCTION: 0x101ca620 size=0x8
#include "vgui2__ScrollBarSlider.h"
void vgui2::ScrollBarSlider::vfunc88(int a) { vfunc87(a); }
// END FUNCTION

// FUNCTION: 0x101ca630 size=0x18
#include "vgui2__ScrollBarSlider.h"
namespace lifted {
int sub_101ac8b0();
struct V { virtual void u0(); virtual int f1(int); };
}
void vgui2::ScrollBarSlider::vfunc89(int a0)
{
    *(char *)((char *)this + 0x59) = 0;
    a0 = 0;
    ((lifted::V *)(lifted::sub_101ac8b0()))->f1(a0);
}
// END FUNCTION

// FUNCTION: 0x101ca650 size=0x15
#include "vgui2__ScrollBarSlider.h"
int vgui2::ScrollBarSlider::vfunc115(int a0, int a1)
{
    int t0 = *(int *)((char *)this + 0x5c);
    *(int *)((char *)a0) = t0;
    int t1 = *(int *)((char *)this + 0x60);
    *(int *)((char *)a1) = t1;
    return t1;
}
// END FUNCTION

// FUNCTION: 0x101ca670 size=0xd
#include "vgui2__ScrollBarSlider.h"
int vgui2::ScrollBarSlider::vfunc112(int a0)
{
    *(int *)((char *)this + 0x80) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101ca680 size=0x7
#include "vgui2__ScrollBarSlider.h"
int vgui2::ScrollBarSlider::vfunc113()
{
    return *(int *)((char *)this + 0x80);
}
// END FUNCTION

// FUNCTION: 0x101ca690 size=0xd
#include "vgui2__ScrollBarSlider.h"
int vgui2::ScrollBarSlider::vfunc117(int a0)
{
    *(int *)((char *)this + 0x84) = a0;
    return a0;
}
// END FUNCTION
