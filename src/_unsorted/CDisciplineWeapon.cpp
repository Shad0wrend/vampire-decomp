// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x103f2020 size=0x18b
#include "CDisciplineWeapon.h"
#include "CVStatList_t.h"

struct CGlobalVarsLite
{
	char m_pad00[0xc];
	float curtime;
};
extern CGlobalVarsLite *g_1070b228;
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
	m_f17c = g_1070b228->curtime + 0.5f;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103f2360 size=0x8
#include "CDisciplineWeapon.h"
void CDisciplineWeapon::vfunc327() { vfunc326(); }
// END FUNCTION
