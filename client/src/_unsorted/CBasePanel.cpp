// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10163b10 size=0x1e
#include "CBasePanel.h"

// VC6 writes CBasePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBasePanel *pcd_emit_10163b10(const CBasePanel &other) { return new CBasePanel(other); }

// TARGET: ??_GCBasePanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10163d90 size=0x22
#include "CBasePanel.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual int f30(int); };
}
void CBasePanel::vfunc110()
{
    if ((*(int *)((char *)this + 0x5c)) != -1) {
        int t0 = ((lifted::V *)(lifted::sub_101ac8d0()))->f30(*(int *)((char *)this + 0x5c));
        *(int *)((char *)this + 0x5c) = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x10163ea0 size=0xa
#include "CBasePanel.h"
void CBasePanel::vfunc111(int a0)
{
    *(char *)((char *)this + 0x16c) = 1;
}
// END FUNCTION

// FUNCTION: 0x10164150 size=0x1
#include "CBasePanel.h"
void CBasePanel::vfunc2()
{
}
// END FUNCTION
