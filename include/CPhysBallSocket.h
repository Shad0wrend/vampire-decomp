// CPhysBallSocket: ball-socket constraint entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CPhysBallSocket
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysBallSocket *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_100121ac();	// destructor body
	char m_pad0004[0x488 - 0x4];
};
