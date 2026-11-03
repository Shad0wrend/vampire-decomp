// CDisciplineProjectile: declared by pcdecomp transplant for 0x101d9f30 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "Vector.h"
#include "datamap.h"

class CDisciplineProjectile : public CBaseEntity
{
public:
	CDisciplineProjectile *vfunc5(unsigned int flags);
	void sub_1000d800();
	CDisciplineProjectile *sub_101d9e20();	// as in CKeepUpright (transplant)
	void vfunc266(CBaseEntity *pOther);	// slot 266 "Touch": ignores other projectiles; for a solid-less touch hands the owner (+0x9c) of pOther to the effect manager (Hit) and ends the projectile
	void vfunc269();	// hands the entity of the handle at +0x778, the dword at +0x9c of the entity of the handle at +0x8a8 and the dword at +0x8bc to the global effect manager at 0x10739a4c
	void vfunc268();	// slot 268: with the discipline's entry in the global effect manager (id at +0x8bc) and a non-zero range, ends the projectile (sub_101ee7d0) once it is farther than the range from the point at +0x888
	void sub_101ee7d0();	// CVampireProjectile member (stub 0x10003be3): removes the projectile, delayed by 10 seconds while the entity of the handle at +0x8b8 lives and the byte at +0x8b4 is clear

	char m_pad03e0[0x778 - 0x3e0];
	EHANDLE m_h778;	// 0x778
	char m_pad077c[0x888 - 0x77c];
	Vector m_vecStart888;	// 0x888
	char m_pad0894[0x8a8 - 0x894];
	EHANDLE m_h8a8;	// 0x8a8
	char m_pad08ac[0x8b4 - 0x8ac];
	char m_b8b4;	// 0x8b4
	char m_pad08b5[3];
	EHANDLE m_h8b8;	// 0x8b8
	int m_nDisc8bc;	// 0x8bc: the discipline id
	int m_n8c0;	// 0x8c0
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
