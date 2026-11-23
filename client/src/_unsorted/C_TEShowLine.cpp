// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003ea60 size=0x24
#include "C_TEShowLine.h"
// TARGET: ??0C_TEShowLine@@QAE@XZ
C_TEShowLine::C_TEShowLine()
{
	m_vecEnd.Init(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1003ebf0 size=0x6
#include "C_TEShowLine.h"
namespace lifted {
extern char g_102814d4;
}
int C_TEShowLine::vfunc9()
{
    return (int)&lifted::g_102814d4;
}
// END FUNCTION

// FUNCTION: 0x1003ec00 size=0x3
#include "C_TEShowLine.h"
int C_TEShowLine::vfunc8()
{
    return 0;
}
// END FUNCTION
