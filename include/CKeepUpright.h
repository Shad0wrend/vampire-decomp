// CKeepUpright (RTTI .?AVCKeepUpright@@): CPointEntity -> CBaseEntity, IMotionEvent at +0x450.
// primary vtable 0x104462c4 (241 slots). CPointEntity and IMotionEvent are not modelled.
#pragma once

#include "CBaseEntity.h"

extern int g_10446750;	// IMotionEvent vftable
extern int g_104462b4;	// CKeepUpright's IMotionEvent vftable

struct CKeepUpright_MotionEvent	// IMotionEvent sub-object
{
	CKeepUpright_MotionEvent() { m_vtable = &g_10446750; }
	void operator=(void *p) { m_vtable = p; }
	operator void *() const { return m_vtable; }
	void *m_vtable;
};

struct CKeepUpright_Handle	// EHANDLE
{
	CKeepUpright_Handle() { m_Index = 0xffffffff; }
	void operator=(unsigned int i) { m_Index = i; }
	operator unsigned int() const { return m_Index; }
	unsigned int m_Index;
};

class CKeepUpright : public CBaseEntity
{
public:
	CKeepUpright() : CBaseEntity(0)
	{
		m_motionEvent = &g_104462b4;
		*(volatile float *)&m_flAngularLimit = 15.0f;
		m_attachedObject = 0xffffffff;
	}

	void vfunc113();
	void vfunc103();	// slot 103 "Spawn": axis (0, 0, 1), GetVectors into +0x454, slot 93(0, 0), flag +0x47c from bit 0 of +0x204
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain member
	void sub_100057c2();	// destructor body
	void sub_100296b0();	// destructor body (0x100296b0): vtables, physenv->vfunc40(m_pController), tail jmp to base dtor
	CKeepUpright *sub_10029610();	// constructor

	char m_padKU[0x450 - sizeof(CBaseEntity)];
	CKeepUpright_MotionEvent m_motionEvent;        // 0x450 IMotionEvent sub-object (vtable)
	float m_vecUp454[3];        // 0x454 filled by GetVectors
	float m_vecAxis460[3];      // 0x460
	void *m_pController;        // 0x46c IPhysicsMotionController*
	const char *m_nameAttach;   // 0x470
	CKeepUpright_Handle m_attachedObject; // 0x474 EHANDLE
	float m_flAngularLimit;     // 0x478
public:
    virtual datamap_t * vfunc82();
	bool m_bActive;	// 0x047c
	char m_pad047d[0x480 - 0x47d];
};
