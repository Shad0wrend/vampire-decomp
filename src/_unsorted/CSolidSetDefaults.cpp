// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10158220 size=0x2d
// TARGET: CSolidSetDefaults::vfunc0
#include <stdlib.h>
#include <string.h>
#include "CSolidSetDefaults.h"

void CSolidSetDefaults::vfunc0(int unused, const char *pszKey, const char *pszValue) {
    if (_strcmpi(pszKey, "contents") == 0) {
        m_nContents = atoi(pszValue);
    }
}
// END FUNCTION
