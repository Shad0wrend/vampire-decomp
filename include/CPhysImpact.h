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

	char m_pad0004[0x268];	// 0x0004 .. 0x026B
	const char *m_name26c;	// 0x026c: the entity name
	CCollisionProperty m_Collision;	// 0x0270

	void sub_1000cb8a();	// destructor body
public:
	virtual datamap_t * vfunc82();
public:
	virtual int vfunc117();
	char m_pad02d4[0x464 - 0x2d4];
};
