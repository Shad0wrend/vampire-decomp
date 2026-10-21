// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b3b60 size=0x1e
#include "CNPC_VTest.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VTest::vfunc5
CNPC_VTest *CNPC_VTest::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b3cc0 size=0x1d
#include "CNPC_VTest.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c8bc;
extern B g_10936c74;
int CNPC_VTest::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c8bc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b41e0 size=0xc2
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

struct SoundSystemLike
{
	virtual void PrecacheSound(const char *name, int flag);
};
extern SoundSystemLike *g_1070b248;
extern const char *g_10652188;
extern const char *g_1065218c;
extern const char *g_10652190;
extern const char *g_10652194[4];
extern const char *g_106521a4;
extern const char *g_106521a8;
extern const char *g_106521ac;
extern const char *g_106521b0;
extern const char *g_106521b4;

void CNPC_VTest::vfunc104()
{
	g_1070b248->PrecacheSound(g_10652188, 0);
	g_1070b248->PrecacheSound(g_1065218c, 0);
	g_1070b248->PrecacheSound(g_10652190, 0);
	for (unsigned int i = 0; i < 4; i++)
		g_1070b248->PrecacheSound(g_10652194[i], 0);
	g_1070b248->PrecacheSound(g_106521a4, 0);
	g_1070b248->PrecacheSound(g_106521a8, 0);
	g_1070b248->PrecacheSound(g_106521ac, 0);
	g_1070b248->PrecacheSound(g_106521b0, 0);
	g_1070b248->PrecacheSound(g_106521b4, 0);
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103b4f30 size=0x77
#include "CNPC_VTest.h"
struct CNPC_VTestUnit : CNPC_VTest {
    bool sub_10014df8(int condition);
    int sub_10015ad2();
    int sub_103b4f30();
};

int CNPC_VTestUnit::sub_103b4f30()
{
    char *p = (char *)this;
    *(int *)(p + 0x1b2c) = 0x23;
    switch (*(int *)(p + 0x5cc0)) {
    case 2:
        return 0x158;
    case 0xb:
        if (sub_10014df8(0x6a) || sub_10014df8(0x6d) || sub_10014df8(0x6e) || sub_10014df8(0x70) || sub_10014df8(0x6f))
            return 0x80;
        return 0x15a;
    }
    return sub_10015ad2();
}
// END FUNCTION
