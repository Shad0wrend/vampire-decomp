// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
void CVariantSaveDataOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, CRestore *pRestore)
{
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
}
// END FUNCTION
