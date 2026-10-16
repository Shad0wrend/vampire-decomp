// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b0320 size=0x65
struct ScopeEntry { const char *name; const void *a; const void *b; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106514d8[];
extern char g_106b8540[];

int CNPC_VSheriffMan::vfunc440(int a)
{
	g_109f3620[*g_109f3680].name = g_106514d8;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10005e20(a);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION
