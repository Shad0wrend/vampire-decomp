// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a1e40 size=0x1e
#include "CNPC_VPedestrian.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPedestrian::vfunc5
CNPC_VPedestrian *CNPC_VPedestrian::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a1fa0 size=0x1d
#include "CNPC_VPedestrian.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bffc;
extern B g_10936c74;
int CNPC_VPedestrian::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bffc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a38c0 size=0xdc
#include "CBaseEntity.h"
#include "CNPC_VPedestrian.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1053dafc[];

void CNPC_VPedestrian::vfunc301(int a, int b)
{
	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	float *pMins = pCollision->vfunc1();
	m_vecMins6660[0] = pMins[0];
	m_vecMins6660[1] = pMins[1];
	m_vecMins6660[2] = pMins[2];
	float *pMaxs = pCollision->vfunc2();
	m_vecMaxs666c[0] = pMaxs[0];
	m_vecMaxs666c[1] = pMaxs[1];
	m_vecMaxs666c[2] = pMaxs[2];
	sub_10293a60(a, b);
	sub_100ac4e0(0, 0, 0);
	{
		ScopeTrace trace(g_1053dafc, m_name26c ? m_name26c : g_106b8540);
		pCollision->sub_100dc480(0);
	}
}
// END FUNCTION
