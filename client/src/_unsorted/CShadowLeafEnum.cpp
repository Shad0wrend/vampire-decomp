// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d2470 size=0x19
#include "CShadowLeafEnum.h"
namespace lifted {
extern char g_104cee10;
struct C100d2010 { int sub_100d2010(int, int); };
}
bool CShadowLeafEnum::vfunc0(int a0, int a1)
{
    ((lifted::C100d2010 *)((int)&lifted::g_104cee10))->sub_100d2010(a0, a1);
    return 1;
}
// END FUNCTION
