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

void CTraitEffectsListSaveDataOps::vfunc0(SaveRestoreFieldInfo_t *pField, ISave *pSave)
{
#define pField ((CTraitEffectsListField *)pField)
#define pSave ((CSave *)pSave)
	int *pList = pField->m_pList;
	pSave->vfunc10(pList, 1);
	for (int i = 0; i < *pList; i++) {
		const char *name = NameOf(&g_1074df78.sub_1000c5d1(pList[i + 1])->m_pszName);
		int len = strlen(name) + 1;
		pSave->vfunc10(&len, 1);
		pSave->vfunc20(name);
	}
#undef pSave
#undef pField
}
// END FUNCTION

// FUNCTION: 0x1022d5a0 size=0x63
#include "CRestore.h"
#include "CTraitEffectsListSaveDataOps.h"

struct STraitLookup { int sub_101f83a0(const char *); };
extern STraitLookup g_1074df78;
extern char g_106b8540[];

// TARGET: CTraitEffectsListSaveDataOps::vfunc1
void CTraitEffectsListSaveDataOps::vfunc1(SaveRestoreFieldInfo_t *pField, IRestore *pRestore)
{
#define pField ((CTraitEffectsListField *)pField)
#define pRestore ((CRestore *)pRestore)
	int *pList = pField->m_pList;
	pList[0] = pRestore->vfunc14();
	for (int i = 0; i < pList[0]; i++)
	{
		const char *name;
		int nBytes = pRestore->vfunc14();
		pRestore->vfunc20((int *)&name, 1, nBytes);
		pList[i + 1] = g_1074df78.sub_101f83a0(name ? name : g_106b8540);
	}
#undef pRestore
#undef pField
}
// END FUNCTION

// FUNCTION: 0x1022d630 size=0x5
#include "CTraitEffectsListSaveDataOps.h"
bool CTraitEffectsListSaveDataOps::vfunc2(SaveRestoreFieldInfo_t *a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1022d650 size=0x3
#include "CTraitEffectsListSaveDataOps.h"
void CTraitEffectsListSaveDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
}
// END FUNCTION

// FUNCTION: 0x1022d670 size=0x5
#include "CTraitEffectsListSaveDataOps.h"
bool CTraitEffectsListSaveDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
    return 1;
}
// END FUNCTION
