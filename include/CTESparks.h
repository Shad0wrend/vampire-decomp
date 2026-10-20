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

	void sub_1000dc10();	// destructor body
	void sub_100677e0(CUnknown1019d130 *filter, float delay);	// slot 4 (called directly, stub 0x10011f22): sends the temp entity to the recipients

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
	int m_nMagnitude;	// 0x18
	int m_nTrailLength;	// 0x1c
	Vector m_vecDir;	// 0x20
};
