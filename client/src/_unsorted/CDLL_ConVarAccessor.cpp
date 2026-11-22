// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ccba0 size=0x28
#include "CDLL_ConVarAccessor.h"
namespace lifted {
extern int g_104a57e0;
struct C100df390 { int sub_100df390(int); };
struct C100df3b0 { int sub_100df3b0(int); };
struct V { virtual int f0(int); };
}
bool CDLL_ConVarAccessor::vfunc0(int a0)
{
    ((lifted::C100df390 *)a0)->sub_100df390(8);
    ((lifted::C100df3b0 *)a0)->sub_100df3b0(0);
    ((lifted::V *)lifted::g_104a57e0)->f0(a0);
    return 1;
}
// END FUNCTION
