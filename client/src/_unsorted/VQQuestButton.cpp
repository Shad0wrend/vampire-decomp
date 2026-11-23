// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101880d0 size=0x1e
#include "VQQuestButton.h"

// VC6 writes VQQuestButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VQQuestButton *pcd_emit_101880d0(const VQQuestButton &other) { return new VQQuestButton(other); }

// TARGET: ??_GVQQuestButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10188180 size=0x44
#include "VQQuestButton.h"
namespace lifted {
extern char g_102d3884;
extern char g_102d3890;
struct C101aa220 { int sub_101aa220(); };
struct C101ac8c0 { int sub_101ac8c0(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); virtual int f4(int); };
}
int VQQuestButton::vfunc164(int a0, int a1, int a2, int a3)
{
    int t0 = ((lifted::C101ac8c0 *)this)->sub_101ac8c0();
    int t1 = ((lifted::V *)t0)->f4(((lifted::C101aa220 *)this)->sub_101aa220());
    if ((*(char *)((char *)this + 0xf0)) != 0) {
        return ((lifted::V *)t1)->f3((int)&lifted::g_102d3890);
    }
    return ((lifted::V *)t1)->f3((int)&lifted::g_102d3884);
}
// END FUNCTION

// FUNCTION: 0x101881d0 size=0x24
#include "VQQuestButton.h"
int VQQuestButton::vfunc156(int a0)
{
    if ((*(char *)((char *)this + 0xf0)) != 0) {
        *(int *)((char *)a0) = *(int *)((char *)this + 0xf1);
        return a0;
    }
    *(int *)((char *)a0) = *(int *)((char *)this + 0xf5);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10188200 size=0x24
#include "VQQuestButton.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int VQQuestButton::vfunc166(char a0)
{
    *(char *)((char *)this + 0xf0) = a0;
    ((lifted::V *)this)->f57(0, 0);
    return ((lifted::V *)this)->f6();
}
// END FUNCTION
