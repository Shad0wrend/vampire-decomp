// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004fcb0 size=0xab
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CSimplePhysicsProp.h"
#include "CCollisionProperty.h"
#include "CUnknown101466e0.h"

void CSimplePhysicsProp::vfunc103()
{
	sub_10011793();
	vfunc93(7, 0);
	{
		const char *name = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", name ? name : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	}
	*(int *)((char *)this + 0x1fc) = 1;
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	sub_100b3900(2);
}
// END FUNCTION

// FUNCTION: 0x1004fd90 size=0xc
#include "CSimplePhysicsProp.h"
namespace lifted {
int sub_1000cfa9();
}
int CSimplePhysicsProp::vfunc226()
{
    *(char *)((char *)this + 0x1b1) = 1;
    return lifted::sub_1000cfa9();
}
// END FUNCTION

// FUNCTION: 0x1004fdd0 size=0x1f
#include "CSimplePhysicsProp.h"
#include "CBaseEntity.h"

CBaseEntity *sub_104115b0(int a, int b);

// TARGET: CSimplePhysicsProp::vfunc32
bool CSimplePhysicsProp::vfunc32(int a)
{
	return (CBaseEntity *)this == sub_104115b0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x1004fe00 size=0xe
#include "CBaseEntity.h"
#include "CSimplePhysicsProp.h"
namespace lifted {
int sub_10010ec9(int);
}
void CSimplePhysicsProp::vfunc39(CBaseEntity * a0)
{
    lifted::sub_10010ec9(*(int *)&a0);
}
// END FUNCTION

// FUNCTION: 0x1004fe20 size=0xe
// TARGET: sub_1004fe20
void sub_1040d950(int x);

void __stdcall sub_1004fe20(int x)
{
    sub_1040d950(x);
}
// END FUNCTION

// FUNCTION: 0x1004fe40 size=0xe
// TARGET: sub_1004fe40
void sub_1040d9a0(int x);

void __stdcall sub_1004fe40(int x)
{
    sub_1040d9a0(x);
}
// END FUNCTION

// FUNCTION: 0x1004fe60 size=0x8
#include "CBaseEntity.h"
#include "CSimplePhysicsProp.h"
// TARGET: CSimplePhysicsProp::vfunc117
unsigned char CSimplePhysicsProp::vfunc117()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1004fe80 size=0x1e
#include "CSimplePhysicsProp.h"

void sub_100aa7b0(void *p);

// TARGET: CSimplePhysicsProp::vfunc5
CSimplePhysicsProp *CSimplePhysicsProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
