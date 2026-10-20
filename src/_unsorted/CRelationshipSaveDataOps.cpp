// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
