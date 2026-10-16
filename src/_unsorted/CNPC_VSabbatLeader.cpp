// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a7760 size=0x64
#include "CNPC_VSabbatLeader.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1064ed00[];
extern char g_106b8540[];

// TARGET: CNPC_VSabbatLeader::sub_103a7760
void CNPC_VSabbatLeader::sub_103a7760(int arg)
{
	g_109f3620[*g_109f3680].a = g_1064ed00;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000b8a2(arg);
	(*g_109f3680)--;
}
// END FUNCTION
