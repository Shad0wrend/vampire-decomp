// CPhysicsCannister: declared by pcdecomp transplant for 0x10150670 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CPhysicsCannister
{
public:
	CPhysicsCannister *vfunc5(unsigned int flags);
	void sub_10001ebf();
	void vfunc103();	// slot 103 (Spawn): slot 104, the model name (slot 9) through slot 105, blood color -1, the "CBaseEntity::AddSolidFlags" scope trace around SetSolidFlags(flags | 1), take-damage mode 2, think time 0, health 0x19 when not positive, stamps the creation time (+0x174), clears +0x6f0..0x6f8 and +0x19e4, AddFlag(0x20000000), then slot 223
	void sub_10150e80();	// removes the physics object at +0x19dc (sub-object slot 3 with the object at +0x36c, then slot 40 of the global at 0x10723940), clears the fields at +0x17c / +0x19e8 / +0x19e4, calls sub_101510c0() when +0x19e0 is set, then slot 7 of the global at 0x1070b248 with the edict's (+0x2e0) index (engine slot 35) for the string at +0x19f8
	void sub_101510c0();	// called through the stub at 0x1000abeb
};
