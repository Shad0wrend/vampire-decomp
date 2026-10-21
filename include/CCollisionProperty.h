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
	virtual void vfunc3(Vector *pMins, Vector *pMaxs);	// WorldSpaceTriggerBounds
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();	// GetCollisionOrigin: returns the pointer to the three floats of the world origin (declared void: vfunc8 is matched that way)
	virtual float *vfunc9();	// GetCollisionAngles: pointer to the three floats of the world angles
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

	Vector m_vecMins;	// 0x04
	Vector m_vecMaxs;	// 0x10
	char m_1c[0x3c - 0x1c];
	// The entity the collision property belongs to; several slots just forward to it.
	CBaseEntity *m_pOuter;
	int m_nSolidType;	// 0x40
	unsigned short m_usSolidFlags;	// 0x44
	unsigned short m_hPartition;	// 0x46: the spatial partition handle, 0xffff while not inserted

	void sub_100dc480(int solid);	// "CCollisionProperty::SetSolid" (called through the stub at 0x1000428c): remembers whether the property was solid, runs sub_100dda20, turns SOLID_BBOX into 6 when the outer entity's handle at +0x25c resolves, stores the type, tells the outer entity's physics object (+0x36c, slot 25), runs sub_100ddc40 and, when the solidity changed, sub_100dc430
	void sub_100dc770(const float *mins, const float *maxs);	// "CCollisionProperty::SetCollisionBounds" (called through the stub at 0x100123c3)
	void sub_100dc580(int flags);	// "CCollisionProperty::SetSolidFlags" (called through the stub at 0x1000e9a8)
	void sub_100ddd20();	// when the outer entity has an edict (engine slot 35) and bit 15 of its flags (+0x268) is clear, sets that bit and queues the entity with the global at 0x106e8144 (stub 0x1000c2e3)
	void sub_100dda20();	// stub 0x100121f7, called by SetSolid before the type changes
	void sub_100ddc40();	// stub 0x10001906, called by SetSolid after the type changed
	void sub_100dc430();	// stub 0x1000c1e4, called by SetSolid when the solidity changed
	int IsSolid() const { return m_nSolidType != 0 && !(m_usSolidFlags & 4); }	// the solid type is set and the not-solid flag (bit 2) is clear
	void sub_100dc220(int a);	// partition update: with the partition object at 0x1070b24c (DevMsg "partition not initialized" otherwise) makes sure the handle at +0x46 exists (sub_100ddd90, stub 0x10014092; DevMsg "m_Partition failed to initialize" when it still does not) and calls slot 0 of the partition object with (handle, a)
	void sub_100ddd90();	// creates the partition handle (stub 0x10014092)
	void sub_100dcd90(const float *pMins, const float *pMaxs, float *pOutA, float *pOutB);	// world-space bounds of the box (pMins, pMaxs) (stub 0x100053fd); the two results are written to the last two arguments
	void sub_100dd630(Vector *pOutMins, Vector *pOutMaxs);	// the bounds as stored (solid type 0 / 2 or flag bit 7), else the symmetric box that holds them: per axis the larger absolute value of mins / maxs, negated for the mins
	void sub_100dd450(Vector *pMins, Vector *pMaxs);	// "CCollisionProperty::WorldSpaceSurroundingBounds"-like: the world bounds of the outer entity (from its physics object, slot 49 of it through the global at 0x1072393c slot 18, else the collision origin twice), grown by the trigger bounds (slot 3) when bit 8 of the solid flags is set
	Vector *sub_104103c0(const Vector &in, Vector *pResult);	// "CCollisionProperty::CollisionToWorldSpace": the entity-space bounds (solid type neither 0 nor 2, flag bit 7 clear) with non-zero angles go through the collision transform (VectorTransform), else collision origin + in
};
