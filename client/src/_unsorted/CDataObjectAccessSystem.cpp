// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1011b150 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
struct IObj { virtual ~IObj(); };
struct Sys {
    char pad[8];
    IObj *m_pObjects[32];
};

void __fastcall sub_1011b150(Sys *self)
{
    g_101e3124[*g_101e3128].a = "CDataObjectAccessSystem::Shutdown";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    for (int i = 0; i < 32; i++) {
        delete self->m_pObjects[i];
        self->m_pObjects[i] = 0;
    }
    (*g_101e3128)--;
}
// END FUNCTION
