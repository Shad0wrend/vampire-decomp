// CTEParticleSystem: the part of the game's CTEParticleSystem (between CBaseTempEntity and the particle temp
// entities: CTEExplosion, CTESparks, CTEInspectionFX) that they share: the origin, zeroed by its inline
// constructor, so the derived vptr store comes after the zeros. No slot 2: VC6 has no covariant returns.
#pragma once

#include "Vector.h"
#include "CBaseTempEntity.h"

class CTEParticleSystemHead : public CBaseTempEntityHead
{
public:
	CTEParticleSystemHead(const char *pName) : CBaseTempEntityHead(pName)
	{
		m_vecOrigin.Init();
	}

	virtual ServerClass *vfunc0();
	virtual int vfunc1();

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
};
