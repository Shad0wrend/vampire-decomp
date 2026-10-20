// CSimplePhysicsBrush: simple physics brush entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CSimplePhysicsBrush
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CSimplePhysicsBrush *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// destructor body
	void vfunc103();	// slot 103 "CSimplePhysicsBrush::Spawn", declared as a plain member: SetModel(the model name from slot 9), slot 93(7, 0), inlined SetSolid(6) with scope trace, take-damage mode (+0x1fc) = 1, the bool object at +0x1b0 set to 1, then RemoveFlag2(2)
};
