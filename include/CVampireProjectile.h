// class CVampireProjectile (RTTI CVampireProjectile : CBaseAnimating), primary vtable 0x1048357c, 273 slots.
// Our CBaseAnimating declares virtuals up to slot 133 only, so slots 134..264 are new virtuals here that keep slot
// 265 right.
// slots 118, 120-122 are CBaseEntity's (not declared here: a placeholder with other parameters is a new virtual); 126 / 127 are the class's own 0x101ee770 / 0x101ee790.
#pragma once
#include "QAngle.h"

#include "CBaseAnimating.h"

class CVampireProjectile : public CBaseAnimating
{
public:
	virtual char vfunc91(void *pPassEnt, int contentsMask);
	virtual void vfunc103();	// slot 103 "CVampireProjectile::Spawn": slot 104, SetSolid(2), SetSize(zero vector, zero vector), SetMoveType(13, 0), effects |= 0xa0, the touch function, the spawn time at +0x884, the model name (+0x87c) through slot 105, and the think function
	void vfunc113();	// slot 113: 0x101ee730 in the game's CVampireProjectile vtable (link audit, CVampireProjectile)
	virtual int vfunc117(); virtual void vfunc119();
	virtual void vfunc123();
	virtual void vfunc125(); virtual int vfunc126(int a); virtual int vfunc127(int a); virtual bool vfunc128(); virtual void vfunc129();
	virtual void vfunc130(int a); virtual int vfunc131(); virtual void vfunc132(); virtual void vfunc133(); virtual void vfunc134();
	virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
	virtual void vfunc140(); virtual void vfunc141(); virtual void vfunc142(); virtual void vfunc143(); virtual void vfunc144();
	virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
	virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153(); virtual void vfunc154();
	virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual char vfunc158(); virtual void vfunc159();
	virtual void vfunc160(); virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164();
	virtual void vfunc165(); virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168(); virtual void vfunc169();
	virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(); virtual void vfunc174();
	virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178(); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual void vfunc190(); virtual void vfunc191(); virtual Vector vfunc192(); virtual Vector vfunc193(); virtual void vfunc194();
	virtual void vfunc195(); virtual void vfunc196(); virtual void vfunc197(); virtual void vfunc198(); virtual void vfunc199();
	virtual void vfunc200(); virtual void vfunc201(); virtual void vfunc202(); virtual void vfunc203(); virtual void vfunc204();
	virtual void vfunc205(); virtual void vfunc206(); virtual void vfunc207(); virtual void vfunc208(); virtual void vfunc209();
	virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(); virtual void vfunc213(); virtual void vfunc214();
	virtual void vfunc215(); virtual void vfunc216(); virtual Vector *vfunc217(); virtual void vfunc218(); virtual void vfunc219();
	virtual Vector *vfunc220(); virtual void vfunc221(); virtual void vfunc222(); virtual void vfunc223(); virtual void vfunc224();
	virtual void vfunc225(); virtual void vfunc226(); virtual void vfunc227(); virtual void vfunc228(); virtual void vfunc229();
	virtual void vfunc230(); virtual void vfunc231(); virtual void vfunc232(); virtual void vfunc233(); virtual void vfunc234();
	virtual void vfunc235(); virtual void vfunc236(); virtual void vfunc237(); virtual void vfunc238(Vector *pVelocity, Vector *pOut, int a, int b); virtual void vfunc239();
	virtual void vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243(); virtual void vfunc244();
	virtual void vfunc245(); virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual void vfunc249();
	virtual void vfunc250(); virtual void vfunc251(); virtual void vfunc252(); virtual void vfunc253(); virtual void vfunc254();
	virtual void vfunc255(); virtual void vfunc256(); virtual void vfunc257(); virtual void vfunc258(); virtual void vfunc259();
	virtual void vfunc260(); virtual void vfunc261(); virtual void vfunc262(); virtual void vfunc263(); virtual void vfunc264();
	virtual bool vfunc265();
	virtual void vfunc266(CBaseEntity *pOther);
	virtual void vfunc267(int a); virtual void vfunc268(); virtual void vfunc269(); virtual bool vfunc270(); virtual float vfunc271();
	virtual void vfunc272(const Vector *pOrigin, const Vector *pDir, CBaseEntity *pOwner, int nDamage, float flSpeed, const char *pszModel, const char *pszSound);	// slot 272 "CVampireProjectile::Launch": puts the projectile at pOrigin, stores nDamage (+0x878), flSpeed (+0x8a0), the model name (+0x87c) and the sound name (+0x880) (null when empty), turns it along pDir (VectorAngles, slot 64), hands pOwner to slot 202, runs the Spawn (slot 103), sets the velocity to pDir * flSpeed, remembers the start (+0x888) and the direction (+0x894), sequence 0 and ResetSequenceInfo
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100085d5();	// as in CPhysForce (transplant)
	~CVampireProjectile();	// 0x101ee3d0 (stub 0x100085d5)
	CVampireProjectile *sub_101ee2e0();	// as in CKeepUpright (transplant)
	void sub_101ef540(const Vector *pOrigin, const Vector *pVelocity, int nDamage, int nDmgType, CBaseEntity *pAttacker, const Vector *pForce, float flA, int nB, int nC, int nD, CBaseEntity *pInflictor, int nE, CBaseEntity *pWeapon, const char *pszSound, int nF);	// stub 0x10004700 (0x101ef540, ret 0x3c: 15 stack args), called by CBaseEntity::vfunc185 on the projectile sub_101ef900 created ("bullet info" setup, ecx = the projectile). Stores: byte +0x759 = 1; +0x75c = *pOrigin; +0x768 = *pVelocity; +0x774 = nDamage; CVDmg_t::sub_101fa700(nDmgType) on the member at +0x834; +0x778 / +0x77c = handles (-1 when null; slot 1 GetRefEHandle) of pAttacker's owner (+0x9c) and pWeapon (or of the owner's active weapon, sub_1032e7b0, when pWeapon is null); +0x830 = nF; +0x780 = *pForce; +0x78c = flA; +0x790 = nB; +0x794 = nC; +0x798 = nD; +0x79c = handle of pInflictor (-1 when null); +0x7a0 = nE; +0x7a4 byte = 0, and when pWeapon is set and its weapon record (CBaseCombatWeapon::sub_102517e0()) has +0x40c: byte 1, strcpy of the record's +0x410 string into +0x7ac, +0x7a8 = 0x200, +0x82c = pointer to it (null when empty); finally, when pszSound is non-empty, an inlined CPASAttenuationFilter(this, 0.8f) (vptr 0x104470dc / 0x104470b0, Filter(origin, 0.8f)) plays it with enginesound->vfunc3(&filter, engine->vfunc35(edict +0x2e0), 0, pszSound, 1.0f, 0.8f, 0, 100, 0, 0, 1, 0)
	void sub_101efcf0();	// stub 0x100026b2
	void sub_101ee7d0();	// CVampireProjectile member (stub 0x10003be3): removes the projectile, delayed by 10 seconds while the entity of the handle at +0x8b8 lives and the byte at +0x8b4 is clear
	void sub_101ef3d0();	// emits the sound named at +0x880 ("" when null) through a PAS attenuation filter
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
public:
	virtual void vfunc31(int);	// slot 31: 0x1008b530 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual int vfunc79();	// slot 79: 0x10097ae0 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc99(int, int, int);	// slot 99: 0x100956e0 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual void vfunc104();	// slot 104: precaches the Pearl of Dubai model, then sets it through slot 105
	virtual void vfunc105(const char *);	// slot 105: 0x10095030 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc108(const char *, float, float, float);	// slot 108: 0x1004fbb0 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc109(const char *, float);	// slot 109: 0x1004fbf0 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc110(const char *, const char *);	// slot 110: 0x101c1480 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual int vfunc124();	// slot 124: 0x10096100 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)

	// Data members (after the rest of CBaseAnimating, 0x730 bytes in the game). The 8 bytes at +0x8b4 are left to
	// the derived padding in CVampireProjectile_MingXiaoSpit so that the class size stays positive with VC6.
	// vfunc238 (slot 238 "PerformCustomPhysics" override) uses +0x730..+0x8b0;
	// vfunc272 stores +0x878/+0x87c/+0x880/+0x888/+0x894/+0x8a0; vfunc103 +0x884/+0x87c;
	// vfunc91 +0x758/+0x8a4; vfunc268/vfunc269 +0x778/+0x888/+0x8a8.
	char m_pad04a4[0x730 - 0x4a4];	// the rest of CBaseAnimating
	EHANDLE m_h730;	// 0x730: the entity the projectile retargets to / follows (resolved through the entity list)
	int m_n734;	// 0x734: -1 when there is no such entity
	float m_fl738;	// 0x738: the projectile's expiry / despawn time (0 = none)
	Vector m_vecAttachOrigin;	// 0x073c
	QAngle m_angAttachAngle;	// 0x0748
	EHANDLE m_hOwner;	// 0x0754
	unsigned char m_b758;	// 0x758: set by CVampireProjectile::vfunc91 (touch / damage path)
	bool m_bBulletParamSet;	// 0x0759
	char m_pad075a[0x75c - 0x75a];
	Vector m_vecOrigin75c;
	Vector m_vecVelocity768;
	int m_nDamage774;
	EHANDLE m_h778;	// 0x778: the entity the effect is attached to (CVampireProjectile::vfunc269)
	EHANDLE m_h77c;
	Vector m_vecForce780;
	float m_fl78c;
	int m_n790, m_n794, m_n798;
	EHANDLE m_h79c;
	int m_n7a0;
	char m_b7a4;
	char m_pad7a5[3];
	int m_n7a8;
	char m_szWeapon7ac[0x80];
	char *m_psz82c;
	int m_n830;
	char m_dmg834[0x44];
	int m_iProjectileFlags;	// 0x0878
	const char *m_pszModel87c;	// 0x87c: the model name (null when none)
	const char *m_pszSound880;	// 0x880: the sound name (null when none)
	float m_fl884;	// 0x884: the spawn time (gpGlobals->curtime in vfunc103)
	Vector m_vecStart888;	// 0x888: the launch origin
	Vector m_vecDir894;	// 0x894: the launch direction
	float m_flSpeed8a0;	// 0x8a0: the projectile speed
	unsigned char m_b8a4;	// 0x8a4: ends the projectile unless the handle at +0x730 resolves to an entity with an owner
	char m_pad08a5[0x8a8 - 0x8a5];
	EHANDLE m_h8a8;	// 0x8a8: the target of the projectile
	unsigned char m_b8ac;	// 0x8ac: check the target's owner against the value at +0x8b0
	char m_pad08ad[0x8b0 - 0x8ad];
	int m_n8b0;	// 0x8b0: the owner field (+0xfb0) the check at +0x8ac compares
};
