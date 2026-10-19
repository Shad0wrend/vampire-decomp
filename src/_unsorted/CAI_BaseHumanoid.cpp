// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1025f1a0 size=0xe
bool CAI_BaseHumanoid::vfunc586()
{
	return m_unk5f94 != 0;
}
// END FUNCTION

// FUNCTION: 0x102624b0 size=0x74
#include "CAI_BaseHumanoid.h"

extern float g_10463584;
extern float g_104492a4;
extern float g_1049949c;

float CAI_BaseHumanoid::vfunc516()
{
    switch (m_state0fec) {
    case 59:
    case 60:
        return g_104492a4;
    case 9:
    case 18:
    case 19:
        return g_10463584;
    default:
        return g_1049949c;
    }
}
// END FUNCTION
