// QAngle: three floats (pitch, yaw, roll), returned by value from some entity getters.
// The operators are the 2004 SDK's (mathlib/vector.h): per-component arithmetic, unlike Vector's, which goes through
// VectorAdd/VectorMultiply. That difference shows in x87 code (0x10037c10 RotateRootEntity: `angles += angVel *
// movetime` with QAngle gives fld angles.x; fadd st(2), Vector gives fxch; fadd). No user operator= and no copy
// constructor: the game's copies of a QAngle are the implicit ones.
#pragma once

class QAngle
{
public:
	QAngle() {}
	QAngle(float X, float Y, float Z) { x = X; y = Y; z = Z; }

	void Init(float ix = 0.0f, float iy = 0.0f, float iz = 0.0f) { x = ix; y = iy; z = iz; }
	// The SDK's inline operator=; its out-of-line copy is 0x1011d2e0 (called from ReadUsercmd 0x1011ccc0 for
	// CUserCmd::viewangles, where Vector::operator= 0x1003e4b0 is called for the Vector at +0x50).
	QAngle &operator=(const QAngle &vOther) { x = vOther.x; y = vOther.y; z = vOther.z; return *this; }

	float &operator[](int i) { return ((float *)this)[i]; }
	float operator[](int i) const { return ((float *)this)[i]; }

	bool operator==(const QAngle &src) const { return (src.x == x) && (src.y == y) && (src.z == z); }
	bool operator!=(const QAngle &src) const { return (src.x != x) || (src.y != y) || (src.z != z); }

	QAngle &operator+=(const QAngle &v) { x += v.x; y += v.y; z += v.z; return *this; }
	QAngle &operator-=(const QAngle &v) { x -= v.x; y -= v.y; z -= v.z; return *this; }
	QAngle &operator*=(float fl) { x *= fl; y *= fl; z *= fl; return *this; }
	QAngle &operator/=(float fl) { float oofl = 1.0f / fl; x *= oofl; y *= oofl; z *= oofl; return *this; }

	QAngle operator-() const { return QAngle(-x, -y, -z); }
	QAngle operator+(const QAngle &v) const { QAngle res; res.x = x + v.x; res.y = y + v.y; res.z = z + v.z; return res; }
	QAngle operator-(const QAngle &v) const { QAngle res; res.x = x - v.x; res.y = y - v.y; res.z = z - v.z; return res; }
	QAngle operator*(float fl) const { QAngle res; res.x = x * fl; res.y = y * fl; res.z = z * fl; return res; }
	QAngle operator/(float fl) const { QAngle res; res.x = x / fl; res.y = y / fl; res.z = z / fl; return res; }

	float x, y, z;
};

inline QAngle operator*(float fl, const QAngle &v) { return v * fl; }
