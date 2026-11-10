// CDiscipline: the discipline definition object handled by game_shared/v_discipline.cpp (name taken from the DevMsg
// "Discipline<> DoDamage"); only what the recovered members need.
#pragma once

class CBaseEntity;
class CBaseCombatCharacter;

struct CDiscRange
{
	int m_min;
	int m_max;
	int sub_101ddaf0(int percent);
};

struct CDiscipline
{
	int m_unk00;
	CDiscRange m_rng04;
	CDiscRange m_rng0c;
	CDiscRange m_rng14;
	char m_b1c;
	unsigned char m_b1d;	// 0x1d: gates the 0x2000 damage flag and the counter at g_10739a6c
	char m_b1e;
	char m_unk1f;
	CDiscRange m_rng20;
	CDiscRange m_rng28;
	int m_n30;
	const char *m_psz34;
	int m_n38;
	int m_n3c;
	int m_n40;
	const char *m_psz44;
	int m_n48;
	int m_n4c;
	int m_unk50;
	int m_unk54;
	int m_unk58;
	int m_unk5c;
	int m_unk60;
	int m_unk64;
	int m_unk68;
	int m_unk6c;
	int m_unk70;
	int m_unk74;
	int m_unk78;
	int m_unk7c;
	int m_unk80;
	int m_unk84;
	int m_unk88;
	int m_unk8c;
	int m_unk90;
	int m_unk94;
	int m_unk98;
	int m_unk9c;
	int m_unkA0;
	unsigned int m_nA4;
	int m_nA8;

	void sub_101de2f0(CBaseEntity *pAttacker, CBaseCombatCharacter *pTarget, int nDamage);
	void sub_101de660(CBaseCombatCharacter *pSource, CBaseCombatCharacter *pTarget, int nDiscipline, float flValue);
};
