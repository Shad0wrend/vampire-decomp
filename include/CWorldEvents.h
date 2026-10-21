// CWorldEvents: declared by pcdecomp transplant for 0x1023db40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWorldEvents : public CBaseEntity
{
public:
	CWorldEvents *vfunc5(unsigned int flags);
	void sub_10014c09();
	CWorldEvents *sub_1023d930();	// as in CKeepUpright (transplant)
	void vfunc113();	// slot 113 override: CBaseEntity::vfunc113, slot 78, SetSolid(0) (inlined scope trace), SetMoveType(0, 0), AddFlag(0x40000), then the effects dword at +0x19c = 0xe0
	void sub_1023db70();	// the destructor body (stub 0x10014c09): stores the CWorldEvents vftable, clears the global at 0x107532ec, destructs the 21 outputs at +0x450 .. +0x630 (0x18 bytes each, last first), then the CBaseEntity destructor body
	void sub_1000cb8a();	// CBaseEntity destructor body (stub 0x1000cb8a for 0x1009df20), called directly
};
