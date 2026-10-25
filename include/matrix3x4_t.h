// matrix3x4_t: Source's 3x4 transform matrix (three rows of x / y / z axis and translation), as a plain float table.
#pragma once

#include "Vector.h"

struct matrix3x4_t
{
	float m_flMatVal[3][4];

	void sub_100a0a10(Vector *pOut, const Vector *pIn);	// VectorITransform: pOut = (pIn - translation) projected on the three axes (columns), through a local copy of the input
	bool sub_1024dc40();	// whether the three rows are orthonormal: every row's length within 0.01f of 1, every pair's dot product within 0.01f of 0
};
