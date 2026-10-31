// IPlayerPickupVPhysics: the interface a pickup-able physics entity implements (found by RTTI cross cast from CBaseEntity).
#pragma once

#include "Vector.h"

class IPlayerPickupVPhysics
{
public:
	virtual char vfunc0(int a, int b); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual char vfunc5(int a);
	virtual Vector vfunc6();	// slot 6: the pickup offset (hidden result pointer)
	virtual char vfunc7();
};
