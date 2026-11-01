// class CVampireProjectile (RTTI .?AVCVampireProjectile@@), primary vtable 0x1048357c, 273 slots.
// Modelled as a direct CBaseEntity subclass (the real bases CBaseAnimating, CBaseToggle are not declared);
// slots 117..264 are placeholders that keep slot 265 right.
#pragma once

#include "CBaseEntity.h"

class CVampireProjectile : public CBaseEntity
{
public:
	virtual void vfunc103();	// slot 103 "CVampireProjectile::Spawn": slot 104, SetSolid(2), SetSize(zero vector, zero vector), SetMoveType(13, 0), effects |= 0xa0, the touch function, the spawn time at +0x884, the model name (+0x87c) through slot 105, and the think function
	virtual int vfunc117(); virtual void vfunc118(); virtual void vfunc119();
	virtual void vfunc120(); virtual void vfunc121(); virtual void vfunc122(); virtual void vfunc123();
	virtual void vfunc125(); virtual void vfunc126(); virtual void vfunc127(); virtual bool vfunc128(); virtual void vfunc129();
	virtual void vfunc130(int a); virtual int vfunc131(); virtual void vfunc132(); virtual void vfunc133(); virtual void vfunc134();
	virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
	virtual void vfunc140(); virtual void vfunc141(); virtual void vfunc142(); virtual void vfunc143(); virtual void vfunc144();
	virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
	virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153(); virtual void vfunc154();
	virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual void vfunc158(); virtual void vfunc159();
	virtual void vfunc160(); virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164();
	virtual void vfunc165(); virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168(); virtual void vfunc169();
	virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(); virtual void vfunc174();
	virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178(); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual void vfunc190(); virtual void vfunc191(); virtual void vfunc192(); virtual void vfunc193(); virtual void vfunc194();
	virtual void vfunc195(); virtual void vfunc196(); virtual void vfunc197(); virtual void vfunc198(); virtual void vfunc199();
	virtual void vfunc200(); virtual void vfunc201(); virtual void vfunc202(); virtual void vfunc203(); virtual void vfunc204();
	virtual void vfunc205(); virtual void vfunc206(); virtual void vfunc207(); virtual void vfunc208(); virtual void vfunc209();
	virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(); virtual void vfunc213(); virtual void vfunc214();
	virtual void vfunc215(); virtual void vfunc216(); virtual void vfunc217(); virtual void vfunc218(); virtual void vfunc219();
	virtual void vfunc220(); virtual void vfunc221(); virtual void vfunc222(); virtual void vfunc223(); virtual void vfunc224();
	virtual void vfunc225(); virtual void vfunc226(); virtual void vfunc227(); virtual void vfunc228(); virtual void vfunc229();
	virtual void vfunc230(); virtual void vfunc231(); virtual void vfunc232(); virtual void vfunc233(); virtual void vfunc234();
	virtual void vfunc235(); virtual void vfunc236(); virtual void vfunc237(); virtual void vfunc238(); virtual void vfunc239();
	virtual void vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243(); virtual void vfunc244();
	virtual void vfunc245(); virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual void vfunc249();
	virtual void vfunc250(); virtual void vfunc251(); virtual void vfunc252(); virtual void vfunc253(); virtual void vfunc254();
	virtual void vfunc255(); virtual void vfunc256(); virtual void vfunc257(); virtual void vfunc258(); virtual void vfunc259();
	virtual void vfunc260(); virtual void vfunc261(); virtual void vfunc262(); virtual void vfunc263(); virtual void vfunc264();
	virtual bool vfunc265();
	virtual void vfunc266(CBaseEntity *pOther);
	virtual void vfunc267(int a); virtual void vfunc268(); virtual void vfunc269(); virtual bool vfunc270(); virtual float vfunc271();
	virtual void vfunc272(const Vector *pOrigin, const Vector *pDir, CBaseEntity *pOwner, int nDamage, float flSpeed, const char *pszModel, const char *pszSound);	// slot 272 "CVampireProjectile::Launch": puts the projectile at pOrigin, stores nDamage (+0x878), flSpeed (+0x8a0), the model name (+0x87c) and the sound name (+0x880) (null when empty), turns it along pDir (VectorAngles, slot 64), hands pOwner to slot 202, runs the Spawn (slot 103), sets the velocity to pDir * flSpeed, remembers the start (+0x888) and the direction (+0x894), sequence 0 and ResetSequenceInfo
	CVampireProjectile *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100085d5();	// as in CPhysForce (transplant)
	~CVampireProjectile();	// 0x101ee3d0 (stub 0x100085d5)
	CVampireProjectile *sub_101ee2e0();	// as in CKeepUpright (transplant)
	void sub_101efcf0();	// stub 0x100026b2
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
	virtual void vfunc105(const char *);	// slot 105: 0x10095030 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc108(const char *, float, float, float);	// slot 108: 0x1004fbb0 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc109(const char *, float);	// slot 109: 0x1004fbf0 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc110(const char *, const char *);	// slot 110: 0x101c1480 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual int vfunc124();	// slot 124: 0x10096100 in the game's CVampireProjectile vtable (link audit, CVampireProjectile_MingXiaoSpit)
};
