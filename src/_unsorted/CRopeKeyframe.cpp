// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x1019f570 size=0x95
#include "CRopeKeyframe.h"
#include "IVEngineServer.h"

extern char *(__cdecl *g_109f384c)(const char *, const char *);
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);
extern IVEngineServer *g_1070b22c;
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
	*(int *)((char *)this + 0x46c) = g_1070b22c->vfunc13(name, 0);
}
// END FUNCTION
