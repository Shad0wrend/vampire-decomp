// class CAI_Navigator (RTTI .?AVCAI_Navigator@@): AI component; only the first 21 vtable slots are declared
// (slots past 20 not yet seen).
// vfunc9/vfunc10 take (int, 4-byte value); the exact type of the second argument is unknown.
// Bases: CAI_Component at +0 (vptr with 3 slots, owner at +4, modelled by CAI_NavComponentData) and
// CAI_DefMovementSink at +0x10.
#pragma once

#include "CAI_DefMovementSink.h"

class CAI_Navigator;

class CAI_NavComponentData
{
public:
	CAI_NavComponentData(int pOuter) { m_pOuter = pOuter; m_i0c = -1; }
	virtual CAI_Navigator *vfunc0(unsigned int flags); virtual void vfunc1(); virtual void vfunc2();

	int m_pOuter;	// 0x04
	int m_i08;
	int m_i0c;
};

class CAI_Navigator : public CAI_NavComponentData, public CAI_DefMovementSink
{
public:
	CAI_Navigator(int pOuter);	// 0x102eca50: allocates the 0x84 byte object at +0x30

	virtual CAI_Navigator *vfunc0(unsigned int flags); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	virtual void vfunc9(int a, float b);
	virtual void vfunc10(int a, float b);
	virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20();
	void sub_10011c98();	// as in CDataObjectAccessSystem (transplant)

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
	float m_f58;
	float m_f5c;
	float m_f60;
	float m_f64;
};
