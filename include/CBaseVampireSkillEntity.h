// CBaseVampireSkillEntity : CBreakableProp (the game's RTTI; vtable 0x104858cc, 273 slots; vampire_skill allocates
// 0x80c). It declares the slots whose game word differs from CBreakableProp's vtable (0x10473d2c): 5, 82, 103, 130
// and its new slots 267..272 (in slot order). Its own slots 39 and 42 stay plain members: they take a pointer where
// CBaseEntity's declarations take CBaseEntity * / int. Its data starts at sizeof(CBreakableProp) 0x77c.
#pragma once
#include "CBreakableProp.h"

struct datamap_t;

class CBaseEntity;

// 0x18 byte member object (the same kind CCameraAnimated / CCameraTrack embed); only its constructor body is known here.
struct CVampireSkillItem
{
	char m_pad[0x18];

	void sub_100cd2a0();	// constructor body (stub 0x10002ddd)
};

class CBaseVampireSkillEntity : public CBreakableProp
{
public:
	int m_n77c;
	int m_n780;
	int m_n784;
	int m_unk788;	// creation time, copied from the globals
	int m_unk78c;
	int m_n790;
	CVampireSkillItem m_items794[5];	// 0x794 .. 0x80c

	int sub_1020b000(CBaseEntity *pPlayer);
	virtual int *vfunc267(int *pOut, CBaseEntity *pPlayer);	// slot 267 (new; 0x1020b090): stamps the time at +0x788, tests the player's skill of the kind +0x784 (1 or 2) with the tuning block at 0x10739d08 into +0x780, fires the output at +0x7f4 with the player, then by the outcome (3 or more: slot 270, 0: the player view message 2 and slot 269, else slot 271); stores the outcome in *pOut and returns pOut
	virtual int vfunc268(CBaseEntity *pPlayer);	// slot 268 (new; 0x1020b1c0): the value at +0x77c
	virtual void vfunc269(int a);	// bumps the count at +0x78c, forwards a to the helper at +0x7c4 (stub 0x10010794) with this, then reports a "botched" message through the global when the entity at 0x1074f04c fails slot 1 and has a non-zero field at +0x2c
	virtual void vfunc270(int a);	// like vfunc269 on the helper at +0x794, with the "succeeded" message
	virtual void vfunc271(int a);	// like vfunc269 on the helper at +0x7ac, with the "failed" message
	virtual void vfunc272();	// slot 272 (new, the last; 0x1020ac50)
	virtual void vfunc103();	// slot 103 "Spawn" (0x1020ab90): CBreakableProp's, then the creation time at +0x788
	virtual void vfunc130(int bFlag);	// slot 130 (0x1020ac70): the helper's slot-130 step (stub 0x10009e6c), then slot 272 when the flag's low byte is set
	void vfunc42(void *pEntity);	// slot 42: CBaseEntity::vfunc42, then (skill kind +0x784 1 or 2) stores the entity's value of the feat with that id (CVFeatSet::Find) at +0x790
	void sub_100a5030(void *pEntity);	// CBaseEntity::vfunc42 (stub 0x10010e60), called directly
	void vfunc39(void *pEntity);	// slot 39: CBaseEntity::vfunc39, stamps the time at +0x788 and, when the entity's value of the feat of the skill kind (+0x784 1 or 2) exceeds the one at +0x790, runs slot 272
	void sub_100a4fe0(void *pEntity);	// CBaseEntity::vfunc39 (stub 0x10015262), called directly
	void sub_10012eef();	// CBreakableProp::vfunc103 (non-virtual base call)
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (0x1020ab00)
	void sub_1018f1c0();	// base class constructor body (stub 0x100039bd)
	CBaseVampireSkillEntity *sub_1020aa70();	// "CBaseVampireSkillEntity::CBaseVampireSkillEntity" body: base constructor, the five member objects, vftable, +0x780 / +0x784 = 1, +0x790 = 0; returns this
	const char *sub_1000b5cd();	// CBaseEntity::sub_100ab4f0 (stub 0x1000b5cd): the debug name text
	virtual datamap_t *vfunc82();	// slot 82 (0x1020a770): the datamap
};
