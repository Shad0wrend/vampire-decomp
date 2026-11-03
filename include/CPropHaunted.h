// CPropHaunted: declared by pcdecomp transplant for 0x10212fd0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CEnvParticle;

// Placeholder virtual slots that keep the slot number of vfunc266 right (CBaseEntity declares the slots up to 133).
#define HAUNTED_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CPropHauntedSub	// the object at +0x7ec
{
	void sub_100cd660(CBaseEntity *pA, CBaseEntity *pB, int c);	// stub 0x10010794
};

class CPropHaunted : public CBaseEntity
{
public:
	HAUNTED_SLOTS10(hsa) HAUNTED_SLOTS10(hsb) HAUNTED_SLOTS10(hsc) HAUNTED_SLOTS10(hsd) HAUNTED_SLOTS10(hse)	// slots 134..183
	virtual void hsf0(); virtual void hsf1(); virtual void hsf2(); virtual void hsf3(); virtual void hsf4();	// slots 184..193
	virtual void hsf5(); virtual void hsf6(); virtual void hsf7(); virtual const float *vfunc192(); virtual void hsf9();	// slot 192: a position (pointer to three floats)
	HAUNTED_SLOTS10(hsg) HAUNTED_SLOTS10(hsh)
	virtual void hsi0(); virtual void hsi1(); virtual void hsi2(); virtual void hsi3(); virtual void hsi4();	// slots 214..223
	virtual unsigned int vfunc219(float a); virtual void hsi6(); virtual void hsi7(); virtual void hsi8(); virtual void hsi9();
	HAUNTED_SLOTS10(hsj)	// slots 224..233
	HAUNTED_SLOTS10(hsk)	// slots 234..253
	virtual void hsl0(); virtual void hsl1(); virtual void hsl2(); virtual void hsl3(); virtual void hsl4();
	virtual void hsl5(); virtual void hsl6(int a); virtual void hsl7(); virtual void hsl8(); virtual void hsl9();
	virtual void hsm0(); virtual void hsm1(); virtual void hsm2(); virtual void hsm3(); virtual void hsm4();	// slots 254..265
	virtual void hsm5(); virtual void hsm6(); virtual void hsm7(); virtual void hsm8(); virtual void hsm9();
	virtual void hsn0(); virtual void hsn1();
	virtual void vfunc266(CBaseEntity *pOther);	// slot 266: reacts to the entity that hit the prop
	virtual void vfunc103();	// slot 103: CBreakableProp::vfunc103, then the physics setup (slot 225, SetMoveType, VPhysicsInitNormal, wakes the object)
	void sub_1018f340();	// CBreakableProp::vfunc103 (stub 0x10012eef), called directly
	CPropHaunted *sub_102139f0();
	char vfunc68(int a);	// slot 68: 1 while the state at +0x200 is 2, else CBaseAnimating::vfunc68
	char sub_1008bfe0(int a);	// CBaseAnimating::vfunc68 (stub), called directly
	void vfunc174(CBaseEntity *pOther);	// slot 174 (declared as a plain member): CBaseEntity::vfunc174 for the entity that hit the prop, the impact reaction sub_10213ef0 (index 0, no event) first; the reaction is skipped while the state at +0x200 is 2
	void vfunc228(int index, void *pEvent);	// slot 228 (declared as a plain member): the impact reaction sub_10213ef0 for the entity of the event's other side (the engine entity 0 when none), then CBaseEntity::vfunc228 unless the state at +0x200 is 2
	void sub_100a65a0(int index, void *pEvent);	// CBaseEntity::vfunc228, called directly
	void vfunc230(int index, void *pEvent);	// slot 230 (declared as a plain member): like vfunc228, ending in CBreakableProp::vfunc230
	void sub_1018fe80(int index, void *pEvent);	// CBreakableProp::vfunc230, called directly
	void vfunc180();	// slot 180 (declared as a plain member): CBaseEntity::vfunc180, then for a live ghost entity (handle at +0x7d0) runs its slot 242 and schedules its next think 5.0 seconds ahead
	void vfunc104();	// slot 104 "Precache": CBreakableProp::vfunc104, then precaches the models named at +0x7bc / +0x7c0 and the sounds named at +0x7c4, +0x7c8, +0x7cc when set
	void sub_1000978c();	// CBreakableProp::vfunc104 (stub of 0x1018fb50), called directly
	void sub_10213ef0(int index, void *pEvent, CBaseEntity *pOther);	// the impact reaction: when the prop is armed (byte +0x7b8) runs slot 266 on pOther, then damages: with a physics event (pEvent) from pOther (or its owner) at the impact force / position, else from the prop itself with the damage at +0x794 (the damage goes to pOther); takes (index, event, entity)
	void sub_10214780();	// the activation: drops flag 0x40000, starts the "spin" sequence (a Warning when the model has none), sets the think function and a random next spin time, starts the sound at +0x7cc and, when the ghost (handle at +0x7d0) is gone, creates the ghost particle (name at +0x7c0) attached to the prop
	void sub_102143e0();	// the think function the activation installs (stub 0x1000c621)
	void sub_10214300();	// a think function: while the physics object (+0x36c) moves faster than the gate convar at 0x1074f0c4 allows (0 while it is flagged) the next think is 0.05 seconds ahead; once it is slower the think is cleared and the prop disarms (byte +0x7b8)
	int sub_1008f7b0(const char *label);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
	void sub_10260a50(int nSequence);	// CBaseAnimating::ResetSequence (stub 0x1000d0b2), called directly
	void sub_10214480();	// the spin think: once the sound has run its time stops it and clears the think; otherwise (slot 250 with 0) fades the sound volume out over its length through the engine sound system (slot 11, channel 4, 75 dB) to everyone who can hear the prop and thinks again 0.05 s ahead
	void sub_1018fb90(CBaseEntity *pOther);	// CBreakableProp::vfunc266 (stub 0x10015208), called directly
	void sub_10214200(const char *pszSound);	// stops the sound (null = the empty string, nothing when empty) on channel 4 of the prop's engine index
	void sub_10214080(const char *pszSound);	// stub 0x10002603: emits the sound (null = the empty string) from the prop to everyone who can hear it (CPASAttenuationFilter), channel 4, 75 dB
	void sub_10214080(int a);	// the caller of the activation passes the string at +0x7cc as an int
	CEnvParticle *sub_10214cc0(int a);	// stub 0x10009f0c: the ghost particle entity for the value at +0x7c0, null when there is none

	char m_pad03e0[0x77c - 0x3e0];
	float m_flTime77c;	// 0x77c: the next spin time
	float m_flStart780;	// 0x780: the time the spin sound started
	float m_flDuration784;	// 0x784: its length
	char m_pad0788[0x78c - 0x788];
	float m_flMin78c;	// 0x78c: the shortest wait between spins
	float m_flMax790;	// 0x790: the longest wait between spins
	float m_flDamage794;	// 0x794: the damage the impact does
	char m_pad0798[0x7b8 - 0x798];
	char m_bArmed7b8;	// 0x7b8: set while the prop reacts to impacts
	char m_pad07b9[0x7c0 - 0x7b9];
	int m_iszGhost7c0;	// 0x7c0
	char m_pad07c4[0x7cc - 0x7c4];
	int m_iszSound7cc;	// 0x7cc
	unsigned int m_hGhost7d0;	// 0x7d0: the ghost particle entity handle, -1 when none
	char m_pad07d4[0x7ec - 0x7d4];
	char m_sub07ec[4];	// 0x7ec: a CPropHauntedSub
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc265();
};
