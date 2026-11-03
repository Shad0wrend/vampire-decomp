// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100286c0 size=0x6
#include "datamap.h"
#include "CPhysMotor.h"
namespace lifted {
extern char g_105372ac;
}
datamap_t *CPhysMotor::vfunc82()
{
    return (datamap_t *)&lifted::g_105372ac;
}
// END FUNCTION

// FUNCTION: 0x10028c00 size=0x1e
#include "CPhysMotor.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysMotor::vfunc5
CPhysMotor *CPhysMotor::vfunc5(unsigned int flags)
{
	sub_10013b33();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10028c30 size=0x47
#include "CPhysMotor.h"
void sub_101cf680(Vector *v, float f);
// TARGET: CPhysMotor::vfunc103
void CPhysMotor::vfunc103()
{
	m_vec480 -= *vfunc220();
	VectorNormalize(m_vec480);
	sub_101cf680(&m_vec480, 0.01f);
}
// END FUNCTION

// FUNCTION: 0x10029160 size=0x7a
#include "CPhysMotor.h"

float sub_10008fe9(float a, float b, float c);

void CPhysMotor::vfunc134()
{
	float amount = (gpGlobals->curtime - m_flLastTime468) * m_flRate464;
	float current = m_flCurrent478;
	float target = m_flTarget460;
	m_flCurrent478 = sub_10008fe9(target, current, amount);
	m_flLastTime468 = gpGlobals->curtime;
	if (m_flCurrent478 != m_flTarget460)
		sub_100ac610(gpGlobals->curtime, 0);
}
// END FUNCTION
