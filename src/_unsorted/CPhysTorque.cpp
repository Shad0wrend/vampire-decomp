// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10028160 size=0x6
#include "datamap.h"
#include "CPhysTorque.h"
namespace lifted {
extern char g_10537098;
}
datamap_t *CPhysTorque::vfunc82()
{
    return (datamap_t *)&lifted::g_10537098;
}
// END FUNCTION

// FUNCTION: 0x10028260 size=0x5f
#include "CPhysTorque.h"
#include "CPointEntity.h"
void sub_101cf680(Vector *, float);

void CPhysTorque::sub_10028260()
{
	m_fFlags204 = (m_fFlags204 & ~2) | 0x14;
	Vector *pOrigin = ((Vector *(__fastcall *)(CPhysTorque *))(*(void ***)this)[217])(this);
	m_vecAxis -= *pOrigin;
	VectorNormalize(m_vecAxis);
	sub_101cf680(&m_vecAxis, 0.01f);
	((CPointEntity *)this)->sub_101c0820();
}
// END FUNCTION

// FUNCTION: 0x100282e0 size=0x75
#include "CPhysTorque.h"
#include "CPhysObjSlots.h"

void sub_10138460(const Vector *pIn, const float *pMatrix, Vector *pOut);

void CPhysTorque::sub_100282e0(CPhysObjSlots *pPhys, Vector &linear, Vector &angular)
{
	linear.Init();

	float matrix[12];
	pPhys->slot38(matrix);

	Vector axis_ws;
	sub_10138460(&m_vecAxis, matrix, &axis_ws);

	angular = axis_ws * m_flScale;
}
// END FUNCTION

// FUNCTION: 0x10029b80 size=0x1e
#include "CPhysTorque.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysTorque::vfunc5
CPhysTorque *CPhysTorque::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
