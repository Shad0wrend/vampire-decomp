// element of CHangRope's two end-point vectors (start, end): its empty constructor (0x1002c900) is what the
// array constructor iterator calls
#pragma once

#include "Vector.h"

struct CRopeEndVec : public Vector
{
	CRopeEndVec() {}
};
