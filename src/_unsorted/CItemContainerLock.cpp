// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10224190 size=0xb
void CItemContainerLock::vfunc275()
{
	m_unk780 = 1;
}
// END FUNCTION

// FUNCTION: 0x102264f0 size=0x18
#include "CItemContainerLock.h"
#include "CBaseVampireSkillEntity.h"

void CItemContainerLock::vfunc103()
{
    ((CBaseVampireSkillEntity *)this)->vfunc103();
    *(unsigned int *)((char *)this + 0x19c) |= 0x40;
}
// END FUNCTION
