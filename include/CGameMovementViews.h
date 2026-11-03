// CGameMovementViews: the objects CGameMovement::m_pPlayer (+4) and m_pMove (+8) point at, as views with
// only the members the movement code reads. (CGameMovement.h keeps both as void *; cast:
// `#define PLAYER ((CMovePlayerView *)m_pPlayer)`, `((CMoveDataView *)m_pMove)`.)
// m_pMove is the entity being moved (a CBasePlayer in 2004 terms, its vtable slots 94 / 209 / 211 are used here).
#pragma once

#include "Vector.h"
#include "CGameTrace.h"

struct CMovePlayerView	// CGameMovement::m_pPlayer: the "mv" (CMoveData-like) record
{
	char m_pad0000[4];
	unsigned int m_hRef;	// 0x04 (the pass entity handle for LookupEntity, address passed as &m_hRef)
	char m_pad0008[0x24 - 8];
	unsigned int m_fFlags24;	// 0x24: checked for 0x20000 and bit 2 by the view-punch code
	char m_pad0028[0x2c - 0x28];
	float m_flForwardMove;	// 0x2c
	float m_flSideMove;	// 0x30
	float m_flUpMove;	// 0x34
	float m_flMaxSpeed;	// 0x38
	float m_flClientMaxSpeed;	// 0x3c
	Vector m_vecVelocity;	// 0x40
	char m_pad004c[0x58 - 0x4c];
	Vector m_vec58;		// 0x58: saved around the slot 6 (view-punch) call
	Vector m_vec64;		// 0x64: copied into +0x58 for a dead / observer player
	Vector m_vecOrigin;	// 0x70
	char m_pad007c[0x80 - 0x7c];
	Vector m_vec80;		// 0x80: a velocity-like vector sub_10120ba0 subtracts a scaled amount from
	Vector m_vecCenter;	// 0x8c: the constraint sphere's center
	float m_flRadius;	// 0x98
	float m_flWidth;	// 0x9c
	float m_flSpeedFactor;	// 0xa0
};

struct CMoveFlagsView	// the same object as CMoveDataView, data side
{
	char m_pad0000[0x1edc];
	char m_b1edc;	// 0x1edc: copied by 0x10126cb0 into GetEyeOffset's second argument
	char m_bDucked;	// 0x1edd: picks the ducked hulls (0x10126cb0 sets it to 1 during the unduck)
	char m_b1ede;	// 0x1ede
	char m_pad1edf[0x20f0 - 0x1edf];
	unsigned int m_fFlags;	// 0x20f0: bit 5 = observer hull
};

#define GMV(n) virtual void g##n();
#define GMV10(p) GMV(p##0) GMV(p##1) GMV(p##2) GMV(p##3) GMV(p##4) GMV(p##5) GMV(p##6) GMV(p##7) GMV(p##8) GMV(p##9)
struct CMoveDataView	// the entity at CGameMovement::m_pMove: vtable only; the data are in CMoveFlagsView (same address)
{
	GMV10(0) GMV10(1) GMV10(2) GMV10(3) GMV10(4) GMV10(5) GMV10(6) GMV10(7) GMV10(8)
	GMV(90) GMV(91) GMV(92) GMV(93) virtual int g94();	// slot 94 (+0x178): the move type (2 / 9 are tested by CheckVelocity)
	GMV(95) GMV(96) GMV(97) GMV(98) GMV(99)
	GMV10(10) GMV10(11) GMV10(12) GMV10(13) GMV10(14) GMV10(15) GMV10(16) GMV10(17) GMV10(18) GMV10(19)
	GMV(200) GMV(201) GMV(202) GMV(203) GMV(204) GMV(205) GMV(206) GMV(207) GMV(208)
	virtual void *vfunc209();	// slot 209 (+0x344): the ground entity (0 when none; 0x10126cb0 tests it)
	virtual void g210();
	virtual unsigned int vfunc211();	// slot 211 (+0x34c): the entity's flag word (bit 6 is passed to Ray_t::sub_1006dec0 as its 5th argument); NO arguments (the `push 0` before the call is Ray_t's last argument)
};

struct CTouchNotifier	// the global at 0x1071a278 (extern CTouchNotifier *g_1071a278)
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CGameTrace *pTrace, Vector *pVelocity);
};
