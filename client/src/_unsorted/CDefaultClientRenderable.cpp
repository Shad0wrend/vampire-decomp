// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10028670 size=0x1d
#include "CDefaultClientRenderable.h"
int CDefaultClientRenderable::vfunc8(int a0, int a1)
{
    *(int *)((char *)a0) = 0;
    *(int *)((char *)a0 + 4) = 0;
    *(int *)((char *)a0 + 8) = 0;
    *(int *)((char *)a1) = 0;
    *(int *)((char *)a1 + 4) = 0;
    *(int *)((char *)a1 + 8) = 0;
    return a1;
}
// END FUNCTION

// FUNCTION: 0x100286b0 size=0x3
// TARGET: sub_100286b0
void __stdcall sub_100286b0(int)
{
}
// END FUNCTION

// FUNCTION: 0x100286e0 size=0x3
#include "CDefaultClientRenderable.h"

// TARGET: CDefaultClientRenderable::vfunc2
int CDefaultClientRenderable::vfunc2()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100286f0 size=0xb
struct CUnknown100286f0 { int a; int m; int *sub_100286f0(); };
int *CUnknown100286f0::sub_100286f0() { return this ? &m : 0; }
// END FUNCTION

// FUNCTION: 0x10028700 size=0x3
// TARGET: sub_10028700
int sub_10028700()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10028710 size=0x3
// TARGET: sub_10028710
int sub_10028710()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10028720 size=0x3
// TARGET: sub_10028720
int sub_10028720()
{
	return 0;
}
// END FUNCTION
