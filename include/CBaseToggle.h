// CBaseToggle: declared by pcdecomp transplant for 0x101c0e70 from CBaseCineCam (0x1006d950);
// only what matched code needs.
#pragma once

#include "CBaseEntity.h"
#include "Vector.h"

class CBaseToggle : public CBaseEntity
{
public:
	CBaseToggle();	// 0x101c0e20 (stub 0x1000d5ee)
	CBaseToggle *vfunc5(unsigned int flags);
	bool vfunc110(const char *szKeyName, const char *szValue);	// "CBaseToggle::KeyValue": lip (float at +0x504) and distance (float at +0x4fc), anything else to the base
	bool sub_1000fc86(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (jump stub)
	virtual void vfunc103();	// slot 103 "CBaseToggle::Spawn": move type 8, CBaseEntity::vfunc103, caches the origin (slot 220) at +0x450 and the angles (slot 221) at +0x468 / +0x474 (+ offset along the move axis), copies the state at +0x4a0 to +0x49c
	void sub_101c1bc0(int state);	// "CBaseToggle::SetToggleState": state 0 / 1 move the entity to position 1 / 2 (sub_101c1520 with the speed at +0x480), 2 / 3 turn it to angle 1 / 2 (sub_101c17e0 with the speed at +0x490); the state is stored at +0x494
	void sub_101c1520(Vector *pPosition, int speed);	// "CBaseToggle::LinearMove", stub 0x10008076, called directly
	void sub_101c17e0(Vector *pAngles, int speed);	// stub 0x1000dab2, called directly
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
	int m_nSpeed480;	// 0x480
	char m_pad0484[0x488 - 0x484];
	int m_nMoveAxis;	// 0x488
	float m_flMoveAmount;	// 0x48c
	int m_nSpeed490;	// 0x490
	int m_nToggleState;	// 0x494
	int m_i498;
	int m_i49c;
	int m_i4a0;
};
