// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10262400 size=0x1e
#include "CAI_HumanoidMotor.h"

// TARGET: CAI_HumanoidMotor::vfunc0
CAI_HumanoidMotor *CAI_HumanoidMotor::vfunc0(unsigned int flags)
{
	sub_10014b32();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10264650 size=0x17
#include "CAI_HumanoidMotor.h"
#include "CAI_Motor.h"

void CAI_HumanoidMotor::vfunc10()
{
	((CAI_Motor *)this)->CAI_Motor::vfunc10();
	if (m_n6c != -1)
		m_n6c = -1;
}
// END FUNCTION
