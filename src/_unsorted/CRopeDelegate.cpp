// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012fbf0 size=0x1b
#include "CPositionInterpolator_Rope.h"
int CRopeDelegate::vfunc0(int a0, int a1, int a2)
{
    *(int *)((char *)a2) = 0;
    *(int *)((char *)a2 + 4) = 0;
    *(int *)((char *)a2 + 8) = -994344960;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x1012fc20 size=0x3b
#include "CPositionInterpolator_Rope.h"

void CRopeDelegate::vfunc1(int *pOut, int count)
{
    if (count >= 2) {
        CRopeVec *pVecs = (CRopeVec *)((char *)this + 4);
        pOut[0] = pVecs[0].x;
        pOut[1] = pVecs[0].y;
        pOut[2] = pVecs[0].z;
        int *pLast = pOut + (count * 9 - 9);
        pLast[0] = pVecs[1].x;
        pLast[1] = pVecs[1].y;
        pLast[2] = pVecs[1].z;
    }
}
// END FUNCTION
