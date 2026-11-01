// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10057130 size=0x6
namespace lifted {
extern char g_106be494;
}
int CFireSmoke::vfunc80()
{
    return (int)&lifted::g_106be494;
}
// END FUNCTION

// FUNCTION: 0x10057150 size=0x3
int CFireSmoke::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100573e0 size=0x6
namespace lifted {
extern char g_1053f8b8;
}
CFireSmoke::Datamap82 CFireSmoke::vfunc82()
{
    return (CFireSmoke::Datamap82)&lifted::g_1053f8b8;
}
// END FUNCTION

// FUNCTION: 0x100574e0 size=0x1e
#include "CFireSmoke.h"

void sub_100aa7b0(void *p);

// TARGET: CFireSmoke::vfunc5
CFireSmoke *CFireSmoke::vfunc5(unsigned int flags)
{
	sub_1000eff7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10057510 size=0x2b
extern char g_1053fae4[];

struct CFireSmokeUnit10057510 {
    char pad[0x460];
    int m_i460;
    void sub_1000961a(int a);
    void sub_10057510(int a);
};

// TARGET: sub_10057510
void CFireSmokeUnit10057510::sub_10057510(int a)
{
    m_i460 = engine->vfunc13(g_1053fae4, 0);
    sub_1000961a(a);
}
// END FUNCTION

// FUNCTION: 0x10057570 size=0x13
void CFireSmoke::sub_10057570()
{
	engine->vfunc13("sprites/fire1.vmt", 0);
}
// END FUNCTION
