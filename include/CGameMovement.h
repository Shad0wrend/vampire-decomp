// CGameMovement (RTTI .?AVCGameMovement@@): player movement. Declared flat; only the vtable head is modelled.
#pragma once
#include "QAngle.h"

#include "Vector.h"
#include "CGameTrace.h"

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
	virtual void vfunc8();	// slot 8 "AirMove": wish direction from the player's view angles (forward / right flattened, normalised) and the forward / side move, clamped to the max speed, sub_10121000 (AirAccelerate) with the convar at 0x109ef360, then the move data's vector (+0x3b0) is added to the velocity (+0x40) and slot 19(0, 0) runs
	virtual char vfunc9();	// slot 9 "CanAccelerate"
	virtual void vfunc10(Vector &wishdir, float wishspeed, float accel);	// slot 10 "Accelerate": when slot 9 allows, adds up to min(frametime * surface friction (+0xa0) * wishspeed * accel, wishspeed - velocity . wishdir) along wishdir to the velocity (the vector at +0x40 of the object at +0x4); nothing when the velocity already reaches wishspeed
	virtual void slot11();
	virtual void slot12();
	virtual void vfunc13(int);
	virtual int vfunc14(int type);	// slot 14: maps type 0 to 0x14, 1 to 0x1a, 2 to 0xd and any other to 1
	virtual char vfunc15(void *pSurface, float volume);	// slot 15: in multiplayer with m_field10 clear, true only when the player's horizontal speed is above 195.0f
	virtual void slot16();
	virtual void slot17();	// called by vfunc18 when bit 1 of the player's +0x24 is set
	virtual void vfunc18();	// slot 18: sub_101252e0, then slot 17 (bit 1 of the player's +0x24 set) or clears bit 1 of the player's +0x28; adds the move data's vector (+0x3b0) to the player's velocity (+0x40), runs slot 19(0, 0) and subtracts it again
	virtual void slot19(int a, int b);
	virtual char vfunc20(); virtual char vfunc21(void *pTrace);	// slot 21: true when the trace's flags (+0x30) have 0x20000000, else when the surface property record (global 0x1071a278 slot 9, then slot 5 with the short at +0x40) has its byte at +0x72 set
	virtual void slot22();
	virtual float vfunc23();
	virtual void slot24();
	virtual void vfunc25();	// slot 25: once (flag byte +0xdc), when the flags of the move data (+8) have bit 1, scales the three floats at +0x2c of the player (+4) by a third
	void sub_100102f3();	// as in CDataObjectAccessSystem (transplant)
	float *vfunc3(char flag, int unused);	// as in CGameMovement (transplant)
	float *vfunc4(char flag, int unused);	// as in CGameMovement (transplant)
	void vfunc16(void *pSurface, float volume, char bForce);	// slot 16 "PlayStepSound"-like: in multiplayer returns when slot 1 of the global at 0x109ef094 is set or its value (+0x28) is zero; unless bForce asks slot 15(pSurface, volume); alternates the flag at +0x1ee4 of the move data, picks the surface's short at +0x2c or +0x2e and plays that step sound (channel 4, level 75, pitch 95 + rand(0, 10)) at the player's origin
	void vfunc24();	// slot 24 (plain member): counts the three timers of the move data (+0x2328, +0x1ee0, +0x232c) down by frame time * 1000, each stopping at zero
	bool sub_101252e0();	// stub 0x1000ee85, run first by vfunc18; the movement code's SetWaterLevel: returns (m_pMove->water level at +0x3e0 > 1)

	void sub_10122190();	// 0x10122190: helper called by vfunc5 (no arguments); wish/acceleration from the player's view angles and velocity
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
	float sub_1011ef20();	// the constraint speed factor: 1.0f unless the origin lies outside the inner constraint sphere and the wish velocity points away from its center
	void sub_1011f140();	// "CGameMovement::CheckVelocity" (this in ecx, no args): skipped for move types 2 / 9; clamps the player's move speed (m_flMaxSpeed +0x38, client max +0x3c), scales the forward / side / up moves (+0x2c/+0x30/+0x34) by speed/|move| when they exceed it, applies the surface factor; the view-punch block (m_fFlags24 & 0x20000, not bit 2, once per m_bDc +0xdc) saves +0x58/+0x5c/+0x60, calls slot 6(QAngle, Vector +0x40, two tuning floats) and scales the moves; zeroes the moves for flags 0x20 / 8 or when the moved entity is dead; then the view offset: restores the saved vector, else (* (this+8))->slot94 checks 2/9 and slot 6 builds the eye offset with the global objects 0x109eee54 / 0x109ef31c, and the pitch at +0x5c is corrected by -360.0f when above 180.0f
	Vector m_vecView;	// 0x5c
	Vector m_vecDuckView;	// 0x68
	Vector m_vecForward;	// 0x74
	Vector m_vecRight;	// 0x80
	Vector m_vecUp;	// 0x8c
	int m_field98;
	void *m_pSurface9c;	// 0x9c: the surface-props record (slot 5 of 0x1071a278)
	float m_fieldA0;	// 0xa0: the surface friction sub_1011e560 stores (scaled by 1.25, clamped to 1.0)
	unsigned char m_bA4;	// 0xa4: byte +0x70 of the surface record
	char m_pad00a5[3];
	float m_fieldA8;
	int m_nCachedContents;	// 0xac: the cached point contents (-9999 when none)
	Vector m_vecCachedPoint;	// 0xb0: the point the cached contents belong to
	char m_pad00bc[0xdc - 0xbc];
	char m_bDc;	// 0xdc: set once the +0x2c vector was scaled down

	float sub_10128270();	// compares the float at the player's +0xb4 with the global time (+0xc of 0x1070b228) minus the player's +0xb8, returns one of two constants (0x104454c0 / 0x104454c4)
	float sub_101282b0();	// movement speed scale: 0.8 * a tuning value chosen by the player's state at +0xc0 (0 for other states)
	void sub_10122590();	// plays a random "surfaces/wade/step*.wav" footstep sound at the player's origin (+0x70) with a clamped volume
	void sub_1011f6e0();	// copies the player's +0x24 to +0x28 and the move data's +0x3e0 / +0x3e4 to the player's +0xc8 / +0xcc
	void sub_10120f30();	// when the move data's +0x2314 is zero, subtracts 0.5 * frame time * (global 0x109ef2d4 value) * (move +0x3ec or 1) from the player's +0x48, then runs sub_10004ebc
	void sub_1011fa80();	// like sub_10120f30 without the +0x2314 test: applies the 0.5 * frame time * gravity * scale term to the player's +0x48, then adds the player's +0x54 * frame time to +0x48, clears +0x54 and runs sub_10004ebc
	void sub_10123e20();	// when the move data's +0x2314 is zero: subtracts frame time * gravity * (move +0x3ec or 1) from the player's +0x48, adds the move data's +0x3b8 * frame time, clears the z of the move data's vector at +0x3b0, then runs sub_10004ebc
	void sub_10126e20(float flDuckFraction);	// "CGameMovement::SetDuckedEyeOffset": the view offset (move data +0x184) with z = (duck view z - (duck mins z - stand mins z)) * flDuckFraction + stand view z * (1 - flDuckFraction), handed to the move data's sub_1009f380 (slot 2 gives the hull mins, slot 4 the view offsets, 1 = ducked)
	void sub_101256d0(void *pNewGround);	// "CGameMovement::SetGroundEntity": asks the move data (slot 209) for the old ground entity; going from none to pNewGround subtracts its base velocity (+0x3bc) from the player's velocity (+0x40), going from one to none adds it back (an entity with bit 12 of its flags (+0x268) set is first refreshed by sub_100b1d10); then slot 208(pNewGround)
	void sub_10004ebc();
	int sub_10124120(Vector &in, Vector &normal, Vector &out, float overbounce);	// "CGameMovement::ClipVelocity": blocked flags (1 for a floor normal with z > 0, 2 for a step normal with z == 0); out = in - normal * (in . normal * overbounce), components within +-0.1 are zeroed
	void sub_1011ffe0();	// "CGameMovement::WaterJump": the water jump time at +0x2314 of the object at +8 is capped at 10000, counted down by frame time * 1000 and ends (cleared, flag 4 removed) when it runs out or the object at +8 has no value at +0x3e0; while it runs the velocity x / y (+0x40 / +0x44 of the object at +4) are set from the object at +8 (+0x2318 / +0x231c)
	int sub_10125200(const Vector &point);	// "CGameMovement::GetPointContentsCached": with the global movement optimisation flag at 0x10572420 set, asks the engine trace object (global 0x1070b254, slot 0) for the contents of the point only when nothing is cached or the point moved more than 1 unit from the cached one, and returns the cached value; without the flag always asks
	void sub_10121000(Vector &wishdir, float wishspeed, float accel);	// "CGameMovement::AirAccelerate": unless the object at +8 is dead (+0x2068) or in a water jump (+0x2314), adds up to min(frametime * surface friction (+0xa0) * wishspeed * accel, min(wishspeed, 30.0f) - velocity . wishdir) along wishdir to the velocity (+0x40 of the object at +4) and to the wish velocity (+0x80)
	CGameTrace sub_10123f40(const Vector &vecOffset);	// "CGameMovement::TracePlayerBBox"-like (profiled as such): traces the player hull from the player's origin (+0x70) by vecOffset, moves the player's origin to where the trace ended, tells the global at 0x1071a278 (slot 2) about a partial hit that did not start solid (with the player's velocity at +0x40), and returns the trace
	float *sub_1011e350();	// stub 0x1000991c: the hull maxs for the player's stance (ducked / observer / standing)
	float *sub_1011e310();	// stub 0x10009bbf: the hull mins for the player's stance
	bool sub_101265d0();	// 0x101265d0 "CanUnduck"-like (profiled as CGameMovement::TracePlayerBBox): adjusts the player origin by the hull delta, traces the standing hull with CTraceFilterSimple and g_1070b254->vfunc4 (mask 0x201400b) and returns !trace.startsolid
	void sub_10126fd0();	// 0x10126fd0: the duck / unduck state machine called by vfunc5 (uses m_pMove +0x3e0 / +0x1edd / +0x1ede / +0x1ee0 / +0x1f28 and m_pPlayer +0x24 / +0x28 / +0xc0)
	void sub_101269e0();	// 0x101269e0: tail-called by sub_10126fd0 with this in ecx (duck finish)
	void sub_10126cb0();	// 0x10126cb0: tail-called by sub_10126fd0 with this in ecx (crouch-stuck fix)
	int sub_10124d80();	// 0x10124d80 "CGameMovement::CheckStuck"-like, called by vfunc5 (returns 0/1): hull trace from the player origin, warns "stuck on object %i/%s", then the ground-adjust trace and the origin move; see its note for the globals (0x1070b798 stuck table, 0x1070b750) and source-local callees sub_10124300 / sub_101245c0 / sub_10125190 / sub_10124d50 / sub_1011e8f0
	void sub_1011e560();	// "CGameMovement" surface/ground worker called by 0x101274a0 (vfunc5): traces the player hull at m_pPlayer (+4) origin (+0x70, min z - 64.0f) with masks / CTraceFilterSimple(LookupEntity(&m_hRef,6),6) and engine trace 0x1070b254, then the surface object from 0x1071a278 slot 9 (+0x24): stores its short at +0x98, its record from slot 5 (+0x14) at +0x9c, fills the friction at +0xa0 through slot 4 (+0x10) (id,0,0,&friction,0), multiplies by 1.25f and clamps to 1.0f, and stores record byte +0x70 at +0xa4. Profile scope "CGameMovement::TracePlayerBBox"."CGameMovement"
	void sub_10120ba0();	// "CGameMovement" stuck/velocity worker called by vfunc12 (slot 12): reads m_pMove (+8) +0x2314 (water jump time, must be 0) and m_pPlayer (+4) velocity (+0x40); with |velocity| > 0.1 it traces the hull (sub_1011e310 / sub_1011e350, Ray_t::sub_1006dec0, sub_1011e8f0 + engine trace global 0x1070b254 slot 4, obj +0x70), computes a frictional loss from the surface friction at +0xa0 and the convars 0x109eefbc / 0x109ef16c, scales the velocity (+0x40) by the remaining fraction and subtracts the removed part from the vector at +0x80 (CMovePlayerView, CGameMovementViews.h)
	void sub_10124ba0();	// a zero length hull trace at the player's origin (ducked hull, pass entity the move data, group from its +0x368): the line is drawn by the movement debug convar, and for a start solid hit on an entity the engine knows (slot 35 of the engine) sub_10124630 handles it (with the second convar set at once, else only when the entity's flags (slot 211) have bit 6)
	void sub_10124630(void *pEnt);	// stub 0x10005e93: the stuck entity handler
	void sub_101263c0(char bMoveUp);	// stub 0x10013471, "CGameMovement::FixPlayerCrouchStuck(bool upward)": traces the ducked/stance hull (mins sub_1011e310, maxs sub_1011e350; Ray_t::sub_1006dec0, filter CTraceFilterSimple(LookupEntity(&player->+4), 6), mask 0x201400b through sub_1011e8f0 then the engine trace global 0x1070b254 slot 4) at the origin (+0x70 of m_pPlayer); when it hits an entity (trace.contents & mask, trace.m_pEnt->GetRefEHandle() != -1) it moves the origin z by (float)bMoveUp up to 0x24 times until the trace is clear, restoring the original origin if every step still hit. Called with 1 by 0x10126cb0. Views for m_pPlayer / m_pMove: CGameMovementViews.h
};
