// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10193160 size=0x6
#include "datamap.h"
#include "CPropSlashable.h"
namespace lifted {
extern char g_1058dba0;
}
datamap_t * CPropSlashable::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058dba0);
}
// END FUNCTION

// FUNCTION: 0x101932c0 size=0xa0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropSlashable.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CPropSlashable::vfunc103
void CPropSlashable::vfunc103()
{
    sub_10011793();
    m_nTakeDamage = 2;
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
    }
    sub_100b3580(0x20000000);
    sub_100b3b00();
    sub_100a9470(1);
}
// END FUNCTION

// FUNCTION: 0x10193390 size=0xb2
#include "CPropSlashable.h"
#include "COutputEvent.h"
#include "CVDmg_t.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CKnifeWeaponX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21) PV10(22) PV10(23) PV10(24) PV10(25) PV10(26) PV10(27) PV10(28) PV10(29)
	PV10(30) PV10(31) PV10(32) PV10(33)
	PV(340) PV(341) PV(342) PV(343) PV(344) PV(345) PV(346) PV(347)
	virtual const char *vfunc348();
};

struct CCharacterX
{
	CKnifeWeaponX *sub_10007e19();
};

struct CSlashableFields
{
	char m_pad0000[0x210];
	int m_iHealth;
	char m_pad0214[0x670 - 0x214];
	int m_nState;
	char m_pad0674[0x730 - 0x674];
	int m_nBrokenState;
	COutputEvent m_OnBreak;
};

extern int (__cdecl *g_109f3870)(const char *s1, const char *s2, int n);
extern char g_10587630[];	// "item_w_knife"

// TARGET: CPropSlashable::vfunc142
int CPropSlashable::vfunc142(CPropSlashableDamageInfo *pInfo)
{
	if (pInfo->m_pAttacker) {
		CCharacterX *pAttacker = *(CCharacterX **)(pInfo->m_pAttacker + 0x9c);
		if (pAttacker && pAttacker->sub_10007e19()) {
			if (!g_109f3870(g_10587630, pAttacker->sub_10007e19()->vfunc348(), 0x15)) {
				float flDamage = pInfo->m_pVDmg ? (float)pInfo->m_pVDmg->sub_101faa70() : pInfo->m_flDamage;
				CSlashableFields *p = (CSlashableFields *)this;
				p->m_iHealth = (int)((float)p->m_iHealth - flDamage);
				if (p->m_iHealth <= 0) {
					p->m_nState = p->m_nBrokenState;
					p->m_OnBreak.sub_100cd660(pAttacker, this, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10194580 size=0x2b
#include "CPropSlashable.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_10004c3c();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPropSlashable::vfunc5
CBaseEntity *CPropSlashable::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x734))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_10004c3c();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
