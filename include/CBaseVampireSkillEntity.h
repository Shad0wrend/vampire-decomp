// CBaseVampireSkillEntity: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseEntity;

// 0x18 byte member object (the same kind CCameraAnimated / CCameraTrack embed); only its constructor body is known here.
struct CVampireSkillItem
{
	char m_pad[0x18];

	void sub_100cd2a0();	// constructor body (stub 0x10002ddd)
};

class CBaseVampireSkillEntity
{
public:
	char pad0[0x780];
	int m_n780;
	int m_n784;
	int m_unk788;	// creation time, copied from the globals
	int m_unk78c;
	int m_n790;
	CVampireSkillItem m_items794[5];	// 0x794 .. 0x80c

	int sub_1020b000(CBaseEntity *pPlayer);
	void vfunc269(int a);	// bumps the count at +0x78c, forwards a to the helper at +0x7c4 (stub 0x10010794) with this, then reports a "botched" message through the global when the entity at 0x1074f04c fails slot 1 and has a non-zero field at +0x2c
	void vfunc272();
	void vfunc103();
	void sub_10012eef();	// CBreakableProp::vfunc103 (non-virtual base call)
	CBaseVampireSkillEntity *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	void sub_1018f1c0();	// base class constructor body (stub 0x100039bd)
	CBaseVampireSkillEntity *sub_1020aa70();	// "CBaseVampireSkillEntity::CBaseVampireSkillEntity" body: base constructor, the five member objects, vftable, +0x780 / +0x784 = 1, +0x790 = 0; returns this
};
