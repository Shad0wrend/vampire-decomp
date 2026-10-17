// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b0290 size=0x64
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_106514b8[];
extern char g_106b8540[];

// TARGET: CNPC_VSheriffMan::vfunc448
void CNPC_VSheriffMan::vfunc448(int arg)
{
	g_109f3620[*g_109f3680].a = g_106514b8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100054bb(arg);
	(*g_109f3680)--;
}
// END FUNCTION

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
