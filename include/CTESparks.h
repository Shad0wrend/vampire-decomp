// CTESparks: sparks temp entity. Declared flat (bases not recovered).
#pragma once

#include "Vector.h"

class CUnknown1019d130;

class CTESparks
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESparks *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(CUnknown1019d130 *filter, float delay);	// sends the temp entity to the recipients

	void sub_1000dc10();	// destructor body

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
	int m_nMagnitude;	// 0x18
	int m_nTrailLength;	// 0x1c
	Vector m_vecDir;	// 0x20
};
