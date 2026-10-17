// CKeepUpright (RTTI .?AVCKeepUpright@@): CPointEntity -> CBaseEntity, IMotionEvent at +0x450.
// primary vtable 0x104462c4 (241 slots). CPointEntity and IMotionEvent are not modelled.
#pragma once

#include "CBaseEntity.h"

class CKeepUpright : public CBaseEntity
{
public:
	void vfunc113();

	char m_padKU[0x450 - sizeof(CBaseEntity)];
	void *m_motionEvent;        // 0x450 IMotionEvent sub-object (vtable)
	char m_pad0454[0x46c - 0x454];
	void *m_pController;        // 0x46c IPhysicsMotionController*
	const char *m_nameAttach;   // 0x470
	unsigned int m_attachedObject; // 0x474 EHANDLE
};
