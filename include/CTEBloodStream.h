// CTEBloodStream: blood stream temp entity. Declared flat (bases not recovered).
#pragma once

#include "Vector.h"
#include "QAngle.h"

class CTEBloodStream
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBloodStream *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a blood stream at the origin (raised, then 50 units along the flat direction of the angles) with a random direction, created for everybody

	void sub_100141d2();	// destructor body
	void vfunc4(int pFilter, int delay);	// "CTEBloodStream::Create"-like (slot 4, declared as a plain member): sends the effect with the fields below (called directly through the stub at 0x10002ff9)

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
};
