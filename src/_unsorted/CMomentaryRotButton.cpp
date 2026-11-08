// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100c9db0 size=0x6
#include "datamap.h"
#include "CMomentaryRotButton.h"
namespace lifted {
extern char g_1055c264;
}
datamap_t *CMomentaryRotButton::vfunc82()
{
    return (datamap_t *)&lifted::g_1055c264;
}
// END FUNCTION

// FUNCTION: 0x100ca0e0 size=0x1e
#include "CBaseEntity.h"
// TARGET: CMomentaryRotButton::vfunc117
#include "CMomentaryRotButton.h"

unsigned char CMomentaryRotButton::vfunc117()
{
	unsigned char r = (unsigned char)((CBaseEntity *)this)->CBaseEntity::vfunc117();
	unsigned int flags = m_nSpawnFlags204;
	r &= 0xfd;
	if (flags & 1)
		return r;
	if (flags & 2)
		return r;
	return r | 0x10;
}
// END FUNCTION

// FUNCTION: 0x100ca110 size=0x3d3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CMomentaryRotButton.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

__declspec(dllimport) void Warning(const char *pszFormat, ...);

struct CMRBView
{
	char m_pad0000[0x26c];
	const char *m_name26c;
};

void CMomentaryRotButton::vfunc103()
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	CMRBView *pView = (CMRBView *)this;
	((CBaseEntity *)this)->sub_101c1a70();
	if (m_flSpeed164 == 0)
		m_flSpeed164 = 100.0f;
	if (m_flStartPosition < 0.0 || m_flStartPosition > 1.0) {
		Warning("WARNING: Momentary door (%s) start position not between 0 and 1.  Clamping.\n", ((CBaseEntity *)this)->sub_1000b5cd());
		m_flStartPosition = (m_flTarget5fc > 1.0f) ? 1.0f : ((m_flTarget5fc < 0.0f) ? 0.0f : m_flTarget5fc);
	}
	if (m_nDirection5d8 != 1 && m_nDirection5d8 != -1)
		m_nDirection5d8 = 1;
	if (m_flRange4fc < 0.0f) {
		*(Vector *)m_vecMoveDir = -*(Vector *)m_vecMoveDir;
		m_flRange4fc = -m_flRange4fc;
	}
	m_vecStart5e0 = *(Vector *)vfunc221() - (*(Vector *)m_vecMoveDir * m_flRange4fc) * m_flStartPosition;
	m_vecEnd5ec = (*(Vector *)m_vecMoveDir * m_flRange4fc) * (1.0f - m_flStartPosition) + *(Vector *)vfunc221();
	m_flTarget5fc = m_flStartPosition;
	if (m_flStartPosition == 0.0)
		m_nDirection5d8 = -1;
	else if (m_flStartPosition == 1.0)
		m_nDirection5d8 = 1;
	if (!(m_nSpawnFlags204 & 2)) {
		m_nUsed5d4 = 0;
		sub_100cae20(0, this);
	}
	CCollisionProperty *pCol;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pView->m_name26c ? pView->m_name26c : g_106b8540, g_106b8540);
		pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc480(1);
	}
	if (!(m_nSpawnFlags204 & 1)) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pView->m_name26c ? pView->m_name26c : g_106b8540, g_106b8540);
		pCol->AddSolidFlags(4);
	}
	pSlots->slot93(8, 0);
	((CBaseEntity *)this)->sub_100b3b00();
	{
		int buf;
		const char *pszName = *pSlots->slot9(&buf);
		if (!pszName)
			pszName = g_106b8540;
		pSlots->slot105(pszName);
	}
	pSlots->slot223();
}
// END FUNCTION

// FUNCTION: 0x100ca5f0 size=0xe
#include "CMomentaryRotButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CMomentaryRotButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cabc0 size=0xbb
#include "CMomentaryRotButton.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList *g_10566458;
void sub_1000a033();

// TARGET: CMomentaryRotButton::vfunc173
void CMomentaryRotButton::vfunc173(int a, int b, int c, int d)
{
	bool bFlag = false;
	if (m_nUsed5d4 == 0) {
		bFlag = true;
		m_nDirection5d8 = -m_nDirection5d8;
		unsigned int h = m_hEntity53c;
		void *pEnt;
		if (h == 0xffffffff) {
			pEnt = 0;
		} else {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
			pEnt = pSlot->m_Serial == (int)(h >> 13) ? pSlot->m_pEntity : 0;
		}
		m_Output574.sub_100cd660(pEnt, this, 0);
	}
	m_nUsed5d4 = 1;
	float flAngle = sub_100ca630((float *)((CEntityVSlots *)this)->slot221());
	sub_100cacb0(flAngle, bFlag);
	((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000a033, 0, 0);
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100cb4f0 size=0x6d
#include "CMomentaryRotButton.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CMomentaryRotButton *CMomentaryRotButton::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x5bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x5a4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x58c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x574))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x55c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
