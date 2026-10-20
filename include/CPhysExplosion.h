// CPhysExplosion: physics explosion entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CPhysExplosion
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysExplosion *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// destructor body
	void sub_1004eae0();	// slot 103: slot 93(0, 0), SetSolid(SOLID_NONE) on the collision property at +0x270 (scope trace "CBaseEntity::SetSolid"), then slot 212(0)
};
