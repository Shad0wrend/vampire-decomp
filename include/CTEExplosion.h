// CTEExplosion: explosion temp entity. Declared flat (bases not recovered); only the vtable head and the
// fields that the free "create" function fills are modelled.
#pragma once

#include "Vector.h"
#include "CBaseTempEntity.h"

// CTEParticleSystem: the part between CBaseTempEntity and CTEExplosion (the origin, zeroed by its constructor)
class CTEParticleSystemHead : public CBaseTempEntityHead
{
public:
	CTEParticleSystemHead(const char *pName) : CBaseTempEntityHead(pName)
	{
		m_vecOrigin.x = 0;
		m_vecOrigin.y = 0;
		m_vecOrigin.z = 0;
	}

	virtual ServerClass *vfunc0();
	virtual void vfunc1();

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
};

class CTEExplosion : public CTEParticleSystemHead
{
public:
	CTEExplosion(const char *pName);	// 0x10061820
	virtual ServerClass *vfunc0();
	virtual void vfunc1();
	virtual CTEExplosion *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": the fireball model, scale 0.5, frame rate 15, no flags; the position is the origin raised by a constant and moved 50 units forward (flattened direction); then the effect is created for every player (slot 4)

	int m_nField18;	// 0x18
	int m_nField1c;	// 0x1c
	int m_nField20;	// 0x20
	int m_nField24;	// 0x24
	float m_vecNormal[3];	// 0x28 (0, 0, 1 when not given)
	char m_bField34;	// 0x34
	int m_nField38;	// 0x38
	int m_nField3c;	// 0x3c

	void sub_1000e90d();	// destructor body
	void vfunc4(void *pFilter, int delay);	// slot 4 "Create"-like worker (stub 0x100051a0), called directly
};
