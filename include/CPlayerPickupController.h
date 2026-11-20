// CPlayerPickupController (RTTI .?AVCPlayerPickupController@@): base CBaseEntity at +0x0.
// Holds the carry state (object at +0x450, its entity handle at +0x59c) and the player at +0x5cc.
#pragma once
#include "CBaseCombatWeapon.h"

#include "CBaseEntity.h"
#include "CUnknown1040cb60.h"
#include "CBaseCombatCharacter.h"

void *sub_100aa720(unsigned int size);

class CPlayerPickupController : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - sizeof(CBaseEntity)];
	CUnknown1040cb60 m_Carry;	// 0x450
	CBaseCombatCharacter *m_pPlayer;	// 0x5cc

	CPlayerPickupController() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }

	void sub_1040d0a0(char bThrow);	// releases the carried object (m_Carry), passes it to sub_101895d0 with the player and tells the player's active weapon (slot 315), then removes itself
	void sub_1040cfd0(CBaseCombatCharacter *pPlayer, CBaseEntity *pObject);	// "PickupObject"-like: unless the player's active weapon agrees (slot 316), drops everything (sub_1040d0a0(0)); else takes pObject (move type 2 when it was 1), sets the carry flag / constant at +0x490 / +0x495, remembers the player and hands both to the carry object (sub_1040c5d0)
	void sub_100a0670(CBaseEntity *pOwner, int a);	// stub 0x10005650
	bool sub_1040d440(void *pEntity);	// whether the carried object's handle (+0x59c) resolves to pEntity (stub 0x10002360)
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *);
	virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *);
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
	virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int flUseValue);
	virtual void vfunc174(CBaseEntity *);
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
	virtual void vfunc226(int a);	// slot 226 (ret 4: one unused stack argument; empty body)
	virtual int vfunc227(struct CTakeDamageInfo *);
	virtual void vfunc228(int, int);
	virtual void vfunc229(int);
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
