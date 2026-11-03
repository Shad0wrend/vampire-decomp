// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1ce0 size=0x3
#include "CDisciplineWeapon.h"
bool CDisciplineWeapon::vfunc281()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103f1d00 size=0x1e
#include "CDisciplineWeapon.h"

void sub_100aa7b0(void *p);

// TARGET: CDisciplineWeapon::vfunc5
CDisciplineWeapon *CDisciplineWeapon::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f1d30 size=0x6
#include "datamap.h"
#include "CDisciplineWeapon.h"
namespace lifted {
extern char g_1067e538;
}
datamap_t *CDisciplineWeapon::vfunc82()
{
    return (datamap_t *)&lifted::g_1067e538;
}
// END FUNCTION

// FUNCTION: 0x103f2020 size=0x18b
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CDisciplineWeapon.h"
#include "CVStatList_t.h"

void sub_10003ca1();

char CDisciplineWeapon::vfunc316(int a)
{
	int owner = sub_10252240();
	if (owner) {
		CVStatListSet *set = CVStatListSet::Of((void *)owner);
		for (int n = set->Find(3)->sub_10010609(m_nStatType); n > 0; n--) {
			set->Find(3)->sub_10200ea0(m_nStatType);
			set->Find(0)->sub_10200d60(0xc);
		}
	}
	sub_100ac4e0((int)sub_10003ca1, 0, 0);
	m_f17c = gpGlobals->curtime + 0.5f;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103f2220 size=0xf7
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"
#include "CDisciplineWeapon.h"
#include "CVStatList_t.h"
#include "CEHandleGet.h"

#define S(n) virtual void n();
#define S10(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct DWOwnerObj
{
	S100(a) S100(b) S100(c) S100(d) S10(e0) S10(e1) S10(e2) S10(e3)
	S(f0) S(f1) S(f2) S(f3) S(f4) S(f5) S(f6) S(f7) S(f8)
	virtual void slot449(int a, int b);
};

struct DWOwnerSlots
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7)
	S(e0) S(e1) S(e2) S(e3) S(e4) S(e5) S(e6) S(e7)
	virtual void slot388(void *pWeapon, int a);
};

void CDisciplineWeapon::vfunc326()
{
	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)((CAI_BaseNPCTroika *)this)->sub_10252240();
	if (pOwner) {
		DWOwnerObj *pObj = *(DWOwnerObj **)((char *)pOwner + 0xa8);
		if (pObj)
			pObj->slot449(5, 0);
		CVStatListSet::Of(pOwner)->Find(3)->sub_102008e0(m_nStatType, 0);
		pOwner->vfunc111();
		((DWOwnerSlots *)pOwner)->slot388(EHandle_Get(*(unsigned int *)((char *)pOwner + 0xea4)), 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103f2360 size=0x8
#include "CDisciplineWeapon.h"
void CDisciplineWeapon::vfunc327() { vfunc326(); }
// END FUNCTION
