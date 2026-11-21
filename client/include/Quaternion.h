// Quaternion: four floats (mathlib/mathlib.h of the 2004 SDK).
#pragma once

class Quaternion
{
public:
	float x, y, z, w;

	Quaternion() {}

	float operator[](int i) const { return ((float *)this)[i]; }
	float &operator[](int i) { return ((float *)this)[i]; }
};
