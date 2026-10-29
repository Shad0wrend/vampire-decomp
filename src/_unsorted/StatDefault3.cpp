// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d3990 size=0x51
#include "StatDefault3.h"
StatDefault3::~StatDefault3()
{
    if (m_d0[0]) delete m_d0[0];
    if (m_d0[1]) delete m_d0[1];
    if (m_pd8) delete m_pd8;
    if (m_dc) delete m_dc;
}
// END FUNCTION
