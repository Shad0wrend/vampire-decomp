// CFuncPlat (RTTI .?AVCFuncPlat@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right (244 slots).
#pragma once

#include "Vector.h"

class CBaseEntity;
struct datamap_t;

#define FP_V(n) virtual void vfunc##n();
#define FP_V10(p) FP_V(p##0) FP_V(p##1) FP_V(p##2) FP_V(p##3) FP_V(p##4) FP_V(p##5) FP_V(p##6) FP_V(p##7) FP_V(p##8) FP_V(p##9)

class CFuncPlat
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CFuncPlat *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	FP_V10(1) FP_V10(2) FP_V10(3) FP_V10(4) FP_V10(5)
	FP_V(60) FP_V(61) FP_V(62) FP_V(63) virtual void vfunc64(const void *p); FP_V(65) FP_V(66) FP_V(67) FP_V(68) FP_V(69)
	FP_V10(7) FP_V(80) FP_V(81) virtual datamap_t *vfunc82();	/* slot 82: the class's datamap, the address g_10580538 */ FP_V(83) FP_V(84) FP_V(85) FP_V(86) FP_V(87) FP_V(88) FP_V(89) FP_V10(9)
	FP_V10(10) virtual bool vfunc110(const char *pszKey, const char *pszValue);	// slot 110 \"KeyValue\": \"rotation\" sets the float at +0x54c, else CBaseToggle::vfunc110
	FP_V(111) FP_V(112) FP_V(113) FP_V(114) FP_V(115) FP_V(116) FP_V(117) FP_V(118) FP_V(119)
	FP_V(120) FP_V(121) FP_V(122) FP_V(123) FP_V(124) FP_V(125) FP_V(126) FP_V(127) virtual char vfunc128(); FP_V(129)
	FP_V10(13) FP_V10(14) FP_V10(15) FP_V10(16)
	FP_V(170) FP_V(171) FP_V(172) FP_V(173) FP_V(174) FP_V(175) FP_V(176) FP_V(177)
	virtual void vfunc178(CBaseEntity *pOther);	// slot 178 "CFuncPlat::Blocked": DevMsg "%s Blocked by %s" (the class names of both edicts), damages pOther by 1 (CTakeDamageInfo built by sub_101c26d0), stops the sound named at +0x570 (sound system slot 7 with the entity index and channel 6), then calls slot 243 when the toggle state (+0x4f8) is 2 or slot 242 when it is 3
	FP_V(179)
	FP_V10(18) FP_V10(19) FP_V10(20) FP_V10(21)
	FP_V(220) virtual float *vfunc221();	// slot 221 "GetAngles": the entity's angles (+0x428)
	FP_V(222) FP_V(223) FP_V(224) FP_V(225) FP_V(226) FP_V(227) FP_V(228) FP_V(229)
	FP_V10(23)
	virtual void vfunc240(); virtual unsigned char vfunc241();
	virtual void vfunc242(); virtual void vfunc243();	// 242: starts the sound named at +0x55c (if any) and moves to position 1 (state 2); 243: the same toward position 2 (state 3)
	FP_V(244)
	virtual void vfunc245();	// "HitBottom"-like: stops the sound at +0x55c, plays the one at +0x560 (channel 1) and sets the toggle state (+0x4f8) to 1

	void sub_1015a3c0(const Vector &vecDestAngles, float flTime);	// "AngularMove"-like (called by slots 242 / 243 of the rotating platform): the angular velocity that turns the angles to vecDestAngles in flTime seconds (the plain difference with a move-done time one second ahead when flTime is below 0.1)
	bool sub_10007428(const char *pszKey, const char *pszValue);	// CBaseToggle::vfunc110 (stub 0x10007428), called directly
	void sub_100b2f50(const Vector &vecAngVelocity);	// CBaseEntity::SetLocalAngularVelocity (stub 0x10006a5f), called directly

	char m_pad[0x114 - 4];
	void *m_pfnThink;	// 0x114
	char m_pad0118[0x164 - 0x118];
	float m_flSpeed164;	// 0x164
	char m_pad0168[0x204 - 0x168];
	unsigned char m_spawnflags;
	char m_pad0205[0x2e0 - 0x205];
	void *m_pEdict;	// 0x2e0
	char m_pad02e4[0x3f4 - 0x2e4];
	float m_flLocalTime;	// 0x3f4
	char m_pad03f8[0x3fc - 0x3f8];
	float m_flMoveDoneTime;	// 0x3fc
	char m_pad0400[0x4f8 - 0x400];
	int m_nToggleState;	// 0x4f8
	char m_pad04fc[0x508 - 0x4fc];
	Vector m_vecPosition508;	// 0x508
	Vector m_vecPosition514;	// 0x514
	char m_pad0520[0x54c - 0x520];
	float m_flRotation;	// 0x54c
	char m_pad0550[0x55c - 0x550];
	const char *m_pszStartSound;	// 0x55c
	const char *m_pszArriveSound;	// 0x560
	float m_flVolume;	// 0x564
	char m_pad0568[0x570 - 0x568];
	const char *m_pszStopSound;	// 0x570
};
