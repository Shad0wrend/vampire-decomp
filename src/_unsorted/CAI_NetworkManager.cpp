// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f4f50 size=0x6
#include "CAI_NetworkManager.h"
namespace lifted {
extern char g_10610258;
}
datamap_t * CAI_NetworkManager::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10610258);
}
// END FUNCTION

// FUNCTION: 0x102f5060 size=0x1e
#include "CAI_NetworkManager.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_NetworkManager::vfunc5
CBaseEntity *CAI_NetworkManager::vfunc5(unsigned int flags)
{
	sub_100107a3();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102f6980 size=0x91
#include "CAI_NetworkManager.h"
#include "CCollisionProperty.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CAI_NetworkManager::vfunc103()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	vfunc93(0, 0);
}
// END FUNCTION
