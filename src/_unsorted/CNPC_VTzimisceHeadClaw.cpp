// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c0c90 size=0x1d
#include "CNPC_VTzimisceHeadClaw.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d1ac;
extern B g_10936c74;
int CNPC_VTzimisceHeadClaw::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d1ac.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c16f0 size=0x13
#include "CNPC_VTzimisceHeadClaw.h"
void CNPC_VTzimisceHeadClaw::vfunc453()
{
	sub_102ad140();
	sub_100123f5(0x35);
}
// END FUNCTION

// FUNCTION: 0x103c1720 size=0x95
#include "CNPC_VTzimisceHeadClaw.h"

// TARGET: CNPC_VTzimisceHeadClaw::vfunc440
int CNPC_VTzimisceHeadClaw::vfunc440(int act)
{
    switch (act) {
    case 0xc7:
        return 0xc8;
    case 0xe7:
        return 0x156;
    case 0xbf:
        return 0x157;
    case 0xed:
    case 0xef:
        return 0xf0;
    }
    return sub_102b12f0(act);
}
// END FUNCTION

// FUNCTION: 0x103c1c80 size=0x14
#include "CNPC_VTzimisceHeadClaw.h"

void CNPC_VTzimisceHeadClaw::vfunc420()
{
	CNPC_VBaseBoss::vfunc420();
	m_iField6678 = 0;
}
// END FUNCTION
