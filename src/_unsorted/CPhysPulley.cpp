// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002c300 size=0x6
#include "datamap.h"
#include "CPhysPulley.h"
namespace lifted {
extern char g_10538f44;
}
datamap_t *CPhysPulley::vfunc82()
{
    return (datamap_t *)&lifted::g_10538f44;
}
// END FUNCTION

// FUNCTION: 0x1002c400 size=0x118
#include "CPhysPulley.h"
#include "matrix3x4_t.h"
void sub_10137fe0(const float *, const float *, float *);
void sub_10142e90(const float *, const float *, int, int, int, int, int);
// TARGET: CPhysPulley::vfunc123
void CPhysPulley::vfunc123()
{
	if (m_debugOverlays224 & 0x2c)
	{
		Vector p1 = ((CPhysConstraint *)this)->vfunc217();
		Vector p0 = p1, p2 = p1;
		matrix3x4_t m;
		PhysObjView *pObj = m_pConstraint450->vfunc5();
		if (pObj)
		{
			pObj->GetPositionMatrix(&m);
			sub_10137fe0(&m_vecObj1494.x, &m.m_flMatVal[0][0], &p0.x);
		}
		pObj = m_pConstraint450->vfunc6();
		if (pObj)
		{
			pObj->GetPositionMatrix(&m);
			sub_10137fe0(&m_vecObj24a0.x, &m.m_flMatVal[0][0], &p2.x);
		}
		sub_10142e90(&p0.x, &p1.x, 0, 255, 0, 0, 0);
		sub_10142e90(&p1.x, &m_vecPos488.x, 0, 255, 0, 0, 0);
		sub_10142e90(&m_vecPos488.x, &p2.x, 0, 255, 0, 0, 0);
	}
	sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x1002cba0 size=0x1e
#include "CPhysPulley.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysPulley::vfunc5
CPhysPulley *CPhysPulley::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
