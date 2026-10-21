// CPropSign (RTTI .?AVCPropSign@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

#include "CCollisionProperty.h"

class CBaseEntity;

struct CPropSignHandle
{
	unsigned int m_Index;
};

class CPropSign
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CPropSign *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual bool vfunc32(void *pEntity); virtual void vfunc33(); virtual bool vfunc34(int a);
	virtual int vfunc35(int a);
	char m_pad0004[0x8c - 4];
	CPropSignHandle m_hAttached;	// +0x8c
	char m_pad0090[0x26c - 0x90];
	const char *m_name26c;	// 0x26c
	CCollisionProperty m_Collision;	// 0x270
	char m_pad02b8[0x768 - 0x270 - sizeof(CCollisionProperty)];
	int m_field768;
	void sub_10001a0a();	// as in CPhysForce (transplant)
	void vfunc103();	// slot 103 "CPropSign::Spawn": CBaseProp::vfunc103, then with a studio header: stops the movement (slot 93), makes the entity solid (SetSolid 3), takes the collision bounds from the header (+0xb4 / +0xc0), sets collision group 1 and refreshes the partition (sub_100ddd90) and the entity (sub_100b3b00)
	void sub_1018df70();	// CBaseProp::vfunc103 (stub 0x10011793), called directly
	void *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 (stub 0x10013d8b): GetModelPtr-like, returns the studio header
	void sub_100adf10(const float *mins, const float *maxs);	// CBaseEntity::SetSize (stub 0x100115e0)
	void sub_100aaa40(int group);	// CBaseEntity::SetCollisionGroup (stub 0x10013c00)
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00 (stub 0x1001514a), called directly
	void sub_102120c0(CBaseEntity *pPlayer);	// sends the user message 0x10726088 to pPlayer (when set): a zero value, the float 0.5f and the engine index of this entity (edict at +0x2e0)
};
