// CMomentaryRotButton: momentary rotating button entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "COutputEvent.h"
#include "COutputFloat.h"
#include "Vector.h"

class CMomentaryRotButton
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CMomentaryRotButton *vfunc5(unsigned int flags);	// scalar deleting destructor

	void vfunc173(int a, int b, int c, int d);	// slot 173 "Use" (plain member, the four stack arguments are not read): the first use flips the sign of the rotation direction at +0x5d8 and fires the output at +0x574 with the entity of the handle at +0x53c; then marks the button as used (+0x5d4), starts the movement from the angles (slot 221) and sets the think function
	float sub_100ca630(float *pAngles);	// stub 0x10005b3c: the angle the button is turned to for the given angles, as a 0..1 fraction (the axis delta of the angles to the start angles at +0x5e0, signed by the movement direction at +0x190, over the range at +0x4fc)
	void sub_100cacb0(float flAngle, bool bFlag);	// stub 0x1000be60: starts the movement to the angle: stamps the local time + 0.1 at +0x3fc; a forward movement (+0x5d8 > 0) that reached 1.0, or a backward one (< 0) that reached 0, stops the angular velocity, sets the angles from the end (+0x5ec) / start (+0x5e0) record and fires the output (+0x5bc / +0x5a4); else sets the angular velocity along the movement direction at the speed (+0x164) times the direction and thinks sub_100cae90
	void sub_100cae90();	// the movement finished: stops the angular velocity, reports the final position (sub_100cae20 with the fraction of the current angles), fires the output at +0x58c for the entity of the handle at +0x53c, clears the used flag (+0x5d4) and, for a button with spawn flag 0x10 and a positive return delay (+0x5dc), arms the return think (sub_100cafb0 after the local time + a constant, direction +0x5d8 = -1), else clears the think
	void sub_100cae20(float flValue, void *pActivator);	// stub 0x100140e7: when the value differs from the one at +0x55c, stores it there and fires that output for the activator
	void sub_100cafb0();	// the return think (stub 0x1001028f): once the button is back at its start angles (fraction not above zero) stops the angular velocity, restores the start angles (+0x5e0, slot 64), reports 0 and clears the thinks; else keeps it turning back at -the return speed (+0x5dc) along the movement direction and thinks again
	void sub_100cb110();	// slot 221 (the absolute angles) through the fraction of sub_100ca630, then sub_100cae20(fraction, 0) and the next think time at +0x17c from the global at 0x1070b228 (+0xc)
	void sub_100caa40();	// the think of a button that is being driven to the target fraction at +0x5fc: while it has not reached it (fraction >= target going forward, <= target going back) reports the fraction (sub_100cae20) and re-arms the think after +0x604; once reached: stops the angular velocity, sets the angles to start + direction * range * target (slot 64), clears the next think (+0x17c / +0x3fc), reports the target and runs sub_100ca9d0()
	void sub_100ca9d0();	// stub 0x100117de, run when the target has been reached
	void sub_100b2f50(const float *pVec);	// CBaseEntity::sub_100b2f50 (stub 0x10006a5f), called directly: the angular velocity setter

	char m_pad0004[0x114 - 4];
	void (CMomentaryRotButton::*m_pfnThink114)();	// 0x114
	char m_pad0118[0x164 - 0x118];
	float m_flSpeed164;	// 0x164: the rotation speed
	char m_pad0168[0x17c - 0x168];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x190 - 0x180];
	float m_vecMoveDir[3];	// 0x190: the movement direction (set by SetMovedir)
	char m_pad019c[0x204 - 0x19c];
	unsigned int m_nSpawnFlags204;	// 0x204: bits 6 / 7 pick the rotation axis
	char m_pad0208[0x3f4 - 0x208];
	float m_flLocalTime3f4;	// 0x3f4
	char m_pad03f8[0x3fc - 0x3f8];
	float m_flTime3fc;	// 0x3fc
	char m_pad0400[0x4fc - 0x400];
	float m_flRange4fc;	// 0x4fc
	char m_pad0500[0x53c - 0x500];
	unsigned int m_hEntity53c;	// 0x53c: entity handle (the output's activator)
	char m_pad0540[0x55c - 0x540];
	COutputFloat m_Position55c;	// 0x55c: the current position fraction
	COutputEvent m_Output574;	// 0x574
	COutputEvent m_Output58c;	// 0x58c
	COutputEvent m_Output5a4;	// 0x5a4: fired when the button reaches its start
	COutputEvent m_Output5bc;	// 0x5bc: fired when the button reaches its end
	int m_nUsed5d4;	// 0x5d4
	int m_nDirection5d8;	// 0x5d8
	float m_flReturnDelay5dc;	// 0x5dc
	Vector m_vecStart5e0;	// 0x5e0: the start angles
	Vector m_vecEnd5ec;	// 0x5ec: the end angles
	char m_pad05f8[0x5fc - 0x5f8];
	float m_flTarget5fc;	// 0x5fc: the target fraction
public:
	virtual int vfunc82();
};
