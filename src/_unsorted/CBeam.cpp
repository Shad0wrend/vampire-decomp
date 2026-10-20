// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100bad80 size=0x1e
#include "CBeam.h"

void sub_100aa7b0(void *p);

// TARGET: CBeam::vfunc5
CBeam *CBeam::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100bae30 size=0x97
#include "CBeam.h"
#include "CCollisionProperty.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CBeam::vfunc103
void CBeam::vfunc103()
{
    vfunc93(0, 0);
    const char *name = m_name26c;
    if (name == 0)
        name = g_106b8540;
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    --*g_109f3680;
    *(int *)((char *)this + 0x16c) = 2;
    vfunc104();
}
// END FUNCTION
