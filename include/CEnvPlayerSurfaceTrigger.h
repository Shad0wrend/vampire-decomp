// CEnvPlayerSurfaceTrigger: declared by pcdecomp transplant for 0x100fd920 from CPhysForce (0x10027690);
// only what matched code needs, as plain members (the vtable pointer is at 0, from the entity interface base
// CGlobalEntityList_Ent whose slot 1 is the entity's handle).
#pragma once

#include "CGlobalEntityList.h"
#include "CPointEntity.h"

struct CSurfaceOutput_t	// 0x18 byte output event
{
	char m_data[0x18];
	CSurfaceOutput_t() { sub_100cd2a0(); }
	void sub_100cd2a0();	// the output's constructor body (stub 0x10002ddd)
	void sub_100cd660(void *pActivator, void *pCaller, int delay);	// stub 0x10010794 (FireOutput)
	void sub_100cd2d0();	// stub 0x10015708 (the output's destructor)
};

class CEnvPlayerSurfaceTrigger : public CPointEntity
{
public:
	CEnvPlayerSurfaceTrigger() {}
	CPointEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (VC6 has no covariant returns)
	void sub_100108ed();
	~CEnvPlayerSurfaceTrigger();	// the destructor body (stub 0x100108ed, 0x100fd850): sets the vtable, removes this entity's handle from the global handle list at 0x1070906c, destroys the two outputs, then sub_1009df20
	void sub_1009df20();	// the base destructor body (stub 0x1000cb8a)
	void vfunc103();	// slot 103 (Spawn): the "CBaseEntity::SetSolid" scope trace around the collision property's SetSolid(0), SetMoveType(0, 0), clears the material (+0x454) and disabled flag (+0x458), then appends this entity's handle to the global handle list at 0x1070906c
	void vfunc130(int a);	// slot 130: base implementation, then appends this entity's handle to a global handle list
	void sub_100fdc00(void *pActivator, char material);	// "...::UpdateMaterial": unless disabled (byte at +0x458) and when the material changes, logs "Player changed material to %d (was %d)" and fires the output at +0x45c (new material is the trigger material) or +0x474 (old material was the trigger material)
	virtual datamap_t *vfunc82();	// slot 82: the class's datamap	// "...::UpdateMaterial": unless disabled (byte at +0x458) and when the material changes, logs "Player changed material to %d (was %d)" and fires the output at +0x45c (new material is the trigger material) or +0x474 (old material was the trigger material)

	int m_nTriggerMaterial;	// 0x0450
	int m_nMaterial;	// 0x0454
	bool m_bDisabled;	// 0x0458
	char m_pad0459[3];
	CSurfaceOutput_t m_OnSurfaceEnter;	// 0x045c
	CSurfaceOutput_t m_OnSurfaceLeave;	// 0x0474
};
