// CFunc_Dust: declared by pcdecomp transplant for 0x10113cc0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CFunc_Dust
{
public:
	CFunc_Dust *sub_10113c90();
	CFunc_Dust *vfunc5(unsigned int flags);
	void sub_10004fca();
	void vfunc103();	// slot 103 "CFunc_Dust::Activate"-like: asks slot 9 for the model name and sets it (slot 105), defaults the sprite name at +0x470 to the sparkles material, AddSolidFlags(0x20) on the collision property at +0x270 (inlined scope trace), sets the bool at +0x1b0 and the byte at +0x1b1, then CBaseEntity::vfunc103
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CFunc_Dust::KeyValue": StartDisabled (bit 0 of the flags at +0x474, set unless the value starts with '1'), Alpha (byte at +0x453) and Frozen (bit 2 of the flags), anything else goes to CBaseEntity::vfunc110
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
public:
	int vfunc80();
	int vfunc81();
	datamap_t * vfunc82();
	char vfunc117();
};
