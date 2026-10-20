// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1022d4e0 size=0x90
#include "CTraitEffectsListSaveDataOps.h"
#include "CSave.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

struct TraitInfo
{
	char m_pad[8];
	const char *m_pszName;
};
struct TraitTable { TraitInfo *sub_1000c5d1(int id); };
extern TraitTable g_1074df78;
extern char g_106b8540[];

static inline const char *NameOf(const char *const *p)
{
	return *p ? *p : g_106b8540;
}

void CTraitEffectsListSaveDataOps::vfunc0(CTraitEffectsListField *pField, CSave *pSave)
{
	int *pList = pField->m_pList;
	pSave->vfunc10(pList, 1);
	for (int i = 0; i < *pList; i++) {
		const char *name = NameOf(&g_1074df78.sub_1000c5d1(pList[i + 1])->m_pszName);
		int len = strlen(name) + 1;
		pSave->vfunc10(&len, 1);
		pSave->vfunc20(name);
	}
}
// END FUNCTION
