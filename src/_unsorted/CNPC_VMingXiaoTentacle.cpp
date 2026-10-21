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

// FUNCTION: 0x1039c380 size=0x86
#include "CNPC_VMingXiaoTentacle.h"
struct CGlobalVarsTime { char pad[0xc]; float curtime; };
extern CGlobalVarsTime *g_1070b228;
extern float g_10454110;
void CNPC_VMingXiaoTentacle::vfunc103()
{
	sub_10012855(0x4000000);
	sub_10012855(0x200000);
	sub_1000303a();
	sub_100153a7(0x80000);
	m_n6670 = 0;
	m_b63d8 = 1;
	m_n6674 = 0;
	m_n6678 = 0;
	m_n667c = 0;
	m_n6680 = 0;
	float now = g_1070b228->curtime;
	float t = now + g_10454110;
	m_b6688 = 1;
	m_b6698 = 0;
	m_b6699 = 0;
	m_flTimer6684 = t;
	sub_1000df44(4);
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
