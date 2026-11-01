// CMoverKeyFrame (mover_keyframe, RTTI .?AVCMoverKeyFrame@@ : CLogicalEntity), vtable 0x1048b5b4, size 0x474.
// Constructor: CLogicalEntity (CBaseEntity(0), vtable 0x104475c4), the output's COutputEvent constructor, own vftable.
// Own virtuals: slot 82 (0x10222fd0, datamap getter), slot 113 (0x102230b0); slot 103 is CLogicalEntity's.
#pragma once
#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct datamap_t;

class CMoverKeyFrame : public CLogicalEntity
{
public:
	virtual void vfunc113();

	void *m_pTargetName;	// 0x450
	CMoverKeyFrame *m_pNext;	// 0x454
	CMoverKeyFrame *m_pPrev;	// 0x458
	COutputEvent m_Output;	// 0x45c
public:
    virtual datamap_t * vfunc82();
};
