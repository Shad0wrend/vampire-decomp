// CTriggerWind: trigger_wind entity (CTriggerMultiple). Declared flat (bases not recovered); only what the matched
// functions need. The virtual table is modelled as placeholder slots up to slot 240.
#pragma once

#define CTW_V(n) virtual void vfunc##n();
#define CTW_V10(p) CTW_V(p##0) CTW_V(p##1) CTW_V(p##2) CTW_V(p##3) CTW_V(p##4) CTW_V(p##5) CTW_V(p##6) CTW_V(p##7) CTW_V(p##8) CTW_V(p##9)

class CTriggerWind
{
public:
	// slots 0..102
	CTW_V(0) CTW_V(1) CTW_V(2) CTW_V(3) CTW_V(4) CTW_V(5) CTW_V(6) CTW_V(7) CTW_V(8) CTW_V(9)
	CTW_V10(1) CTW_V10(2) CTW_V10(3) CTW_V10(4) CTW_V10(5) CTW_V10(6) CTW_V10(7) CTW_V10(8) CTW_V10(9)
	CTW_V(100) CTW_V(101) CTW_V(102)
	virtual void vfunc103();	// slot 103 "CTriggerWind::Spawn": remembers the wind (engine slot 39 of the angles at +0x5e0), the yaw of GetAngles() as an int at +0x5c0, then the base spawn, copies +0x5b0 to +0x5b8 and +0x5c0 to +0x5c8, sets a think function and the next think time to the current time
	CTW_V(104) CTW_V(105) CTW_V(106) CTW_V(107) CTW_V(108) CTW_V(109)
	CTW_V10(11)
	CTW_V(120) CTW_V(121) CTW_V(122) CTW_V(123)
	virtual int vfunc124();	// slot 124 "CTriggerWind::DrawDebugTextOverlays": the base overlays (sub_101c4f40), then with the text bit (bit 0 of the debug overlays at +0x224) "Dir: %i (%i)" and "Speed: %i (%i)" lines; returns the next line
	CTW_V(125) CTW_V(126) CTW_V(127) CTW_V(128) CTW_V(129)
	CTW_V10(13) CTW_V10(14) CTW_V10(15) CTW_V10(16)
	CTW_V(170) CTW_V(171) CTW_V(172) CTW_V(173)
	virtual void vfunc174(CBaseEntity *pOther);	// slot 174 "StartTouch": hands the touching entity's physics object (+0x36c) to the wind object at +0x5dc (slot 2) and wakes it (its slot 2), when it is a movable physics entity (slot 94 is 7, no object at +0xa8)
	CTW_V(175)
	virtual void vfunc176(CBaseEntity *pOther);	// slot 176 \"EndTouch\": hands the touching entity's physics object (+0x36c) to the wind object at +0x5dc (slot 3) when it is a movable physics entity (slot 94 is 7, no object at +0xa8)
	CTW_V(177) CTW_V(178) CTW_V(179)
	CTW_V10(18) CTW_V10(19)
	CTW_V10(20) CTW_V10(21)
	CTW_V(220)
	virtual float *vfunc221();	// "GetAngles"
	CTW_V(222) CTW_V(223) CTW_V(224) CTW_V(225) CTW_V(226) CTW_V(227) CTW_V(228) CTW_V(229)
	CTW_V10(23)
	CTW_V(240)
	virtual void vfunc241(int a);	// slot 241: the base slot 241 (CBaseTrigger::vfunc241, stub 0x10012206), then the next think time (+0x17c) is curtime + 0.1

	void sub_100b3b00();	// CBaseEntity::sub_100b3b00, called directly
	void sub_101c6860();	// CTriggerMultiple::vfunc103, called directly (stub 0x100048ef)
	int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	int sub_101c4f40();	// CBaseTrigger::vfunc124 (stub 0x100104e2), called directly
	void sub_10012206(int a);	// CBaseTrigger::vfunc241 (stub 0x10012206), called directly

	char m_pad0004[0x5b0 - 4];
	int m_n05b0;	// 0x5b0
	int m_nSpeedNoise;	// 0x05b4
	int m_n05b8;	// 0x5b8
	int m_nSpeedTarget;	// 0x05bc
	int m_n05c0;	// 0x5c0
	int m_nDirNoise;	// 0x05c4
	int m_n05c8;	// 0x5c8
	int m_nDirTarget;	// 0x05cc
	int m_nHoldBase;	// 0x05d0
	int m_nHoldNoise;	// 0x05d4
	char m_b05d8;	// 0x5d8
	char m_pad05d9[3];
	int m_n05dc;	// 0x5dc
	float m_vec05e0[3];	// 0x5e0
};
