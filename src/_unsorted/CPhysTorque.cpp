// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10028160 size=0x6
#include "CPhysTorque.h"
namespace lifted {
extern char g_10537098;
}
CPhysTorque::Datamap82 CPhysTorque::vfunc82()
{
    return (CPhysTorque::Datamap82)&lifted::g_10537098;
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
