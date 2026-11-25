// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc350 size=0x1e
#include "vgui2__ToggleButton.h"

// VC6 writes vgui2::ToggleButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ToggleButton *pcd_emit_101bc350(const vgui2::ToggleButton &other) { return new vgui2::ToggleButton(other); }

// TARGET: ??_GToggleButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bc370 size=0x39
#include "vgui2__ToggleButton.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual int f15(int); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual bool f47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual int f147(); virtual void u148(); virtual bool f149(int); };
}
void vgui2::ToggleButton::vfunc87(int a0)
{
    bool t0 = ((lifted::V *)this)->f47();
    if (t0 != 0) {
        bool t1 = ((lifted::V *)this)->f149(a0);
        if (t1 != 0) {
            ((lifted::V *)this)->f15(0);
            ((lifted::V *)this)->f147();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101bc3b0 size=0x8
#include "vgui2__ToggleButton.h"
void vgui2::ToggleButton::vfunc88(int a) { vfunc87(a); }
// END FUNCTION

// FUNCTION: 0x101bc3c0 size=0x3
#include "vgui2__ToggleButton.h"
void vgui2::ToggleButton::vfunc89(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101bc3d0 size=0x33
#include "vgui2__ToggleButton.h"
namespace lifted {
struct C101b3a60 { int sub_101b3a60(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual bool f144(); };
}
int vgui2::ToggleButton::vfunc156(int a0)
{
    bool t0 = ((lifted::V *)this)->f144();
    if (t0 != 0) {
        *(int *)((char *)a0) = *(int *)((char *)this + 0xf0);
        return a0;
    }
    ((lifted::C101b3a60 *)this)->sub_101b3a60(a0);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101bc410 size=0xa2
#include "vgui2__ToggleButton.h"
#include "vgui2__KeyValues.h"

// TARGET: vgui2::ToggleButton::vfunc147
int vgui2::ToggleButton::vfunc147()
{
    if (vfunc144())
        vfunc141(0);
    else if (!vfunc144())
        vfunc141(1);
    vfunc143(vfunc144() == 0);
    vfunc150();
    vgui2::KeyValues *kv = new vgui2::KeyValues("ButtonToggled");
    kv->vfunc15((int)"state", vfunc144() & 0xff);
    vfunc43(kv);
    return vfunc6();
}
// END FUNCTION

// FUNCTION: 0x101bc4c0 size=0x2c
#include "vgui2__ToggleButton.h"
struct ISch { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual int *v6(int *out, const char *name); };
int vgui2::ToggleButton::vfunc74(int a)
{
	Button::vfunc74(a);
	int tmp;
	int *p = ((ISch *)a)->v6(&tmp, "BrightControlText");
	*(int *)((char *)this + 0xf0) = *p;
	return (int)p;
}
// END FUNCTION
