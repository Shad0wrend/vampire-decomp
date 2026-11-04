// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100c9a20 size=0x2bf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRotButton.h"
#include "CCollisionProperty.h"
#include "CFlagsUnit.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

extern float g_104454c4;

// TARGET: CRotButton::vfunc103
void CRotButton::vfunc103()
{
	((CBaseEntity *)this)->sub_101c1a70();

	if (m_flags204 & 2)
		m_vecAngles190 = m_vecAngles190 * -1.0f;

	((CBaseEntity *)this)->vfunc93(8, 0);

	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_pData26c ? (const char *)m_pData26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}

	if (m_flags204 & 1)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_pData26c ? (const char *)m_pData26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}

	int dummy;
	const char *pszModel = *((CBaseEntity *)this)->vfunc9(&dummy);
	if (!pszModel)
		pszModel = g_106b8540;
	((CBaseEntity *)this)->vfunc105(pszModel);

	if (m_flSpeed164 == g_104454c4)
		m_flSpeed164 = 40.0f;
	if (m_fl500 == g_104454c4)
		m_fl500 = 1.0f;
	if (0 < m_nHealth210)
		m_n1fc = 2;

	m_nState4f8 = 1;

	m_vec520 = *((CEntityVSlots *)this)->slot221();
	m_vec52c = *((CEntityVSlots *)this)->slot221() + m_vecAngles190 * m_fl4fc;

	m_b55c = (-1.0f == m_fl500) ? 1 : 0;
	m_b55d = 1;

	*(void (CBaseButton::**)())((char *)this + 0x1f0) =
		reinterpret_cast<void (CBaseButton::*)()>(&CBaseButton::sub_100c9250);

	if (!(0x100 & m_flags204))
		*(void (CBaseButton::**)())((char *)this + 0x1ec) = 0;
	else
		*(void (CBaseButton::**)())((char *)this + 0x1ec) =
			reinterpret_cast<void (CBaseButton::*)()>(&CBaseButton::sub_100c9430);

	((CBaseButton *)this)->vfunc223();
}
// END FUNCTION

// FUNCTION: 0x100c9d90 size=0xe
#include "CRotButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CRotButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cb460 size=0x62
#include "CRotButton.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CRotButton *CRotButton::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5a8))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x590))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x578))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x560))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
