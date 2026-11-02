// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f44b0 size=0x5
#include "CNodeNPCFilter.h"

// TARGET: CNodePosFilter::vfunc0
bool CNodePosFilter::vfunc0(void *pEnt)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x102f44d0 size=0x31
// TARGET: sub_102f44d0
struct CPosArg_102f44d0 {
    char pad[8];
    float x;
    float y;
    float z;
};
struct CNodePosFilter_102f44d0 {
    char pad[4];
    float *m_pNodePos;
    float sub_102f44d0(const CPosArg_102f44d0 *p);
};

float CNodePosFilter_102f44d0::sub_102f44d0(const CPosArg_102f44d0 *p)
{
    float dx = p->x - m_pNodePos[0];
    float dy = p->y - m_pNodePos[1];
    float dz = p->z - m_pNodePos[2];
    float s = dz * dz + dx * dx;
    return s + dy * dy;
}
// END FUNCTION
