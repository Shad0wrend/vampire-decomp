// CTEShatterSurface: shatter surface temp entity (derived from the CBaseTempEntity head at +0x0).
#pragma once

#include "CBaseTempEntity.h"

class CTEShatterSurface : public CBaseTempEntityHead
{
public:
	CTEShatterSurface(const char *name);	// 0x10062fd0

	virtual CTEShatterSurface *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100021d0();	// destructor body
	void sub_10063340(int a, int b);	// slot 4 (stub 0x10010ee7): sends the message; called directly on the global instance at 0x106c3870 with the recipient filter and a second argument

	char m_pad0004[8];
	float m_f0c[12];	// 0x000c .. 0x003b, zeroed
	float m_f3c;	// 16.0f
	float m_f40;	// 16.0f
	float m_f44;	// 3.0f
	int m_pad48;
	unsigned char m_rgba[6];	// 0x004c, all 0xff
};
