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

// FUNCTION: 0x1019e550 size=0x22
char __fastcall sub_10014da8(void *p);
void __fastcall sub_100011cc(void *p);

// TARGET: sub_1019e550
void __fastcall sub_1019e550(char *pThis)
{
    if (!sub_10014da8(pThis)) {
        *(unsigned int *)(pThis + 0x454) &= ~0x8u;
    }
    sub_100011cc(pThis);
}
// END FUNCTION

// FUNCTION: 0x1019e590 size=0x22
char __fastcall sub_10014da8(void *p);
void __fastcall sub_1000468d(void *p);

// TARGET: sub_1019e590
void __fastcall sub_1019e590(char *pThis)
{
    if (sub_10014da8(pThis)) {
        *(unsigned int *)(pThis + 0x454) |= 8;
    }
    sub_1000468d(pThis);
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
