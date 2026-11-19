// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d01f0 size=0x71
#include "CVTSDependencySaveRestoreDataOps.h"
#include <string.h>
void CVTSDependencySaveRestoreDataOps::vfunc0(SaveRestoreFieldInfo_t *pField, ISave *pSave)
{
#define pField ((CVTSDependencyField *)pField)
#define pSave ((CSave *)pSave)
	CVTSDependencyRecord *pRecord = pField->m_pRecord;
	bool bHas = pRecord && !pRecord->sub_10204250();
	pSave->vfunc12(&bHas, 1);
	if (bHas) {
		const char *psz = pRecord->sub_102043a0();
		int len = strlen(psz);
		pSave->vfunc10(&len, 1);
		pSave->vfunc20(psz);
	}
#undef pSave
#undef pField
}
// END FUNCTION

// FUNCTION: 0x100d0290 size=0x6e
#include "CVTSDependencySaveRestoreDataOps.h"
extern "C" void *malloc(unsigned int);
extern "C" void free(void *);

void CVTSDependencySaveRestoreDataOps::vfunc1(SaveRestoreFieldInfo_t *pField, IRestore *pRestore)
{
#define pField ((CVTSDependencyField *)pField)
#define pRestore ((CVTSDependencyRestore *)pRestore)
    CVTSDependencyRecord *pRecord = pField->m_pRecord;
    char bPresent = 0;
    pRestore->vfunc17(&bPresent, 1, 1);
    if (bPresent) {
        int nLength = pRestore->vfunc14() + 1;
        char *pBuffer = (char *)malloc(nLength);
        pRestore->vfunc21(pBuffer, nLength, nLength);
        pRecord->sub_10204570(pBuffer);
        free(pBuffer);
    } else {
        pRecord->sub_10204270();
    }
#undef pRestore
#undef pField
}
// END FUNCTION

// FUNCTION: 0x100d0320 size=0x20
#include "vampire.h"
char __fastcall sub_10204250(void *p);
// TARGET: sub_100d0320
int __stdcall sub_100d0320(void **p)
{
    if (*p != 0) {
        if (sub_10204250(*p) != 0) {
            return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100d0350 size=0xe
#include "CVTSDependencySaveRestoreDataOps.h"
namespace lifted {
struct C10010573 { int sub_10010573(); };
}
void CVTSDependencySaveRestoreDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
#define a0 ((int)a0)
    ((lifted::C10010573 *)(*(int *)((char *)a0)))->sub_10010573();
#undef a0
}
// END FUNCTION

// FUNCTION: 0x100d0370 size=0x5
#include "CVTSDependencySaveRestoreDataOps.h"
bool CVTSDependencySaveRestoreDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
    return 0;
}
// END FUNCTION
