// matrix3x4_t: Source's 3x4 transform matrix (three rows of x / y / z axis and translation), as a plain float table.
#pragma once

#include "Vector.h"

class QAngle;

struct matrix3x4_t
{
	float m_flMatVal[3][4];

	matrix3x4_t *sub_100a0990(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23);	// the 12 value constructor (stub 0x10003049)
	void sub_100a0a10(Vector *pOut, const Vector *pIn);	// VectorITransform: pOut = (pIn - translation) projected on the three axes (columns), through a local copy of the input
	bool sub_1024dc40();	// whether the three rows are orthonormal: every row's length within 0.01f of 1, every pair's dot product within 0.01f of 0
};
