// CBaseVampireSkillEntity: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseEntity;

class CBaseVampireSkillEntity
{
public:
	char pad0[0x788];
	int m_unk788;	// creation time, copied from the globals
	int m_unk78c;

	int sub_1020b000(CBaseEntity *pPlayer);
	void vfunc272();
	void vfunc103();
	void sub_10012eef();	// CBreakableProp::vfunc103 (non-virtual base call)
};
