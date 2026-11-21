// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101351e0 size=0xc7
#include "utlrbtree.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "CUtlVector4.h"
#include "UtlVec8.h"

struct UVDataMap;
struct UVTypeDesc {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    void *inputFunc;
    UVDataMap *td;
    int fieldSizeInBytes;
    int unk;
};
struct UVDataMap {
    UVTypeDesc *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    UVDataMap *baseMap;
    bool chains_validated;
    bool packed_offsets_computed;
    int packed_size;
};
struct IRestoreView {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void ReadFields(const char *pname, void *pBaseData, UVDataMap *pMap, UVTypeDesc *pFields, int fieldCount);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual int ReadInt();
};

template <>
void CUtlVectorDataOps<CUtlVector<int, CUtlMemory<int> >, 4>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestoreV)
{
    IRestoreView *pRestore = (IRestoreView *)pRestoreV;
    UVTypeDesc dataDesc = { 4, "elems", { 0, 0 }, 1, 2, 0, 0, 0, 0 };
    UVDataMap dataMap = { &dataDesc, 1, "uv", 0, false, false, 0 };
    CUtlVector<int, CUtlMemory<int> > *pUtlVector = *(CUtlVector<int, CUtlMemory<int> > **)fieldInfo;
    int nElems = pRestore->ReadInt();
    pUtlVector->RemoveAll();
    if (nElems != 0) {
        ((CUtlVector4 *)pUtlVector)->sub_1008e5a0(nElems);
        ((UtlVec8 *)pUtlVector)->sub_1008e630(0, nElems);
        dataDesc.fieldSize = nElems;
        pRestore->ReadFields("elems", &((*pUtlVector)[0]), &dataMap, &dataDesc, 1);
    }
}
// END FUNCTION
