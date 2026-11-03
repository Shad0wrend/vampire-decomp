// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002cca0 size=0x3
#include "Vector.h"
// TARGET: ?Base@?$CUtlMemory@H@@QAEPAHXZ
#include "utlmemory.h"
int *CUtlMemory<int>::Base()
{
    return m_pMemory;
}
// END FUNCTION
