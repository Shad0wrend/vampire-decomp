// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b120 size=0x58
#include "CUnknown1016b120.h"

namespace lifted {
extern char g_1024a4ac;
struct C101b1fc0 { int sub_101b1fc0(int, int, int); };
}

// TARGET: CUnknown1016b120::sub_1016b120
void *CUnknown1016b120::sub_1016b120(int a0, int a1, int a2, int a3)
{
	int t0 = ((lifted::C101b1fc0 *)this)->sub_101b1fc0(a0, a1, a2);
	int n = -1;
	*(volatile int *)((char *)this + 0xbc) = n;
	*(volatile unsigned char *)((char *)this + 0xb8) = (unsigned char)a3;
	*(volatile int *)this = (int)&lifted::g_1024a4ac;
	*(volatile unsigned char *)((char *)this + 0xb9) = 0;
	*(volatile unsigned char *)((char *)this + 0xba) = 0;
	*(volatile int *)((char *)this + 0xbc) = n;
	*(volatile unsigned char *)((char *)this + 0xbb) = 0;
	*(volatile int *)((char *)this + 0xc0) = 0;
	return this;
}
// END FUNCTION
