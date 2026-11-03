// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b1090 size=0x71
#include "CNodeEnt.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNodeEnt::vfunc202(int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CLogicalPointEntity::SetOwnerEntity";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b1130 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100b1130(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CLogicalPointEntity::GetOwnerEntity";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102d7800 size=0x6
#include "datamap.h"
#include "CNodeEnt.h"
namespace lifted {
extern char g_1060aaf8;
}
datamap_t * CNodeEnt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1060aaf8);
}
// END FUNCTION

// FUNCTION: 0x102d7890 size=0x21
#include "CBaseEntity.h"
#include "CEntityMapData.h"
#include "CUnknown10136ec0.h"

extern int g_10926a38;

struct Helper
{
	void sub_102d7890(CEntityMapData *pArg);
};

// TARGET: Helper::sub_102d7890
void Helper::sub_102d7890(CEntityMapData *pArg)
{
	g_10926a38 = ((CUnknown10136ec0 *)pArg)->sub_10136ec0();
	((CBaseEntity *)this)->CBaseEntity::vfunc107(pArg);
}
// END FUNCTION

// FUNCTION: 0x102d7d00 size=0x1e
#include "CNodeEnt.h"

void sub_100aa7b0(void *p);

// TARGET: CNodeEnt::vfunc5
CNodeEnt *CNodeEnt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
