// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10349100 size=0x111
#include "CRelationshipSaveDataOps.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106241f8[];
extern char g_106b8540[];
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
struct ISaveX {
    V4(p) V4(q) virtual void m0(); virtual void m1();
    virtual void WriteInt(const int *pData, int count);
    V16(r) V4(s) V4(t) virtual void n0();
    virtual void Write36(const void *pData, int count);
};
struct FieldInfoX { int **pField; int *pOwner; };
void CRelationshipSaveDataOps::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
    g_109f3620[*g_109f3680].a = g_106241f8;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int **arr = (int **)*((FieldInfoX *)fieldInfo)->pField;
    if (((FieldInfoX *)fieldInfo)->pOwner != 0) {
        ISaveX *save = (ISaveX *)pSave;
        int *pCount = (int *)((char *)((FieldInfoX *)fieldInfo)->pOwner + 0x15a0);
        save->WriteInt(pCount, 1);
        int i;
        for (i = 0; i < *pCount; i++) {
            if (arr[i]) {
                save->Write36(arr[i], 1);
                save->WriteInt(arr[i] + 1, 1);
                save->WriteInt(arr[i] + 2, 1);
                save->WriteInt(arr[i] + 3, 1);
                save->WriteInt(arr[i] + 4, 1);
            }
        }
    } else {
        fieldInfo = 0;
        ((ISaveX *)pSave)->WriteInt((int *)&fieldInfo, 1);
    }
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10349270 size=0x13f
#include "CRelationshipSaveDataOps.h"

struct TraceEnt { const char *a; void *b; void *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];
void *operator new(unsigned int);

struct RestoreIf
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual int ReadInt();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void ReadRec(void *p, int a, int b);
};

struct Rec { int a, b, c, d, e; Rec() { a = -1; } };
struct Owner { char pad[0x1598]; Rec **m_pRecs; int m_alloc; int m_count; };
struct FieldInfo { int x; Owner *owner; };

// TARGET: CRelationshipSaveDataOps::vfunc1
void CRelationshipSaveDataOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestoreArg)
{
	RestoreIf *pRestore = (RestoreIf *)pRestoreArg;
	g_109f3620[*g_109f3680].a = "CRelationshipSaveDataOps::Restore";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	Owner *owner = ((FieldInfo *)fieldInfo)->owner;
	int n = pRestore->ReadInt();
	if (owner && n > 0)
	{
		owner->m_count = n;
		owner->m_alloc = n;
		owner->m_pRecs = (Rec **)operator new(n * 4);
		for (int i = 0; i < n; i++)
		{
			owner->m_pRecs[i] = new Rec;
			pRestore->ReadRec(owner->m_pRecs[i], 1, 0);
			owner->m_pRecs[i]->b = pRestore->ReadInt();
			owner->m_pRecs[i]->c = pRestore->ReadInt();
			owner->m_pRecs[i]->d = pRestore->ReadInt();
			owner->m_pRecs[i]->e = pRestore->ReadInt();
		}
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10349400 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_10624248[];
extern char g_106b8540[];

struct TOps {
	bool sub_10349400(int **p);
};

bool TOps::sub_10349400(int **p)
{
	g_109f3620[*g_109f3680].name = g_10624248;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	bool r = **p == 0;
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10349490 size=0x58
#include "CRelationshipSaveDataOps.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CRelationshipSaveDataOps::vfunc3(SaveRestoreFieldInfo_t *pField)
{
	g_109f3620[*g_109f3680].m_pszFunc = "CRelationshipSaveDataOps::MakeEmpty";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10349510 size=0x5d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRelationshipSaveDataOps.h"
#include "ScopeTrace.h"

// TARGET: CRelationshipSaveDataOps::vfunc4
bool CRelationshipSaveDataOps::vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *pRestore)
{
	ScopeTrace trace("CRelationshipSaveDataOps::Parse", g_106b8540);
	return false;
}
// END FUNCTION
