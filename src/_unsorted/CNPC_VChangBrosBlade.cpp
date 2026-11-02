// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036eab0 size=0x6
#include "CNPC_VChangBrosBlade.h"
namespace lifted {
extern char g_1093a8f0;
}
int CNPC_VChangBrosBlade::vfunc580()
{
    return (int)&lifted::g_1093a8f0;
}
// END FUNCTION

// FUNCTION: 0x1036ead0 size=0x6
#include "CNPC_VChangBrosBlade.h"
namespace lifted {
extern int g_1062fe40;
}
int CNPC_VChangBrosBlade::vfunc451()
{
    return lifted::g_1062fe40;
}
// END FUNCTION

// FUNCTION: 0x1036eaf0 size=0x2b
#include "CNPC_VChangBrosBlade.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_100123af();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CNPC_VChangBrosBlade::vfunc5
CNPC_VChangBrosBlade *CNPC_VChangBrosBlade::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x6664))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1036eb30 size=0x6
#include "CNPC_VChangBrosBlade.h"
namespace lifted {
extern char g_1062fe20;
}
datamap_t *CNPC_VChangBrosBlade::vfunc82()
{
    return (datamap_t *)&lifted::g_1062fe20;
}
// END FUNCTION

// FUNCTION: 0x1036ec90 size=0x6
extern char g_1062fe38;
// TARGET: sub_1036ec90
char sub_1036ec90() { return g_1062fe38; }
// END FUNCTION

// FUNCTION: 0x1036ecf0 size=0x1d
#include "CNPC_VChangBrosBlade.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a8d8;
extern B g_10936c74;
int CNPC_VChangBrosBlade::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a8d8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1036f100 size=0x61
#include "CNPC_VChangBrosBlade.h"
#include "CUnknown1036c7f0.h"
#include "ScopeTrace.h"
namespace block_1036f100 {
struct CUnknown1036c7f0Unit : CUnknown1036c7f0 { void sub_1036c7f0(int value); };
void CUnknown1036c7f0Unit::sub_1036c7f0(int value)
{
	m_unk66b8 = value;
}
}
using namespace block_1036f100;
// TARGET: CNPC_VChangBrosBlade::vfunc420
void CNPC_VChangBrosBlade::vfunc420()
{
	ScopeTrace trace("CNPC_VChangBrosBlade::NPCInit", g_106b8540);
	((CUnknown1036c7f0Unit *)this)->sub_1036c7f0(0);
	sub_10014867();
}
// END FUNCTION
