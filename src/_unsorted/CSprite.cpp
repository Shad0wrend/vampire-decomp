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
CSprite *CSprite::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
