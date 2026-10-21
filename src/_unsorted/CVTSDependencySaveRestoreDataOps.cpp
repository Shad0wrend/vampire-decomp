// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d01f0 size=0x71
#include "CVTSDependencySaveRestoreDataOps.h"
#include <string.h>
void CVTSDependencySaveRestoreDataOps::vfunc0(CVTSDependencyField *pField, CSave *pSave)
{
	CVTSDependencyRecord *pRecord = pField->m_pRecord;
	bool bHas = pRecord && !pRecord->sub_10204250();
	pSave->vfunc12(&bHas, 1);
	if (bHas) {
		const char *psz = pRecord->sub_102043a0();
		int len = strlen(psz);
		pSave->vfunc10(&len, 1);
		pSave->vfunc20(psz);
	}
}
// END FUNCTION

// FUNCTION: 0x100d0290 size=0x6e
#include "CVTSDependencySaveRestoreDataOps.h"
extern "C" void *malloc(unsigned int);
extern "C" void free(void *);

void CVTSDependencySaveRestoreDataOps::vfunc1(CVTSDependencyField *pField, CVTSDependencyRestore *pRestore)
{
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
}
// END FUNCTION
