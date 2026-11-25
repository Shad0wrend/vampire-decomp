// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10196b90 size=0xe7
#include "CViewEffects.h"

static inline float anglemod(float a)
{
	a = (360.0f / 65536.0f) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

// TARGET: CViewEffects::vfunc8
void CViewEffects::vfunc8(Vector &origin, QAngle &angles, float factor)
{
	if (m_nState != 2)
		return;

	bool bNeg = false;
	float a = anglemod(angles.y + m_flAppliedAngle);
	if (a > 180.0f)
	{
		a = (float)(180.0 - (a - 180.0f));
		bNeg = true;
	}
	a /= 90.0f;
	if (a > 1.0)
	{
		a = (float)(1.0 - (a - 1.0));
	}
	if (bNeg)
	{
		a = -a;
	}
	m_flAppliedAngle = a * m_flShakeAngle * factor;
	m_vecAppliedOffset = m_vecShakeOffset * factor;
	angles.z += m_flAppliedAngle;
	VectorAdd(m_vecAppliedOffset, origin, origin);
}
// END FUNCTION

// FUNCTION: 0x101976d0 size=0x5f
#include "CViewEffects.h"
#include "ScopeTrace.h"

// TARGET: CViewEffects::vfunc10
void CViewEffects::vfunc10()
{
	ScopeTrace trace("CViewEffects::StartHolyLight", g_102de300);
	*(char *)((char *)this + 0x99) = 1;
}
// END FUNCTION

// FUNCTION: 0x10197730 size=0x64
#include "CViewEffects.h"
#include "ScopeTrace.h"

// TARGET: CViewEffects::vfunc11
void CViewEffects::vfunc11()
{
    ScopeTrace trace("CViewEffects::EndHolyLight", g_102de300);
    *((char *)this + 0x99) = 0;
    vfunc15();
}
// END FUNCTION

// FUNCTION: 0x101977a0 size=0x5f
#include "CViewEffects.h"
#include "ScopeTrace.h"

// TARGET: CViewEffects::sub_101977a0
bool CViewEffects::sub_101977a0()
{
	ScopeTrace trace("CViewEffects::IsHolyLightActive", g_102de300);
	return *(bool *)((char *)this + 0x99);
}
// END FUNCTION

// FUNCTION: 0x101978d0 size=0x72
#include "CViewEffects.h"
#include "ScopeTrace.h"

void CViewEffects::vfunc14(float flStrength)
{
    ScopeTrace trace("CViewEffects::PullTowardsHolyLight", "", "");
    if (m_flHolyLightStrength < flStrength)
        m_flHolyLightStrength = flStrength;
}
// END FUNCTION
