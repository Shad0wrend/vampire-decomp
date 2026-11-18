// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101013f0 size=0x6
#include "CEnvLaser.h"
namespace lifted {
extern char g_10569078;
}
datamap_t *CEnvLaser::vfunc82()
{
    return (datamap_t *)&lifted::g_10569078;
}
// END FUNCTION

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
CBaseEntity *CEnvLaser::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101014e0 size=0x1f2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionProperty.h"
#include "CEnvLaser.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct CSpriteView : CBaseEntity {
	void sub_1042eee0(int a, int b);
	void SetTransparency(int rendermode, int r, int g, int b, int a, int fx)
	{
		m_n16c = rendermode;
		*((unsigned char *)this + 0x1a0) = r;
		*((unsigned char *)this + 0x1a1) = g;
		*((unsigned char *)this + 0x1a2) = b;
		sub_1042eee0(a, 0);
		m_n168 = fx;
	}
};
struct CLaserView : CEnvLaser {
	void sub_101019d0();
	float GetWidth() const { return m_fWidth; }
	void SetEndWidth(float w) { m_fEndWidth = w; }
};
CSpriteView *sub_1042ea40(const char *name, void *p, int n);
void sub_101c0b10();
void sub_10101b30();
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CEnvLaser::vfunc103()
{
	int tmp;
	CEntityVSlots *v = (CEntityVSlots *)this;
	if (*(int *)vfunc9(&tmp) == 0) {
		sub_100ac4e0((int)sub_101c0b10, 0, 0);
		return;
	}
	{
		ScopeTrace st("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	sub_100ac4e0((int)::sub_10101b30, 0, 0);
	((CLaserView *)this)->SetEndWidth(((CLaserView *)this)->GetWidth() * 0.1);
	sub_100bb870((int)v->slot220(), (float *)v->slot220());
	sub_100b3b00();
	vfunc104();
	if (!m_pSprite4f8 && m_pszTexture4fc) {
		m_pSprite4f8 = (CEnvLaserSprite *)sub_1042ea40(STRINGR(m_pszTexture4fc), v->slot217(), 1);
	} else {
		m_pSprite4f8 = 0;
	}
	if (m_pSprite4f8) {
		((CSpriteView *)m_pSprite4f8)->sub_100a0670((CBaseEntity *)EHandle_Get(m_hMoveParent), 0);
		unsigned char *c = (unsigned char *)this + 0x1a0;
		((CSpriteView *)m_pSprite4f8)->SetTransparency(3, c[0], c[1], c[2], c[3], m_n168);
	}
	if (m_name26c && !(m_flags204 & 1))
		((CLaserView *)this)->sub_101019d0();
	else
		sub_10101a20();
}
// END FUNCTION

// FUNCTION: 0x10101760 size=0x59
#include "CEnvLaser.h"
static inline const char *SafeString(const char *const &psz)
{
	return psz ? psz : "";
}
void CEnvLaser::vfunc104()
{
	int dummy;
	const char *pszModel = *vfunc9(&dummy);
	if (!pszModel)
		pszModel = "";
	vfunc10(engine->vfunc13(pszModel, 0));
	if (m_pszTexture4fc)
		engine->vfunc13(SafeString(m_pszTexture4fc), 0);
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
