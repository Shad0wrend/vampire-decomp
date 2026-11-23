// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f1420 size=0x1e
#include "CHudChatLine.h"

// VC6 writes CHudChatLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudChatLine *pcd_emit_100f1420(const CHudChatLine &other) { return new CHudChatLine(other); }

// TARGET: ??_GCHudChatLine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100f1440 size=0x58
#include "CHudChatLine.h"
namespace lifted {
extern char g_10284440;
extern char g_102bc13c;
extern int g_104d0f54;
int sub_1018c870(int);
int __stdcall sub_101b2e60(int);
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual int f118(int); };
}
int CHudChatLine::vfunc74(int a0)
{
    lifted::sub_101b2e60(a0);
    *(int *)((char *)this + 0xc8) = ((lifted::V *)a0)->f4((int)&lifted::g_102bc13c);
    *(int *)((char *)this + 0xc4) = ((lifted::V *)a0)->f4(lifted::sub_1018c870((int)&lifted::g_10284440));
    lifted::g_104d0f54 = *(int *)((char *)this + 0xc4);
    return ((lifted::V *)this)->f118(*(int *)((char *)this + 0xc4));
}
// END FUNCTION
