// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f56f0 size=0x6
#include "CBaseMoneyObject.h"
namespace lifted {
extern char g_1067f184;
}
int CBaseMoneyObject::vfunc82()
{
    return (int)&lifted::g_1067f184;
}
// END FUNCTION

// FUNCTION: 0x103f57b0 size=0x1e
#include "CBaseMoneyObject.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseMoneyObject::vfunc5
CBaseMoneyObject *CBaseMoneyObject::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f57e0 size=0xd
struct CBaseCombatWeaponFwd;
struct CBaseMoneyObjectFwd {
    void sub_103f57e0(int a, int b);
};
struct CBaseCombatWeaponFwd {
    void sub_10252ea0(int a, int b);
};

// TARGET: sub_103f57e0
void CBaseMoneyObjectFwd::sub_103f57e0(int a, int b)
{
    b = *(volatile int *)&b;
    ((CBaseCombatWeaponFwd *)this)->sub_10252ea0(a, b);
}
// END FUNCTION

// FUNCTION: 0x103f5860 size=0xb
#include "CBaseMoneyObject.h"

void CBaseMoneyObject::vfunc305()
{
	m_unk1ec = 0;
}
// END FUNCTION
