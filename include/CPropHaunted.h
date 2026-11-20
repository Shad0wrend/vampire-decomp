// CPropHaunted: declared by pcdecomp transplant for 0x10212fd0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"
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
	virtual void vfunc134(); virtual float vfunc135(float); virtual bool vfunc136(); virtual int vfunc137(); virtual int vfunc138();  	virtual void vfunc139(CBaseEntity *); virtual bool vfunc140(CBaseEntity *); virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *); virtual int vfunc142(struct CTakeDamageInfo *); virtual int vfunc143(float, int); virtual void vfunc144(void *); virtual int vfunc145(); virtual void vfunc146(void *, const Vector &, void *); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148();  	virtual void vfunc149(int, int); virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152(); virtual int vfunc153(); virtual int vfunc154(int, int); virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char); virtual void vfunc156(int); virtual bool vfunc157(int); virtual bool vfunc158();  	virtual void vfunc159(); virtual bool vfunc160(const char *); virtual bool vfunc161(const char *); virtual char vfunc162(); virtual void vfunc163(); virtual bool vfunc164(); virtual void vfunc165(void *); virtual bool vfunc166(CBaseEntity *); virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168();  	virtual void vfunc169(const Vector *); virtual void vfunc170(const Vector *); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int);  virtual void vfunc175(CBaseEntity *); virtual void vfunc176(CBaseEntity *); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *);  	virtual void vfunc179();  virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182(); virtual void vfunc183();	// slots 134..183
	virtual void vfunc184(); virtual void vfunc185(struct CFireBulletsInfo *); virtual void vfunc186(); virtual CBaseEntity *vfunc187(); virtual void vfunc188();	// slots 184..193
	virtual void vfunc189(); virtual float vfunc190(); virtual void vfunc191(int); virtual Vector vfunc192(); virtual Vector vfunc193();	// slot 192: a position (pointer to three floats)
	virtual float *vfunc194(); virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198();  	virtual void vfunc199(float *, float *); virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int); virtual void vfunc202(CBaseEntity *); virtual float vfunc203(); virtual float vfunc204(); virtual void vfunc205(); virtual void vfunc206(); virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *);  	virtual CBaseEntity *vfunc209(); virtual void vfunc210(); virtual unsigned int vfunc211(); virtual void vfunc212(string_t); virtual void vfunc213(const float *);
	virtual float *vfunc214(); virtual Vector *vfunc215(); virtual void vfunc216(const Vector &); virtual float *vfunc217(); virtual void vfunc218(const float *);	// slots 214..223
	virtual float *vfunc219(); virtual float *vfunc220(); virtual float *vfunc221(); virtual int vfunc222(int); virtual bool vfunc223();
	virtual void vfunc224(); virtual void vfunc225(); virtual void vfunc226(int); virtual int vfunc227(struct CTakeDamageInfo *);   	virtual void vfunc229(int);  virtual void vfunc231(void *, float, int, int); virtual void vfunc232(int); virtual int vfunc233(int *, int);	// slots 224..233
	virtual struct CGameTrace vfunc234(const Vector *); virtual void vfunc235(); virtual void vfunc236(); virtual int vfunc237(); virtual void vfunc238(Vector *, Vector *, int, int);  	virtual bool vfunc239(float); virtual int vfunc240(); virtual void hsk7(); virtual void hsk8(); virtual void hsk9();	// slots 234..253
	virtual void hsl0(); virtual void hsl1(); virtual void hsl2(); virtual void hsl3(); virtual void hsl4();
	virtual void hsl5(); virtual float hsl6(int a); virtual void hsl7(); virtual void hsl8(); virtual void hsl9();
	virtual void hsm0(); virtual void hsm1(); virtual void hsm2(); virtual void hsm3(); virtual void hsm4();	// slots 254..265
	virtual void hsm5(); virtual void hsm6(); virtual void hsm7(); virtual void hsm8(); virtual void hsm9();
	virtual void hsn0(); virtual void hsn1();
	virtual void vfunc266(CBaseEntity *pOther);	// slot 266: reacts to the entity that hit the prop
	virtual void vfunc103();	// slot 103: CBreakableProp::vfunc103, then the physics setup (slot 225, SetMoveType, VPhysicsInitNormal, wakes the object)
	void sub_1018f340();	// CBreakableProp::vfunc103 (stub 0x10012eef), called directly
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5: scalar deleting destructor (output events at +0x730 / +0x748 / +0x7d4 / +0x7ec / +0x804, then CBaseAnimating::sub_1008b3c0)
	void sub_1008b3c0();	// CBaseAnimating::sub_1008b3c0 (stub 0x10004c3c), called directly
	CPropHaunted *sub_102139f0();
	char vfunc68(int a);	// slot 68: 1 while the state at +0x200 is 2, else CBaseAnimating::vfunc68
	char sub_1008bfe0(int a);	// CBaseAnimating::vfunc68 (stub), called directly
	void vfunc174(CBaseEntity *pOther);	// slot 174 (declared as a plain member): CBaseEntity::vfunc174 for the entity that hit the prop, the impact reaction sub_10213ef0 (index 0, no event) first; the reaction is skipped while the state at +0x200 is 2
	void vfunc228(int index, int pEvent);	// slot 228 (declared as a plain member): the impact reaction sub_10213ef0 for the entity of the event's other side (the engine entity 0 when none), then CBaseEntity::vfunc228 unless the state at +0x200 is 2
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
	float m_flFlingVelocity;	// 0x0788
	float m_flMin78c;	// 0x78c: the shortest wait between spins
	float m_flMax790;	// 0x790: the longest wait between spins
	float m_flDamage794;	// 0x794: the damage the impact does
	char m_pad0798[0x79c - 0x798];
	bool m_bTargetPlayer;	// 0x079c
	char m_pad079d[0x7a0 - 0x79d];
	Vector m_vecFlingDest;	// 0x07a0
	char m_pad07ac[0x7b8 - 0x7ac];
	char m_bArmed7b8;	// 0x7b8: set while the prop reacts to impacts
	char m_pad07b9[0x7bc - 0x7b9];
	string_t m_sFlingParticle;	// 0x07bc
	int m_iszGhost7c0;	// 0x7c0
	string_t m_sFlingSound;	// 0x07c4
	string_t m_sBreakSound;	// 0x07c8
	int m_iszSound7cc;	// 0x7cc
	unsigned int m_hGhost7d0;	// 0x7d0: the ghost particle entity handle, -1 when none
	char m_pad07d4[0x7ec - 0x7d4];
	char m_sub07ec[4];	// 0x7ec: a CPropHauntedSub
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc265();
	char m_pad07f0[0x81c - 0x7f0];
};
