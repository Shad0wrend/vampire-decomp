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

// FUNCTION: 0x100adc50 size=0xd
#include "C_ClientStats.h"
void C_ClientStats::vfunc0(int v) { m_unk308 = v; }
// END FUNCTION

// FUNCTION: 0x100adca0 size=0x1
#include "C_ClientStats.h"

// TARGET: C_ClientStats::vfunc2
void C_ClientStats::vfunc2()
{
}
// END FUNCTION
