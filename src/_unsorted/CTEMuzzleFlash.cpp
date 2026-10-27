// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065e70 size=0x1e
#include "CTEMuzzleFlash.h"

// TARGET: CTEMuzzleFlash::vfunc2
CTEMuzzleFlash *CTEMuzzleFlash::vfunc2(unsigned int flags)
{
	sub_1000df12();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10065fa0 size=0x6
#include "CTEMuzzleFlash.h"
namespace lifted {
extern char g_106c4c54;
}
ServerClass * CTEMuzzleFlash::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4c54);
}
// END FUNCTION
