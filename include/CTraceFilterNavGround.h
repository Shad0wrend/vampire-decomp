// CTraceFilterNavGround (RTTI .?AVCTraceFilterNavGround@@): navigation ground trace filter, derives from CTraceFilterSimple
// (primary vtable 0x1049d8d0, 2 slots; slot 1 is inherited).
#pragma once

#include "CTraceFilterSimple.h"

class CTraceFilterNavGround : public CTraceFilterSimple
{
public:
	int m_nGroup;	// 0x0c: the collision group the filter is for (second constructor argument)
	void *m_pPassEnt2;	// 0x10: the entity the filter belongs to (first constructor argument)

	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// "CTraceFilterNavGround::ShouldHitEntity": scope trace, rejects the entities sub_102eb170 flags, the ones that are not hostile to the pass entity, the ones the entity's slot 91 and the game rules' slot 77 reject, and the ones the pass entity's slot 68 refuses; else CTraceFilterSimple::ShouldHitEntity
};
