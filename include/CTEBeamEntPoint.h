// CTEBeamEntPoint: beam temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTEBeamEntPoint : public CBaseTempEntityHead
{
public:
	CTEBeamEntPoint(const char *name);	// function 0x1005ac10
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBeamEntPoint();	// function 0x1005ac90: the vtable, then the base's destructor body
#endif

	virtual CTEBeamEntPoint *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a beam from entity 1 to a point (the origin raised by 24, then 50 units along the flat direction of the angles), created for everybody
	virtual void vfunc4(int a, int b);	// "Create" (filter pointer, delay bits)

	void sub_1000d8d7();	// destructor body
	CTEBeamEntPoint *sub_1005ac10(int a);	// constructor body: base constructor (0x1000b1a4), vtable, fields 0x44..0x60; returns this

	char m_pad0004[8];
	int m_nModelIndex;	// 0x0c
	char m_pad0010[4];
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	float m_f1c;	// 0x1c
	float m_f20;	// 0x20
	char m_pad0024[0x2c - 0x24];
	float m_f2c;	// 0x2c
	int m_n30;	// 0x30
	int m_n34;	// 0x34
	int m_n38;	// 0x38
	int m_n3c;	// 0x3c
	int m_n40;	// 0x40
	int m_n44;	// 0x44
	char m_pad0048[0x58 - 0x48];
	Vector m_vecEnd;	// 0x58
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
