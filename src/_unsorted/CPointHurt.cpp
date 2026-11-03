// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018d3d0 size=0x6
#include "datamap.h"
#include "CPointHurt.h"
namespace lifted {
extern char g_1058c6f0;
}
datamap_t * CPointHurt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058c6f0);
}
// END FUNCTION

// FUNCTION: 0x1018d5d0 size=0x1
#include "CPointHurt.h"
void CPointHurt::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x1018d910 size=0x1e
#include "CPointHurt.h"

void sub_100aa7b0(void *p);

// TARGET: CPointHurt::vfunc5
CPointHurt *CPointHurt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
