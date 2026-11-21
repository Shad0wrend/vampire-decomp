// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1011ff70 size=0x26
#include "CSolidSetDefaults.h"

struct CSolidDefaultBlock {
    int d[12];
};

extern CSolidDefaultBlock g_10235b5c;

// TARGET: CSolidSetDefaults::vfunc1
void CSolidSetDefaults::vfunc1(void *pSolid)
{
    *(CSolidDefaultBlock *)((char *)pSolid + 0x610) = g_10235b5c;
    m_nContents = 1;
}
// END FUNCTION
