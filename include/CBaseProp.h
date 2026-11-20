// CBaseProp : CBaseAnimating (the game's RTTI; vtable 0x1047332c, 265 slots). It declares the slots whose game word
// differs from CBaseAnimating's vtable (0x1044fad4): 5, 103, 104, 158. Slots 134..264 (CBaseEntity's 134..240 and
// CBaseAnimating's 241..264; our CBaseEntity declares 0..133 and our CBaseAnimating no new ones) are re-declared
// here as placeholders that keep the slot indices, with the signature of the plain member our base headers give the
// slot (144, 193 and 230: the one of the override further down the chain).
#pragma once
#include "CBaseAnimating.h"

class CBaseProp : public CBaseAnimating
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (0x1018e240)
	void sub_10004c3c();
	virtual void vfunc104();	// slot 104 (0x1018e0d0): precaches the model named by slot 9 through the engine
	virtual void vfunc103();	// slot 103 "CBaseProp::Spawn" (0x1018df70): with a model name (slot 9) precaches and sets the model, stops the movement, resets the animation state (sequence = the idle sequence, at least 0) and makes the prop occlude sound for solid types 1, 2 and 6; without a model name warns "prop at ... missing modelname" and removes the prop
	virtual void vfunc134(); virtual float vfunc135(float flTime); virtual bool vfunc136(); virtual int vfunc137();
	virtual int vfunc138(); virtual void vfunc139(CBaseEntity *); virtual bool vfunc140(CBaseEntity *pAttacker); virtual void vfunc141(class CVDmg_t *pInfo, const Vector *pDir, struct CGameTrace *pTrace);
	virtual int vfunc142(CTakeDamageInfo *pInfo); virtual int vfunc143(float flHealth, int bitsDamageType); virtual void vfunc144(void *pInfo); virtual int vfunc145();
	virtual void vfunc146(void *pInfo, const Vector &vecDir, void *pTrace); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148(); virtual void vfunc149(int, int);
	virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152(); virtual int vfunc153();
	virtual int vfunc154(int a, int b); virtual void vfunc155(struct CGameTrace *pTrace, int decalIndex, char bFlag, int a4, class CBasePlayer *pPlayer, int nType, char bTrace); virtual void vfunc156(int); virtual bool vfunc157(int);
	virtual bool vfunc158();	// slot 158 (0x1004fc90): false
	virtual void vfunc159(); virtual bool vfunc160(const char *name); virtual bool vfunc161(const char *name); virtual char vfunc162();
	virtual void vfunc163(); virtual bool vfunc164(); virtual void vfunc165(void *pEdict); virtual bool vfunc166(CBaseEntity *);
	virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168(); virtual void vfunc169(const Vector *); virtual void vfunc170(const Vector *);
	virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int); virtual void vfunc174(CBaseEntity *pOther);
	virtual void vfunc175(CBaseEntity *pOther); virtual void vfunc176(CBaseEntity *pOther); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *pOther);
	virtual void vfunc179(); virtual void vfunc180(); virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182();
	virtual void vfunc183(); virtual void vfunc184(); virtual void vfunc185(struct CFireBulletsInfo *pInfo); virtual void vfunc186();
	virtual CBaseEntity *vfunc187(); virtual void vfunc188(); virtual void vfunc189(); virtual float vfunc190();
	virtual void vfunc191(int); virtual Vector vfunc192(); virtual Vector vfunc193(); virtual float *vfunc194();
	virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198();
	virtual void vfunc199(float *vVelocity, float *vAngVelocity); virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *pEntity, int traceMask, CBaseEntity **ppBlocker, int nOrigin); virtual void vfunc202(CBaseEntity *pOwner);
	virtual float vfunc203(); virtual float vfunc204(); virtual void vfunc205(); virtual void vfunc206();
	virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *pEnt); virtual CBaseEntity *vfunc209(); virtual void vfunc210();
	virtual unsigned int vfunc211(); virtual void vfunc212(string_t set); virtual void vfunc213(const float *size); virtual float * vfunc214();
	virtual Vector *vfunc215(); virtual void vfunc216(const Vector &); virtual float * vfunc217(); virtual void vfunc218(const float *absAngles);
	virtual float * vfunc219(); virtual float * vfunc220(); virtual float * vfunc221(); virtual int vfunc222(int a);
	virtual bool vfunc223(); virtual void vfunc224(); virtual void vfunc225(); virtual void vfunc226(int a);
	virtual int vfunc227(struct CTakeDamageInfo *); virtual void vfunc228(int a, int b); virtual void vfunc229(int); virtual void vfunc230(int a, void *b);
	virtual void vfunc231(void *, float, int, int); virtual void vfunc232(int a); virtual int vfunc233(int *pList, int maxObjects); virtual struct CGameTrace vfunc234(const Vector *);
	virtual void vfunc235(); virtual void vfunc236(); virtual int vfunc237(); virtual void vfunc238(Vector *a, Vector *b, int c, int d);
	virtual bool vfunc239(float); virtual int vfunc240(); virtual void vfunc241(char *pszOut, int *pEvent); virtual void vfunc242();
	virtual void vfunc243(const char *pszModel, bool bDeathFX); virtual void vfunc244(); virtual void vfunc245(); virtual void vfunc246();
	virtual void vfunc247(); virtual void vfunc248(); virtual float vfunc249(); virtual float vfunc250(float flInterval);
	virtual char vfunc251(); virtual int vfunc252(int a, int b, int c); virtual int vfunc253(int a, int b, int c); virtual int vfunc254(int a, int b, int c);
	virtual void vfunc255(void *pPos, void *pAng, int mask); virtual void vfunc256(int iBone, float *pMatrix); virtual void vfunc257(int a, int b); virtual void vfunc258(float flInterval, void *pListener);
	virtual void vfunc259(void *pEvent); virtual void vfunc260(); virtual void vfunc261(); virtual bool vfunc262(int iAttachment, float *pMatrix);
	virtual Vector vfunc263(); virtual void vfunc264();

	char m_pad04a4[0x730 - sizeof(CBaseAnimating)];	// 0x4a4
};
