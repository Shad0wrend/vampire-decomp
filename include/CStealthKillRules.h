// CStealthKillRules: stealth-kill target selection rules (name from the FindVictim scope trace string).
#pragma once

class CBaseEntity;

class CStealthKillRules
{
public:
	char pad0[0xb0];
	float m_flRange;

	float sub_101be1d0(CBaseEntity *pEntity);
};
