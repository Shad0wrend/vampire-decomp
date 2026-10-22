// VMatrix: the 4x4 matrix of the 2004 SDK's mathlib (vmatrix.h); only what decompiled code needs.
// Index it as dst[row][col]: the inline operator[] returns the row, and VC6 does not see through that (stores
// through two rows are kept in source order).
#pragma once
#include "Vector.h"

class VMatrix
{
public:
	float m[4][4];

	float *operator[](int i) { return m[i]; }
	const float *operator[](int i) const { return m[i]; }

	void SetForward(const Vector &vForward)
	{
		m[0][0] = vForward.x;
		m[1][0] = vForward.y;
		m[2][0] = vForward.z;
	}
	void SetLeft(const Vector &vLeft)
	{
		m[0][1] = vLeft.x;
		m[1][1] = vLeft.y;
		m[2][1] = vLeft.z;
	}
	void SetUp(const Vector &vUp)
	{
		m[0][2] = vUp.x;
		m[1][2] = vUp.y;
		m[2][2] = vUp.z;
	}

	Vector &sub_1024d7b0(Vector &out) const;	// column 1 (GetLeft), out of line; returns out
	Vector &sub_1024d7e0(Vector &out) const;	// column 2 (GetUp), out of line; returns out
	void sub_1024d920(VMatrix &out) const;
};
