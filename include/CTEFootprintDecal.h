// CTEFootprintDecal: footprint decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "ServerClass.h"

class CUnknown1019d130;

struct CTEFootprintVec3
{
	float x, y, z;
};

class CTEFootprintDecal
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEFootprintDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	char m_pad0004[8];
	CTEFootprintVec3 m_vecOrigin;	// 0x0c
	CTEFootprintVec3 m_vecDirection;	// 0x18
	int m_nEntity;	// 0x24
	int m_nIndex;	// 0x28
	unsigned char m_chMaterialType;	// 0x2c

	void sub_100059d4();	// destructor body
	CTEFootprintDecal *sub_10062e50(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), zeroes from +0xc, the material byte 0x43 at +0x2c
	void sub_10062ee0(CUnknown1019d130 *filter, float delay);	// "Create": sends the decal to the recipients (stub 0x1000a11e)
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
};
