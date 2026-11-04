// CDiscipline: the discipline definition object handled by game_shared/v_discipline.cpp (name taken from the DevMsg
// "Discipline<> DoDamage"); only what the recovered members need.
#pragma once

class CBaseEntity;
class CBaseCombatCharacter;

struct CDiscipline
{
	char m_pad0000[0x1d];
	unsigned char m_b1d;	// 0x1d: gates the 0x2000 damage flag and the counter at g_10739a6c

	void sub_101de2f0(CBaseEntity *pAttacker, CBaseCombatCharacter *pTarget, int nDamage);
};
