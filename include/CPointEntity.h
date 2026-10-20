// CPointEntity: point entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CPointEntity
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPointEntity *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// destructor body
	void sub_101c0820();	// slot 103 (Spawn): SetSolid(SOLID_NONE) on the collision property at +0x270 (scope trace "CBaseEntity::SetSolid"), then CBaseEntity::sub_100b3b00()
};
