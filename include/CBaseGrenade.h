// class CBaseGrenade; modelled as a direct CBaseEntity subclass (the real bases are not declared).
// Slots 134..411 are placeholders that keep the slot numbers of vfunc144, vfunc191, vfunc407 and vfunc412 right.
#pragma once

#include "CBaseEntity.h"

class CBaseGrenade : public CBaseEntity
{
public:
	virtual void vfunc104();
	virtual void vfunc134();
	virtual float vfunc135(float); virtual bool vfunc136(); virtual int vfunc137(); virtual int vfunc138(); virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *); virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *); virtual int vfunc142(struct CTakeDamageInfo *); virtual int vfunc143(float, int); virtual void vfunc144(void *unused);
	virtual int vfunc145(); virtual void vfunc146(void *, const Vector &, void *); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148(); virtual void vfunc149(int, int);
	virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152(); virtual int vfunc153(); virtual int vfunc154(int, int);
	virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char); virtual void vfunc156(int); virtual bool vfunc157(int); virtual bool vfunc158(); virtual void vfunc159();
	virtual bool vfunc160(const char *); virtual bool vfunc161(const char *); virtual char vfunc162(); virtual void vfunc163(); virtual bool vfunc164();
	virtual void vfunc165(void *); virtual bool vfunc166(CBaseEntity *); virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168(); virtual void vfunc169(const Vector *);
	virtual void vfunc170(const Vector *); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int); virtual void vfunc174(CBaseEntity *);
	virtual void vfunc175(CBaseEntity *); virtual void vfunc176(CBaseEntity *); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(struct CFireBulletsInfo *); virtual void vfunc186(); virtual CBaseEntity *vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual float vfunc190(); virtual void vfunc191(int value); virtual Vector vfunc192(); virtual Vector vfunc193(); virtual float *vfunc194();
	virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198(); virtual void vfunc199(float *, float *);
	virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int); virtual void vfunc202(CBaseEntity *); virtual float vfunc203(); virtual float vfunc204();
	virtual void vfunc205(); virtual void vfunc206(); virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *); virtual CBaseEntity *vfunc209();
	virtual void vfunc210(); virtual unsigned int vfunc211(); virtual void vfunc212(string_t set); virtual void vfunc213(const float *); virtual float *vfunc214();
	virtual Vector *vfunc215(); virtual void vfunc216(const Vector &); virtual float *vfunc217(); virtual void vfunc218(const float *); virtual float *vfunc219();
	virtual float *vfunc220(); virtual float *vfunc221(); virtual int vfunc222(int); virtual bool vfunc223(); virtual void vfunc224();
	virtual void vfunc225(); virtual void vfunc226(int); virtual int vfunc227(struct CTakeDamageInfo *); virtual void vfunc228(int, int); virtual void vfunc229(int);
	virtual void vfunc230(int, void *); virtual void vfunc231(void *, float, int, int); virtual void vfunc232(int); virtual int vfunc233(int *, int); virtual struct CGameTrace vfunc234(const Vector *);
	virtual void vfunc235(); virtual void vfunc236(); virtual int vfunc237(); virtual void vfunc238(Vector *, Vector *, int, int); virtual bool vfunc239(float);
	virtual int vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243(); virtual void vfunc244();
	virtual void vfunc245(); virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual void vfunc249();
	virtual void vfunc250(); virtual void vfunc251(); virtual void vfunc252(); virtual void vfunc253(); virtual void vfunc254();
	virtual void vfunc255(); virtual void vfunc256(); virtual void vfunc257(); virtual void vfunc258(); virtual void vfunc259();
	virtual void vfunc260(); virtual void vfunc261(); virtual void vfunc262(); virtual void vfunc263(); virtual void vfunc264();
	virtual void vfunc265(); virtual void vfunc266(); virtual void vfunc267(); virtual void vfunc268(); virtual void vfunc269();
	virtual void vfunc270(); virtual void vfunc271(); virtual void vfunc272(); virtual void vfunc273(); virtual void vfunc274();
	virtual void vfunc275(); virtual void vfunc276(); virtual void vfunc277(); virtual void vfunc278(); virtual void vfunc279();
	virtual void vfunc280(); virtual void vfunc281(); virtual void vfunc282(); virtual void vfunc283(); virtual void vfunc284();
	virtual void vfunc285(); virtual void vfunc286(); virtual void vfunc287(); virtual void vfunc288(); virtual void vfunc289();
	virtual void vfunc290(); virtual void vfunc291(); virtual void vfunc292(); virtual void vfunc293(); virtual void vfunc294();
	virtual void vfunc295(); virtual void vfunc296(); virtual void vfunc297(); virtual void vfunc298(); virtual void vfunc299();
	virtual void vfunc300(); virtual void vfunc301(); virtual void vfunc302(); virtual void vfunc303(); virtual void vfunc304();
	virtual void vfunc305(); virtual void vfunc306(); virtual void vfunc307(); virtual void vfunc308(); virtual void vfunc309();
	virtual void vfunc310(); virtual void vfunc311(); virtual void vfunc312(); virtual void vfunc313(); virtual void vfunc314();
	virtual void vfunc315(); virtual void vfunc316(); virtual void vfunc317(); virtual void vfunc318(); virtual void vfunc319();
	virtual void vfunc320(); virtual void vfunc321(); virtual void vfunc322(); virtual void vfunc323(); virtual void vfunc324();
	virtual void vfunc325(); virtual void vfunc326(); virtual void vfunc327(); virtual void vfunc328(); virtual void vfunc329();
	virtual void vfunc330(); virtual void vfunc331(); virtual void vfunc332(); virtual void vfunc333(); virtual void vfunc334();
	virtual void vfunc335(); virtual void vfunc336(); virtual void vfunc337(); virtual void vfunc338(); virtual void vfunc339();
	virtual void vfunc340(); virtual void vfunc341(); virtual void vfunc342(); virtual void vfunc343(); virtual void vfunc344();
	virtual void vfunc345(); virtual void vfunc346(); virtual void vfunc347(); virtual void vfunc348(); virtual void vfunc349();
	virtual void vfunc350(); virtual void vfunc351(); virtual void vfunc352(); virtual void vfunc353(); virtual void vfunc354();
	virtual void vfunc355(); virtual void vfunc356(); virtual void vfunc357(); virtual void vfunc358(); virtual void vfunc359();
	virtual void vfunc360(); virtual void vfunc361(); virtual void vfunc362(); virtual void vfunc363(); virtual void vfunc364();
	virtual void vfunc365(); virtual void vfunc366(); virtual void vfunc367(); virtual void vfunc368(); virtual void vfunc369();
	virtual void vfunc370(); virtual void vfunc371(); virtual void vfunc372(); virtual void vfunc373(); virtual void vfunc374();
	virtual void vfunc375(); virtual void vfunc376(); virtual void vfunc377(); virtual void vfunc378(); virtual void vfunc379();
	virtual void vfunc380(); virtual void vfunc381(); virtual void vfunc382(); virtual void vfunc383(); virtual void vfunc384();
	virtual void vfunc385(); virtual void vfunc386(); virtual void vfunc387(); virtual void vfunc388(); virtual void vfunc389();
	virtual void vfunc390(); virtual void vfunc391(); virtual void vfunc392(); virtual void vfunc393(); virtual void vfunc394();
	virtual void vfunc395(); virtual void vfunc396(); virtual void vfunc397(); virtual void vfunc398(); virtual void vfunc399();
	virtual void vfunc400(); virtual void vfunc401(); virtual void vfunc402(); virtual void vfunc403(); virtual void vfunc404();
	virtual void vfunc405(); virtual void vfunc406(struct CGameTrace *pTrace, int bitsDamageType); virtual void vfunc407(); virtual void vfunc408(); virtual float vfunc409();
	virtual float vfunc410(); virtual float vfunc411(); virtual void vfunc412(int value);
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_1000a67d();	// as in CPhysForce (transplant)
	CBaseGrenade *sub_1042b2b0();	// as in CKeepUpright (transplant)
	void sub_1042ab80(CBaseEntity *pEnt);	// not in this class's vtable (the class is not known): unless pEnt is the entity behind the handle at +0x19b0, a grenade with flag bit 0 gets its velocity (+0x3bc) scaled by 0.95f (sub_100b2e30) with the bit-12 position refresh around it, any other calls slot 408

	void sub_1042a540();
	void sub_1042a750(CBaseEntity *pOther);	// "CBaseGrenade::BounceTouch"-like: damage the touched entity once a second while fast, warn the AI (InsertSound) when slow, friction on the ground else slot 408 (BounceSound), playback rate from the speed
	void sub_1042ae60();	// the grenade's think: removes it when sub_100a9510 refuses; else shows the effect (sub_101babc0) at the origin plus half a second of travel for the speed, thinks again 0.2 seconds later and, with the object at +0x3e0 set, hands it half the velocity (sub_100b2e30)
	bool sub_100a9510();	// stub 0x10013fde, asked by the think
	void sub_10429d00();

	int m_n03e0;	// 0x3e0: an object (pointer)
	char m_pad03e4[0x6f4 - 0x3e4];
	float m_flPlaybackRate6f4;	// 0x6f4: the animation rate BounceTouch sets from the speed
	char m_pad06f8[0x1564 - 0x6f8];
	float m_flNextAttack1564;	// 0x1564: BounceTouch's damage debounce time
	char m_pad1568[0x19b0 - 0x1568];
	unsigned int m_hHeld19b0;	// 0x19b0: handle of the entity the grenade is checked against (slot 407)
	char m_pad19b4;	// 0x19b4
	char m_b19b5;	// 0x19b5: cleared by the constructor
	char m_pad19b6[2];
	float m_f19b8;	// 0x19b8: 100.0f at construction
	int m_n19bc;	// 0x19bc: 0 at construction
	void sub_10326de0();	// 0x10326de0 (stub 0x100046c9): the CBaseCombatCharacter constructor body (the real base of the grenade, sets its vftable 0x1049e0dc and fields up to +0x19a8), called directly first by the constructor 0x1042b2b0
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual bool vfunc72(int);
    virtual int vfunc80();
    virtual int vfunc79();
	float m_flDamage;	// 0x19c0
	string_t m_iszBounceSound;	// 0x19c4
};
