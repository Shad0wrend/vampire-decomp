// CPhysConstraintSystem: physics constraint system entity. Declared flat (bases not recovered).
#pragma once

class CPhysConstraintSystem
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysConstraintSystem *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// destructor body
	void vfunc103();	// slot 103, declared as a plain member

	char m_pad0004[0x450 - 4];
	void *m_pSystem;	// 0x450
};
