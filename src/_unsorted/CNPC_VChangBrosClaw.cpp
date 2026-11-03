// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036f2b0 size=0x6
#include "CNPC_VChangBrosClaw.h"
namespace lifted {
extern char g_1093a938;
}
int CNPC_VChangBrosClaw::vfunc580()
{
    return (int)&lifted::g_1093a938;
}
// END FUNCTION

// FUNCTION: 0x1036f2d0 size=0x6
#include "CNPC_VChangBrosClaw.h"
namespace lifted {
extern int g_1062fe64;
}
int CNPC_VChangBrosClaw::vfunc451()
{
    return lifted::g_1062fe64;
}
// END FUNCTION

// FUNCTION: 0x1036f2f0 size=0x2b
#include "CNPC_VChangBrosClaw.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_100123af();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CNPC_VChangBrosClaw::vfunc5
CNPC_VChangBrosClaw *CNPC_VChangBrosClaw::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x6664))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1036f330 size=0x6
#include "datamap.h"
#include "CNPC_VChangBrosClaw.h"
namespace lifted {
extern char g_1062fe44;
}
datamap_t *CNPC_VChangBrosClaw::vfunc82()
{
    return (datamap_t *)&lifted::g_1062fe44;
}
// END FUNCTION

// FUNCTION: 0x1036f490 size=0x6
extern char g_1062fe5c;
// TARGET: sub_1036f490
char sub_1036f490() { return g_1062fe5c; }
// END FUNCTION

// FUNCTION: 0x1036f4f0 size=0x1d
#include "CNPC_VChangBrosClaw.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093aa10;
extern B g_10936c74;
int CNPC_VChangBrosClaw::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093aa10.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1036f900 size=0x61
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBrosClaw.h"
#include "CUnknown1036c7f0.h"
#include "ScopeTrace.h"
namespace block_1036f900 {
struct CUnknown1036c7f0Unit : CUnknown1036c7f0 { void sub_1036c7f0(int value); };
void CUnknown1036c7f0Unit::sub_1036c7f0(int value)
{
	m_unk66b8 = value;
}
}
using namespace block_1036f900;
// TARGET: CNPC_VChangBrosClaw::vfunc420
void CNPC_VChangBrosClaw::vfunc420()
{
	ScopeTrace trace("CNPC_VChangBrosClaw::NPCInit", g_106b8540);
	((CUnknown1036c7f0Unit *)this)->sub_1036c7f0(1);
	sub_10014867();
}
// END FUNCTION
