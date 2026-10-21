// CFuncPlat (RTTI .?AVCFuncPlat@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right (244 slots).
#pragma once

class CBaseEntity;

#define FP_V(n) virtual void vfunc##n();
#define FP_V10(p) FP_V(p##0) FP_V(p##1) FP_V(p##2) FP_V(p##3) FP_V(p##4) FP_V(p##5) FP_V(p##6) FP_V(p##7) FP_V(p##8) FP_V(p##9)

class CFuncPlat
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CFuncPlat *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	FP_V10(1) FP_V10(2) FP_V10(3) FP_V10(4) FP_V10(5) FP_V10(6) FP_V10(7) FP_V10(8) FP_V10(9)
	FP_V10(10) FP_V10(11) FP_V10(12) FP_V10(13) FP_V10(14) FP_V10(15) FP_V10(16)
	FP_V(170) FP_V(171) FP_V(172) FP_V(173) FP_V(174) FP_V(175) FP_V(176) FP_V(177)
	virtual void vfunc178(CBaseEntity *pOther);	// slot 178 "CFuncPlat::Blocked": DevMsg "%s Blocked by %s" (the class names of both edicts), damages pOther by 1 (CTakeDamageInfo built by sub_101c26d0), stops the sound named at +0x570 (sound system slot 7 with the entity index and channel 6), then calls slot 243 when the toggle state (+0x4f8) is 2 or slot 242 when it is 3
	FP_V(179)
	FP_V10(18) FP_V10(19) FP_V10(20) FP_V10(21) FP_V10(22) FP_V10(23)
	virtual void vfunc240(); virtual unsigned char vfunc241();
	virtual void vfunc242(); virtual void vfunc243();
	char m_pad[0x204 - 4];
	unsigned char m_spawnflags;
	char m_pad0205[0x2e0 - 0x205];
	void *m_pEdict;	// 0x2e0
	char m_pad02e4[0x3f4 - 0x2e4];
	float m_flLocalTime;	// 0x3f4
	char m_pad03f8[0x3fc - 0x3f8];
	float m_flMoveDoneTime;	// 0x3fc
	char m_pad0400[0x4f8 - 0x400];
	int m_nToggleState;	// 0x4f8
	char m_pad04fc[0x570 - 0x4fc];
	const char *m_pszStopSound;	// 0x570
};
