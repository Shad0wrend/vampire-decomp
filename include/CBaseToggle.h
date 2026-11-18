// CBaseToggle: declared by pcdecomp transplant for 0x101c0e70 from CBaseCineCam (0x1006d950);
// only what matched code needs.
#pragma once

#include "CBaseEntity.h"
#include "Vector.h"

class CBaseToggle : public CBaseEntity
{
public:
	CBaseToggle();	// 0x101c0e20 (stub 0x1000d5ee)
	virtual CBaseEntity *vfunc5(unsigned int flags);
	bool vfunc110(const char *szKeyName, const char *szValue);	// "CBaseToggle::KeyValue": lip (float at +0x504) and distance (float at +0x4fc), anything else to the base
	bool sub_1000fc86(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (jump stub)
	virtual void vfunc31(int pDump);	// slot 31 \"CBaseToggle::Dump\": the toggle state, distance, wait, lip, the two positions and angles, height, activator, final destination / angle and movement type, then CBaseEntity::vfunc31 (stub 0x10012161)
	void sub_101c1cb0();	// slot 103 "CBaseToggle::Spawn": move type 8, CBaseEntity::vfunc103, caches the origin (slot 220) at +0x450 and the angles (slot 221) at +0x468 / +0x474 (+ offset along the move axis), copies the state at +0x4a0 to +0x49c; not virtual: no game vtable holds it (CBaseToggle's slot 103 is CBaseEntity's 0x100aae50); called directly (stub 0x1000748c)
	virtual bool vfunc108(const char *key, float x, float y, float z);	// slot 108 (0x1004fbb0, in the vtable of every class built on it): passes its four dwords on to CBaseEntity::vfunc108 (stub 0x1001216b); the last three are the vector given by value
	void sub_101c1bc0(int state);	// "CBaseToggle::SetToggleState": state 0 / 1 move the entity to position 1 / 2 (sub_101c1520 with the speed at +0x480), 2 / 3 turn it to angle 1 / 2 (sub_101c17e0 with the speed at +0x490); the state is stored at +0x494
	void sub_101c1dc0(int a, int b, int c, int d);	// four unused stack arguments (a use-style input): with the mode at +0x49c 1 it flips the state at +0x498 between 0 and 1, with 2 between 2 and 3 (sub_101c1bc0)
	void sub_101c1520(Vector *pPosition, float flSpeed);	// "CBaseToggle::LinearMove", stub 0x10008076, called directly
	void sub_101c17e0(Vector *pAngles, int speed);	// stub 0x1000dab2, called directly
	void vfunc133();	// slot 133: ends the running move (linear / angular by the state at +0x558), then calls the think function at +0x114
	float vfunc152();	// slot 152: the toggle wait time (float at +0x500)
	float vfunc135(float flTime);	// slot 135 (0x101c10d0): the eased velocity step of a linear/angular toggle move (returns flTime in ST0). Reads the floats at +0x3f4 / +0x3fc / +0x4d4 / +0x4dc, the velocity vectors +0x4e0..+0x4e8 and +0x4ec..+0x4f4 and the offset vectors +0x540..+0x548 / +0x54c..+0x554 - all with raw casts (do NOT add them as members: the CBaseToggle subclasses add their data after +0x4a4 and would shift). Calls CBaseEntity::sub_100b2e30(slot220 origin) and CBaseEntity::sub_100b2f50(slot221 angles) with the computed velocity vectors.
	void sub_10013728(Vector *pVelocity);	// stub 0x10013728: sets the local velocity

	char m_pad03e0[0x3f4 - sizeof(CBaseEntity)];
	float m_flLocalTime3f4;	// 0x3f4
	char m_pad03f8[0x3fc - 0x3f8];
	float m_flNextThink3fc;	// 0x3fc
	char m_pad0400[0x450 - 0x400];
	Vector m_vecPosition1;	// 0x450
	Vector m_vecPosition2;	// 0x45c
	Vector m_vecAngle1;	// 0x468
	Vector m_vecAngle2;	// 0x474
	float m_nSpeed480;	// 0x480
	char m_pad0484[0x488 - 0x484];
	int m_nMoveAxis;	// 0x488
	float m_flMoveAmount;	// 0x48c
	int m_nSpeed490;	// 0x490
	int m_nToggleState;	// 0x494
	int m_i498;
	int m_i49c;
	int m_i4a0;
public:
    virtual datamap_t * vfunc82();
    virtual bool vfunc109(const char *, float);
};
