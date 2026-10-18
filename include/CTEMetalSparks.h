// CTEMetalSparks: metal sparks temp entity (derived from the CBaseTempEntity head at +0x0).
#pragma once

#include "CBaseTempEntity.h"

class CTEMetalSparks : public CBaseTempEntityHead
{
public:
	CTEMetalSparks(const char *name);	// 0x10059e10

	virtual CTEMetalSparks *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e340();	// destructor body
	void sub_10059fe0(int a, int b);	// "CTEMetalSparks::Create" (called through the stub at 0x10004fa7)

	char m_pad0004[8];
	int m_pos[3];	// 0x000c
	int m_dir[3];	// 0x0018
};
