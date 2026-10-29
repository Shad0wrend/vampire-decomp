// IPlayerPickupVPhysics: the interface a pickup-able physics entity implements (found by RTTI cross cast from CBaseEntity).
#pragma once

#include "Vector.h"

class IPlayerPickupVPhysics
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5();
	virtual Vector vfunc6();	// slot 6: the pickup offset (hidden result pointer)
	virtual char vfunc7();
};
