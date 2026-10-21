// CTriggerWind: trigger_wind entity (CTriggerMultiple). Declared flat (bases not recovered); only what the matched
// functions need. The virtual table is modelled as placeholder slots up to slot 221.
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
	CTW_V10(13) CTW_V10(14) CTW_V10(15) CTW_V10(16) CTW_V10(17) CTW_V10(18) CTW_V10(19)
	CTW_V10(20) CTW_V10(21)
	CTW_V(220)
	virtual float *vfunc221();	// "GetAngles"

	void sub_100b3b00();	// CBaseEntity::sub_100b3b00, called directly
	void sub_101c6860();	// CTriggerMultiple::vfunc103, called directly (stub 0x100048ef)
	int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	int sub_101c4f40();	// CBaseTrigger::vfunc124 (stub 0x100104e2), called directly

	char m_pad0004[0x5b0 - 4];
	int m_n05b0;	// 0x5b0
	char m_pad05b4[4];
	int m_n05b8;	// 0x5b8
	char m_pad05bc[4];
	int m_n05c0;	// 0x5c0
	char m_pad05c4[4];
	int m_n05c8;	// 0x5c8
	char m_pad05cc[0x5d8 - 0x5cc];
	char m_b05d8;	// 0x5d8
	char m_pad05d9[3];
	int m_n05dc;	// 0x5dc
	float m_vec05e0[3];	// 0x5e0
};
