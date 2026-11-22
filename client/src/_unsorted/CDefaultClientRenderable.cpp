// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10028670 size=0x1d
#include "CDefaultClientRenderable.h"
int CDefaultClientRenderable::vfunc8(int a0, int a1)
{
    *(int *)((char *)a0) = 0;
    *(int *)((char *)a0 + 4) = 0;
    *(int *)((char *)a0 + 8) = 0;
    *(int *)((char *)a1) = 0;
    *(int *)((char *)a1 + 4) = 0;
    *(int *)((char *)a1 + 8) = 0;
    return a1;
}
// END FUNCTION
