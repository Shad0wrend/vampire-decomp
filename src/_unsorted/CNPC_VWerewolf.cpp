// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103cb170 size=0x6f
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc421()
{
    const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::PostNPCInit";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cb7f0 size=0xb
struct W {
	char pad[0x6078];
	bool m;
};
bool CNPC_VWerewolf::vfunc600(int unused)
{
	return ((W *)this)->m = true;
}
// END FUNCTION
