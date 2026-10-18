// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10361060 size=0x68
#include "CNPC_VAsianVampire.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VAsianVampire::vfunc461()
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::SelectIdealState";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	m_nIdealState = 6;
	int result = sub_10011225();
	(*g_109f3680)--;
	return result;
}
// END FUNCTION
