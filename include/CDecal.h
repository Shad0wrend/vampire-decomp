// CDecal: declared by pcdecomp transplant for 0x1023efc0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CTraceFilterSimple.h"

class CDecal
{
public:
	class CTraceFilterValidForDecal : public CTraceFilterSimple	// RTTI .?AVCTraceFilterValidForDecal@CDecal@@, vtable 0x10496618
	{
	public:
		virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: false for an entity whose classname matches one of the six names (with '*' wildcards) in the table at 0x105c2648, else CTraceFilterSimple::vfunc0
	};

	CDecal *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool sub_1023adb0(const char *szKeyName, const char *szValue);	// slot 110 (KeyValue): "texture" looks the decal up through the engine (slot 16(value, 1)) and stores its index at +0x450, warning "Can't find decal %s" when it is negative; any other key goes to CBaseEntity::vfunc110
};
