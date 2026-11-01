// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002a090 size=0x6
#include "CPhysConstraintSystem.h"
namespace lifted {
extern char g_10538b18;
}
datamap_t *CPhysConstraintSystem::vfunc82()
{
    return (datamap_t *)&lifted::g_10538b18;
}
// END FUNCTION

// FUNCTION: 0x1002a170 size=0x16
#include "CPhysConstraintSystem.h"
struct IPhysicsEnvironmentLike { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void *v19(); };
extern IPhysicsEnvironmentLike *g_10723940;

// TARGET: CPhysConstraintSystem::vfunc103
void CPhysConstraintSystem::vfunc103()
{
	m_pSystem = g_10723940->v19();
}
// END FUNCTION

// FUNCTION: 0x1002cab0 size=0x1e
#include "CPhysConstraintSystem.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysConstraintSystem::vfunc5
CPhysConstraintSystem *CPhysConstraintSystem::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
