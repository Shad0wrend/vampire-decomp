// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037c6a0 size=0x1e
#include "CNPC_VGuard1.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VGuard1::vfunc5
CNPC_VGuard1 *CNPC_VGuard1::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1037c800 size=0x1d
#include "CNPC_VGuard1.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b1b4;
extern B g_10936c74;
int CNPC_VGuard1::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b1b4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037d130 size=0xcb
#include "CNPC_VGuard1.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct GuardTargetView
{
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

static inline GuardTargetView *GetTarget(const unsigned int &rh)
{
	if (rh != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[rh & 0x1fff];
		if (pSlot->m_Serial == (int)(rh >> 13))
			return (GuardTargetView *)pSlot->m_pEntity;
	}
	return 0;
}

// TARGET: CNPC_VGuard1::vfunc438
int CNPC_VGuard1::vfunc438()
{
	m_n1b2c = 0x12;
	if ((m_flags14b8 & 2) == 2) {
		m_flags14b8 &= ~2;
		return 0xf1;
	}
	if (m_nState5cc0 == 0xc) {
		if (sub_1001482b(0x1e) && GetTarget(m_h628c)) {
			GetTarget(m_h628c)->sub_1017e6f0(0);
			return 0x6d;
		}
		sub_1026e340(1);
	}
	return sub_10015ad2();
}
// END FUNCTION
