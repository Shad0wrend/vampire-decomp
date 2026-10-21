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
	virtual float vfunc6(const QAngle &angles, const Vector &vec, float scale, float threshold);	// slot 6: sign(vec . right of angles) * scale, ramped by |dot| / threshold below the threshold
	virtual void slot7();
	virtual void slot8();
	virtual char vfunc9();	// slot 9 "CanAccelerate"
	virtual void vfunc10(Vector &wishdir, float wishspeed, float accel);	// slot 10 "Accelerate": when slot 9 allows, adds up to min(frametime * surface friction (+0xa0) * wishspeed * accel, wishspeed - velocity . wishdir) along wishdir to the velocity (the vector at +0x40 of the object at +0x4); nothing when the velocity already reaches wishspeed
	virtual void slot11();
	virtual void slot12();
	virtual void slot13();
	virtual void slot14();
	virtual void slot15();
	virtual void slot16();
	virtual void slot17();	// called by vfunc18 when bit 1 of the player's +0x24 is set
	virtual void vfunc18();	// slot 18: sub_101252e0, then slot 17 (bit 1 of the player's +0x24 set) or clears bit 1 of the player's +0x28; adds the move data's vector (+0x3b0) to the player's velocity (+0x40), runs slot 19(0, 0) and subtracts it again
	virtual void slot19(int a, int b);
	void sub_100102f3();	// as in CDataObjectAccessSystem (transplant)
	float *vfunc3(char flag, int unused);	// as in CGameMovement (transplant)
	float *vfunc4(char flag, int unused);	// as in CGameMovement (transplant)
	void vfunc16(void *pSurface, float volume, char bForce);	// slot 16 "PlayStepSound"-like: in multiplayer returns when slot 1 of the global at 0x109ef094 is set or its value (+0x28) is zero; unless bForce asks slot 15(pSurface, volume); alternates the flag at +0x1ee4 of the move data, picks the surface's short at +0x2c or +0x2e and plays that step sound (channel 4, level 75, pitch 95 + rand(0, 10)) at the player's origin
	void vfunc24();	// slot 24 (plain member): counts the three timers of the move data (+0x2328, +0x1ee0, +0x232c) down by frame time * 1000, each stopping at zero
	void sub_101252e0();	// stub 0x1000ee85, run first by vfunc18

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
	int m_nCachedContents;	// 0xac: the cached point contents (-9999 when none)
	Vector m_vecCachedPoint;	// 0xb0: the point the cached contents belong to

	float sub_101282b0();	// movement speed scale: 0.8 * a tuning value chosen by the player's state at +0xc0 (0 for other states)
	void sub_10122590();	// plays a random "surfaces/wade/step*.wav" footstep sound at the player's origin (+0x70) with a clamped volume
	void sub_1011f6e0();	// copies the player's +0x24 to +0x28 and the move data's +0x3e0 / +0x3e4 to the player's +0xc8 / +0xcc
	void sub_10120f30();	// when the move data's +0x2314 is zero, subtracts 0.5 * frame time * (global 0x109ef2d4 value) * (move +0x3ec or 1) from the player's +0x48, then runs sub_10004ebc
	void sub_1011fa80();	// like sub_10120f30 without the +0x2314 test: applies the 0.5 * frame time * gravity * scale term to the player's +0x48, then adds the player's +0x54 * frame time to +0x48, clears +0x54 and runs sub_10004ebc
	void sub_101256d0(void *pNewGround);	// "CGameMovement::SetGroundEntity": asks the move data (slot 209) for the old ground entity; going from none to pNewGround subtracts its base velocity (+0x3bc) from the player's velocity (+0x40), going from one to none adds it back (an entity with bit 12 of its flags (+0x268) set is first refreshed by sub_100b1d10); then slot 208(pNewGround)
	void sub_10004ebc();
	int sub_10124120(Vector &in, Vector &normal, Vector &out, float overbounce);	// "CGameMovement::ClipVelocity": blocked flags (1 for a floor normal with z > 0, 2 for a step normal with z == 0); out = in - normal * (in . normal * overbounce), components within +-0.1 are zeroed
	void sub_1011ffe0();	// "CGameMovement::WaterJump": the water jump time at +0x2314 of the object at +8 is capped at 10000, counted down by frame time * 1000 and ends (cleared, flag 4 removed) when it runs out or the object at +8 has no value at +0x3e0; while it runs the velocity x / y (+0x40 / +0x44 of the object at +4) are set from the object at +8 (+0x2318 / +0x231c)
	int sub_10125200(const Vector &point);	// "CGameMovement::GetPointContentsCached": with the global movement optimisation flag at 0x10572420 set, asks the engine trace object (global 0x1070b254, slot 0) for the contents of the point only when nothing is cached or the point moved more than 1 unit from the cached one, and returns the cached value; without the flag always asks
	void sub_10121000(Vector &wishdir, float wishspeed, float accel);	// "CGameMovement::AirAccelerate": unless the object at +8 is dead (+0x2068) or in a water jump (+0x2314), adds up to min(frametime * surface friction (+0xa0) * wishspeed * accel, min(wishspeed, 30.0f) - velocity . wishdir) along wishdir to the velocity (+0x40 of the object at +4) and to the wish velocity (+0x80)
};
