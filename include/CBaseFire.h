// CBaseFire: fire entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CBaseFire
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CBaseFire *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_10007c9d();	// destructor body
	void sub_10056fa0(int a, int b);	// slot 242: stores two dwords at +0x454 and +0x458

	char m_pad0004[0x450];
	int m_field454;
	int m_field458;
};
