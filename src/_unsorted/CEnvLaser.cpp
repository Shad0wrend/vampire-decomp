// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10101480 size=0x12
#include "CEnvLaser.h"

CEnvLaser::CEnvLaser()
{
}
// END FUNCTION

// FUNCTION: 0x101014b0 size=0x1e
#include "CEnvLaser.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvLaser::vfunc5
CEnvLaser *CEnvLaser::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101017e0 size=0xe8
#include "CEnvLaser.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);
extern "C" int __cdecl atoi(const char *);

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CLaserSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20)
	SV(210) SV(211)
	virtual void s212(int iString);
};

struct CPooledStringX {
	int m_iString;
	CPooledStringX() {}
};
CPooledStringX sub_1042bff0(const char *psz);

bool CEnvLaser::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "width")) {
		float flWidth = atof(szValue);
		m_flWidth = flWidth;
		return true;
	}
	if (!_strcmpi(szKeyName, "NoiseAmplitude")) {
		m_flNoiseAmplitude = (float)atoi(szValue);
		return true;
	}
	if (!_strcmpi(szKeyName, "TextureScroll")) {
		m_flTextureScroll = (float)atoi(szValue);
		return true;
	}
	if (!_strcmpi(szKeyName, "texture")) {
		((CLaserSlotsX *)this)->s212(sub_1042bff0(szValue).m_iString);
		return true;
	}
	sub_1009e430(szKeyName, szValue);
	return true;
}
// END FUNCTION
