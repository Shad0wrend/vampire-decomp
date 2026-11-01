// CBaseFire: fire entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CBaseEntity;

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
	void sub_100090fc(int a);	// base constructor (CConstraintAnchorBase), provisional
	void sub_10056fa0(int a, int b);	// slot 242: stores two dwords at +0x454 and +0x458
	void sub_10056fd0(int a, int b, int c);	// slot 241: stores three dwords at +0x450..+0x458
	void vfunc243(int on);	// slot 243: sets or clears bit 0 of the flags at +0x45c
	void sub_100a0670(CBaseEntity *pParent, int a);	// SetParent-like (stub 0x10005650): hands this entity to pParent

	char m_pad0004[0x44c];
	int m_field450;
	int m_field454;
	int m_field458;
	unsigned int m_flags45c;
	void sub_100575a0(int on);	// provisional, like vfunc243 (transplant)
	void sub_100575e0(int on);	// provisional, like vfunc243 (transplant)
	void sub_1019e090(char on);
};
