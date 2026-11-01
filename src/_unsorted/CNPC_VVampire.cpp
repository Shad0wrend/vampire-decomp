// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103750e0 size=0x6
#include "CNPC_VVampire.h"
namespace lifted {
extern char g_1093d258;
}
int CNPC_VVampire::vfunc580()
{
    return (int)&lifted::g_1093d258;
}
// END FUNCTION

// FUNCTION: 0x10375100 size=0x6
#include "CNPC_VVampire.h"
namespace lifted {
extern int g_1065e090;
}
int CNPC_VVampire::vfunc451()
{
    return lifted::g_1065e090;
}
// END FUNCTION

// FUNCTION: 0x103c47e0 size=0x6
#include "CNPC_VVampire.h"
namespace lifted {
extern char g_1065e070;
}
datamap_t * CNPC_VVampire::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1065e070);
}
// END FUNCTION

// FUNCTION: 0x103c4920 size=0x1e
#include "CNPC_VVampire.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VVampire::vfunc5
CNPC_VVampire *CNPC_VVampire::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103c4a20 size=0x6
extern unsigned char g_1065e088;
// TARGET: sub_103c4a20
unsigned char sub_103c4a20()
{
    return g_1065e088;
}
// END FUNCTION

// FUNCTION: 0x103c4a80 size=0x1d
#include "CNPC_VVampire.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d2a4;
extern B g_10936c74;
int CNPC_VVampire::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d2a4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c4ef0 size=0x20
struct CNPC_VVampireCall_103c4ef0
{
    void sub_10332aa0(int a, int b, int c);
    void sub_10384690();
    void sub_1026dc00(int a);
    void sub_103c4ef0();
};

// TARGET: CNPC_VVampireCall_103c4ef0::sub_103c4ef0
void CNPC_VVampireCall_103c4ef0::sub_103c4ef0()
{
    sub_10332aa0(1, 1, 0);
    sub_10384690();
    sub_1026dc00(0x40);
}
// END FUNCTION

// FUNCTION: 0x103c4f20 size=0x6
#include "CNPC_VVampire.h"
int CNPC_VVampire::vfunc138()
{
    return 0xf;
}
// END FUNCTION
