// class CRagdollPropSpecial; modelled as a direct CBaseEntity subclass (the real bases are not declared).
// Slots 134..190 are placeholders that keep the slot number of vfunc191 right.
#pragma once

#include "CBaseEntity.h"

class CRagdollPropSpecial : public CBaseEntity
{
public:
	virtual void vfunc113();
	virtual void vfunc134();
	virtual float vfunc135(float); virtual bool vfunc136(); virtual int vfunc137(); virtual int vfunc138(); virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *); virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *); virtual int vfunc142(struct CTakeDamageInfo *); virtual int vfunc143(float, int); virtual void vfunc144(void *);
	virtual int vfunc145(); virtual void vfunc146(void *, const Vector &, void *); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148(); virtual void vfunc149(int, int);
	virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152(); virtual int vfunc153(); virtual int vfunc154(int, int);
	virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char); virtual void vfunc156(int); virtual bool vfunc157(int); virtual bool vfunc158(); virtual void vfunc159();
	virtual bool vfunc160(const char *); virtual bool vfunc161(const char *); virtual char vfunc162(); virtual void vfunc163(); virtual bool vfunc164();
	virtual void vfunc165(void *); virtual bool vfunc166(CBaseEntity *); virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168(); virtual void vfunc169(const Vector *);
	virtual void vfunc170(const Vector *); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int); virtual void vfunc174(CBaseEntity *pOther);
	virtual void vfunc175(CBaseEntity *); virtual void vfunc176(CBaseEntity *); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(struct CFireBulletsInfo *); virtual void vfunc186(); virtual CBaseEntity *vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual float vfunc190(); virtual void vfunc191(int value);
#define CRPS_V(n) virtual void vfunc##n();
#define CRPS_V10(p) CRPS_V(p##0) CRPS_V(p##1) CRPS_V(p##2) CRPS_V(p##3) CRPS_V(p##4) CRPS_V(p##5) CRPS_V(p##6) CRPS_V(p##7) CRPS_V(p##8) CRPS_V(p##9)
	// slots 192..264 are placeholders; slot 191 takes a float in 0x10382670 (called with fild/fstp), but is declared int by its matched definition 0x10157870
	virtual Vector vfunc192(); virtual Vector vfunc193(); virtual float *vfunc194(); virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198(); virtual void vfunc199(float *, float *);
	virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int); virtual void vfunc202(CBaseEntity *); virtual float vfunc203(); virtual float vfunc204(); virtual void vfunc205(); virtual void vfunc206(); virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *); virtual CBaseEntity *vfunc209();; virtual void vfunc210(); virtual unsigned int vfunc211(); virtual void vfunc212(string_t); virtual void vfunc213(const float *); virtual float *vfunc214(); virtual Vector *vfunc215(); virtual void vfunc216(const Vector &); virtual float *vfunc217(); virtual void vfunc218(const float *); virtual float *vfunc219();; virtual float *vfunc220(); virtual float *vfunc221(); virtual int vfunc222(int); virtual bool vfunc223(); virtual void vfunc224(); virtual void vfunc225(); virtual void vfunc226(int); virtual int vfunc227(struct CTakeDamageInfo *); virtual void vfunc228(int, int); virtual void vfunc229(int);; /* vfunc230: declared by the slot */ virtual void vfunc231(void *, float, int, int); virtual void vfunc232(int); virtual int vfunc233(int *, int); virtual struct CGameTrace vfunc234(const Vector *); virtual void vfunc235(); virtual void vfunc236(); virtual int vfunc237(); virtual void vfunc238(Vector *, Vector *, int, int); virtual bool vfunc239(float);; virtual int vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243(); virtual void vfunc244(); virtual void vfunc245(); virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual void vfunc249();; virtual void vfunc250(); virtual void vfunc251(); virtual void vfunc252(); virtual void vfunc253(); virtual void vfunc254(); virtual void vfunc255(); virtual void vfunc256(); virtual void vfunc257(); virtual void vfunc258(); virtual void vfunc259();;
	virtual void vfunc260(); virtual void vfunc261(); virtual void vfunc262(); virtual void vfunc263(); virtual void vfunc264();
	virtual void *vfunc265(int value);	// slot 265 (+0x424): called by CNPC_VHengeyokai::sub_10382670 with the same value as slot 191; returns the physics object (null on failure)
#undef CRPS_V
#undef CRPS_V10

	char m_pad03e0[0x768 - 0x3e0];
	EHANDLE m_hBreaker;	// 0x0768
	char m_pad076c[0x103c - 0x76c];
	char m_b103c;
	char m_pad103d[0x1040 - 0x103d];
	float m_f1040;
	float m_f1044;
	float m_f1048;
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	bool vfunc73(CBaseEntity *pOther);	// slot 73 (the base slot is vfunc73()): false when pOther has a value at +0x9c and this entity's byte at +0x103c is set, else true
	void sub_10014317();	// as in CPhysForce (transplant)
	void sub_10157ca0(CBaseEntity *pOwner);	// when bit 4 of the spawn flags (+0x204) is set: stores pOwner's handle at +0x1050 (-1 for null), arms the think function sub_10015424 (SetThink), clears +0x1fc, sets +0x200 to 1 and schedules the next think at curtime + 0.001
	void sub_10015424();	// think function
	void sub_100ac4e0(void (CRagdollPropSpecial::*pfnThink)(), float flThinkTime, const char *szContext);	// "CBaseEntity::SetThink" (called through the stub at 0x10007fe5)
	void sub_101578d0(char bValue);	// stub 0x10009a4d: takes the byte the man-bat kept at +0x6694 (called by CNPC_VManBat::sub_1038f660)
	void vfunc230(int index, void *pEvent);	// slot 230 "VPhysicsCollision" override (plain member): the base implementation, then for the other entity of the collision event (entities at +0x68 of the event, picked by the index) that is not this entity: when this entity's physics object moves faster than 150 units/s, sub_10157ca0(other)
public:
    virtual datamap_t * vfunc82();
	const char *m_pszExplosion104c;	// 0x104c: name of the explosion parameters entity
	EHANDLE m_hAttacker1050;	// 0x1050
	void sub_10157930(CBaseEntity *pAttacker);	// the explosion (stub 0x10010d2f): gated by spawn flag 0x10
};
