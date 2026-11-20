// CEnvWind: env_wind entity (derived from CBaseEntity at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseEntity.h"

class CEnvWind : public CBaseEntity
{
public:
	virtual void vfunc113();
	virtual void vfunc103();	// slot 103 "CEnvWind::Spawn": the base, then SetSolid(6 when the entity of the handle at +0x254 resolves, else 1), AddSolidFlags(4), AddSolidFlags(8), SetMoveType(0, 0), SetModel(name), and bit 6 of the effect flags (+0x19c)

	void sub_100a53d0(int a);
	unsigned char sub_100fe6e0();	// CEnvWind::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *);
	virtual void vfunc141(class CVDmg_t *p0, const Vector *p1, struct CGameTrace *p2);
	virtual int vfunc142(struct CTakeDamageInfo *);
	virtual int vfunc143(float, int);
	virtual void vfunc144(void *);
	virtual int vfunc145();
	virtual void vfunc146(void *, const Vector &, void *);
	virtual bool vfunc147(CBaseEntity *);
	virtual void vfunc148();
	virtual void vfunc149(int, int);
	virtual void vfunc150();
	virtual void vfunc151(class CBaseCombatWeapon *);
	virtual float vfunc152();
	virtual int vfunc153();
	virtual int vfunc154(int, int);
	virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char);
	virtual void vfunc156(int);
	virtual bool vfunc157(int);
	virtual bool vfunc158();
	virtual void vfunc159();
	virtual bool vfunc160(const char *);
	virtual bool vfunc161(const char *);
	virtual char vfunc162();
	virtual void vfunc163();
	virtual bool vfunc164();
	virtual void vfunc165(void *);
	virtual bool vfunc166(CBaseEntity *);
	virtual CBaseEntity *vfunc167();
	virtual CBaseEntity *vfunc168();
	virtual void vfunc169(const Vector *);
	virtual void vfunc170(const Vector *);
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int);
	virtual void vfunc174(CBaseEntity *pOther);
	virtual void vfunc175(CBaseEntity *);
	virtual void vfunc176(CBaseEntity *);
	virtual void vfunc177(CBaseEntity *);
	virtual void vfunc178(CBaseEntity *);
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181(const float *, const float *, const float *);
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185(struct CFireBulletsInfo *);
	virtual void vfunc186();
	virtual CBaseEntity *vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual float vfunc190();
	virtual void vfunc191(int);
	virtual Vector vfunc192();
	virtual Vector vfunc193();
	virtual float *vfunc194();
	virtual float *vfunc195();
	virtual Vector vfunc196();
	virtual Vector vfunc197(const Vector &, char, char);
	virtual float *vfunc198();
	virtual void vfunc199(float *, float *);
	virtual int vfunc200();
	virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int);
	virtual void vfunc202(CBaseEntity *);
	virtual float vfunc203();
	virtual float vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual bool vfunc207();
	virtual void vfunc208(CBaseEntity *);
	virtual CBaseEntity *vfunc209();
	virtual void vfunc210();
	virtual unsigned int vfunc211();
	virtual void vfunc212(string_t);
	virtual void vfunc213(const float *);
	virtual float *vfunc214();
	virtual Vector *vfunc215();
	virtual void vfunc216(const Vector &);
	virtual float *vfunc217();
	virtual void vfunc218(const float *);
	virtual float *vfunc219();
	virtual float *vfunc220();
	virtual float *vfunc221();
	virtual int vfunc222(int);
	virtual bool vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226(int);
	virtual int vfunc227(struct CTakeDamageInfo *);
	virtual void vfunc228(int, int);
	virtual void vfunc229(int);
	virtual void vfunc230(int, void *);
	virtual void vfunc231(void *, float, int, int);
	virtual void vfunc232(int);
	virtual int vfunc233(int *, int);
	virtual struct CGameTrace vfunc234(const Vector *);
	virtual void vfunc235();
	virtual void vfunc236();
	virtual int vfunc237();
	virtual void vfunc238(Vector *, Vector *, int, int);
	virtual bool vfunc239(float);
	virtual int vfunc240();
	virtual void vfunc241(int, int, int, int, int);
	char m_pad03e0[0x450 - 0x3e0];
	float m_flWindAngle;	// 0x0450
	float m_flWindChangesPerSecond;	// 0x0454
	float m_flWindMinSpeed;	// 0x0458
	float m_flWindMaxSpeed;	// 0x045c
};
