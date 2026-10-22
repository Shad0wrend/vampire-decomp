// CPropHaunted: declared by pcdecomp transplant for 0x10212fd0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

// Placeholder virtual slots that keep the slot number of vfunc266 right (CBaseEntity declares the slots up to 133).
#define HAUNTED_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CPropHaunted : public CBaseEntity
{
public:
	HAUNTED_SLOTS10(hsa) HAUNTED_SLOTS10(hsb) HAUNTED_SLOTS10(hsc) HAUNTED_SLOTS10(hsd) HAUNTED_SLOTS10(hse)	// slots 134..183
	HAUNTED_SLOTS10(hsf) HAUNTED_SLOTS10(hsg) HAUNTED_SLOTS10(hsh) HAUNTED_SLOTS10(hsi) HAUNTED_SLOTS10(hsj)	// slots 184..233
	HAUNTED_SLOTS10(hsk) HAUNTED_SLOTS10(hsl)	// slots 234..253
	virtual void hsm0(); virtual void hsm1(); virtual void hsm2(); virtual void hsm3(); virtual void hsm4();	// slots 254..265
	virtual void hsm5(); virtual void hsm6(); virtual void hsm7(); virtual void hsm8(); virtual void hsm9();
	virtual void hsn0(); virtual void hsn1();
	virtual void vfunc266(CBaseEntity *pOther);	// slot 266: reacts to the entity that hit the prop
	CPropHaunted *sub_102139f0();
	void vfunc180();	// slot 180 (declared as a plain member): CBaseEntity::vfunc180, then for a live ghost entity (handle at +0x7d0) runs its slot 242 and schedules its next think 5.0 seconds ahead
	void vfunc104();	// slot 104 "Precache": CBreakableProp::vfunc104, then precaches the models named at +0x7bc / +0x7c0 and the sounds named at +0x7c4, +0x7c8, +0x7cc when set
	void sub_1000978c();	// CBreakableProp::vfunc104 (stub of 0x1018fb50), called directly
	void sub_10213ef0(int index, void *pEvent, CBaseEntity *pOther);	// the impact reaction: when the prop is armed (byte +0x7b8) runs slot 266 on pOther, then damages: with a physics event (pEvent) from pOther (or its owner) at the impact force / position, else from the prop itself with the damage at +0x794 (the damage goes to pOther); takes (index, event, entity)

	char m_pad03e0[0x794 - 0x3e0];
	float m_flDamage794;	// 0x794: the damage the impact does
	char m_pad0798[0x7b8 - 0x798];
	char m_bArmed7b8;	// 0x7b8: set while the prop reacts to impacts
};
