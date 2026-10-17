// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036b6b0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __stdcall sub_1036b6b0(int sector)
{
    g_109f3620[*g_109f3680].a = "CNPC_VChangBros::SectorIsInPit";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (sector > 0 && sector <= 2) {
        (*g_109f3680)--;
        return true;
    }
    (*g_109f3680)--;
    return false;
}
// END FUNCTION
