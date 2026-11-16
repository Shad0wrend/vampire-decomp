// CTEBloodStream: blood stream temp entity (derived from the CBaseTempEntity head at +0x0).
#pragma once

#include "Vector.h"
#include "QAngle.h"
#include "CBaseTempEntity.h"

class CTEBloodStream : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBloodStream();	// function 0x1005dfe0: the vtable, then the base's destructor body
#endif
	CTEBloodStream(const char *name);	// constructor: the base head with the name, then the zeroed fields (sub_1005df60)
	CTEBloodStream *sub_1005df60(const char *name);	// the same constructor body as a member: the base head with the name (sub_10015334), the vtable, then the zeroed fields (0x1005df60)
	virtual CTEBloodStream *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a blood stream at the origin (raised, then 50 units along the flat direction of the angles) with a random direction, created for everybody

	void sub_100141d2();	// destructor body
	void vfunc4(int a, int b);	// "CTEBloodStream::Create"-like (slot 4, declared as a plain member): sends the effect with the fields below (called directly through the stub at 0x10002ff9)

	char m_pad0004[8];
	int m_vecOrigin[3];	// 0x0c
	int m_vecDirection[3];	// 0x18
	int m_n24;
	int m_n28;
	int m_n2c;
	int m_n30;
	int m_n34;

	Vector &Origin() { return *(Vector *)m_vecOrigin; }	// the origin as a vector (the members are declared as dwords)
	Vector &Direction() { return *(Vector *)m_vecDirection; }
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
