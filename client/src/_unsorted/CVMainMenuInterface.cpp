// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065540 size=0x10
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C10066400 { int sub_10066400(); };
}
void CVMainMenuInterface::vfunc0()
{
    if (lifted::g_103ef0b4 != 0) {
        ((lifted::C10066400 *)lifted::g_103ef0b4)->sub_10066400(); return;
    }
}
// END FUNCTION
