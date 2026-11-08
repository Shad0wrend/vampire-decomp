// CRopeEndVec: a Vector element whose default constructor the game keeps out of line (0x1002c900, an empty
// constructor handed to the vector constructor iterator when an array of them is built).
#pragma once

#include "Vector.h"

class CRopeEndVec : public Vector
{
public:
	CRopeEndVec();	// 0x1002c900: returns this, stores nothing
	void sub_1002c920(float x, float y, float z);	// 0x1002c920: stores x, y, z (the out-of-line Vector(x, y, z))
};
