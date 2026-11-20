// CBaseHudEntity (RTTI CBaseHudEntity : CBaseEntity, descriptor 0x10574634): the base of CHudCounter. The game has no
// vtable of its own for it (only CHudCounter's, 0x10463f24), so it declares no override.
#pragma once

#include "CBaseEntity.h"

class CBaseHudEntity : public CBaseEntity
{
public:
	CBaseHudEntity() : CBaseEntity(0) {}

	// slots 134..240 are CBaseEntity's in the game; our CBaseEntity.h has them as plain members, so they start here
	// (as in CPointEntity)
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *pAttacker);
	virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *);
	virtual int vfunc142(struct CTakeDamageInfo *);
	virtual int vfunc143(float flHealth, int bitsDamageType);
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
	virtual bool vfunc161(const char *name);
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
	virtual void vfunc175(CBaseEntity *pOther);
	virtual void vfunc176(CBaseEntity *pOther);
	virtual void vfunc177(CBaseEntity *);
	virtual void vfunc178(CBaseEntity *pOther);
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
	virtual void vfunc202(CBaseEntity *pOwner);
	virtual float vfunc203();
	virtual float vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual bool vfunc207();
	virtual void vfunc208(CBaseEntity *pEnt);
	virtual CBaseEntity *vfunc209();
	virtual void vfunc210();
	virtual unsigned int vfunc211();
	virtual void vfunc212(string_t set);
	virtual void vfunc213(const float *size);
	virtual float * vfunc214();
	virtual Vector *vfunc215();
	virtual void vfunc216(const Vector &);
	virtual float * vfunc217();
	virtual void vfunc218(const float *absAngles);
	virtual float * vfunc219();
	virtual float * vfunc220();
	virtual float * vfunc221();
	virtual int vfunc222(int a);
	virtual bool vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226(int a);
	virtual int vfunc227(struct CTakeDamageInfo *);
	virtual void vfunc228(int a, int b);
	virtual void vfunc229(int);
	virtual void vfunc230(int, void *);
	virtual void vfunc231(void *, float, int, int);
	virtual void vfunc232(int a);
	virtual int vfunc233(int *pList, int maxObjects);
	virtual struct CGameTrace vfunc234(const Vector *);
	virtual void vfunc235();
	virtual void vfunc236();
	virtual int vfunc237();
	virtual void vfunc238(Vector *a, Vector *b, int c, int d);
	virtual bool vfunc239(float);
	virtual int vfunc240();

	char m_pad03e0[0x450 - 0x3e0];	// the rest of CBaseEntity (0x450 bytes in the game)
};
