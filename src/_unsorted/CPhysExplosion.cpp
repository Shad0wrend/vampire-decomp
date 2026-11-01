// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ea30 size=0x8
unsigned char sub_10001109();
// TARGET: sub_1004ea30
unsigned char sub_1004ea30()
{
    unsigned char r = sub_10001109();
    r &= 0xfd;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1004ea50 size=0x6
#include "CPhysExplosion.h"
namespace lifted {
extern char g_1053d12c;
}
CPhysExplosion::Datamap82 CPhysExplosion::vfunc82()
{
    return (CPhysExplosion::Datamap82)&lifted::g_1053d12c;
}
// END FUNCTION

// FUNCTION: 0x10050550 size=0x1e
#include "CPhysExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysExplosion::vfunc5
CPhysExplosion *CPhysExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
