// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013e530 size=0x6
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
