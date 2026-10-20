// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012fca0 size=0x72
#include "CPositionInterpolator_Rope.h"

CPositionInterpolator_Rope::CPositionInterpolator_Rope() : m_flSlack(0), m_bChanged(0)
{
    m_nType = 5;
    int *p = &m_vecs[0].z;
    for (int i = 2; i; i--) {
        p[-2] = 0x6753c21c;
        p[-1] = 0x6753c21c;
        p[0] = 0x6753c21c;
        p += 3;
    }
}
// END FUNCTION
