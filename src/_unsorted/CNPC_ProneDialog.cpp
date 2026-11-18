// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a4bb0 size=0x132
#include "CNPC_ProneDialog.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CUnknown1070b254.h"

struct RayLocal : Ray_t
{
	void InitL(const Vector &start, const Vector &end)
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[2] * m_Delta[2] + m_Delta[1] * m_Delta[1] + m_Delta[0] * m_Delta[0]) != g_104454c4;
		m_StartOffset[0] = m_StartOffset[1] = m_StartOffset[2] = 0.0f;
		m_IsRay = true;
		m_Extents[0] = m_Extents[1] = m_Extents[2] = 0.0f;
		m_Start[0] = start.x;
		m_Start[1] = start.y;
		m_Start[2] = start.z;
		m_b32 = 0;
		m_n34 = 0;
		m_b33 = 0;
	}
};

bool CNPC_ProneDialog::vfunc45(int unused, Vector vecStart, Vector vecEnd, unsigned int mask)
{
	bool bResult = false;
	RayLocal ray;
	CGameTrace trace;
	ray.InitL(vecStart, vecEnd);
	g_1070b254->vfunc2(&ray, mask, (CBaseEntity *)this, &trace);
	if (trace.m_pEnt == (CBaseEntity *)this || (trace.m_pEnt == 0 && trace.m_fraction == 1.0))
		bResult = true;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x103a4d40 size=0x1e
#include "CNPC_ProneDialog.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_ProneDialog::vfunc5
CBaseEntity *CNPC_ProneDialog::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
