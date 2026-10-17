// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036b460 size=0x7c
#include "CNPC_VChangBros.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10630f54[];
extern char g_106b8540[];
int CNPC_VChangBros::vfunc440(int schedule)
{
    g_109f3620[*g_109f3680].a = g_10630f54;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (schedule != 0x17) {
        int r = CNPC_VHuman::vfunc440(schedule);
        --*g_109f3680;
        return r;
    }
    --*g_109f3680;
    return 0x15d;
}
// END FUNCTION

// FUNCTION: 0x1036c760 size=0x64
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10631094[];
extern char g_106b8540[];

// TARGET: CNPC_VChangBros::vfunc619
void CNPC_VChangBros::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10631094;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION
