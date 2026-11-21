// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012b5f0 size=0x6
#include "CEntitySaveRestoreBlockHandler.h"
namespace lifted {
extern char g_102c3a04;
}
int CEntitySaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_102c3a04;
}
// END FUNCTION

// FUNCTION: 0x1012b6e0 size=0x73
#include "CSave.h"
#include "CEntitySaveRestoreBlockHandler.h"

struct SEntityBlock {
    char pad[0x1318];
    int m_count;
    char *m_pEntries;
};

struct ISaveOps {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void WriteFields(const char *name, void *pData, int unused, int fields, int numFields);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual void WriteInt(int *pData, int n);
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37();
    virtual SEntityBlock *GetEntityBlock();
};

extern int g_102c3508;
extern int g_102c350c;

void CEntitySaveRestoreBlockHandler::vfunc3(CSave *pSave)
{
    ISaveOps *save = (ISaveOps *)pSave;
    SEntityBlock *block = save->GetEntityBlock();
    int count = block->m_count;
    save->WriteInt(&count, 1);
    for (int i = 0; i < block->m_count; i++)
        save->WriteFields("ETABLE", block->m_pEntries + i * 0x30, 0, g_102c3508, g_102c350c);
}
// END FUNCTION

// FUNCTION: 0x1012b760 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x1012b770 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x1012b810 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc8()
{
}
// END FUNCTION
