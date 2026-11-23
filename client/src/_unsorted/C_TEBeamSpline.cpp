// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10033ef0 size=0x37
#include "C_TEBeamSpline.h"
// TARGET: ??0C_TEBeamSpline@@QAE@XZ
C_TEBeamSpline::C_TEBeamSpline() { for (int i = 0; i < 16; i++) m_vecPoints[i].Init(0, 0, 0); m_nPoints = 0; }
// END FUNCTION

// FUNCTION: 0x10033fb0 size=0x6
#include "C_TEBeamSpline.h"
namespace lifted {
extern char g_1027df30;
}
int C_TEBeamSpline::vfunc9()
{
    return (int)&lifted::g_1027df30;
}
// END FUNCTION

// FUNCTION: 0x10033fc0 size=0x3
#include "C_TEBeamSpline.h"
int C_TEBeamSpline::vfunc8()
{
    return 0;
}
// END FUNCTION
