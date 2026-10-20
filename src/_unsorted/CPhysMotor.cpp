// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x10029160 size=0x7a
#include "CPhysMotor.h"

struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
float sub_10008fe9(float a, float b, float c);

void CPhysMotor::vfunc134()
{
	float amount = (g_1070b228->curtime - m_flLastTime468) * m_flRate464;
	float current = m_flCurrent478;
	float target = m_flTarget460;
	m_flCurrent478 = sub_10008fe9(target, current, amount);
	m_flLastTime468 = g_1070b228->curtime;
	if (m_flCurrent478 != m_flTarget460)
		sub_100ac610(g_1070b228->curtime, 0);
}
// END FUNCTION
