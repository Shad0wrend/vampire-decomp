// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10223cc0 size=0x138
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFuncKeyframedMover.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

typedef bool (__fastcall *MoverSlot223Fn)(CFuncKeyframedMover *pThis);

void CFuncKeyframedMover::vfunc103()
{
	sub_100b3580(0x1000);
	CBaseEntity::vfunc103();
	int unused;
	const char **ppName = vfunc9(&unused);
	vfunc105(*ppName ? *ppName : g_106b8540);
	CCollisionProperty *pCollision;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		pCollision = (CCollisionProperty *)((char *)this + 0x270);
		pCollision->sub_100dc480(1);
	}
	if (m_flags204 & 1) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		pCollision->sub_100dc580(pCollision->m_usSolidFlags | 4);
	}
	((MoverSlot223Fn)(*(void ***)this)[223])(this);
}
// END FUNCTION

// FUNCTION: 0x10223e50 size=0x92
#include "CFuncKeyframedMover.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CFuncKeyframedMover::vfunc223()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10223fd0 size=0x78
#include "CFuncKeyframedMover.h"
void sub_100aa7b0(void *p);

CFuncKeyframedMover *CFuncKeyframedMover::vfunc5(unsigned int flags)
{
	m_Output5e8.sub_100cd2d0();
	m_Output5d0.sub_100cd2d0();
	m_Output5b8.sub_100cd2d0();
	m_Output5a0.sub_100cd2d0();
	m_Output588.sub_100cd2d0();
	m_Output570.sub_100cd2d0();
	m_Output4bc.sub_100cd2d0();
	m_Output4a4.sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
