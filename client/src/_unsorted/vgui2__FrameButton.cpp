// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b8150 size=0xbe
#include "vgui2__FrameButton.h"

struct SchemeView {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void *GetBorder(const char *name);
    virtual void v4(); virtual void v5();
    virtual int *GetColor(int *out, const char *name);
};

#define FB_INT(off) (*(int *)((char *)this + (off)))

// TARGET: vgui2::FrameButton::vfunc74
int vgui2::FrameButton::vfunc74(int pSchemeArg)
{
    SchemeView *pScheme = (SchemeView *)pSchemeArg;
    int tmp;
    Button::vfunc74(pSchemeArg);

    FB_INT(0x100) = *pScheme->GetColor(&tmp, "TitleButtonBgColor");
    FB_INT(0xfc) = *pScheme->GetColor(&tmp, "TitleButtonFgColor");
    FB_INT(0x108) = *pScheme->GetColor(&tmp, "TitleButtonDisabledBgColor");
    FB_INT(0x104) = *pScheme->GetColor(&tmp, "TitleButtonDisabledFgColor");

    FB_INT(0xf0) = (int)pScheme->GetBorder("TitleButtonBorder");
    FB_INT(0xf4) = (int)pScheme->GetBorder("TitleButtonDepressedBorder");
    FB_INT(0xf8) = (int)pScheme->GetBorder("TitleButtonDisabledBorder");

    return vfunc166(*((char *)this + 0x10c));
}
// END FUNCTION

// FUNCTION: 0x101b8210 size=0x2d
#include "vgui2__FrameButton.h"
int vgui2::FrameButton::vfunc164(int a0, int a1, int a2, int a3)
{
    if ((*(char *)((char *)this + 0x10c)) != 0) {
        return *(int *)((char *)this + 0xf8);
    }
    if (*(char *)&a0 != 0) {
        return *(int *)((char *)this + 0xf4);
    }
    return *(int *)((char *)this + 0xf0);
}
// END FUNCTION

// FUNCTION: 0x101b8240 size=0xa7
#include "vgui2__FrameButton.h"
#define FB_U(off) (*(unsigned int *)((char *)this + (off)))
#define P10(n) virtual void p##n##0(); virtual void p##n##1(); virtual void p##n##2(); virtual void p##n##3(); virtual void p##n##4(); virtual void p##n##5(); virtual void p##n##6(); virtual void p##n##7(); virtual void p##n##8(); virtual void p##n##9();
struct V155
{
	P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P10(m) P10(n) P10(o)
	virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4();
	virtual int s155(unsigned int, unsigned int);
};
// TARGET: vgui2::FrameButton::vfunc166
int vgui2::FrameButton::vfunc166(char bFlag)
{
	*((char *)this + 0x10c) = bFlag;
	if (!bFlag)
	{
		vfunc153(FB_U(0xfc), FB_U(0x100));
		vfunc154(FB_U(0xfc), FB_U(0x100));
		return ((V155 *)this)->s155(FB_U(0xfc), FB_U(0x100));
	}
	else
	{
		vfunc153(FB_U(0x104), FB_U(0x108));
		vfunc154(FB_U(0x104), FB_U(0x108));
		return ((V155 *)this)->s155(FB_U(0x104), FB_U(0x108));
	}
}
// END FUNCTION

// FUNCTION: 0x101b8300 size=0x60
#include "vgui2__FrameButton.h"
namespace lifted {
int sub_101ac8b0();
struct V { virtual int f0(); virtual int f1(int); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual bool f47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual int f143(int); virtual void u144(); virtual void u145(); virtual bool f146(); virtual void u147(); virtual void u148(); virtual bool f149(int); };
}
void vgui2::FrameButton::vfunc87(int a0)
{
    bool t0 = ((lifted::V *)this)->f47();
    if (t0 != 0) {
        bool t1 = ((lifted::V *)this)->f149(a0);
        if (t1 != 0) {
            bool t2 = ((lifted::V *)this)->f146();
            if (t2 != 0) {
                ((lifted::V *)this)->f143(1);
                ((lifted::V *)this)->f6();
                int t3 = lifted::sub_101ac8b0();
                ((lifted::V *)t3)->f1(((lifted::V *)this)->f0());
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101b8360 size=0x1e
#include "vgui2__FrameButton.h"

// VC6 writes vgui2::FrameButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::FrameButton *pcd_emit_101b8360(const vgui2::FrameButton &other) { return new vgui2::FrameButton(other); }

// TARGET: ??_GFrameButton@vgui2@@UAEPAXI@Z
// END FUNCTION
