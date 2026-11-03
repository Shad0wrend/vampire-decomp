// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013e530 size=0x6
#include "datamap.h"
#include "CTriggerBrush.h"
namespace lifted {
extern char g_10579bc8;
}
datamap_t * CTriggerBrush::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10579bc8);
}
// END FUNCTION

// FUNCTION: 0x1013e820 size=0x193
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTriggerBrush.h"
#include "CCollisionProperty.h"
#include "CFuncBrush.h"
#include "ScopeTrace.h"

struct CTriggerBrushConVar {
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CTriggerBrushView {
	char m_pad0000[0x26c];
	const char *m_name26c;
	CCollisionProperty m_Collision;

	void SetSolid(int val)
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		m_Collision.sub_100dc480(val);
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		m_Collision.AddSolidFlags(flags);
	}
};

extern Vector g_1070d9d0;
extern CTriggerBrushConVar *g_1072cfcc;

void CTriggerBrush::vfunc103()
{
	CFuncBrushSlots *pSlots = (CFuncBrushSlots *)this;
	const Vector *pAngles = (const Vector *)pSlots->slot221();
	if (*pAngles != g_1070d9d0)
		pSlots->slot171();
	CTriggerBrushView *v = (CTriggerBrushView *)this;
	v->SetSolid(1);
	v->AddSolidFlags(8);
	vfunc93(0, 0);
	int nLen;
	const char *pszModel = *vfunc9(&nLen);
	vfunc105(pszModel ? pszModel : g_106b8540);
	if (g_1072cfcc->vfunc1() || !g_1072cfcc->m_n2c)
		m_nEffectFlags |= 0x40;
}
// END FUNCTION

// FUNCTION: 0x1013ea30 size=0x48
#include "CTriggerBrush.h"
bool __stdcall sub_1013eb90(CBaseEntity *pOther, unsigned int filter);
void CTriggerBrush::vfunc174(CBaseEntity *pOther)
{
	if (sub_1013eb90(pOther, m_nFilter498) && !(m_nFilter498 & 8)) {
		m_Output450.sub_100cd660(pOther, this, 0);
		if (m_n49c == 0)
			CBaseEntity::vfunc174(pOther);
	}
}
// END FUNCTION

// FUNCTION: 0x1013eaa0 size=0x48
#include "CTriggerBrush.h"
bool __stdcall sub_1013eb90(CBaseEntity *pOther, unsigned int filter);
void CTriggerBrush::vfunc176(CBaseEntity *pOther)
{
	if (sub_1013eb90(pOther, m_nFilter498) && !(m_nFilter498 & 8)) {
		m_Output468.sub_100cd660(pOther, this, 0);
		if (m_n49c == 0)
			CBaseEntity::vfunc176(pOther);
	}
}
// END FUNCTION

// FUNCTION: 0x1013eb10 size=0x57
#include "CTriggerBrush.h"
struct CTriggerBrushSub480 { void sub_100cd660(CBaseEntity *a, CBaseEntity *b, int c); };
struct CTriggerBrushView { char pad[0x480]; CTriggerBrushSub480 m_Sub480; char pad2[0x18 - 1]; int m_n498; int m_n49c; };
bool __stdcall sub_1013eb90(CBaseEntity *a, int b);
// TARGET: CTriggerBrush::vfunc173
void CTriggerBrush::vfunc173(CBaseEntity *a, CBaseEntity *b, int c, int d)
{
    CTriggerBrushView *v = (CTriggerBrushView *)this;
    if (sub_1013eb90(a, v->m_n498) && !(v->m_n498 & 0x10)) {
        v->m_Sub480.sub_100cd660(a, this, 0);
        if (v->m_n49c == 0)
            CBaseEntity::vfunc173(a, b, c, d);
    }
}
// END FUNCTION

// FUNCTION: 0x1013ec60 size=0x41
#include "CTriggerBrush.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

void sub_100aa7b0(void *p);

CTriggerBrush *CTriggerBrush::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x480))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x450))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
