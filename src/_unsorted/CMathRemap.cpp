// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10131ef0 size=0x6
#include "CMathRemap.h"
namespace lifted {
extern char g_1057619c;
}
datamap_t * CMathRemap::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057619c);
}
// END FUNCTION

// FUNCTION: 0x10132170 size=0x55
#include "CMathRemap.h"
void CMathRemap::vfunc103()
{
    if (m_flInMin == m_flInMax) {
        m_flInMin = 0;
        m_flInMax = 1.0f;
    }
    if (m_flInMin > m_flInMax) {
        float t = m_flInMin;
        m_flInMin = m_flInMax;
        m_flInMax = t;
    }
}
// END FUNCTION
