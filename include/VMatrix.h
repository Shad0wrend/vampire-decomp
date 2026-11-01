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

	void Init(float m00, float m01, float m02, float m03,
		float m10, float m11, float m12, float m13,
		float m20, float m21, float m22, float m23,
		float m30, float m31, float m32, float m33)
	{
		m[0][0] = m00; m[0][1] = m01; m[0][2] = m02; m[0][3] = m03;
		m[1][0] = m10; m[1][1] = m11; m[1][2] = m12; m[1][3] = m13;
		m[2][0] = m20; m[2][1] = m21; m[2][2] = m22; m[2][3] = m23;
		m[3][0] = m30; m[3][1] = m31; m[3][2] = m32; m[3][3] = m33;
	}

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
	void sub_1024d500(VMatrix &ret) const;	// "VMatrix::InverseTR": ret = the inverse of a rotation + translation matrix (transposed 3x3, the translation transformed by it and negated, bottom row 0 0 0 1)
	void sub_1024d810(VMatrix &out, const Vector &vScale) const;	// out = this with its columns 0..2 scaled by vScale (the fourth column of the first three rows is copied, the corner is 1.0f)
	VMatrix *sub_1024da80(VMatrix &out) const;	// ecx = this, dst on the stack (ret 4): out[c][r] = m[r][c] for a 4x4 float copy that reads all 16 floats before any store (8 via fld, 8 via integer moves, frame 0x20); 0x1024d630 calls it with this = its dst and out = a local, then copies the local back with CBlock64_t::sub_1024cef0
	Vector sub_1024d670() const;	// "VMatrix::GetScale": the lengths of the three columns (returned through a hidden pointer)
};
