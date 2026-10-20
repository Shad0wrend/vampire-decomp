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
	void vfunc269(int a);	// bumps the count at +0x78c, forwards a to the helper at +0x7c4 (stub 0x10010794) with this, then reports a "botched" message through the global when the entity at 0x1074f04c fails slot 1 and has a non-zero field at +0x2c
	void vfunc272();
	void vfunc103();
	void sub_10012eef();	// CBreakableProp::vfunc103 (non-virtual base call)
	CBaseVampireSkillEntity *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
};
