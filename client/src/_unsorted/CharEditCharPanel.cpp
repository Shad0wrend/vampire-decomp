// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101766a0 size=0x1e
#include "CharEditCharPanel.h"

// VC6 writes CharEditCharPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditCharPanel *pcd_emit_101766a0() { return new CharEditCharPanel; }

// TARGET: ??_GCharEditCharPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10177990 size=0x6
#include "CharEditCharPanel.h"
namespace lifted {
extern char g_102d0928;
}
int CharEditCharPanel::vfunc102()
{
    return (int)&lifted::g_102d0928;
}
// END FUNCTION

// FUNCTION: 0x10177a00 size=0x1
#include "CharEditCharPanel.h"
void CharEditCharPanel::vfunc119()
{
}
// END FUNCTION

// FUNCTION: 0x10177b00 size=0x10
#include "CharEditCharPanel.h"
namespace lifted {
struct C10176f80 { int sub_10176f80(); };
struct C101ab2f0 { int sub_101ab2f0(); };
}
void CharEditCharPanel::vfunc101()
{
    ((lifted::C101ab2f0 *)this)->sub_101ab2f0();
    ((lifted::C10176f80 *)this)->sub_10176f80();
}
// END FUNCTION
