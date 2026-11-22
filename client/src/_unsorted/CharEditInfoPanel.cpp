// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b530 size=0x1e
#include "CharEditInfoPanel.h"

// VC6 writes CharEditInfoPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditInfoPanel *pcd_emit_1017b530() { return new CharEditInfoPanel; }

// TARGET: ??_GCharEditInfoPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017c3a0 size=0x3
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc124(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017c530 size=0x6
#include "CharEditInfoPanel.h"
namespace lifted {
extern char g_102d1340;
}
int CharEditInfoPanel::vfunc102()
{
    return (int)&lifted::g_102d1340;
}
// END FUNCTION

// FUNCTION: 0x1017c560 size=0x1
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc119()
{
}
// END FUNCTION

// FUNCTION: 0x1017c640 size=0xe
#include "CharEditInfoPanel.h"
namespace lifted {
extern int g_104a57d4;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(); };
}
void CharEditInfoPanel::vfunc3()
{
    ((lifted::V *)lifted::g_104a57d4)->f57();
}
// END FUNCTION
