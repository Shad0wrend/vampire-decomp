// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10132380 size=0x6
#include "CMathColorBlend.h"
namespace lifted {
extern char g_105762ec;
}
datamap_t * CMathColorBlend::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105762ec);
}
// END FUNCTION

// FUNCTION: 0x10132600 size=0x55
#include "CMathColorBlend.h"
void CMathColorBlend::vfunc103()
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
