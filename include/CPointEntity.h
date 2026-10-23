// CPointEntity: point entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

// The entity base constructor (stub 0x100090fc) runs before the vtable store of the derived class.
struct CPointEntityBase
{
	CPointEntityBase() { sub_1009d980(0); }
	void sub_1009d980(char bAddAsDefault);	// CBaseEntity::CBaseEntity body (entity base constructor, stub 0x100090fc)
};

class CPointEntity : public CPointEntityBase
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
