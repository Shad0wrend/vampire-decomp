// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c5d30 size=0x1e
#include "vgui2__RadioButton.h"

// VC6 writes vgui2::RadioButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::RadioButton *pcd_emit_101c5d30(const vgui2::RadioButton &other) { return new vgui2::RadioButton(other); }

// TARGET: ??_GRadioButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c5eb0 size=0x5
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101c5ec0 size=0x7
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc166()
{
    return *(int *)((char *)this + 0x100);
}
// END FUNCTION

// FUNCTION: 0x101c5ed0 size=0xd
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc167(int a0)
{
    *(int *)((char *)this + 0x100) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101c5ee0 size=0x7
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc168()
{
    return *(int *)((char *)this + 0xf8);
}
// END FUNCTION

// FUNCTION: 0x101c6180 size=0x26
#include "vgui2__RadioButton.h"
namespace lifted {
extern char g_102da864;
struct C101b4100 { int sub_101b4100(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual int f15(int, int); };
}
int vgui2::RadioButton::vfunc76(int a0)
{
    ((lifted::C101b4100 *)this)->sub_101b4100(a0);
    return ((lifted::V *)a0)->f15((int)&lifted::g_102da864, *(int *)((char *)this + 0x100));
}
// END FUNCTION

// FUNCTION: 0x101c61b0 size=0x23
#include "vgui2__RadioButton.h"
namespace lifted {
extern char g_102da874;
extern char g_1067bca0;
int sub_101b41b0();
int sub_101d3192(int, int, int, int);
}
int vgui2::RadioButton::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_1067bca0, 0x400, (int)&lifted::g_102da874, lifted::sub_101b41b0());
    return (int)&lifted::g_1067bca0;
}
// END FUNCTION

// FUNCTION: 0x101c61e0 size=0x21
#include "vgui2__RadioButton.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual int f143(int); };
}
void vgui2::RadioButton::vfunc169(int a0, int a1)
{
    if (a1 == (*(int *)((char *)this + 0xf8))) {
        if (a0 != ((int)this)) {
            ((lifted::V *)this)->f143(0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101c6410 size=0x32
#include "vgui2__RadioButton.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual bool f47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual int f143(int); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual void u148(); virtual bool f149(int); };
}
void vgui2::RadioButton::vfunc87(int a0)
{
    bool t0 = ((lifted::V *)this)->f47();
    if (t0 != 0) {
        bool t1 = ((lifted::V *)this)->f149(a0);
        if (t1 != 0) {
            ((lifted::V *)this)->f143(1);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101c64f0 size=0x6
#include "vgui2__RadioButton.h"
namespace lifted {
extern char g_102da808;
}
int vgui2::RadioButton::vfunc102()
{
    return (int)&lifted::g_102da808;
}
// END FUNCTION
