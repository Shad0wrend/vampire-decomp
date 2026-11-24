// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ad720 size=0xe
extern int g_102b2178[];
// TARGET: sub_100ad720
int __stdcall sub_100ad720(int i)
{
	return g_102b2178[i];
}
// END FUNCTION

// FUNCTION: 0x100adb90 size=0x6
#include "C_ClientStats.h"

// TARGET: C_ClientStats::vfunc6
int C_ClientStats::vfunc6()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100adba0 size=0x8
#include "C_ClientStats.h"

// TARGET: C_ClientStats::vfunc7
int C_ClientStats::vfunc7(int)
{
	return (int)"";
}
// END FUNCTION

// FUNCTION: 0x100adbb0 size=0x3
// TARGET: sub_100adbb0
int sub_100adbb0()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100adbc0 size=0x3
// TARGET: sub_100adbc0
void __stdcall sub_100adbc0(int)
{
}
// END FUNCTION

// FUNCTION: 0x100adbd0 size=0x6
#include "C_ClientStats.h"

// TARGET: C_ClientStats::vfunc10
int C_ClientStats::vfunc10()
{
	return 6;
}
// END FUNCTION

// FUNCTION: 0x100adbe0 size=0x6
#include "C_ClientStats.h"

// TARGET: C_ClientStats::vfunc11
int C_ClientStats::vfunc11()
{
	return 0x1b;
}
// END FUNCTION

// FUNCTION: 0x100adbf0 size=0xb
#include "C_ClientStats.h"
int C_ClientStats::vfunc14(int i) { return m_Stats[i]; }
// END FUNCTION

// FUNCTION: 0x100adc00 size=0xf
#include "C_ClientStats.h"
__int64 C_ClientStats::vfunc15(int i) { return ((__int64 *)&m_Stats[7])[i]; }
// END FUNCTION

// FUNCTION: 0x100adc10 size=0xb
#include "C_ClientStats.h"
// TARGET: C_ClientStats::vfunc16
int C_ClientStats::vfunc16(int i)
{
	return ((int *)this)[0x14 + i];
}
// END FUNCTION

// FUNCTION: 0x100adc20 size=0xb
#include "C_ClientStats.h"
// TARGET: C_ClientStats::vfunc17
int C_ClientStats::vfunc17(int i) { return (&m_Stats[25])[i]; }
// END FUNCTION

// FUNCTION: 0x100adc30 size=0xe
#include "C_ClientStats.h"
// TARGET: C_ClientStats::vfunc18
double C_ClientStats::vfunc18(int i) { return ((double *)((char *)this + 0x80))[i]; }
// END FUNCTION

// FUNCTION: 0x100adc40 size=0xe
#include "C_ClientStats.h"
double C_ClientStats::vfunc19(int i) { return ((double *)&m_Stats[0x8b])[i]; }
// END FUNCTION

// FUNCTION: 0x100adc50 size=0xd
#include "C_ClientStats.h"
void C_ClientStats::vfunc0(int v) { m_unk308 = v; }
// END FUNCTION

// FUNCTION: 0x100adc60 size=0x3c
#include "C_ClientStats.h"
struct StatsView { int vptr; char pad[0x1c]; __int64 m20[6]; int m50[6]; int m68[6]; char pad2[0x230 - 0x80]; int m230[0x36]; };
// TARGET: C_ClientStats::vfunc1
void C_ClientStats::vfunc1()
{
	StatsView *v = (StatsView *)this;
	int i;
	for (i = 0; i < 0x36; i++)
		v->m230[i] = 0;
	for (i = 0; i < 6; i++)
	{
		v->m20[i] = 0;
		v->m50[i] = 0x7fffffff;
		v->m68[i] = 0x80000000;
	}
}
// END FUNCTION

// FUNCTION: 0x100adca0 size=0x1
#include "C_ClientStats.h"

// TARGET: C_ClientStats::vfunc2
void C_ClientStats::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x100adcb0 size=0x1e
#include "C_ClientStats.h"
// TARGET: C_ClientStats::vfunc3
void C_ClientStats::vfunc3()
{
	for (int i = 0; i < 0x36; i++)
		m_Stats[31 + i] = 0;
	for (int j = 0; j < 6; j++)
		m_Stats[j] = 0;
}
// END FUNCTION
