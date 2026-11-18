// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042e040 size=0x1d
#include "CSprite.h"

// TARGET: CSprite::sub_1042e040
unsigned int CSprite::sub_1042e040()
{
	unsigned int flags = 0;
	if (m_flags204 & 0x8000)
		flags = 0x80000000;
	return (CBaseEntity::vfunc117() & ~2) | flags;
}
// END FUNCTION

// FUNCTION: 0x1042e0f0 size=0x6
#include "datamap.h"
#include "CSprite.h"
namespace lifted {
extern char g_106aeaf8;
}
datamap_t * CSprite::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106aeaf8);
}
// END FUNCTION

// FUNCTION: 0x1042e180 size=0x6
#include "CSprite.h"
namespace lifted {
extern char g_106af03c;
}
int CSprite::vfunc79()
{
    return (int)&lifted::g_106af03c;
}
// END FUNCTION

// FUNCTION: 0x1042e210 size=0x6
#include "CSprite.h"
namespace lifted {
extern char g_109f02a8;
}
int CSprite::vfunc80()
{
    return (int)&lifted::g_109f02a8;
}
// END FUNCTION

// FUNCTION: 0x1042e230 size=0x3
#include "CSprite.h"
int CSprite::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1042e550 size=0x251
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "CSprite.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "Ray_t.h"
#include "Vector.h"

class CUnknown1042eee0
{
public:
	void sub_1042eee0(int a, int b);
};

class CUnknown1042ef10
{
public:
	void sub_1042ef10(float a, int b);
};

extern void (*g_109f3650)(int nLevel, const char *pMsg, ...);
extern float g_10516cec;
const char *sub_100ab4f0();

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

static __forceinline const char *EntityName(CBaseEntity *pEnt)
{
	return pEnt ? (*(const char **)((char *)pEnt + 0x26c) ? *(const char **)((char *)pEnt + 0x26c) : g_106b8540) : g_105387dc;
}

void CSprite::sub_1042e550()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", EntityName(this));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}

	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	pSlots->slot93(0, 0);
	m_flFrame = 0.0f;
	pSlots->slot104();

	const char *pszModel;
	{
		int nDummy;
		pszModel = *pSlots->slot9(&nDummy);
	}
	if (!pszModel)
		pszModel = g_106b8540;
	pSlots->slot105(pszModel);

	m_flMaxFrame = (float)engine->vfunc26(pSlots->slot8()) - 1.0f;

	if (*(const char **)((char *)this + 0x26c) && !(*(unsigned char *)((char *)this + 0x204) & 1))
		sub_1042ef40();
	else
		sub_1042ef70();

	if (pSlots->slot221()->y != g_104454c4 && pSlots->slot221()->z == g_104454c4)
	{
		Vector angles = *pSlots->slot221();
		angles.z = angles.y;
		angles.y = 0;
		pSlots->slot64(angles.Base());
	}

	float scale = m_flSpriteScale;
	if (scale < g_104454c4 || scale > g_10516cec)
	{
		g_109f3650(1, "LEVEL DESIGN ERROR: Sprite %s with bad scale %.f [0..%.f]\n",
				   sub_100ab4f0(), m_flSpriteScale, g_10516cec);
		scale = clamp(m_flSpriteScale, 0, g_10516cec);
	}

	((CUnknown1042eee0 *)this)->sub_1042eee0(*(unsigned char *)((char *)this + 0x1a3), 0);
	((CUnknown1042ef10 *)this)->sub_1042ef10(scale, 0);
}
// END FUNCTION

// FUNCTION: 0x1042e850 size=0x43
#include "CSprite.h"
#include "engineserver.h"
extern void (*g_109f3628)(const char *fmt, ...);
void sub_101cf4a0(CSprite *p, const char *name);
// TARGET: CSprite::vfunc105
void CSprite::vfunc105(const char *name)
{
    int idx = engine->vfunc20(name);
    if (engine->vfunc21(idx) != 2)
        g_109f3628("Setting CSprite to non-sprite model %s\n", name);
    sub_101cf4a0(this, name);
}
// END FUNCTION

// FUNCTION: 0x1042e8c0 size=0xe5
#include "CEHandleGet.h"
#include "CUnknown1042e8c0.h"

void CUnknown1042e8c0::sub_1042e8c0()
{
	int dummy;
	if (*vfunc9(&dummy) != 0) {
		const char *pName = *vfunc9(&dummy);
		if (!pName)
			pName = "";
		sub_100adfd0(pName);
	}
	if (EHandle_Get(*(unsigned int *)((char *)this + 0x37c)) != 0) {
		CBaseEntity *pEnt = (CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)this + 0x37c));
		int attachment = m_nAttachment;
		if (pEnt != 0) {
			m_hAttachedTo = pEnt;
			m_nAttachment = attachment;
			sub_1009ee80(pEnt);
			vfunc93(0xb, 0);
		}
	} else {
		m_hAttachedTo = (CBaseEntity *)0;
		m_nAttachment = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1042f030 size=0x3f
#include "vampire.h"
#include "CSprite.h"

// TARGET: CSprite::vfunc173
void CSprite::vfunc173(int a, int b, int nUseType, int d)
{
    int bOff = *(int *)((char *)this + 0x19c) != 0x40;
    if (sub_100a98f0(nUseType, bOff))
    {
        if (bOff)
        {
            sub_1042ef40();
            return;
        }
        sub_1042ef70();
    }
}
// END FUNCTION

// FUNCTION: 0x1042f150 size=0x1e
#include "CSprite.h"

void sub_100aa7b0(void *p);

// TARGET: CSprite::vfunc5
CBaseEntity *CSprite::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
