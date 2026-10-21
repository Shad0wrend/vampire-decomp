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
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CDynamicLight::KeyValue" (declared as a plain member): "_light" sets the colour bytes at +0x1a0..+0x1a2 from a colour string, "pitch" sets the pitch (the negated value) of the absolute angles (slots 219 / 218), "spawnflags" the bytes at +0x450 / +0x451; everything else goes to CBaseEntity::KeyValue
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
};
