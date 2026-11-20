// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012fbf0 size=0x1b
#include "CPositionInterpolator_Rope.h"
void CRopeDelegate::vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel)
{
	pAccel->Init(0, 0, -1500);
}
// END FUNCTION

// FUNCTION: 0x1012fc20 size=0x3b
#include "CPositionInterpolator_Rope.h"

void CRopeDelegate::vfunc1(CRopeNode *pNodes, int nNodes)
{
    if (nNodes >= 2) {
        int *pOut = (int *)pNodes;
        CRopeVec *pVecs = (CRopeVec *)((char *)this + 4);
        pOut[0] = pVecs[0].x;
        pOut[1] = pVecs[0].y;
        pOut[2] = pVecs[0].z;
        int *pLast = pOut + (nNodes * 9 - 9);
        pLast[0] = pVecs[1].x;
        pLast[1] = pVecs[1].y;
        pLast[2] = pVecs[1].z;
    }
}
// END FUNCTION
