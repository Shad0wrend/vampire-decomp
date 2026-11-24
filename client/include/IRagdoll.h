// IRagdoll: the client's ragdoll interface (RTTI .?AVIRagdoll@@): inline virtual destructor in slot 0, six pure virtuals
#pragma once

#include "Vector.h"
class IRagdoll
{
public:
	virtual ~IRagdoll() {}
	virtual void vfunc1() = 0;
	virtual void vfunc2() = 0;
	virtual void vfunc3(Vector &mins, Vector &maxs) = 0;
	virtual void vfunc4() = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6() = 0;
	void * vfunc0(char);	// as in IParticleEffect (transplant)
};
