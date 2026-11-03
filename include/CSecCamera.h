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
	virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	CSC_V10(s14) CSC_V10(s15) CSC_V10(s16) CSC_V10(s17) CSC_V10(s18)
	virtual void s190(); virtual void s191();
	virtual Vector vfunc192();
	virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	CSC_V10(s20) virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual float *vfunc217();
	virtual void s218(); virtual float *s219(); virtual void s220();
	virtual float *vfunc221();

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
	char m_pad07d4[0x7d8 - 0x7d4];
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
