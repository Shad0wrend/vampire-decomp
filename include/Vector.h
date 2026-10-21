// Vector: three floats.
#pragma once

class Vector
{
public:
	float x, y, z;

	Vector &sub_1003e4b0(const Vector &v);	// operator=
	Vector &sub_1011d2e0(const Vector &v);	// provisional, like sub_1003e4b0 (transplant)
	void sub_102dfed0();	// member worker run on a vector (stub 0x10010613)
};
