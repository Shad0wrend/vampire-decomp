// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10260f90 size=0x23
#include "CAI_ProxyMovementSink.h"

struct CAIMovementSinkValue {
	virtual float vfunc0();
};

// TARGET: CAI_ProxyMovementSink::vfunc0
float CAI_ProxyMovementSink::vfunc0()
{
	float r;
	if (m_pTarget == 0 || (r = ((CAIMovementSinkValue *)m_pTarget)->vfunc0()) == -1.0) {
		return -1.0f;
	}
	return r;
}
// END FUNCTION
