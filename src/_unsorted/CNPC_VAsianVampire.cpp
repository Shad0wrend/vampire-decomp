// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10361530 size=0x64
#include "CNPC_VAsianVampire.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062cdd8[];
extern char g_106b8540[];

// TARGET: CNPC_VAsianVampire::vfunc619
void CNPC_VAsianVampire::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062cdd8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION
