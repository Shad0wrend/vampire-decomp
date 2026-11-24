// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10119060 size=0x68
#include "CPhysicsSystem.h"
#include "utlvector.h"

void __cdecl sub_101d1296(void *p);

CAutoGameSystem *CPhysicsSystem::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x8))->~CUtlVector<int>();
	sub_100f3f80();
	if (flags & 1)
		sub_101d1296(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101190e0 size=0x3
// TARGET: sub_101190e0
bool sub_101190e0()
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x101190f0 size=0x1
#include "CPhysicsSystem.h"

// TARGET: CPhysicsSystem::vfunc1
void CPhysicsSystem::vfunc1()
{
}
// END FUNCTION

// FUNCTION: 0x10119100 size=0x8
#include "CPhysicsSystem.h"
void CPhysicsSystem::vfunc2() { m_unk14 = 0; }
// END FUNCTION

// FUNCTION: 0x10119190 size=0x1
// TARGET: sub_10119190
void sub_10119190()
{
}
// END FUNCTION

// FUNCTION: 0x101191d0 size=0x3
#include "CPhysicsSystem.h"

// TARGET: CPhysicsSystem::vfunc7
void CPhysicsSystem::vfunc7(int)
{
}
// END FUNCTION
