// CTEBaseBeam: base beam temp entity (CBaseTempEntity head at +0x0).
#pragma once

#include "CBaseTempEntity.h"

class CTEBaseBeam : public CBaseTempEntityHead
{
public:
	CTEBaseBeam(const char *name);	// 0x1005a710: base constructor, vtable, fields 0x0c..0x40 cleared
	virtual ServerClass *vfunc0();
	virtual void vfunc1();
	virtual CTEBaseBeam *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000d08f();	// destructor body

	char m_pad0004[8];
	int m_n0c;	// 0x0c
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
	int m_n20;
	int m_n24;
	int m_n28;
	int m_n2c;
	int m_n30;
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_n40;
};
