// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10158220 size=0x2d
// TARGET: CSolidSetDefaults::vfunc0
#include <stdlib.h>
#include <string.h>
#include "CSolidSetDefaults.h"

void CSolidSetDefaults::vfunc0(void *unused, const char *pszKey, const char *pszValue) {
    if (_strcmpi(pszKey, "contents") == 0) {
        m_nContents = atoi(pszValue);
    }
}
// END FUNCTION

// FUNCTION: 0x10158260 size=0x26
#include "CSolidSetDefaults.h"

struct CSolidDefaultBlock {
    int d[12];
};

extern CSolidDefaultBlock g_1046ecb4;

// TARGET: CSolidSetDefaults::vfunc1
void CSolidSetDefaults::vfunc1(void *pSolid)
{
    *(CSolidDefaultBlock *)((char *)pSolid + 0x610) = g_1046ecb4;
    m_nContents = 1;
}
// END FUNCTION
