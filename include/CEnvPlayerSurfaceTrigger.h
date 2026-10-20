// CEnvPlayerSurfaceTrigger: declared by pcdecomp transplant for 0x100fd920 from CPhysForce (0x10027690);
// only what matched code needs, as plain members (no vtable pointer declared: the offsets below are the real ones).
#pragma once

struct CSurfaceOutput_t	// 0x18 byte output event
{
	char m_data[0x18];
	void sub_100cd660(void *pActivator, void *pCaller, int delay);	// stub 0x10010794 (FireOutput)
};

class CEnvPlayerSurfaceTrigger
{
public:
	CEnvPlayerSurfaceTrigger *vfunc5(unsigned int flags);
	void sub_100108ed();
	void vfunc103();	// slot 103 (Spawn): the "CBaseEntity::SetSolid" scope trace around the collision property's SetSolid(0), SetMoveType(0, 0), clears the material (+0x454) and disabled flag (+0x458), then appends this entity's handle to the global handle list at 0x1070906c
	void vfunc130(int a);	// slot 130: base implementation, then appends this entity's handle to a global handle list
	void sub_100fdc00(void *pActivator, char material);	// "...::UpdateMaterial": unless disabled (byte at +0x458) and when the material changes, logs "Player changed material to %d (was %d)" and fires the output at +0x45c (new material is the trigger material) or +0x474 (old material was the trigger material)

	char m_pad0000[0x450];
	int m_nTriggerMaterial;	// 0x0450
	int m_nMaterial;	// 0x0454
	bool m_bDisabled;	// 0x0458
	char m_pad0459[3];
	CSurfaceOutput_t m_OnSurfaceEnter;	// 0x045c
	CSurfaceOutput_t m_OnSurfaceLeave;	// 0x0474
};
