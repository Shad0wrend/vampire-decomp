// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103683f0 size=0x1e
#include "CNPC_VCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCamera::vfunc5
CNPC_VCamera *CNPC_VCamera::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10368550 size=0x1d
#include "CNPC_VCamera.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a7bc;
extern B g_10936c74;
int CNPC_VCamera::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a7bc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10368f20 size=0x10
#include "CNPC_VCamera.h"
int CNPC_VCamera::sub_10368f20()
{
	m_n1b2c = 9;
	return 0x156;
}
// END FUNCTION

// FUNCTION: 0x10368f40 size=0x10
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc438()
{
	m_n1b2c = 9;
	return 0x156;
}
// END FUNCTION

// FUNCTION: 0x10369120 size=0xd2
#include "CNPC_VCamera.h"
#include "CEntityVSlots.h"

struct GlobalVarsView
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
};
extern GlobalVarsView *g_1070b228;
extern char g_1093408c;

struct CameraSlots432
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42)
	EVS(430) EVS(431)
	virtual void slot432(int a);
};

// TARGET: CNPC_VCamera::vfunc431
void CNPC_VCamera::vfunc431()
{
	if (m_b5b55) {
		m_b5b55 = 0;
		sub_1027efb0();
	}
	if (!sub_1029f2e0()) {
		sub_1026a0f0();
		if (!sub_1026c3d0()) {
			if (!g_1093408c)
				m_flNextThink = g_1070b228->curtime + 0.1f;
		} else {
			((CameraSlots432 *)this)->slot432(0);
			m_flPrev6254[0] = m_flCur6244[0];
			m_flPrev6254[1] = m_flCur6244[1];
			m_flPrev6254[2] = m_flCur6244[2];
			m_flPrev6254[3] = m_flCur6244[3];
			m_flCur6244[0] = m_flNextThink = g_1070b228->curtime + 0.2;
			m_flCur6244[1] = m_flNextThink;
			m_flCur6244[2] = m_flNextThink;
			m_flCur6244[3] = m_flNextThink;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10369bd0 size=0xa5
#include "CNPC_VCamera.h"
class CBaseEntity;
#include "CUnknown103158f0.h"
extern void (*g_109f3650)(int level, const char *fmt, ...);
int __fastcall sub_1009f200(void *p);
void *sub_10008ee5(void *h);
void *sub_10015bc7(void *e, void *h);

typedef unsigned int (__fastcall *FlagsFn)(void *);
typedef void (__fastcall *VoidFn)(void *);

// TARGET: CNPC_VCamera::vfunc545
int CNPC_VCamera::vfunc545()
{
    if (m_p5da4 == 0) {
        unsigned int f = ((FlagsFn)(*(void ***)this)[0x804 / 4])(this);
        if (f & 0x4000000) {
            if (*(void * volatile *)&m_p5da8 == 0) {
                g_109f3650(2, "WARNING: Found %s that isn't in a squad\n", sub_1009f200(this));
                return m_p5da4 != 0;
            }
            m_p5da4 = sub_10008ee5(m_p5da8);
            if (m_p5da4 == 0) {
                m_p5da4 = sub_10015bc7(this, m_p5da8);
                if (m_p5da4 != 0)
                    ((CUnknown103158f0 *)m_p5da4)->sub_103158f0((CBaseEntity *)this);
            }
            ((VoidFn)(*(void ***)this)[0x878 / 4])(this);
        }
    }
    return m_p5da4 != 0;
}
// END FUNCTION
