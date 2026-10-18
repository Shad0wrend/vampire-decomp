// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10097ba0 size=0x1e
#include "CBaseTransmitProxy.h"

// TARGET: CBaseTransmitProxy::vfunc0
CBaseTransmitProxy *CBaseTransmitProxy::vfunc0(unsigned int flags)
{
	sub_10002428();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
