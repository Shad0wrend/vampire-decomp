// Vector: three floats, with the Source engine's inline mathlib layer (mathlib/vector.h of the 2004 SDK).
// The operators return a temporary (Vector res; VectorXxx(*this, v, res); return res;) that VC6 /O2 copies into
// the destination with the inline operator=: x and y stay on the FPU, z goes through an integer register.
#pragma once

typedef float vec_t;

class Vector;

// mathlib's function pointers (set by the engine to the x87 / 3DNow! / SSE versions)
extern float (*pfSqrt)(float x);	// 0x10579660
extern float (*g_102be4dc)(float x);
extern float (__fastcall *pfVectorNormalize)(Vector &v);	// 0x1057966c

#define FastSqrt(x) (*pfSqrt)(x)

class Vector
{
public:
	vec_t x, y, z;

	Vector() {}
	Vector(vec_t X, vec_t Y, vec_t Z) : x(X), y(Y), z(Z) {}

	void Init(vec_t ix = 0.0f, vec_t iy = 0.0f, vec_t iz = 0.0f);

	vec_t operator[](int i) const;
	vec_t &operator[](int i);
	vec_t *Base();
	vec_t const *Base() const;

	bool operator==(const Vector &v) const;
	bool operator!=(const Vector &v) const;

	Vector &operator+=(const Vector &v);
	Vector &operator-=(const Vector &v);
	Vector &operator*=(const Vector &v);
	Vector &operator*=(float s);
	Vector &operator/=(const Vector &v);
	Vector &operator/=(float s);

	void Negate();
	vec_t Length() const;
	vec_t LengthSqr() const { return (x * x + y * y + z * z); }
	bool IsZero(float tolerance = 0.01f) const
	{
		return (x > -tolerance && x < tolerance &&
				y > -tolerance && y < tolerance &&
				z > -tolerance && z < tolerance);
	}
	vec_t NormalizeInPlace();
	vec_t DistTo(const Vector &vOther) const;
	vec_t DistToSqr(const Vector &vOther) const;
	void CopyToArray(float *rgfl) const;
	void MulAdd(const Vector &a, const Vector &b, float scalar);
	vec_t Dot(const Vector &vOther) const;
	vec_t Length2D() const;
	vec_t Length2DSqr() const;

	Vector &operator=(const Vector &vOther);

	Vector operator-() const;
	Vector operator+(const Vector &v) const;
	Vector operator-(const Vector &v) const;
	Vector operator*(const Vector &v) const;
	Vector operator/(const Vector &v) const;
	Vector operator*(float fl) const;
	Vector operator/(float fl) const;
	Vector Cross(const Vector &vOther) const;
	Vector Min(const Vector &vOther) const;
	Vector Max(const Vector &vOther) const;

	void sub_10004ce0(float minVal, float maxVal);	// Vector::Random: each component rand() * (max - min) / 32767 + min
	float sub_10107500();	// the C VectorNormalize (returns the length): v *= 1 / (sqrt(v.v) + FLT_EPSILON), not inlined
	Vector &sub_10039080(const Vector &v);	// operator=, where the game did not inline it
	Vector &sub_1013c790(const Vector &v);
		// provisional, like sub_1003e4b0 (transplant)
	Vector &sub_10049f20(vec_t X, vec_t Y, vec_t Z);	// constructor, where the game did not inline it
	Vector sub_10004d80(float fl) const;	// operator*(float), where the game did not inline it
	Vector sub_10049f40(const Vector &v) const;	// operator+, where the game did not inline it
		// operator+, a second out-of-line copy
	Vector sub_100b9b80(const Vector &v) const;	// operator-, where the game did not inline it
		// operator==, where the game did not inline it
};

// ---- free functions (mathlib/vector.h) ----

inline void VectorClear(Vector &a)
{
	a.x = a.y = a.z = 0.0f;
}

inline void VectorCopy(const Vector &src, Vector &dst)
{
	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
}

__forceinline void VectorAdd(const Vector &a, const Vector &b, Vector &c)
{
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
}

inline void VectorSubtract(const Vector &a, const Vector &b, Vector &c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
}

__forceinline void VectorMultiply(const Vector &a, vec_t b, Vector &c)
{
	c.x = a.x * b;
	c.y = a.y * b;
	c.z = a.z * b;
}

inline void VectorMultiply(const Vector &a, const Vector &b, Vector &c)
{
	c.x = a.x * b.x;
	c.y = a.y * b.y;
	c.z = a.z * b.z;
}

inline void VectorScale(const Vector &in, vec_t scale, Vector &result)
{
	VectorMultiply(in, scale, result);
}

inline void VectorDivide(const Vector &a, vec_t b, Vector &c)
{
	vec_t oob = 1.0f / b;
	c.x = a.x * oob;
	c.y = a.y * oob;
	c.z = a.z * oob;
}

inline void VectorDivide(const Vector &a, const Vector &b, Vector &c)
{
	c.x = a.x / b.x;
	c.y = a.y / b.y;
	c.z = a.z / b.z;
}

inline void VectorMA(const Vector &start, float scale, const Vector &direction, Vector &dest)
{
	dest.x = start.x + scale * direction.x;
	dest.y = start.y + scale * direction.y;
	dest.z = start.z + scale * direction.z;
}

inline void VectorLerp(const Vector &src1, const Vector &src2, vec_t t, Vector &dest)
{
	dest.x = src1.x + (src2.x - src1.x) * t;
	dest.y = src1.y + (src2.y - src1.y) * t;
	dest.z = src1.z + (src2.z - src1.z) * t;
}

inline vec_t DotProduct(const Vector &a, const Vector &b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

inline void CrossProduct(const Vector &a, const Vector &b, Vector &result)
{
	result.x = a.y * b.z - a.z * b.y;
	result.y = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
}

inline vec_t VectorLength(const Vector &v)
{
	return (vec_t)FastSqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

inline float VectorNormalize(Vector &v)
{
	return (*pfVectorNormalize)(v);
}

inline void VectorMin(const Vector &a, const Vector &b, Vector &result)
{
	result.x = (a.x < b.x) ? a.x : b.x;
	result.y = (a.y < b.y) ? a.y : b.y;
	result.z = (a.z < b.z) ? a.z : b.z;
}

inline void VectorMax(const Vector &a, const Vector &b, Vector &result)
{
	result.x = (a.x > b.x) ? a.x : b.x;
	result.y = (a.y > b.y) ? a.y : b.y;
	result.z = (a.z > b.z) ? a.z : b.z;
}

// ---- members ----

inline void Vector::Init(vec_t ix, vec_t iy, vec_t iz)
{
	x = ix; y = iy; z = iz;
}

inline Vector &Vector::operator=(const Vector &vOther)
{
	x = vOther.x; y = vOther.y; z = vOther.z;
	return *this;
}

inline vec_t &Vector::operator[](int i)
{
	return ((vec_t *)this)[i];
}

inline vec_t Vector::operator[](int i) const
{
	return ((vec_t *)this)[i];
}

inline vec_t *Vector::Base()
{
	return (vec_t *)this;
}

inline vec_t const *Vector::Base() const
{
	return (vec_t const *)this;
}

inline bool Vector::operator==(const Vector &src) const
{
	return (src.x == x) && (src.y == y) && (src.z == z);
}

inline bool Vector::operator!=(const Vector &src) const
{
	return (src.x != x) || (src.y != y) || (src.z != z);
}

inline void Vector::CopyToArray(float *rgfl) const
{
	rgfl[0] = x; rgfl[1] = y; rgfl[2] = z;
}

inline void Vector::Negate()
{
	x = -x; y = -y; z = -z;
}

inline Vector &Vector::operator+=(const Vector &v)
{
	x += v.x; y += v.y; z += v.z;
	return *this;
}

inline Vector &Vector::operator-=(const Vector &v)
{
	x -= v.x; y -= v.y; z -= v.z;
	return *this;
}

inline Vector &Vector::operator*=(float fl)
{
	x *= fl;
	y *= fl;
	z *= fl;
	return *this;
}

inline Vector &Vector::operator*=(const Vector &v)
{
	x *= v.x;
	y *= v.y;
	z *= v.z;
	return *this;
}

inline Vector &Vector::operator/=(float fl)
{
	float oofl = 1.0f / fl;
	x *= oofl;
	y *= oofl;
	z *= oofl;
	return *this;
}

inline Vector &Vector::operator/=(const Vector &v)
{
	x /= v.x;
	y /= v.y;
	z /= v.z;
	return *this;
}

inline vec_t Vector::Length() const
{
	return VectorLength(*this);
}

inline vec_t Vector::NormalizeInPlace()
{
	return VectorNormalize(*this);
}

inline vec_t Vector::DistTo(const Vector &vOther) const
{
	Vector delta;
	VectorSubtract(*this, vOther, delta);
	return delta.Length();
}

inline vec_t Vector::DistToSqr(const Vector &vOther) const
{
	Vector delta;
	VectorSubtract(*this, vOther, delta);
	return delta.LengthSqr();
}

inline void Vector::MulAdd(const Vector &a, const Vector &b, float scalar)
{
	x = a.x + b.x * scalar;
	y = a.y + b.y * scalar;
	z = a.z + b.z * scalar;
}

inline vec_t Vector::Dot(const Vector &vOther) const
{
	return DotProduct(*this, vOther);
}

inline vec_t Vector::Length2D() const
{
	return (vec_t)FastSqrt(x * x + y * y);
}

inline vec_t Vector::Length2DSqr() const
{
	return (x * x + y * y);
}

inline Vector Vector::Min(const Vector &vOther) const
{
	return Vector(x < vOther.x ? x : vOther.x,
				  y < vOther.y ? y : vOther.y,
				  z < vOther.z ? z : vOther.z);
}

inline Vector Vector::Max(const Vector &vOther) const
{
	return Vector(x > vOther.x ? x : vOther.x,
				  y > vOther.y ? y : vOther.y,
				  z > vOther.z ? z : vOther.z);
}

inline Vector Vector::operator-() const
{
	return Vector(-x, -y, -z);
}

inline Vector Vector::operator+(const Vector &v) const
{
	Vector res;
	VectorAdd(*this, v, res);
	return res;
}

inline Vector Vector::operator-(const Vector &v) const
{
	Vector res;
	VectorSubtract(*this, v, res);
	return res;
}

inline Vector Vector::operator*(float fl) const
{
	Vector res;
	VectorMultiply(*this, fl, res);
	return res;
}

inline Vector Vector::operator*(const Vector &v) const
{
	Vector res;
	VectorMultiply(*this, v, res);
	return res;
}

inline Vector Vector::operator/(float fl) const
{
	Vector res;
	VectorDivide(*this, fl, res);
	return res;
}

inline Vector Vector::operator/(const Vector &v) const
{
	Vector res;
	VectorDivide(*this, v, res);
	return res;
}

inline Vector operator*(float fl, const Vector &v)
{
	return v * fl;
}

inline Vector Vector::Cross(const Vector &vOther) const
{
	Vector res;
	CrossProduct(*this, vOther, res);
	return res;
}
