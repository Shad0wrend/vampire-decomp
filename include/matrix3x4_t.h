// matrix3x4_t: Source's 3x4 transform matrix (three rows of x / y / z axis and translation), as a plain float table.
#pragma once

#include "Vector.h"

struct matrix3x4_t
{
	float m_flMatVal[3][4];

	void sub_100a0a10(Vector *pOut, const Vector *pIn);	// VectorITransform: pOut = (pIn - translation) projected on the three axes (columns), through a local copy of the input
};
