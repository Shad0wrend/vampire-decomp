// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
