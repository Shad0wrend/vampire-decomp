// class CCollisionProperty (RTTI .?AVCCollisionProperty@@), primary vtable 0x10454154,
// 19 slots, all of them inherited from its only base ICollideable at +0x0.
#pragma once

#include "CBaseEntity.h"

class ICollideable
{
public:
	virtual void vfunc0();
	virtual float *vfunc1();	// OBBMins: pointer to the three floats of the local mins
	virtual float *vfunc2();	// OBBMaxs: pointer to the three floats of the local maxs
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();	// GetCollisionOrigin: returns the pointer to the three floats of the world origin (declared void: vfunc8 is matched that way)
	virtual void vfunc9();
	virtual float *vfunc10();	// CollisionToWorldTransform: the matrix3x4_t (12 floats) of the collision space
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual int vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
};

class CCollisionProperty : public ICollideable
{
public:
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc8();
	virtual float *vfunc10();	// "CCollisionProperty::CollisionToWorldTransform": one of four rotating static matrices; the outer entity's own transform when the bounds are in entity space, else identity with the origin as column 3
	virtual int vfunc14();

	char m_04[0x3c - 0x04];
	// The entity the collision property belongs to; several slots just forward to it.
	CBaseEntity *m_pOuter;
	int m_nSolidType;	// 0x40
	unsigned short m_usSolidFlags;	// 0x44

	void sub_100dc480(int solid);	// "CCollisionProperty::SetSolid" (called through the stub at 0x1000428c): remembers whether the property was solid, runs sub_100dda20, turns SOLID_BBOX into 6 when the outer entity's handle at +0x25c resolves, stores the type, tells the outer entity's physics object (+0x36c, slot 25), runs sub_100ddc40 and, when the solidity changed, sub_100dc430
	void sub_100dc770(const float *mins, const float *maxs);	// "CCollisionProperty::SetCollisionBounds" (called through the stub at 0x100123c3)
	void sub_100dc580(int flags);	// "CCollisionProperty::SetSolidFlags" (called through the stub at 0x1000e9a8)
	void sub_100ddd20();	// when the outer entity has an edict (engine slot 35) and bit 15 of its flags (+0x268) is clear, sets that bit and queues the entity with the global at 0x106e8144 (stub 0x1000c2e3)
	void sub_100dda20();	// stub 0x100121f7, called by SetSolid before the type changes
	void sub_100ddc40();	// stub 0x10001906, called by SetSolid after the type changed
	void sub_100dc430();	// stub 0x1000c1e4, called by SetSolid when the solidity changed
};
