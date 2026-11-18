// CEnvFade (env_fade, RTTI CEnvFade : CLogicalEntity), vtable 0x1045888c, size 0x470: the screen fade entity.
// Constructor: CLogicalEntity (CBaseEntity(0), vtable 0x104475c4), the output's COutputEvent constructor, own vftable.
// Slot 5 is the scalar deleting destructor (0x10003c97), slot 82 the datamap getter (0x10002365),
// slot 103 an empty override (0x1001290e -> 0x10100f70, 1 byte `ret`).
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct datamap_t;

class CEnvFade : public CLogicalEntity
{
public:
	float m_Duration;	// 0x0450
	float m_HoldTime;	// 0x0454	// 0x450: the fade settings (not recovered yet)
	COutputEvent m_OnBeginFade;	// 0x458
public:
	virtual datamap_t * vfunc82();
	virtual void vfunc103();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
