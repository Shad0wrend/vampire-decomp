// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
