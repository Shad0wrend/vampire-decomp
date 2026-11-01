// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bb4a0 size=0x6
#include "CAISound.h"
namespace lifted {
extern char g_10599f48;
}
datamap_t *CAISound::vfunc82()
{
    return (datamap_t *)&lifted::g_10599f48;
}
// END FUNCTION

// FUNCTION: 0x101bb5b0 size=0x1e
#include "CAISound.h"

void sub_100aa7b0(void *p);

// TARGET: CAISound::vfunc5
CAISound *CAISound::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
