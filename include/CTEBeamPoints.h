// CTEBeamPoints: beam-between-points temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTEBeamPoints : public CBaseTempEntityHead
{
public:
	virtual CTEBeamPoints *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a beam from the origin (raised by 30, then 75 units along the flat direction of the angles and 25 along the right vector) to the point 25 along the right vector, created for everybody
	virtual void vfunc4(int a, int b);	// "Create" (filter pointer, delay bits)

	void sub_1000a9fc();	// destructor body
	CTEBeamPoints *sub_1005bf10(const char *name);	// constructor body (CTEBaseBeam base at stub 0x1000b1a4), then the vtable and the zeroed m_vecStart / m_vecEnd
	void sub_1005c150(int a, int b);	// slot 4 (stub 0x10001c3a): sends the message; called directly on the global instance at 0x106bfb08 with the recipient filter and a second argument

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
	Vector m_vecStart;	// 0x44
	Vector m_vecEnd;	// 0x50
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
