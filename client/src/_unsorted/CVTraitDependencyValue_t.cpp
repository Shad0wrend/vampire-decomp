// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10161840 size=0x14
#include "CVTraitDependencyValue_t.h"
namespace lifted {
struct C10160670 { int sub_10160670(); };
}
void CVTraitDependencyValue_t::vfunc0()
{
    int t0 = ((lifted::C10160670 *)((char *)this + 4))->sub_10160670();
    *(int *)((char *)this + 0x14) = -1;
}
// END FUNCTION
