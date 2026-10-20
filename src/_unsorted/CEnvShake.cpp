// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10102cc0 size=0x1e
#include "CEnvShake.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvShake::vfunc5
CEnvShake *CEnvShake::vfunc5(unsigned int flags)
{
	sub_100117f2();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10102cf0 size=0xa4
#include "CCollisionProperty.h"
#include "CEnvShake.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CEnvShake::vfunc103()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    (*g_109f3680)--;
    vfunc93(0, 0);
    if (*((unsigned char *)this + 0x204) & 1)
        *(int *)((char *)this + 0x45c) = 0;
}
// END FUNCTION
