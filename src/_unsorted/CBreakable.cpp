// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010d430 size=0x8
#include "CBaseEntity.h"
#include "CBreakable.h"
// TARGET: CBreakable::vfunc117
char CBreakable::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x1010d450 size=0x6
#include "datamap.h"
#include "CBreakable.h"
namespace lifted {
extern char g_1056e590;
}
datamap_t *CBreakable::vfunc82()
{
    return (datamap_t *)&lifted::g_1056e590;
}
// END FUNCTION

// FUNCTION: 0x1010d590 size=0xd0
#include "CBreakable.h"

extern "C" {
int _strcmpi(const char *, const char *);
int atoi(const char *);
}
int *sub_10002095(const char **ppValue, const char *pszValue);

struct CBreakableBase
{
    bool sub_1009e430(const char *szKeyName, const char *szValue);
};

bool CBreakable::vfunc110(const char *szKeyName, const char *szValue)
{
    if (!_strcmpi(szKeyName, "material")) {
        int nMaterial = atoi(szValue);
        if (nMaterial >= 0 && nMaterial < 10)
            m_nMaterial = nMaterial;
        else
            m_nMaterial = 1;
    } else if (!_strcmpi(szKeyName, "deadmodel")) {
    } else if (!_strcmpi(szKeyName, "shards")) {
    } else if (!_strcmpi(szKeyName, "gibmodel")) {
        m_iszGibModel = *sub_10002095(&szValue, szValue);
    } else if (!_strcmpi(szKeyName, "lip")) {
    } else
        return ((CBreakableBase *)this)->sub_1009e430(szKeyName, szValue);
    return true;
}
// END FUNCTION

// FUNCTION: 0x1010d6a0 size=0x17b
#include "CBreakable.h"
#include "CFuncBrush.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "Vector.h"
extern char g_106b8540[];
void sub_10011081();
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

void CBreakable::sub_1010d6a0()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	pEnt->vfunc104();
	if (1 & pEnt->m_flags204)
		pEnt->m_nTakeDamage = 0;
	else
		pEnt->m_nTakeDamage = 2;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(pEnt->m_name26c));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	pEnt->vfunc93(8, 0);
	Vector angles = *(Vector *)((CFuncBrushSlots *)this)->slot221();
	*(float *)((char *)this + 0x450) = angles.y;
	angles.y = 0;
	pEnt->vfunc64((float *)&angles);
	pEnt->sub_100aaa40(4);
	int tmp;
	const char *pszModel = *pEnt->vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	pEnt->vfunc105(pszModel);
	*(void **)(0x1ec + (char *)this) = (void *)sub_10011081;
	if (1 & pEnt->m_flags204)
		*(int *)(0x1ec + (char *)this) = 0;
	if (!sub_1010efc0() && *(int *)((char *)this + 0x16c))
		pEnt->sub_100b3580(0x1000000);
	if (sub_1010efc0())
		pEnt->sub_100b3580(0x20000000);
	((CFuncBrushSlots *)this)->slot223();
}
// END FUNCTION

// FUNCTION: 0x1010d880 size=0x8
#include "CBreakable.h"
namespace lifted {
int sub_10007284();
}
bool CBreakable::vfunc223()
{
    lifted::sub_10007284();
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1010d8c0 size=0xa0
#include "CBreakable.h"

extern char g_106b8540[];

void CBreakable::vfunc104()
{
	const char *pGibName = "models/gibs/woodgibs.mdl";
	switch (m_nMaterial) {
	case 1:
		pGibName = "models/gibs/woodgibs.mdl";
		break;
	case 3:
		pGibName = "models/gibs/fleshgibs.mdl";
		break;
	case 6:
		pGibName = "models/computergibs.mdl";
		break;
	case 0:
	case 7:
		pGibName = "models/gibs/glass_shard.mdl";
		break;
	case 2:
		pGibName = "models/gibs/metalgibs.mdl";
		break;
	case 4:
		pGibName = "models/gibs/concgibs.mdl";
		break;
	case 8:
		pGibName = "models/gibs/rockgibs.mdl";
		break;
	case 5:
		pGibName = "models/gibs/ceilinggibs.mdl";
		break;
	}
	if (m_iszGibModel) {
		pGibName = (const char *)m_iszGibModel;
		if (pGibName == 0)
			pGibName = g_106b8540;
	}
	m_nGibModelIndex = engine->vfunc13(pGibName, 0);
}
// END FUNCTION

// FUNCTION: 0x1010e5c0 size=0x26
#include "CBreakable.h"

void sub_10006d61();

// TARGET: CBreakable::vfunc230
void CBreakable::vfunc230(int a, int b)
{
    void (CBreakable::*pBase)(int, int);
    *(void **)&pBase = (void *)sub_10006d61;
    (this->*pBase)(a, b);

    void (CBreakable::*pSlot75)(int, int);
    void **vt = *(void ***)this;
    *(void **)&pSlot75 = vt[0x12c / 4];
    (this->*pSlot75)(a, b);
}
// END FUNCTION

// FUNCTION: 0x1010e600 size=0x8
#include "CBreakable.h"
namespace lifted {
int sub_10012e1d();
}
int CBreakable::vfunc74(int a0)
{
    return lifted::sub_10012e1d();
}
// END FUNCTION

// FUNCTION: 0x1010efe0 size=0x31
#include "CBreakable.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CBreakable::vfunc154
int CBreakable::vfunc154(int a, int b)
{
    if (m_nMaterial == 0) {
        return g_1070b244->vfunc2(0, 2) + 0x2c;
    }
    if (m_nMaterial == 7) {
        return 0x34;
    }
    return sub_1000b9e2(a, b);
}
// END FUNCTION

// FUNCTION: 0x1010f240 size=0x36
#include "CBreakable.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBreakable *CBreakable::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
