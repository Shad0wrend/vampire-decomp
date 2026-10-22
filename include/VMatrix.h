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

	Vector sub_1024d7b0() const;	// column 1 (GetLeft), out of line
	Vector sub_1024d7e0() const;	// column 2 (GetUp), out of line
	void sub_1024d920(VMatrix &out) const;
};
