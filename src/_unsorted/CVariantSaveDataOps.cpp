// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d0c90 size=0x1e4
#include "CVariantSaveDataOps.h"

struct CVariantSaveTD { int fieldType; const char *fieldName; };
struct CVariantSaveV3 { int x, y, z; };
extern int g_1055debc[];
extern int g_1055dee8[];
extern int g_1055df14[];
extern int g_1055df40[];
extern int g_1055df6c[];
extern int g_1055df98[];
extern int g_1055dfc4[];
extern int g_1055dff0[];
extern CVariantSaveV3 g_1070d1b0;
__declspec(dllimport) void Warning(const char *fmt, ...);

void CVariantSaveDataOps::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
#define pSave ((CSave *)pSave)
	CVariantCopy *pVar = (CVariantCopy *)fieldInfo->pField;
	int type = pVar->m_fieldType;
	pSave->vfunc10(&type, 1);
	switch (pVar->m_fieldType) {
	case 5:
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)pVar, 0, (int)g_1055debc, 1);
		break;
	case 4:
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)pVar, 0, (int)g_1055dee8, 1);
		break;
	case 1:
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)pVar, 0, (int)g_1055df14, 1);
		break;
	case 0xc:
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)pVar, 0, (int)g_1055df40, 1);
		break;
	case 2:
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)pVar, 0, (int)g_1055df6c, 1);
		break;
	case 8:
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)pVar, 0, (int)g_1055df98, 1);
		break;
	case 3: {
		CVariantSaveV3 vec;
		if (pVar->m_fieldType == 3 || pVar->m_fieldType == 0xe)
			vec = *(CVariantSaveV3 *)pVar;
		else
			vec = g_1070d1b0;
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)&vec, 0, (int)g_1055dfc4, 1);
		break;
	}
	case 0xe: {
		CVariantSaveV3 vec;
		if (pVar->m_fieldType == 3 || pVar->m_fieldType == 0xe)
			vec = *(CVariantSaveV3 *)pVar;
		else
			vec = g_1070d1b0;
		pSave->vfunc3((int)((CVariantSaveTD *)fieldInfo->pTypeDesc)->fieldName, (int)&vec, 0, (int)g_1055dff0, 1);
		break;
	}
	default:
		Warning("Bad type %d in saved variant_t\n", pVar->m_fieldType);
		break;
	}
#undef pSave
}
// END FUNCTION

// FUNCTION: 0x100d0f00 size=0x190
#include "CVariantSaveDataOps.h"

__declspec(dllimport) void Warning(const char *fmt, ...);
extern int g_1055debc[];
extern int g_1055dee8[];
extern int g_1055df14[];
extern int g_1055df40[];
extern int g_1055df6c[];
extern int g_1055df98[];
extern int g_1055dfc4[];
extern int g_1055dff0[];

#define RD(desc, dst) pRestore->vfunc3(*(int *)((char *)fieldInfo->pTypeDesc + 4), (int)(dst), 0, (int)(desc), 1)

// TARGET: CVariantSaveDataOps::vfunc1
void CVariantSaveDataOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
#define pRestore ((CRestore *)pRestore)
	CVariantCopy *pVariant = (CVariantCopy *)fieldInfo->pField;
	CVariantCopy var;
	Vector vec;
	int type = pRestore->vfunc14();
	switch (type)
	{
	case 5:
		RD(g_1055debc, &var);
		break;
	case 4:
		RD(g_1055dee8, &var);
		break;
	case 1:
		RD(g_1055df14, &var);
		break;
	case 12:
		RD(g_1055df40, &var);
		break;
	case 2:
		RD(g_1055df6c, &var);
		break;
	case 8:
		RD(g_1055df98, &var);
		break;
	case 3:
		RD(g_1055dfc4, &vec);
		((Vector *)&var.m_value)->Init(vec.x, vec.y, vec.z);
		var.m_fieldType = 3;
		break;
	case 14:
		RD(g_1055dff0, &vec);
		((Vector *)&var.m_value)->Init(vec.x, vec.y, vec.z);
		var.m_fieldType = 14;
		break;
	default:
		Warning("Bad type %d in saved variant_t\n", pVariant->m_fieldType);
		break;
	}
	pVariant->sub_1000b320(type, &var);
#undef pRestore
}
// END FUNCTION

// FUNCTION: 0x100d1100 size=0x2d
struct CVSDMeta { char pad[0x10]; short count; };
struct CVSDOps { int *data; int unk4; CVSDMeta *meta; };

// TARGET: sub_100d1100
bool __stdcall sub_100d1100(CVSDOps *p)
{
    int i = 0;
    int *e = p->data;
    int n = p->meta->count;
    for (; i < n; i++, e += 5) {
        if (*(int *)((char *)e + 0x10) != 0) {
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x100d1140 size=0x3
#include "CVariantSaveDataOps.h"
void CVariantSaveDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
}
// END FUNCTION
