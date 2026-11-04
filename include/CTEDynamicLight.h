// CTEDynamicLight: dynamic light temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "CBaseTempEntity.h"

#include "Vector.h"
#include "QAngle.h"

class CRecipientFilter;

class CTEDynamicLight : public CBaseTempEntity
{
public:
	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a yellow light of radius 200 for 2 seconds at the origin (raised, then 50 units along the flat direction of the angles), created for everybody
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create" (stub 0x1001229c)

	CTEDynamicLight *sub_10060b60(const char *name);	// constructor body (0x10060b60): the CBaseTempEntityHead constructor with the name, the vtable, the ten zeroed dwords; returns this
	void sub_10005f51();	// destructor body

	char m_pad0008[0xc - 0x8];
	Vector m_vecOrigin;	// 0x0c
	float m_fRadius;	// 0x18
	int r;	// 0x1c
	int g;	// 0x20
	int b;	// 0x24
	int exponent;	// 0x28
	float m_fTime;	// 0x2c
	float m_fDecay;	// 0x30
};
