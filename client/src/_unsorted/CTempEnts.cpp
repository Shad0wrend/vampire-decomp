// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003b570 size=0x1e
#include "CTempEnts.h"

// VC6 writes CTempEnts's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTempEnts *pcd_emit_1003b570() { return new CTempEnts; }

// TARGET: ??_GCTempEnts@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003cc90 size=0x39
#include "CTempEnts.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual int f25(int, int, int, int, int, int, int); virtual int f26(int, int, int, int, int, int, int); };
}
int CTempEnts::vfunc6(int a0, int a1, int a2, int a3, char a4, int a5, int a6, int a7, int a8)
{
    if (a4 != 0) {
        return ((lifted::V *)this)->f25(a0, a1, a3, a5, a6, a7, a8);
    }
    return ((lifted::V *)this)->f26(a0, a1, a3, a5, a6, a7, a8);
}
// END FUNCTION

// FUNCTION: 0x1003d610 size=0x21
#include "CTempEnts.h"
namespace lifted {
int sub_10044870(int, int, int, int, int);
}
int CTempEnts::vfunc22(int a0, int a1, int a2)
{
    return lifted::sub_10044870(a0, a1, 0x3f400000, a2, 0);
}
// END FUNCTION
