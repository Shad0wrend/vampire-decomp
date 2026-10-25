// QAngle: three floats (pitch, yaw, roll), returned by value from some entity getters.
#pragma once

class QAngle
{
public:
	QAngle() {}
	QAngle(float X, float Y, float Z) { x = X; y = Y; z = Z; }

	float x, y, z;
};
