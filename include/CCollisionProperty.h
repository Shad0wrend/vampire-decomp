// class CCollisionProperty (RTTI .?AVCCollisionProperty@@), primary vtable 0x10454154,
// 19 slots, all of them inherited from its only base ICollideable at +0x0.
#pragma once

#include "CBaseEntity.h"

class ICollideable
{
public:
	virtual int vfunc0();
	virtual float *vfunc1();	// OBBMins: pointer to the three floats of the local mins
	virtual float *vfunc2();	// OBBMaxs: pointer to the three floats of the local maxs
	virtual void vfunc3(Vector *pMins, Vector *pMaxs);	// WorldSpaceTriggerBounds
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();	// GetCollisionOrigin: returns the pointer to the three floats of the world origin (declared void: vfunc8 is matched that way)
	virtual float *vfunc9(bool bOuter);	// GetCollisionAngles: pointer to the three floats of the world angles (takes one stack argument, 0 at the known call)
	virtual float *vfunc10();	// CollisionToWorldTransform: the matrix3x4_t (12 floats) of the collision space
	virtual int vfunc11();
	virtual short vfunc12();
	virtual int vfunc13();
	virtual int vfunc14();
	virtual void vfunc15(Vector *pMins, Vector *pMaxs);	// WorldSpaceSurroundingBounds
	virtual bool vfunc16();
	virtual void vfunc17();
	virtual int vfunc18();
};

class CCollisionProperty : public ICollideable
{
public:
	CCollisionProperty();
	virtual void vfunc3(Vector *pMins, Vector *pMaxs);	// "CCollisionProperty::WorldSpaceTriggerBounds": the world bounds of the box (sub_100dcd90), grown by m_flTriggerBloat (half of it up in z) when bit 8 of the solid flags (slot 12) is set
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc8();
	virtual float *vfunc9(bool bOuter);	// "CCollisionProperty::GetCollisionAngles": vec3_origin (0x1070d9d0) for flag 0 when the byte at +0x44 is negative (bit 7) or the solid type (+0x40) is 0 / 2, else the outer entity's slot 219 (called without the argument)
	virtual float *vfunc10();	// "CCollisionProperty::CollisionToWorldTransform": one of four rotating static matrices; the outer entity's own transform when the bounds are in entity space, else identity with the origin as column 3
	virtual int vfunc14();
	virtual void vfunc15(Vector *pMins, Vector *pMaxs);	// "CCollisionProperty::WorldSpaceSurroundingBounds": when the outer entity's surrounding bounds dirty flag (bit 14 of +0x268) is set clears it and recomputes the offsets (sub_100dd780) from the collision origin, else adds the cached offsets to the origin

	Vector m_vecMins;	// 0x04
	Vector m_vecMaxs;	// 0x10
	unsigned char m_nSurroundType;	// 0x1c: how the surrounding box is computed (4 = the game code of the outer entity)
	char m_1d[0x20 - 0x1d];
	float m_flTriggerBloat;	// 0x20: the amount the trigger bounds grow by (set with flag 0x100 of the solid flags)
	Vector m_vecSpecifiedSurroundingMins;	// 0x24
	Vector m_vecSpecifiedSurroundingMaxs;	// 0x30
	// The entity the collision property belongs to; several slots just forward to it.
	CBaseEntity *m_pOuter;
	int m_nSolidType;	// 0x40
	unsigned short m_usSolidFlags;	// 0x44
	unsigned short m_hPartition;	// 0x46: the spatial partition handle, 0xffff while not inserted
	char m_48[4];
	Vector m_vecSurroundingMins;	// 0x4c: offsets from the collision origin
	Vector m_vecSurroundingMaxs;	// 0x58

	void sub_100dc480(int solid);	// "CCollisionProperty::SetSolid" (called through the stub at 0x1000428c): remembers whether the property was solid, runs sub_100dda20, turns SOLID_BBOX into 6 when the outer entity's handle at +0x25c resolves, stores the type, tells the outer entity's physics object (+0x36c, slot 25), runs sub_100ddc40 and, when the solidity changed, sub_100dc430
	void sub_100dc770(const float *mins, const float *maxs);	// "CCollisionProperty::SetCollisionBounds" (called through the stub at 0x100123c3)
	void sub_100dc580(int flags);	// "CCollisionProperty::SetSolidFlags" (called through the stub at 0x1000e9a8)
	void sub_100dc8d0(char bEnable, int value);	// stores value at +0x20, then sets (bEnable) or clears the flag bit 0x100 of the solid flags and passes the result to sub_100dc580
	void sub_100ddd20();	// when the outer entity has an edict (engine slot 35) and bit 15 of its flags (+0x268) is clear, sets that bit and queues the entity with the global at 0x106e8144 (stub 0x1000c2e3)
	void sub_100dda20();	// stub 0x100121f7, called by SetSolid before the type changes
	void sub_100ddc40();	// stub 0x10001906, called by SetSolid after the type changed
	void sub_100dc430();	// stub 0x1000c1e4, called by SetSolid when the solidity changed
	void sub_100ddc00();	// 0x100ddc00: removes the partition handle (m_hPartition +0x46) through the partition object 0x1070b24c slot 3 and sets it to 0xffff
	void AddSolidFlags(int flags) { sub_100dc580(m_usSolidFlags | flags); }
	int IsSolid() const { return m_nSolidType != 0 && !(m_usSolidFlags & 4); }	// the solid type is set and the not-solid flag (bit 2) is clear
	void sub_100dc220(int a);	// partition update: with the partition object at 0x1070b24c (DevMsg "partition not initialized" otherwise) makes sure the handle at +0x46 exists (sub_100ddd90, stub 0x10014092; DevMsg "m_Partition failed to initialize" when it still does not) and calls slot 0 of the partition object with (handle, a)
	void sub_100ddd90();	// creates the partition handle (stub 0x10014092)
	void sub_100dcd90(const float *pMins, const float *pMaxs, float *pOutA, float *pOutB);	// world-space bounds of the box (pMins, pMaxs) (stub 0x100053fd); the two results are written to the last two arguments
	void sub_100dd630(Vector *pOutMins, Vector *pOutMaxs);	// the bounds as stored (solid type 0 / 2 or flag bit 7), else the symmetric box that holds them: per axis the larger absolute value of mins / maxs, negated for the mins
	void sub_100dd450(Vector *pMins, Vector *pMaxs);	// "CCollisionProperty::WorldSpaceSurroundingBounds"-like: the world bounds of the outer entity (from its physics object, slot 49 of it through the global at 0x1072393c slot 18, else the collision origin twice), grown by the trigger bounds (slot 3) when bit 8 of the solid flags is set
	void sub_100dd740(bool bWorld, Vector *pMins, Vector *pMaxs);	// stub-less member: bWorld gives sub_100dd450(pMins, pMaxs), else the virtual slot 3 (vfunc3) with the same two vectors
	bool sub_100dd600(Vector *pMins, Vector *pMaxs);	// stub 0x10011f54, run for surround type 2
	void sub_100dd780(Vector *pMins, Vector *pMaxs);	// stub 0x10012c9c: recomputes the surrounding bounds, called by slot 15 when the dirty flag is set
	Vector *sub_104103c0(const Vector &in, Vector *pResult);	// "CCollisionProperty::CollisionToWorldSpace": the entity-space bounds (solid type neither 0 nor 2, flag bit 7 clear) with non-zero angles go through the collision transform (VectorTransform), else collision origin + in
	float *sub_100dcc20(const float *pPoint, float *pOut);	// "CCollisionProperty::WorldToNormalizedSpace" (plain member): the point in collision space (entity-space bounds with non-zero angles go through the inverse collision transform, else the point minus the collision origin), normalised by the bounds (sub_100dc9f0); returns pOut
	float sub_100dd2e0(const float *pDir);	// "CCollisionProperty::SupportMapping"-like: the origin dotted with pDir plus, per axis of pDir taken into collision space (entity-space bounds with non-zero angles go through the inverse transform), the local mins (negative component) or maxs times that component
	void sub_100dc9a0(const Vector &in, Vector &out);	// "CCollisionProperty::NormalizedToCollisionSpace" (stub 0x10003715): the normalised point scaled into the bounds
	Vector *sub_100dcb30(const Vector &in, Vector *pResult);	// "CCollisionProperty::NormalizedToWorldSpace": sub_100dc9a0, then like sub_104103c0 (collision transform for entity-space bounds with non-zero angles, else collision origin + local)
	void sub_100dd000(const Vector &in, Vector &out);	// "CCollisionProperty::ClampToBounds"-like: the point into collision space (like sub_100dcc20), clamped to the box (mins at +4, maxs at +0x10) by sub_1013c8c0 (stub 0x100044e4), and back to world space (like sub_100dcb30)
	float sub_100dd1b0(const Vector &point);	// distance from the point to the box in collision space: the point into collision space (like sub_100dd000), clamped by sub_1013c8c0, length of the difference
public:
    virtual bool vfunc16();	// slot 16: false when solid flag bit 3 is set or slot 14 answers 1, else true
    virtual void vfunc17();
    virtual float * vfunc1();
    virtual float * vfunc2();
    virtual void vfunc7();
public:
    virtual int vfunc13();
    virtual int vfunc0();
    virtual int vfunc11();
    virtual int vfunc18();
    virtual short vfunc12();
};
