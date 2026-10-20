// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039b0d0 size=0x1e
#include "CNPC_VMingXiaoTentacle.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VMingXiaoTentacle::vfunc5
CNPC_VMingXiaoTentacle *CNPC_VMingXiaoTentacle::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1039b230 size=0x1d
#include "CNPC_VMingXiaoTentacle.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bd80;
extern B g_10936c74;
int CNPC_VMingXiaoTentacle::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bd80.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1039de00 size=0xd
struct TentacleField1b2c { char pad[0x1b2c]; int m; };
int CNPC_VMingXiaoTentacle::vfunc437()
{
	((TentacleField1b2c *)this)->m = 0x1a;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1039e800 size=0x1d
#include "CNPC_VMingXiaoTentacle.h"

struct CBasePlayerCall
{
    void *sub_1039ede0();
    void sub_10001a78(CNPC_VMingXiaoTentacle *pSelf, int arg);
};

struct CTentacleUnit : CNPC_VMingXiaoTentacle
{
    void sub_1039e800(int arg);
};

void CTentacleUnit::sub_1039e800(int arg)
{
    void *pPlayer = ((CBasePlayerCall *)this)->sub_1039ede0();
    if (pPlayer)
        ((CBasePlayerCall *)pPlayer)->sub_10001a78(this, arg);
}
// END FUNCTION
