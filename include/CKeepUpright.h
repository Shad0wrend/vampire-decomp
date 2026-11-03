// CKeepUpright (RTTI .?AVCKeepUpright@@): CPointEntity -> CBaseEntity, IMotionEvent at +0x450.
// primary vtable 0x104462c4 (241 slots). CPointEntity and IMotionEvent are not modelled.
#pragma once

#include "CBaseEntity.h"

extern int g_10446750;	// IMotionEvent vftable
extern int g_104462b4;	// CKeepUpright's IMotionEvent vftable

class CKeepUpright : public CBaseEntity
{
public:
	CKeepUpright() : CBaseEntity(0), m_attachedObject(-1), m_flAngularLimit((*(void *volatile *)&m_motionEvent = &g_10446750, 0.0f))
	{
		m_motionEvent = &g_104462b4;
		m_flAngularLimit = 15.0f;
	}

	void vfunc113();
	void vfunc103();	// slot 103 "Spawn": axis (0, 0, 1), GetVectors into +0x454, slot 93(0, 0), flag +0x47c from bit 0 of +0x204
	CKeepUpright *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain member
	void sub_100057c2();	// destructor body
	void sub_100296b0();	// destructor body (0x100296b0): vtables, physenv->vfunc40(m_pController), tail jmp to base dtor
	CKeepUpright *sub_10029610();	// constructor

	char m_padKU[0x450 - sizeof(CBaseEntity)];
	void *m_motionEvent;        // 0x450 IMotionEvent sub-object (vtable)
	float m_vecUp454[3];        // 0x454 filled by GetVectors
	float m_vecAxis460[3];      // 0x460
	void *m_pController;        // 0x46c IPhysicsMotionController*
	const char *m_nameAttach;   // 0x470
	unsigned int m_attachedObject; // 0x474 EHANDLE
	float m_flAngularLimit;     // 0x478
public:
    virtual datamap_t * vfunc82();
	char m_pad047c[0x480 - 0x47c];
};
