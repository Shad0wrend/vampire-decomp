// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fe5b0 size=0x6
#include "datamap.h"
#include "CEnvWind.h"
namespace lifted {
extern char g_105680f8;
}
datamap_t * CEnvWind::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105680f8);
}
// END FUNCTION

// FUNCTION: 0x100fe6b0 size=0x12
#include "CEnvWind.h"
void CEnvWind::vfunc113()
{
	sub_100a53d0(0);
	CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x100fe6e0 size=0x8
#include "CEnvWind.h"
// TARGET: CEnvWind::sub_100fe6e0
unsigned char CEnvWind::sub_100fe6e0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x100fe700 size=0x3
#include "CEnvWind.h"
void CEnvWind::vfunc241(int a0, int a1, int a2, int a3, int a4)
{
}
// END FUNCTION

// FUNCTION: 0x100fe720 size=0x3
#include "CEnvWind.h"
void CEnvWind::vfunc141(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x100fe740 size=0x208
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEnvWind.h"
#include "CCollisionProperty.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

#define ENVWIND_COL ((CCollisionProperty *)((char *)this + 0x270))

void CEnvWind::vfunc103()
{
	CBaseEntity::vfunc103();
	CGlobalEntityList_Ent *pTarget = EHandle_Get(m_hTouch254);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		ENVWIND_COL->sub_100dc480(pTarget ? 6 : 1);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		ENVWIND_COL->AddSolidFlags(4);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		ENVWIND_COL->AddSolidFlags(8);
	}
	vfunc93(0, 0);
	int tmp;
	const char *pszModel = *vfunc9(&tmp);
	vfunc105(pszModel ? pszModel : g_106b8540);
	m_nEffectFlags |= 0x40;
}
// END FUNCTION

// FUNCTION: 0x100fe9e0 size=0x52
#include "CBaseAnimating.h"
#include "CEnvWind.h"
// TARGET: CEnvWind::vfunc174
void CEnvWind::vfunc174(CBaseEntity *pOther)
{
	CBaseEntity::vfunc174(pOther);
	CBaseAnimating *pAnimating = dynamic_cast<CBaseAnimating *>(pOther);
	if (pAnimating)
	{
		const int *p = (const int *)((char *)this + 0x450);
		pAnimating->sub_1008e480(this, p[0], p[1], p[2], p[3]);
	}
}
// END FUNCTION

// FUNCTION: 0x100fea60 size=0x36
#include "CBaseAnimating.h"

extern char g_10538764;
extern char g_1053dd10;
void *sub_10430b64(void *pObject, int vfDelta, void *pSrcType, void *pDstType, int bReference);

struct CUnknown100fea60
{
	void sub_100fea60(CBaseEntity *pOther);
};

// TARGET: CUnknown100fea60::sub_100fea60
void CUnknown100fea60::sub_100fea60(CBaseEntity *pOther)
{
	((CBaseEntity *)this)->vfunc176(pOther);
	CBaseAnimating *pAnim = (CBaseAnimating *)sub_10430b64(pOther, 0, &g_10538764, &g_1053dd10, 0);
	if (pAnim != 0)
	{
		pAnim->sub_1008e630((CBaseEntity *)this);
	}
}
// END FUNCTION

// FUNCTION: 0x100feab0 size=0x1e
#include "CEnvWind.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvWind::vfunc5
CEnvWind *CEnvWind::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
