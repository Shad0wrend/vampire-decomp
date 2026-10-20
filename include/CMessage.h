// CMessage: env_message-style entity (RTTI CMessage, base CPointEntity -> CBaseEntity); only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CMessage : public CBaseEntity
{
public:
	void vfunc103();	// slot 103: slot 104(), then the "CBaseEntity::SetSolid" scope trace around the collision property's SetSolid(0), SetMoveType(0, 0) (slot 93), then picks the float at +0x45c from the int at +0x458 (1: 1.25, 2: 0.8, 3: 0, else 60.0), clears it and scales the float at +0x454 by 0.1 (1.0 when not above 0)

	char m_pad03e0[0x454 - sizeof(CBaseEntity)];
	float m_f454;	// 0x454
	int m_n458;	// 0x458
	float m_f45c;	// 0x45c
};
