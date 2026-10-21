// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ec320 size=0x1e
#include "CWeaponMelee_MingXiaoMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_MingXiaoMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee_MingXiaoMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ec350 size=0xce
#include "CWeaponMelee_MingXiaoMelee.h"
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

void *sub_102521f0();

int CWeaponMelee_MingXiaoMelee::vfunc367(int a, float b, float c)
{
	if (c > 1250.0)
		return 9;
	if (c > 600.0)
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

// FUNCTION: 0x103ec460 size=0x18
#include "CWeaponMelee_MingXiaoMelee.h"
void CWeaponMelee_MingXiaoMelee::vfunc370(CWeaponMeleeEvent *pEvent, int b)
{
	if (pEvent->m_type != 0xbbb)
		CWeaponMelee::sub_103ea5b0(pEvent, b);
}
// END FUNCTION
