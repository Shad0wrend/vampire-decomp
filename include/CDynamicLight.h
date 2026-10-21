// CDynamicLight: dynamic light entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CDynamicLight
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDynamicLight *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// destructor body
	void vfunc103();	// slot 103 "CDynamicLight::Spawn": slot 104, SetSolid(0) (inlined scope trace), the byte at +0x453 = 1, the worker sub_101cf390(this, zero vector, zero vector), CBaseEntity::sub_100b3b00, then bit 7 of the flags at +0x268
};
