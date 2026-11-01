// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114d70 size=0xa
#include "CFuncBrush.h"
// TARGET: CFuncBrush::vfunc117
char CFuncBrush::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return (c & (char)0xfd) | 8; }
// END FUNCTION

// FUNCTION: 0x10114d90 size=0x3
#include "CFuncBrush.h"
bool CFuncBrush::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1013de10 size=0x6
#include "CFuncBrush.h"
namespace lifted {
extern char g_10579aa8;
}
datamap_t *CFuncBrush::vfunc82()
{
    return (datamap_t *)&lifted::g_10579aa8;
}
// END FUNCTION

// FUNCTION: 0x1013dea0 size=0x16d
#include "CFuncBrush.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CFuncBrush::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	CCollisionProperty *pColl;
	pEnt->vfunc93(8, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc480(1);
	}
	if (*(int *)((char *)this + 0x450) == 1) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		pColl->sub_100dc580(pColl->m_usSolidFlags | 4);
	}
	int tmp;
	const char *pszModel = *pEnt->vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	pEnt->vfunc105(pszModel);
	if (*(int *)((char *)this + 0x454))
		sub_1013e420();
	if (!pEnt->m_name26c || !*(int *)((char *)this + 0x124))
		pEnt->sub_100b3580(0x1000000);
	pEnt->sub_100b3b00();
	((CFuncBrushSlots *)this)->slot223();
}
// END FUNCTION

// FUNCTION: 0x1013e070 size=0xe
#include "CFuncBrush.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CFuncBrush::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1013e480 size=0xf
#include "CFuncBrush.h"
int CFuncBrush::vfunc241()
{
    return ((unsigned)(~(*(int *)((char *)this + 0x19c))) >> 6) & 1;
}
// END FUNCTION

// FUNCTION: 0x1013ec30 size=0x1e
#include "CFuncBrush.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncBrush::vfunc5
CFuncBrush *CFuncBrush::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
