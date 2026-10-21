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
	bool sub_1004e1c0(int a);	// slot 32 override: true when the entity looked up from a (sub_104115b0) is this
	void sub_1004e910(int a);	// slot 242 override: forwards to the helper at +0x498 with this
	bool vfunc223();	// slot 223 override: warns when there is no physics object (+0x36c), otherwise wakes it / copies the origin to +0x458 and sets the flag object at +0x1b0
	void vfunc226(int a);	// slot 226 override (plain member): with the flag byte at +0x4c8 set, marks the entity changed, runs CBaseEntity::vfunc226(a) and, when bit 0 of the flags at +0x204 is set and the origin (slot 220) moved from the one at +0x458, fires the helper at +0x480 and the entity's name outputs (sub_101c0b80(name, this, this, 3, 0)), then clears the flag
	void vfunc243(int a);	// as in CPhysBox (transplant)
	CPhysBox *sub_1004e0a0();	// as in CKeepUpright (transplant)
	void sub_102d08e0(int a);	// provisional, like sub_1004e910 (transplant)
	virtual void vfunc103();	// slot 103 "CPhysBox::Spawn": SetMoveType(0, 0), SetSolid(1) (inlined scope trace), then the byte at +0x4c8 / SetMoveType(8, 0) depending on the dword at +0x124, SetAbsVelocity(zero), take-damage mode 1, SetModel(model name), slot 104, then SetSolidFlags(1) when spawn flag 0x10, AddFlag2(2) unless spawn flag 0x20, and slot 223
};
