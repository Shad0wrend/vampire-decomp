// CPhysBox: physics box entity.
#pragma once
#include "CBaseEntity.h"

// The helper object embedded at CPhysBox+0x498.
class CPhysBoxHelper498
{
public:
	void sub_10010794(int a, CBaseEntity *owner, int b);
};

class CPhysBox : public CBaseEntity
{
public:
	virtual void vfunc39(CBaseEntity *pOther);	// slot 39: wakes the physics object at +0x36c (its slot 2), then sub_1040d970(pOther)
	bool sub_1004e1c0(int a);	// slot 32 override: true when the entity looked up from a (sub_104115b0) is this
	void sub_1004e910(int a);	// slot 242 override: forwards to the helper at +0x498 with this
	int vfunc142(struct CTakeDamageInfo *pEnt);	// slot 142 (plain member): CBaseEntity::vfunc227 on this with pEnt, then when pEnt's word at +0x28 is set the helper at +0x468 is given (pEnt's word at +0x2c, this, 0); always 1
	void sub_1000850d(CBaseEntity *pEnt);	// CBaseEntity::vfunc227 (stub 0x1000850d), called directly on this
	bool vfunc223();	// slot 223 override: warns when there is no physics object (+0x36c), otherwise wakes it / copies the origin to +0x458 and sets the flag object at +0x1b0
	void vfunc241(int a);	// slot 241 "CPhysBox::CreateVPhysics" (plain member): SetSolid(6) and, with spawn flag bit 2, AddSolidFlags(4) (both inlined scope traces), then VPhysicsInitNormal(GetSolid(), GetSolidFlags(), true), PhysSetGameFlags(obj, 1) for material type 1, then the mass: scaled by the float at +0x454 when it is above zero, replaced by the float at +0x464 when that is above zero, clamped to 1.0 .. 1000000.0
	void vfunc226(int a);	// slot 226 override (plain member): with the flag byte at +0x4c8 set, marks the entity changed, runs CBaseEntity::vfunc226(a) and, when bit 0 of the flags at +0x204 is set and the origin (slot 220) moved from the one at +0x458, fires the helper at +0x480 and the entity's name outputs (sub_101c0b80(name, this, this, 3, 0)), then clears the flag
	void vfunc243(int a);	// as in CPhysBox (transplant)
	CPhysBox *sub_1004e0a0();	// as in CKeepUpright (transplant)
	void sub_102d08e0(int a);	// provisional, like sub_1004e910 (transplant)
	virtual void vfunc103();	// slot 103 "CPhysBox::Spawn": SetMoveType(0, 0), SetSolid(1) (inlined scope trace), then the byte at +0x4c8 / SetMoveType(8, 0) depending on the dword at +0x124, SetAbsVelocity(zero), take-damage mode 1, SetModel(model name), slot 104, then SetSolidFlags(1) when spawn flag 0x10, AddFlag2(2) unless spawn flag 0x20, and slot 223
	bool vfunc68(void *pOther);	// slot 68 (plain member): true when pOther has a model-related entity at +0x9c and this entity has bit 4 of +0x204, or pOther's object at +0xa8 passes sub_100b39c0; else false
	void vfunc41(int a);	// slot 41 (plain member): forwards a to sub_1040d950 (an empty function in this build)
	char sub_100b39c0();
	unsigned char sub_1004e110();	// CPhysBox::vfunc117 body (CBaseEntity::vfunc117 & 0xfd | 8)	// the object check of vfunc68 (stub 0x10012887), called directly on this
	virtual bool vfunc73(CBaseEntity *pOther);	// slot 73: true when bit 3 of m_flags204 is set

	char m_pad03e0[0x450 - 0x3e0];
	int m_nMaterial0450;	// 0x450: 1 sets the game flag 1 on the physics object
	float m_flMassScale0454;	// 0x454: mass multiplier (used when above zero)
	char m_pad0458[0x464 - 0x458];
	float m_flMass0464;	// 0x464: mass override (used when above zero)
public:
    virtual datamap_t * vfunc82();
    void vfunc230(int a, void *b);	// as in CBreakable (transplant)
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual int vfunc117();
    virtual int vfunc42(int);
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
	char m_pad0468[0x4c8 - 0x468];
	bool m_bSimulating;	// 0x04c8
	char m_pad04c9[0x4cc - 0x4c9];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual int vfunc36();	// slot 36 (0x1004e1a0): a tail call of sub_102587f0::vfunc36
};
