// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1014eb70 size=0x1e
#include "CPhysicsAnimlinkEntityDeleteProxy.h"

// TARGET: CPhysicsAnimlinkEntityDeleteProxy::vfunc2
CPhysicsAnimlinkEntityDeleteProxy *CPhysicsAnimlinkEntityDeleteProxy::vfunc2(unsigned int flags)
{
	sub_10007c11();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
