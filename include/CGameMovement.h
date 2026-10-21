// CGameMovement (RTTI .?AVCGameMovement@@): player movement. Declared flat; only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CGameMovement
{
public:
	CGameMovement();	// stores the vftable, sets the hull / view vectors and caches a tuning float (0x10739d08 + 0x3c8) at +0xa8
	virtual CGameMovement *vfunc0(unsigned int flags);
	virtual void vfunc1(void *pMove, void *pPlayer);	// slot 1 "ProcessMovement": stores the arguments at +8 / +4, picks the frame time from the global at 0x109ef04c, runs slot 5 and sub_1011f6e0, and restores the global time step (+0x10 of 0x1070b228)
	virtual float *vfunc2(char flag, int unused);	// returns the sub-object at +0x2c when flag is set, else the one at +0x14
	virtual void slot3();
	virtual void slot4();
	virtual void vfunc5();
	virtual void slot6();
	virtual void slot7();
	virtual void slot8();
	virtual char vfunc9();	// slot 9 "CanAccelerate"
	virtual void vfunc10(Vector &wishdir, float wishspeed, float accel);	// slot 10 "Accelerate": when slot 9 allows, adds up to min(frametime * surface friction (+0xa0) * wishspeed * accel, wishspeed - velocity . wishdir) along wishdir to the velocity (the vector at +0x40 of the object at +4); nothing when the velocity already reaches wishspeed
	void sub_100102f3();	// as in CDataObjectAccessSystem (transplant)
	float *vfunc3(char flag, int unused);	// as in CGameMovement (transplant)
	float *vfunc4(char flag, int unused);	// as in CGameMovement (transplant)
	void vfunc16(void *pSurface, float volume, char bForce);	// slot 16 "PlayStepSound"-like: in multiplayer returns when slot 1 of the global at 0x109ef094 is set or its value (+0x28) is zero; unless bForce asks slot 15(pSurface, volume); alternates the flag at +0x1ee4 of the move data, picks the surface's short at +0x2c or +0x2e and plays that step sound (channel 4, level 75, pitch 95 + rand(0, 10)) at the player's origin

	void *m_pPlayer;	// 0x04
	void *m_pMove;	// 0x08
	int m_field0c;
	int m_field10;
	Vector m_vecHullMin;	// 0x14
	Vector m_vecHullMax;	// 0x20
	Vector m_vecDuckHullMin;	// 0x2c
	Vector m_vecDuckHullMax;	// 0x38
	Vector m_vecObsHullMin;	// 0x44
	Vector m_vecObsHullMax;	// 0x50
	Vector m_vecView;	// 0x5c
	Vector m_vecDuckView;	// 0x68
	char m_pad0074[0x98 - 0x74];
	int m_field98;
	char m_pad009c[4];
	float m_fieldA0;
	char m_pad00a4[4];
	float m_fieldA8;

	float sub_101282b0();	// movement speed scale: 0.8 * a tuning value chosen by the player's state at +0xc0 (0 for other states)
	void sub_10122590();	// plays a random "surfaces/wade/step*.wav" footstep sound at the player's origin (+0x70) with a clamped volume
	void sub_1011f6e0();	// copies the player's +0x24 to +0x28 and the move data's +0x3e0 / +0x3e4 to the player's +0xc8 / +0xcc
	void sub_10120f30();	// when the move data's +0x2314 is zero, subtracts 0.5 * frame time * (global 0x109ef2d4 value) * (move +0x3ec or 1) from the player's +0x48, then runs sub_10004ebc
	void sub_10004ebc();
};
