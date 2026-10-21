// CPhysObjSlots: the IPhysicsObject virtual table viewed as a plain list of slots, only the ones decompiled code calls.
#pragma once

#include "CEntityVSlots.h"

class CPhysObjSlots
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS(30) EVS(31) EVS(32) EVS(33) EVS(34) EVS(35) EVS(36) EVS(37)
	virtual void slot38(float *pMatrix);	// "GetPositionMatrix": fills a 3x4 matrix
};
