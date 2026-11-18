// CPhysImpact: physics impact entity. Declared flat (bases not recovered); the vtable is modelled as placeholder
// slots up to slot 212 (the ones the code calls are typed).
#pragma once

struct datamap_t;

#include "CCollisionProperty.h"

#define PI_V1(p) virtual void p();
#define PI_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CPhysImpact
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysImpact *vfunc5(unsigned int flags);	// scalar deleting destructor
	// slots 6..92
	PI_V1(pa6) PI_V1(pa7) PI_V1(pa8) PI_V1(pa9)
	PI_V10(pb1) PI_V10(pb2) PI_V10(pb3) PI_V10(pb4) PI_V10(pb5) PI_V10(pb6) PI_V10(pb7) PI_V10(pb8)
	PI_V1(pc90) PI_V1(pc91) PI_V1(pc92)
	virtual void vfunc93(int moveType, int moveCollide);	// "CBaseEntity::SetMoveType"
	// slots 94..102
	PI_V1(pd94) PI_V1(pd95) PI_V1(pd96) PI_V1(pd97) PI_V1(pd98) PI_V1(pd99) PI_V1(pd100) PI_V1(pd101) PI_V1(pd102)
	virtual void vfunc103();	// scope trace "CBaseEntity::SetSolid" around SetSolid(0) on the collision property, then slot 93(0, 0) first and slot 212(0) last
	// slots 104..211
	PI_V10(pe10) PI_V10(pe11) PI_V10(pe12) PI_V10(pe13) PI_V10(pe14) PI_V10(pe15) PI_V10(pe16) PI_V10(pe17) PI_V10(pe18) PI_V10(pe19)
	PI_V1(pf204) PI_V1(pf205) PI_V1(pf206) PI_V1(pf207) PI_V1(pf208) PI_V1(pf209) PI_V1(pf210) PI_V1(pf211)
	virtual void vfunc212(const char *pszModel);	// "CBaseEntity::SetModel"-like

	char m_pad0004[0x204 - 4];	// 0x0004 .. 0x0203
	unsigned int m_spawnflags204;	// 0x0204: 1 no falloff, 2 infinite length, 4 scale by the target's mass (slot 12), 8 push along the impact direction (the sete bl of the Impact input)
	char m_pad0208[0x26c - 0x208];	// 0x0208 .. 0x026B
	const char *m_name26c;	// 0x026c: the entity name
	CCollisionProperty m_Collision;	// 0x0270

	void sub_1000cb8a();	// destructor body
	void sub_1004f030(struct inputdata_t *pData);	// 0x1004f030 CPhysImpact::InputImpact (the DEFINE_INPUTFUNC "Impact" handler, ret 4, the argument is not read): the direction is from this's origin (slot 217 via CEntityVSlots) to m_vecTarget, or to the named entity's WorldSpaceCenter (slot 192, gEntList 0x106eb5d8 sub_100f7770(0, name, 0, 0); Warning "%s could not find: %s !!" otherwise), normalised; length by pfSqrt (infinite-length flag 2: the double 56755.84 instead); a trace (Ray_t::sub_1004f7a0 + CTraceFilterSimple(this, 0), mask -1, debug lines sub_10146570 / sub_10142e90 / sub_10143b70 gated by g_10738964 / g_1070b9cc) then pushes the hit entity's physics object (entity +0x36c, slot 31 ApplyForceOffset) with m_damage * (1 - fraction) (flags 1/2/8: no falloff; 4: times the object's slot 12 mass) * convar g_106b8654 (GetFloat form)
public:
	virtual datamap_t * vfunc82();
public:
	virtual int vfunc117();
	char m_pad02d4[0x450 - 0x2d4];
	float m_damage;	// 0x0450
	string_t m_directionEntityName;	// 0x0454
	Vector m_vecTarget;	// 0x0458
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc113();	// slot 113 (0x1004ef40): a tail call of CBaseEntity::vfunc113 (no such slot in this view: plain)
};
