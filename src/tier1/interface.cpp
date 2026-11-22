// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x1012f030 size=0x9b
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern "C" __declspec(dllimport) void *__stdcall LoadLibraryA(const char *);
extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);

void *sub_1012f030(const char *name)
{
    char buf[512];
    g_109f3620[*g_109f3680].a = "Sys_LoadModule";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    void *h = LoadLibraryA(name);
    if (!h) {
        Q_snprintf(buf, 512, "%s.dll", name);
        h = LoadLibraryA(buf);
    }
    (*g_109f3680)--;
    return h;
}
// END FUNCTION
