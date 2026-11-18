// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019d7d0 size=0x6
#include "CRopeKeyframe.h"
namespace lifted {
extern char g_1072b984;
}
int CRopeKeyframe::vfunc80()
{
    return (int)&lifted::g_1072b984;
}
// END FUNCTION

// FUNCTION: 0x1019d7f0 size=0x3
#include "CRopeKeyframe.h"
int CRopeKeyframe::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1019dbf0 size=0x6
#include "CRopeKeyframe.h"
namespace lifted {
extern char g_10592258;
}
datamap_t * CRopeKeyframe::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10592258);
}
// END FUNCTION

// FUNCTION: 0x1019dc80 size=0xb5
// The header models the start / end point handles as plain dwords; rope.h has CNetworkHandles, whose
// constructors store -1. Injected: the class ends with the two handles, the header's rest goes to a tail view.
#define sub_1019dc80() sub_1019dc80(); CRopeKeyframe()
#define m_padRope048e m_padRope048e[2]; EHANDLE m_hStart490, m_hEnd494; public: virtual datamap_t *vfunc82(); virtual int vfunc81(); virtual int vfunc80(); virtual int vfunc117(); }; struct CRopeKeyframeHeaderTail : CBaseEntity { char m_tail048e
#include "CRopeKeyframe.h"
#undef m_padRope048e
#undef sub_1019dc80

// The SDK members the header does not name yet (rope.h CNetworkVars).
struct CRopeKeyframeFields
{
	char m_pad0000[0x464];
	float m_TextureScale;	// 0x464
	char m_pad0468[0x470 - 0x468];
	int m_Subdiv;	// 0x470
	char m_pad0474[0x484 - 0x474];
	float m_flScrollSpeed;	// 0x484
	char m_pad0488[0x498 - 0x488];
	short m_iStartAttachment;	// 0x498
	short m_iEndAttachment;	// 0x49a
};
#define F ((CRopeKeyframeFields *)this)

// TARGET: CRopeKeyframe::CRopeKeyframe
CRopeKeyframe::CRopeKeyframe() : CBaseEntity(0)
{
	m_flags268 |= 0x80;
	m_nTakeDamage = 2;
	F->m_iStartAttachment = F->m_iEndAttachment = 0;
	m_n45c = 0;
	m_flWidth = 2.0f;
	F->m_TextureScale = 4.0f;
	m_nSegments = 5;
	m_n474 = 20;
	m_n478 = 3;
	F->m_flScrollSpeed = 0;
	m_nRopeFlags = 0x48;
	m_flRemoveTime480 = 0;
	m_nMaterialIndex = -1;
	F->m_Subdiv = 2;
	m_bCreatedFromMapFile = 1;
	m_b450 = 0;
}
// END FUNCTION

// FUNCTION: 0x1019dd70 size=0x8
#include "CRopeKeyframe.h"
// TARGET: CRopeKeyframe::sub_1019dd70
unsigned char CRopeKeyframe::sub_1019dd70()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1019dd90 size=0x1e
#include "CRopeKeyframe.h"

void sub_100aa7b0(void *p);

// TARGET: CRopeKeyframe::vfunc5
CRopeKeyframe *CRopeKeyframe::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1019e430 size=0xdc
#include "CRopeKeyframe.h"
#include "IVEngineServer.h"
#include "CGlobalEntityList.h"

extern IVEngineServer *g_1070b22c;
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

// TARGET: CRopeKeyframe::vfunc113
void CRopeKeyframe::vfunc113()
{
	sub_100a0bc0();
	if (m_bCreatedFromMapFile) {
		if (m_nMaterialIndex == -1)
			m_nMaterialIndex = g_1070b22c->vfunc13("cable/cable.vmt", 0);
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszName458 ? m_pszName458 : g_106b8540, 0, 0);
		if (pEnt && pEnt->m_pEdict2e0) {
			sub_100b3b00();
			pEnt->sub_100b3b00();
			sub_1019de30(pEnt, 0);
			if (*(unsigned char *)((char *)this + 0x204) & 1)
				m_nRopeFlags |= 1;
		} else {
			if (m_n478 & 2)
				m_nRopeFlags &= 0xfffffff7;
		}
		sub_1019ddc0(this, 0);
		sub_1019e310();
	}
}
// END FUNCTION

// FUNCTION: 0x1019e550 size=0x22
#include "CRopeKeyframe.h"
struct CUnknown100b5190 { char sub_100b5190(); };	// a CBaseEntity test (stub 0x10014da8)

// TARGET: CRopeKeyframe::vfunc77
void CRopeKeyframe::vfunc77()
{
	if (!((CUnknown100b5190 *)this)->sub_100b5190())
		m_nRopeFlags &= ~0x8u;
	CBaseEntity::vfunc77();
}
// END FUNCTION

// FUNCTION: 0x1019e590 size=0x22
#include "CRopeKeyframe.h"
struct CUnknown100b5190 { char sub_100b5190(); };	// a CBaseEntity test (stub 0x10014da8)

// TARGET: CRopeKeyframe::vfunc78
void CRopeKeyframe::vfunc78()
{
	if (((CUnknown100b5190 *)this)->sub_100b5190())
		m_nRopeFlags |= 8;
	CBaseEntity::vfunc78();
}
// END FUNCTION

// FUNCTION: 0x1019f1c0 size=0x13
#include "CRopeKeyframe.h"

int CRopeKeyframe::vfunc142(int a)
{
	if (m_nRopeFlags & 0x10)
		sub_1019ee40();
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1019f2b0 size=0x1c6
#include "CRopeKeyframe.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CRopeKeyframe::vfunc110(const char *szKeyName, const char *szValue)
{
	if (_strcmpi(szKeyName, "Breakable") == 0) {
		if (atoi(szValue) == 1)
			m_nRopeFlags |= 0x10;
	} else if (_strcmpi(szKeyName, "Collide") == 0) {
		if (atoi(szValue) == 1)
			m_nRopeFlags |= 4;
	} else if (_strcmpi(szKeyName, "Barbed") == 0) {
		if (atoi(szValue) == 1)
			m_nRopeFlags |= 2;
	} else if (_strcmpi(szKeyName, "Dangling") == 0) {
		if (atoi(szValue) == 1)
			m_n478 &= ~2;
		return true;
	} else if (_strcmpi(szKeyName, "Type") == 0) {
		int iType = atoi(szValue);
		if (iType == 0)
			m_nSegments = 10;
		else if (iType == 1)
			m_nSegments = 4;
		else
			m_nSegments = 2;
	} else if (_strcmpi(szKeyName, "RopeShader") == 0) {
		int iShader = atoi(szValue);
		if (iShader == 0)
			sub_1019f640("cable/cable.vmt");
		else if (iShader == 1)
			sub_1019f640("cable/rope.vmt");
		else
			sub_1019f640("cable/chain.vmt");
	}
	return CBaseEntity::vfunc110(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x1019f540 size=0x13
#include "CRopeKeyframe.h"
void __fastcall sub_1000350d(CRopeKeyframe *self);

// TARGET: CRopeKeyframe::vfunc103
void CRopeKeyframe::vfunc103()
{
	sub_1000350d(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1019f570 size=0x95
#include "CRopeKeyframe.h"

extern char *(__cdecl *g_109f384c)(const char *, const char *);
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);
extern char g_106b8540[];
int *sub_10002095(int *pTmp, const char *pStr);

void CRopeKeyframe::vfunc104()
{
	int tmp;
	char szBuf[260];
	const char *name = *(const char **)((char *)this + 0x488);
	if (!name)
		name = g_106b8540;
	if (!g_109f384c(name, ".vmt")) {
		name = *(const char **)((char *)this + 0x488);
		if (!name)
			name = g_106b8540;
		g_109f388c(szBuf, sizeof(szBuf), "%s.vmt", name);
		*(int *)((char *)this + 0x488) = *sub_10002095(&tmp, szBuf);
	}
	name = *(const char **)((char *)this + 0x488);
	if (!name)
		name = g_106b8540;
	*(int *)((char *)this + 0x46c) = engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x1019f690 size=0x1a
#include "CRopeKeyframe.h"

char CRopeKeyframe::vfunc86(int a, int b, int c, int d, int e)
{
	if (!m_b450)
	{
		m_b450 = 1;
		return 1;
	}
	return sub_100ab020(a, b, c, d, e);
}
// END FUNCTION
