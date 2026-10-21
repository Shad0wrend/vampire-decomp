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
