// CDisciplineProjectile: declared by pcdecomp transplant for 0x101d9f30 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CDisciplineProjectile : public CBaseEntity
{
public:
	CDisciplineProjectile *vfunc5(unsigned int flags);
	void sub_1000d800();
	CDisciplineProjectile *sub_101d9e20();	// as in CKeepUpright (transplant)
	void vfunc269();	// hands the entity of the handle at +0x778, the dword at +0x9c of the entity of the handle at +0x8a8 and the dword at +0x8bc to the global effect manager at 0x10739a4c
	void vfunc268();	// slot 268: with the discipline's entry in the global effect manager (id at +0x8bc) and a non-zero range, ends the projectile (sub_101ee7d0) once it is farther than the range from the point at +0x888
	void sub_101ee7d0();	// CVampireProjectile member (stub 0x10003be3): removes the projectile, delayed by 10 seconds while the entity of the handle at +0x8b8 lives and the byte at +0x8b4 is clear

	char m_pad03e0[0x888 - 0x3e0];
	Vector m_vecStart888;	// 0x888
	char m_pad0894[0x8bc - 0x894];
	int m_nDisc8bc;	// 0x8bc: the discipline id
};
