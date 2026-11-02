// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e87b0 size=0x6
#include "CWeaponMelee_TzimisceMelee.h"

extern int g_10941680;

// TARGET: CWeaponMelee_TzimisceMelee::vfunc80
void *CWeaponMelee_TzimisceMelee::vfunc80()
{
	return &g_10941680;
}
// END FUNCTION

// FUNCTION: 0x103e87d0 size=0x3
#include "CWeaponMelee_TzimisceMelee.h"

int CWeaponMelee_TzimisceMelee::vfunc81()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103e8980 size=0x6
#include "CWeaponMelee_TzimisceMelee.h"
namespace lifted {
extern char g_10674b1c;
}
CWeaponActivityRecord * CWeaponMelee_TzimisceMelee::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10674b1c);
}
// END FUNCTION

// FUNCTION: 0x103e89a0 size=0x6
#include "CWeaponMelee_TzimisceMelee.h"
int CWeaponMelee_TzimisceMelee::vfunc363()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x103e8a30 size=0x37
#include "CWeaponMelee_TzimisceMelee.h"
CWeaponMelee_TzimisceMelee::CWeaponMelee_TzimisceMelee()
{
	m_n08b8 = 0;
	m_n08bc = 0;
	m_f08c0 = 108.0f;
	m_f08c4 = 108.0f;
	m_n0910 = 0;
}
// END FUNCTION

// FUNCTION: 0x103e8a80 size=0x4
#include "CWeaponMelee_TzimisceMelee.h"
int CWeaponMelee_TzimisceMelee::vfunc373()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x103e8aa0 size=0x1e
#include "CWeaponMelee_TzimisceMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_TzimisceMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee_TzimisceMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103e8ad0 size=0xce
#include "CWeaponMelee_TzimisceMelee.h"
#include <math.h>

#define OV(n) virtual void ov##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)
struct OwnerView {
	OV10(0) OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15)
	OV(160) OV(161) OV(162) OV(163) OV(164) OV(165) OV(166)
	virtual OwnerView *ov167();
	OV(168) OV(169)
	OV10(17) OV10(18) OV10(19) OV10(20) OV10(21)
	virtual float *ov220();
};

int CWeaponMelee_TzimisceMelee::vfunc367(int a, float b, float c)
{
	if (c > 270.0)
		return 9;
	if (c > 129.6)
		return 0x60;
	if (b < 0.7)
		return 0x61;
	if (((OwnerView *)sub_102521f0())->ov167() == 0)
		return 0;
	OwnerView *p = (OwnerView *)sub_102521f0();
	OwnerView *q = ((OwnerView *)sub_102521f0())->ov167();
	float z = p->ov220()[2];
	if ((float)fabs(z - q->ov220()[2]) > 32.0f)
		return 0;
	return 0x51;
}
// END FUNCTION

// FUNCTION: 0x103e8be0 size=0x4a
#include "CWeaponMelee_TzimisceMelee.h"

struct S103e8be0 { char pad[0xa8]; int m_field; };

// TARGET: CWeaponMelee_TzimisceMelee::vfunc370
void CWeaponMelee_TzimisceMelee::vfunc370(int *event, CBaseCombatWeapon *other)
{
	switch (*event) {
	case 0xbbb:
		break;
	case 0xbe5:
		if (!((S103e8be0 *)other)->m_field)
			sub_103e8c50();
		break;
	case 0xbe6:
		if (!((S103e8be0 *)other)->m_field)
			sub_103e8c90();
		break;
	default:
		CWeaponMelee::vfunc370(event, other);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103e8cd0 size=0xbf
#include "CWeaponMelee_TzimisceMelee.h"
#include "CUnknown1070b244.h"
extern CUnknown1070b244 *g_1070b244;

void CWeaponMelee_TzimisceMelee::vfunc269(CBaseCombatWeapon *pOther, Vector vecDir)
{
    if (pOther) {
        if (m_n0910 > 0 && m_n0910 <= 2) {
            float *p = (float *)sub_102517e0();
            float f = g_1070b244->vfunc1(p[0x3b8 / 4], p[0x3bc / 4]);
            if (f != 0.0f) {
                vecDir = vecDir * -f;
                pOther->vfunc170(&vecDir);
            }
        } else {
            CBaseCombatWeapon::vfunc269(pOther, vecDir);
        }
    }
}
// END FUNCTION
