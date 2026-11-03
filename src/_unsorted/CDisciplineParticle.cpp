// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10050a80 size=0x6
#include "datamap.h"
#include "CDisciplineParticle.h"
namespace lifted {
extern char g_1053e1d0;
}
datamap_t *CDisciplineParticle::vfunc82()
{
    return (datamap_t *)&lifted::g_1053e1d0;
}
// END FUNCTION

// FUNCTION: 0x10051630 size=0x8
#include "CDisciplineParticle.h"
namespace lifted {
int sub_10001109();
}
int CDisciplineParticle::vfunc117()
{
    return (lifted::sub_10001109()) | 2;
}
// END FUNCTION

// FUNCTION: 0x10051ad0 size=0x1e
#include "CDisciplineParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CDisciplineParticle::vfunc5
CDisciplineParticle *CDisciplineParticle::vfunc5(unsigned int flags)
{
	sub_1000f10f();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
