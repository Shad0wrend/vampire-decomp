// CBaseVampireSkillEntity: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseEntity;

class CBaseVampireSkillEntity
{
public:
	char pad0[0x78c];
	int m_unk78c;

	int sub_1020b000(CBaseEntity *pPlayer);
};
