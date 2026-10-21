// Vector: three floats.
#pragma once

class Vector
{
public:
	float x, y, z;

	Vector() {}
	Vector(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

	Vector &sub_1003e4b0(const Vector &v);	// operator=
	Vector &sub_1011d2e0(const Vector &v);	// provisional, like sub_1003e4b0 (transplant)
	float sub_10137220();	// returns float, result unused by callers seen
};
