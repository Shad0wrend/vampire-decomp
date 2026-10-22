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

	Vector GetLeft() const;	// 0x1024d7b0 (column 1), out of line
	Vector GetUp() const;	// 0x1024d7e0 (column 2), out of line
	void sub_1024d920(VMatrix &out) const;
};
