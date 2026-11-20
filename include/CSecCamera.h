// CSecCamera: declared by pcdecomp transplant for 0x1020b370 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"
#include "CBaseEntity.h"
#include "COutputEvent.h"

class CSecCamera : public CBaseEntity
{
public:
	CSecCamera *sub_1020bf00();
	virtual void vfunc103();
	virtual void vfunc104();
	void sub_1000978c();
	void sub_1020c890();
	void sub_1020c9a0(const char *pszSound);
	void sub_1020c3d0();
	void sub_1020c4f0(int nState);
	bool sub_1020cc60(CBaseEntity *pTarget);
	char sub_1020cd30();
	void sub_1020c2a0();
	void sub_1020cbf0(const char *pszSequence);
	int sub_1008f7b0(const char *pszSequence);
	void sub_10090950();
	void sub_100963d0();
	void vfunc113();
	void vfunc133();
	void sub_10007725();

	// Placeholder slots 134..191, then the slots the camera's code calls (192 WorldSpaceCenter, 217 GetAbsOrigin, 221 GetAngles).
#define CSC_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
	virtual void vfunc134(); virtual float vfunc135(float); virtual bool vfunc136(); virtual int vfunc137(); virtual int vfunc138(); virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *); virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *); virtual int vfunc142(struct CTakeDamageInfo *); virtual int vfunc143(float, int); virtual void vfunc144(void *);  	virtual int vfunc145(); virtual void vfunc146(void *, const Vector &, void *); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148(); virtual void vfunc149(int, int); virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152(); virtual int vfunc153(); virtual int vfunc154(int, int);  	virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char); virtual void vfunc156(int); virtual bool vfunc157(int); virtual bool vfunc158(); virtual void vfunc159(); virtual bool vfunc160(const char *); virtual bool vfunc161(const char *); virtual char vfunc162(); virtual void vfunc163(); virtual bool vfunc164();  	virtual void vfunc165(void *); virtual bool vfunc166(CBaseEntity *); virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168(); virtual void vfunc169(const Vector *); virtual void vfunc170(const Vector *); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int); virtual void vfunc174(CBaseEntity *);  	virtual void vfunc175(CBaseEntity *); virtual void vfunc176(CBaseEntity *); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *); virtual void vfunc179(); virtual void vfunc180(); virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();  	virtual void vfunc185(struct CFireBulletsInfo *); virtual void vfunc186(); virtual CBaseEntity *vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual float vfunc190(); virtual void vfunc191(int);
	virtual Vector vfunc192();
	virtual Vector vfunc193(); virtual float *vfunc194(); virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198(); virtual void vfunc199(float *, float *);
	virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int); virtual void vfunc202(CBaseEntity *); virtual float vfunc203(); virtual float vfunc204();  	virtual void vfunc205(); virtual void vfunc206(); virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *); virtual CBaseEntity *vfunc209(); virtual void vfunc210(); virtual unsigned int vfunc211(); virtual void vfunc212(string_t); virtual void vfunc213(const float *); virtual float *vfunc214(); virtual Vector *vfunc215(); virtual void vfunc216(const Vector &);
	virtual float *vfunc217();
	virtual void vfunc218(const float *); virtual float *vfunc219(); virtual float *vfunc220();
	virtual float *vfunc221();
	virtual int vfunc222(int);

	char m_pad03e0[0x670 - 0x3e0];
	int m_n670;	// 0x670
	char m_pad0674[0x6f0 - 0x674];
	int m_nSequence6f0;	// 0x6f0: the current sequence
	char m_pad06f4[0x77c - 0x6f4];
	char m_b77c;	// 0x77c
	char m_pad77d[0x780 - 0x77d];
	float m_flF780;	// 0x780: divisor of the sweep length
	float m_fPauseTime;	// 0x0784
	float m_flF788;	// 0x788: the sweep distance (truncated, made positive)
	float m_flF78c;	// 0x78c: m_flF788 as a fraction of m_flF780
	float m_fBlindDist;	// 0x0790
	float m_fVisRange;	// 0x0794
	float m_flF798;	// 0x798: the swing angle in degrees (becomes its cosine at Spawn)
	int m_nState79c;	// 0x79c
	float m_flNextStateTime7a0;	// 0x7a0
	float m_nLookTimer;	// 0x07a4
	Vector m_vecStart7a8;	// 0x7a8: the angles at Spawn
	Vector m_vecEnd7b4;	// 0x7b4: those angles plus the sweep along the movedir
	float m_fZoomTime;	// 0x07c0
	const char *m_sPanSnd;	// 0x07c4
	const char *m_sZoomInSnd;	// 0x07c8
	const char *m_sZoomOutSnd;	// 0x07cc
	const char *m_sAlarmSnd;	// 0x07d0
	const char *m_pszSound7d4;	// 0x7d4: the sound playing now
	bool m_bPlayerSpotted;	// 0x07d8
	char m_pad07d9[0x7dc - 0x7d9];
	COutputEvent m_Output7dc;	// 0x7dc
	COutputEvent m_Output7f4;	// 0x7f4
	COutputEvent m_Output80c;	// 0x80c
public:
    virtual datamap_t * vfunc82();
    void vfunc266(const float *pVelocity);	// as in CWeaponPhysCannon (transplant)
    void sub_10015208(const float *pVelocity);	// as in CWeaponPhysCannon (transplant)
};
