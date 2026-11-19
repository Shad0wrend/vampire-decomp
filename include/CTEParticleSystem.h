// CTEParticleSystem: the game's class between CBaseTempEntity and the particle temp entities (CTEExplosion,
// CTESparks, CTEInspectionFX; RTTI): the origin, zeroed by its inline constructor, so the derived vptr store comes
// after the zeros. It declares no slot of its own (no vtable of it is known in the game).
#pragma once

#include "Vector.h"
#include "CBaseTempEntity.h"

class CTEParticleSystem : public CBaseTempEntity
{
public:
	CTEParticleSystem(const char *pName) : CBaseTempEntity(pName)
	{
		m_vecOrigin.Init();
	}

	char m_pad0008[0xc - 0x8];
	Vector m_vecOrigin;	// 0x0c
};
