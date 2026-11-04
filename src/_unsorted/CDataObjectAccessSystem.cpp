// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003c950 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct IObj { virtual ~IObj(); };
struct Sys {
    char pad[8];
    IObj *m_pObjects[32];
};

void __fastcall sub_1003c950(Sys *self)
{
    g_109f3620[*g_109f3680].a = "CDataObjectAccessSystem::Shutdown";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    for (int i = 0; i < 32; i++) {
        delete self->m_pObjects[i];
        self->m_pObjects[i] = 0;
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1003ca90 size=0x1e
#include "CDataObjectAccessSystem.h"

// TARGET: CDataObjectAccessSystem::vfunc8
CAutoGameSystem *CDataObjectAccessSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
