// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e04b0 size=0x65
#include "CDetailObjectSystem.h"
void sub_10109910();
CDetailObjectSystem::CDetailObjectSystem()
{
    sub_10109910();
}
// TARGET: ??0CDetailObjectSystem@@QAE@XZ
// END FUNCTION

// FUNCTION: 0x100e0520 size=0x3
// TARGET: sub_100e0520
bool sub_100e0520()
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x100e0530 size=0x1
#include "CDetailObjectSystem.h"

// TARGET: CDetailObjectSystem::vfunc1
void CDetailObjectSystem::vfunc1()
{
}
// END FUNCTION

// FUNCTION: 0x100e0540 size=0x1
#include "CDetailObjectSystem.h"

// TARGET: CDetailObjectSystem::vfunc3
void CDetailObjectSystem::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x100e0550 size=0x1
#include "CDetailObjectSystem.h"
// TARGET: CDetailObjectSystem::vfunc6
void CDetailObjectSystem::vfunc6()
{
}
// END FUNCTION

// FUNCTION: 0x100e0560 size=0x3
// TARGET: sub_100e0560
void __stdcall sub_100e0560(int)
{
}
// END FUNCTION

// FUNCTION: 0x100e0570 size=0x21
struct El0570 { int a; int m4; char pad[72]; };
struct V0570 { char pad[0x1c]; El0570 *arr; int *sub_100e0570(unsigned int h); };
int *V0570::sub_100e0570(unsigned int h) { El0570 *e = &arr[h & 0xffff]; return e ? &e->m4 : 0; }
// END FUNCTION

// FUNCTION: 0x100e05a0 size=0x19
#include "CDetailObjectSystem.h"
// TARGET: CDetailObjectSystem::vfunc11
char *CDetailObjectSystem::vfunc11(unsigned int i)
{
	return (char *)m_data.m_unk1c + (i & 0xffff) * 80 + 0x20;
}
// END FUNCTION

// FUNCTION: 0x100e08f0 size=0x1
#include "CDetailObjectSystem.h"
// TARGET: CDetailObjectSystem::vfunc5
void CDetailObjectSystem::vfunc5()
{
}
// END FUNCTION
