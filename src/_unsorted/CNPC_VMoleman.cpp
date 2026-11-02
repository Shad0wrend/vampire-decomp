// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039f600 size=0x6
// TARGET: CNPC_VMoleman::vfunc580
extern char g_1093bdd8;

char *CNPC_VMoleman::vfunc580()
{
	return &g_1093bdd8;
}
// END FUNCTION

// FUNCTION: 0x1039f640 size=0x1e
#include "CNPC_VMoleman.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VMoleman::vfunc5
CNPC_VMoleman *CNPC_VMoleman::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1039f7a0 size=0x1d
#include "CNPC_VMoleman.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bdb8;
extern B g_10936c74;
int CNPC_VMoleman::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bdb8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1039fcc0 size=0x6
int CNPC_VMoleman::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x1039fd20 size=0x9d
// TARGET: CNPC_VMoleman::vfunc438
int CNPC_VMoleman::vfunc438()
{
	m_n1b2c = 0x1b;
	if ((m_flags14b8 & 2) == 2) {
		m_flags14b8 &= ~2;
		return 0xf1;
	}
	switch (m_nState5cc0) {
	case 1:
		if (m_pNavigator->sub_102ee620() != 8 && m_n62ec == 0)
			return 0xff;
		if (sub_1001482b(0x13))
			return 0x102;
		if (sub_1001482b(0x10))
			return 0x106;
		return (sub_1001482b(0x11) ? 5 : 0) + 0x100;
	}
	return sub_10015ad2();
}
// END FUNCTION
