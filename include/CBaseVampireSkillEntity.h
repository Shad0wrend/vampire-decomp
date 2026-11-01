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
	unsigned int m_hAttached;	// 0x80c: handle of the entity (door, container) this skill entity is attached to

	int sub_1020b000(CBaseEntity *pPlayer);
	void vfunc269(int a);	// bumps the count at +0x78c, forwards a to the helper at +0x7c4 (stub 0x10010794) with this, then reports a "botched" message through the global when the entity at 0x1074f04c fails slot 1 and has a non-zero field at +0x2c
	void vfunc272();
	void vfunc103();
	void vfunc42(void *pEntity);	// slot 42: CBaseEntity::vfunc42, then (skill kind +0x784 1 or 2) stores the entity's value of the feat with that id (CVFeatSet::Find) at +0x790
	void sub_100a5030(void *pEntity);	// CBaseEntity::vfunc42 (stub 0x10010e60), called directly
	void vfunc39(void *pEntity);	// slot 39: CBaseEntity::vfunc39, stamps the time at +0x788 and, when the entity's value of the feat of the skill kind (+0x784 1 or 2) exceeds the one at +0x790, runs slot 272
	void sub_100a4fe0(void *pEntity);	// CBaseEntity::vfunc39 (stub 0x10015262), called directly
	void sub_10012eef();	// CBreakableProp::vfunc103 (non-virtual base call)
	CBaseVampireSkillEntity *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	void sub_1018f1c0();	// base class constructor body (stub 0x100039bd)
	CBaseVampireSkillEntity *sub_1020aa70();	// "CBaseVampireSkillEntity::CBaseVampireSkillEntity" body: base constructor, the five member objects, vftable, +0x780 / +0x784 = 1, +0x790 = 0; returns this
	void sub_102256f0(const char *pszDoorName);	// finds the door (CBaseDoor) of that name, stores its handle at +0x80c (-1 when none) and hands this knob to it (CBaseDoor::AddDoorknob); a missing door is warned about ("attached to non-existent door") and this entity removed (stub of the two door skill entities' slot 113)
	const char *sub_1000b5cd();	// CBaseEntity::sub_100ab4f0 (stub 0x1000b5cd): the debug name text
	int *vfunc267(int *pOut, CBaseEntity *pPlayer);	// slot 267 (plain member): stamps the time at +0x788, tests the player's skill of the kind +0x784 (1 or 2) with the tuning block at 0x10739d08 into +0x780, fires the output at +0x7f4 with the player, then by the outcome (3 or more: slot 270, 0: the player view message 2 and slot 269, else slot 271); stores the outcome in *pOut and returns pOut
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
