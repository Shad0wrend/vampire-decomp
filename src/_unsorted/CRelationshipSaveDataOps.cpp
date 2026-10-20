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
void CRelationshipSaveDataOps::vfunc0(void *fieldInfo, void *pSave)
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

void CRelationshipSaveDataOps::vfunc3(void *pField)
{
	g_109f3620[*g_109f3680].m_pszFunc = "CRelationshipSaveDataOps::MakeEmpty";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	(*g_109f3680)--;
}
// END FUNCTION
