// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023ac90 size=0x20
#include "vampire.h"
#include "CDecal.h"
// TARGET: CDecal::CTraceFilterValidForDecal::CTraceFilterValidForDecal
CDecal::CTraceFilterValidForDecal::CTraceFilterValidForDecal(void *pPassEnt, int collisionGroup)
    : CTraceFilterSimple(pPassEnt, collisionGroup)
{
}
// END FUNCTION

// FUNCTION: 0x1023acc0 size=0xbb
#include "CBaseEntity.h"
#include "CDecal.h"
#include "CBCCSlotViews.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

class CGameRulesView	// slot 3 of the global object at 0x1070b240
{
public:
	VIEW_SLOT(0) VIEW_SLOT(1) VIEW_SLOT(2)
	virtual bool vfunc3(void *pHandleEntity);
};
extern CGameRulesView *g_1070b240;
extern const char *g_105c2648[6];
extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);

#define CLASSNAME_OF(e, out) const char *out = *(const char *volatile *)&(e)->m_classname11c; if (!out) out = g_106b8540;

bool CDecal::CTraceFilterValidForDecal::vfunc0(void *pHandleEntity, int contentsMask)
{
	CBaseEntity *pEnt;
	if (g_1070b240->vfunc3(pHandleEntity))
		pEnt = 0;
	else
		pEnt = (CBaseEntity *)((CServerUnknownSlotView *)pHandleEntity)->vfunc4();
	for (unsigned int i = 0; i < 6; i++) {
		bool bMatch;
		const char *pszName = g_105c2648[i];
		CLASSNAME_OF(pEnt, pszClass0)
		if (pszClass0 == pszName) {
			bMatch = true;
		} else {
			unsigned int len = strlen(pszName);
			int cmp;
			if (len == 0) {
				cmp = (int)pEnt->m_name26c;
			} else if (pszName[len - 1] != '*') {
				CLASSNAME_OF(pEnt, pszClass1)
				cmp = _strcmpi(pszClass1, pszName);
			} else {
				CLASSNAME_OF(pEnt, pszClass2)
				cmp = _strnicmp(pszClass2, pszName, len - 1);
			}
			bMatch = cmp == 0;
		}
		if (bMatch)
			return false;
	}
	return CTraceFilterSimple::vfunc0(pHandleEntity, contentsMask);
}
// END FUNCTION
