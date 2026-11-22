// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x101a5a80 size=0x201
#include "datamap.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);
extern "C" int __cdecl atoi(const char *);
__declspec(dllimport) void __cdecl Warning(const char *pMsg, ...);
struct PooledString1042bff0
{
	PooledString1042bff0() {}
	PooledString1042bff0(const char *p) : pszValue(p) {}
	const char *pszValue;
};
PooledString1042bff0 sub_1042bff0(const char *szValue);
void sub_101d03e0(void *pDest, const char *szValue);
void sub_101d0630(void *pDest, const char *szValue);
bool sub_1000ed59(void *pObject, typedescription_t *pFields, int iNumFields, const char *szKeyName, const char *szValue);

// TARGET: sub_101a5a80
bool sub_101a5a80(void *pObject, typedescription_t *pFields, int iNumFields, const char *szKeyName, const char *szValue)
{
	int i;
	typedescription_t *pField;

	for (i = 0; i < iNumFields; i++)
	{
		pField = &pFields[i];

		int fieldOffset = pField->fieldOffset[0];

		if ((pField->fieldType == 9) && (pField->fieldSize == 1))
		{
			for (datamap_t *dmap = pField->td; dmap != 0; dmap = dmap->baseMap)
			{
				void *pEmbeddedObject = (void *)((char *)pObject + fieldOffset);
				if (sub_1000ed59(pEmbeddedObject, dmap->dataDesc, dmap->dataNumFields, szKeyName, szValue))
					return true;
			}
		}

		if ((pField->flags & 4) && !_strcmpi(pField->externalName, szKeyName))
		{
			switch (pField->fieldType)
			{
			case 2:
			case 16:
			case 17:
				(*(PooledString1042bff0 *)((char *)pObject + fieldOffset)) = sub_1042bff0(szValue);
				return true;
			case 1:
			case 15:
				(*(float *)((char *)pObject + fieldOffset)) = atof(szValue);
				return true;
			case 5:
				(*(bool *)((char *)pObject + fieldOffset)) = (bool)(atoi(szValue) != 0);
				return true;
			case 7:
				(*(char *)((char *)pObject + fieldOffset)) = (char)atoi(szValue);
				return true;
			case 6:
				(*(short *)((char *)pObject + fieldOffset)) = (short)atoi(szValue);
				return true;
			case 4:
				(*(int *)((char *)pObject + fieldOffset)) = atoi(szValue);
				return true;
			case 3:
			case 14:
				sub_101d03e0((float *)((char *)pObject + fieldOffset), szValue);
				return true;
			case 8:
				sub_101d0630((char *)pObject + fieldOffset, szValue);
				return true;
			case 10:
			{
				SaveRestoreFieldInfo_t fieldInfo = { (char *)pObject + fieldOffset, pObject, pField };
				pField->pSaveRestoreOps->vfunc4((SaveRestoreFieldInfo_t *)&fieldInfo, szValue);
				return true;
			}
			default:
			case 9:
			case 11:
			case 12:
			case 13:
				Warning("Bad field in entity!!\n");
				break;
			}
		}
	}

	return false;
}
// END FUNCTION
