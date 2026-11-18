// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a2e40 size=0x430
#define vfunc7() vfunc7(void *pRestore, char createPlayers, int unused)
#include "CEntitySaveRestoreBlockHandler.h"
#undef vfunc7
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEntitySaveRestoreBlockHandler.h"
#include "CUnknown10057680.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

struct CBaseEntityGN { char pad[0x120]; const char *m_iGlobalname120; };
struct SRestoreInfoV;
struct SRestoreV {
	virtual void v0();
	virtual void SetReadPos(int pos);
	virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
	virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32();
	virtual SRestoreInfoV *GetGameSaveRestoreInfo();
};
struct SEntInfoV {
	int id;
	int edictindex;
	int saveentityindex;
	int restoreentityindex;
	EHANDLE hEnt;
	int location;
	int size;
	int m1c;
	__int64 flags;
	const char *classname;
	int m2c;
};
struct SRestoreInfoV {
	char pad[0x1318];
	int m_nEntities;
	SEntInfoV *m_pEntityTable;
	int NumEntities() { return m_nEntities; }
	SEntInfoV *GetEntityInfo(int i) { return &m_pEntityTable[i]; }
};
struct SGlobalEntityV {
	char pad[0x40];
	char levelName[0x20];
	int state;
};
CBaseEntity *sub_10136580(const char *);
CBaseEntity *sub_1015d790(const char *, int);
void sub_1011a580(CBaseEntity *);
void sub_101cd970(CBaseEntity *);
__declspec(dllimport) void Warning(const char *, ...);
extern "C" int _strcmpi(const char *, const char *);
struct CGlobalStateV : CUnknown10057680 { char *sub_10057800(const char *pszName); };
extern CUnknown10057680 g_106be530;
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct gstr_t
{
	const char *pszValue;
	bool operator!() const { return (pszValue == 0); }
	bool operator!=(const gstr_t &rhs) const { return (pszValue != rhs.pszValue); }
	const char *ToCStr() const { return (pszValue) ? pszValue : g_106b8540; }
};
struct cgstr_t : gstr_t { cgstr_t() { pszValue = 0; } };
#define NULL_STRING cgstr_t()
#define STRING(s) (s).ToCStr()
struct CBaseEntityGS { char pad[0x11c]; gstr_t m_iClassname; gstr_t m_iGlobalname; };
struct CGlobalVarsGS { char pad[0x24]; gstr_t mapname; };
#define GPG ((CGlobalVarsGS *)gpGlobals)
struct CGlobalStateGS : CUnknown10057680 { SGlobalEntityV *sub_10057800(gstr_t name); void sub_10057740(gstr_t name, gstr_t map, int state); };
namespace block_101a2e40 {
inline bool FStrEq(const char *a, const char *b) { return _strcmpi(a, b) == 0; }
inline void *INDEXENT(int i) { return engine->vfunc38(i); }

struct CESRBHUnit : CEntitySaveRestoreBlockHandler {
	char sub_101a3380(CBaseEntity *pEntity, void *pRestore);
	int RestoreEntity(CBaseEntity *pEntity, SRestoreV *pRestore, SEntInfoV *pEntInfo)
	{
		if (!sub_101a3380(pEntity, pRestore))
			return 0;
		CBaseEntityGS *pE = (CBaseEntityGS *)pEntity;
		if (pE->m_iGlobalname != NULL_STRING) {
			SGlobalEntityV *pGlobal = ((CGlobalStateGS *)&g_106be530)->sub_10057800(pE->m_iGlobalname);
			if (pGlobal) {
				if (pGlobal->state == 2)
					return -1;
				else if (!FStrEq(STRING(GPG->mapname), pGlobal->levelName))
					pEntity->sub_100a8060();
			} else {
				Warning("Global Entity %s (%s) not in table!!!\n", STRING(pE->m_iGlobalname), STRING(pE->m_iClassname));
				((CGlobalStateGS *)&g_106be530)->sub_10057740(pE->m_iGlobalname, GPG->mapname, 1);
			}
		}
		return 0;
	}
};
}
using namespace block_101a2e40;

// TARGET: CEntitySaveRestoreBlockHandler::vfunc7
void CEntitySaveRestoreBlockHandler::vfunc7(void *pRestoreArg, char createPlayers, int unused)
{
	SRestoreV *pRestore = (SRestoreV *)pRestoreArg;
	SEntInfoV *pEntInfo;
	CBaseEntity *pent;
	SRestoreInfoV *pSaveData = pRestore->GetGameSaveRestoreInfo();
	int i;
	for (i = 0; i < pSaveData->NumEntities(); i++) {
		pEntInfo = pSaveData->GetEntityInfo(i);
		if (pEntInfo->classname && pEntInfo->size && !(pEntInfo->flags & 0x4000000000000000i64)) {
			if (pEntInfo->edictindex == 0) {
				pent = sub_10136580(STRINGR(pEntInfo->classname));
				pRestore->SetReadPos(pEntInfo->location);
				if (((CESRBHUnit *)this)->RestoreEntity(pent, pRestore, pEntInfo) < 0) {
					pEntInfo->hEnt = 0;
					pEntInfo->restoreentityindex = -1;
					sub_101cd970(pent);
				} else {
					sub_1011a580(pent);
				}
			} else if (pEntInfo->edictindex > 0 && pEntInfo->edictindex < gpGlobals->maxClients + 1) {
				if (!(pEntInfo->flags & 0x8000000000000000i64))
					Warning("ENTITY IS NOT A PLAYER: %d\n", i);
				int ed = (int)INDEXENT(pEntInfo->edictindex);
				if (ed && createPlayers)
					pent = sub_1015d790(STRINGR(pEntInfo->classname), ed);
				else
					pent = 0;
			} else {
				pent = sub_10136580(STRINGR(pEntInfo->classname));
			}
			pEntInfo->hEnt = pent;
			pEntInfo->restoreentityindex = pent ? engine->vfunc35(pent->m_pEdict2e0) : -1;
			if (pent && pEntInfo->restoreentityindex == 0) {
				if (_strcmpi(STRINGR(pent->m_classname11c), "worldspawn") != 0)
					pEntInfo->restoreentityindex = -1;
			}
		} else {
			pEntInfo->hEnt = 0;
			pEntInfo->restoreentityindex = -1;
		}
	}
	for (i = 0; i < pSaveData->NumEntities(); i++) {
		pEntInfo = pSaveData->GetEntityInfo(i);
		if (pEntInfo->edictindex != 0) {
			pent = pEntInfo->hEnt;
			pRestore->SetReadPos(pEntInfo->location);
			if (pent) {
				CBaseHandle h;
				h = (IHandleEntity *)pent;
				pent->vfunc127((int)pRestore);
				if (pent->vfunc117() & 4)
					pent->vfunc103();
				else
					pent->vfunc104();
				if (g_10566458->sub_100290c0((const unsigned int *)&h))
					g_10566458->sub_100290c0((const unsigned int *)&h)->sub_1009d1e0();
				if (g_10566458->sub_100290c0((const unsigned int *)&h) && ((CBaseEntityGN *)pent)->m_iGlobalname120) {
					char *pGlobal = ((CGlobalStateV *)&g_106be530)->sub_10057800(((CBaseEntityGN *)pent)->m_iGlobalname120);
					if (pGlobal && *(int *)(pGlobal + 0x60) != 2) {
						if (_strcmpi(STRINGR(gpGlobals->mapname), pGlobal + 0x40) != 0)
							pent->sub_100a8060();
					} else if (!pGlobal) {
						Warning("Global Entity %s (%s) not in table!!!\n", STRINGR(((CBaseEntityGN *)pent)->m_iGlobalname120), STRINGR(pent->m_classname11c));
						g_106be530.sub_10057740(((CBaseEntityGN *)pent)->m_iGlobalname120, gpGlobals->mapname, 1);
					} else {
						pEntInfo->hEnt = 0;
						sub_101cd970(pent);
						continue;
					}
				}
				sub_1011a580(pent);
			}
		}
	}
}
// END FUNCTION

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

// FUNCTION: 0x101a37a0 size=0x5
#include "CUnknown101a2c30.h"
#include "CEntitySaveRestoreBlockHandler.h"
// TARGET: CEntitySaveRestoreBlockHandler::vfunc1
// the game's 0x101a37a0: a tail call (jmp) of CEntitySaveRestoreBlockHandler::sub_101a2c30
bool CEntitySaveRestoreBlockHandler::vfunc1(class CUnknown101a2c30 *a0)
{
	return ((CEntitySaveRestoreBlockHandler *)this)->CEntitySaveRestoreBlockHandler::sub_101a2c30(a0);
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

// FUNCTION: 0x101a3a20 size=0x90
#include "CEntitySaveRestoreBlockHandler.h"

#define RV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

extern void *g_10592b18;
extern int g_10592b1c;

struct entitytable_view { char pad[0x30]; };

struct SSaveInfoLike
{
	char pad0[0x1318];
	int m_nEntities;
	entitytable_view *m_pEntityData;
	void InitEntityTable(entitytable_view *pNewTable, int size) { m_pEntityData = pNewTable; m_nEntities = size; }
	int NumEntities() { return m_nEntities; }
	entitytable_view *GetEntityInfo(int i) { return m_pEntityData + i; }
};

struct SRestoreSlots
{
	virtual void slot0(); virtual void slot1(); virtual void slot2();
	virtual int ReadFields(const char *name, void *pBase, int pMap, void *pFields, int nFields);
	virtual void slot4(); virtual void slot5(); virtual void slot6(); virtual void slot7(); virtual void slot8(); virtual void slot9();
	virtual void slot10(); virtual void slot11(); virtual void slot12(); virtual void slot13(); virtual void slot14();
	virtual int ReadInt(int *pValue, int count, int unused);
	virtual void slot16(); virtual void slot17(); virtual void slot18(); virtual void slot19();
	virtual void slot20(); virtual void slot21(); virtual void slot22(); virtual void slot23(); virtual void slot24();
	virtual void slot25(); virtual void slot26(); virtual void slot27(); virtual void slot28(); virtual void slot29();
	virtual void slot30(); virtual void slot31(); virtual void slot32();
	virtual SSaveInfoLike *GetSaveInfo();
};

void CEntitySaveRestoreBlockHandler::vfunc6(void *pRestoreV)
{
	SRestoreSlots *pRestore = (SRestoreSlots *)pRestoreV;
	SSaveInfoLike *pSaveData = pRestore->GetSaveInfo();
	int nEntities;
	pRestore->ReadInt(&nEntities, 1, 0);
	entitytable_view *pEntityTable = (entitytable_view *)engine->vfunc47(sizeof(entitytable_view) * nEntities, 1);
	pSaveData->InitEntityTable(pEntityTable, nEntities);
	for (int i = 0; i < pSaveData->NumEntities(); i++)
		pRestore->ReadFields("ETABLE", pSaveData->GetEntityInfo(i), 0, g_10592b18, g_10592b1c);
}
// END FUNCTION

// FUNCTION: 0x101a3ae0 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc8()
{
}
// END FUNCTION
