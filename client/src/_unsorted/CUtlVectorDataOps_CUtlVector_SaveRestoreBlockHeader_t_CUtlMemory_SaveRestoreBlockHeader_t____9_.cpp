// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012c200 size=0xc4
#include "CSaveRestoreBlockSet.h"
#include "datamap.h"
#include "ISave.h"
#include "CUtlVectorDataOps.h"

struct DMExt	// datamap_t with the trailing members the game's compiler keeps (chain flags, packed size)
{
	typedescription_t *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	datamap_t *baseMap;
	bool chainsValidated;
	bool packedOffsetsComputed;
	int packedSize;
};

// TARGET: CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc0
void CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	typedef CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> > VEC;
	extern datamap_t g_102c36d8;
	extern char g_102c3b2c[];
	extern char g_102c3b30[];
	typedescription_t dataDesc = { 9, g_102c3b30, { 0, 0 }, 1, 2, 0, 0, 0, &g_102c36d8 };
	DMExt dm;
	dm.dataDesc = &dataDesc;
	dm.dataNumFields = 1;
	dm.dataClassName = g_102c3b2c;
	dm.baseMap = 0;
	dm.chainsValidated = false;
	dm.packedOffsetsComputed = false;
	dm.packedSize = 0;
	VEC *pUtlVector = (VEC *)fieldInfo->pField;
	int nElems = pUtlVector->Count();
	pSave->vfunc10(&nElems, 1);
	for (int i = 0; i < nElems; i++)
		pSave->vfunc2(pUtlVector->Base() + i, (const char *)&dm);
}
// END FUNCTION
