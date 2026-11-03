// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101297e0 size=0x6
#include "datamap.h"
#include "CGib.h"
namespace lifted {
extern char g_10572f18;
}
datamap_t * CGib::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10572f18);
}
// END FUNCTION

// FUNCTION: 0x1012b300 size=0xd
#include "CGib.h"

// TARGET: CGib::vfunc117
int CGib::vfunc117()
{
	unsigned int flags = CBaseEntity::vfunc117();
	return (flags & 0xfffffffd) | 0x80000000;
}
// END FUNCTION

// FUNCTION: 0x1012b6b0 size=0x1e
#include "CGib.h"

void sub_100aa7b0(void *p);

// TARGET: CGib::vfunc5
CGib *CGib::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
