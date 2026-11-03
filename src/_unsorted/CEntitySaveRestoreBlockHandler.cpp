// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a3780 size=0x6
#include "CEntitySaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1059317c;
}
int CEntitySaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_1059317c;
}
// END FUNCTION

// FUNCTION: 0x101a37c0 size=0x123
#include "CSave.h"
#include "CEntitySaveRestoreBlockHandler.h"
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern CGlobalEntityList *g_10566458;
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct SaveX {
    virtual int GetTick();
    V16(p) V16(q) V4(r) virtual void m0();
    virtual void *GetBlock();
};
struct EntX {
    V64(p) V16(q) V16(r) V16(s) V4(t) virtual void m0();
    virtual int f117();
};
struct EngineX {
    V16(p) V16(q) virtual void m0(); virtual void m1(); virtual void m2();
    virtual int f35(int edict);
};
struct SaveEntry { char pad[0x10]; volatile unsigned int m_h10; int m_tick14; volatile int m_delta18; int m_f1c; unsigned __int64 m_flags20; int m_f28; int m_f2c; };
struct SaveBlock { char pad[0x1318]; int m_nEntries; SaveEntry *m_pEntries; };
extern EngineX *g_1070b22c;
static inline CGlobalEntityList_Ent *ResolveHandle(unsigned int h)
{
    if (h == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
    return s->m_Serial == (int)(h >> 13) ? s->m_pEntity : 0;
}
void CEntitySaveRestoreBlockHandler::vfunc2(CSave *pSaveArg)
{
    SaveX *pSave = (SaveX *)pSaveArg;
    SaveBlock *blk = (SaveBlock *)pSave->GetBlock();
    int i = 0;
    if (blk->m_nEntries > 0) {
        int off = 0;
        do {
            SaveEntry *e = (SaveEntry *)((char *)blk->m_pEntries + off);
            e->m_tick14 = pSave->GetTick();
            e->m_delta18 = 0;
            CBaseEntity *ent = (CBaseEntity *)ResolveHandle(e->m_h10);
            if (ent && !(((EntX *)ent)->f117() & 0x80000000)) {
                ent->vfunc126((int)pSave);
                e->m_delta18 = pSave->GetTick() - e->m_tick14;
                e->m_f28 = (int)ent->m_classname11c;
                if (ent->m_pEdict2e0 && 0 < g_1070b22c->f35(ent->m_pEdict2e0)) {
                    ent = (CBaseEntity *)ent->m_pEdict2e0;
                    if (g_1070b22c->f35((int)ent) < gpGlobals->maxClients + 1)
                        e->m_flags20 |= 0x8000000000000000ui64;
                }
            }
            i++;
            off += 0x30;
        } while (i < blk->m_nEntries);
    }
}
// END FUNCTION

// FUNCTION: 0x101a3940 size=0x73
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

extern int g_10592b18;
extern int g_10592b1c;

void CEntitySaveRestoreBlockHandler::vfunc3(CSave *pSave)
{
    ISaveOps *save = (ISaveOps *)pSave;
    SEntityBlock *block = save->GetEntityBlock();
    int count = block->m_count;
    save->WriteInt(&count, 1);
    for (int i = 0; i < block->m_count; i++)
        save->WriteFields("ETABLE", block->m_pEntries + i * 0x30, 0, g_10592b18, g_10592b1c);
}
// END FUNCTION

// FUNCTION: 0x101a39e0 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x101a3a00 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x101a3ae0 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc8()
{
}
// END FUNCTION
