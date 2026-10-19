// class CAI_Navigator (RTTI .?AVCAI_Navigator@@): AI component; the bases are not modelled and only
// the first 21 vtable slots are declared (slots past 20 not yet seen).
// vfunc9/vfunc10 take (int, 4-byte value); the exact type of the second argument is unknown.
// Bases: CAI_Component at +0 (vptr, owner at +4) and CAI_DefMovementSink at +0x10 (its vptr is the field m_vptr10 here).
#pragma once

class CAI_Navigator
{
public:
	virtual CAI_Navigator *vfunc0(unsigned int flags); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	virtual void vfunc9(int a, float b);
	virtual void vfunc10(int a, float b);
	virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20();
	void sub_10011c98();	// as in CDataObjectAccessSystem (transplant)
	CAI_Navigator *sub_102eca50(int pOuter);	// constructor: stores the owner, both vtables, allocates the 0x84 byte object at +0x30

	int m_pOuter;	// 0x04
	int m_i08;
	int m_i0c;
	void *m_vptr10;	// 0x10: CAI_DefMovementSink vtable pointer
	int m_i14;
	int m_i18;
	char m_b1c;
	int m_i20;
	int m_i24;
	int m_i28;
	int m_i2c;
	void *m_p30;
	char m_b34;
	int m_i38;
	char m_pad3c[0x50 - 0x3c];
	char m_b50;
	int m_i54;
	int m_i58;	// float bits
	int m_i5c;	// float bits
	int m_i60;	// float bits
	int m_i64;	// float bits
};
