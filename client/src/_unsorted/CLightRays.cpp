// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10049030 size=0x10e
#include "CLightRays.h"

extern float (__cdecl *g_101e31a0)(float flMin, float flMax);

// TARGET: CLightRays::CLightRays
CLightRays::CLightRays(int numRays, float a1, float a2, float a3, float a4, float a5, float a6)
{
	m_Rays.EnsureCount(numRays);

	for (int i = 0; i < numRays; i++)
	{
		m_Rays[i].f00 = g_101e31a0(0.0f, 360.0f);
		m_Rays[i].f04 = g_101e31a0(a1, a2);
		m_Rays[i].f08 = g_101e31a0(a3, a4);
		m_Rays[i].f0c = g_101e31a0(a5, a6);
		if (m_Rays[i].f08 > m_Rays[i].f0c)
		{
			float tmp = m_Rays[i].f08;
			m_Rays[i].f08 = m_Rays[i].f0c;
			m_Rays[i].f0c = tmp;
		}
		m_Rays[i].n28 = i;
	}

	m_v18 = Vector(1.0f, 0.0f, 0.0f);
	m_v24 = Vector(0.0f, 1.0f, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10049140 size=0x1e
#include "CLightRays.h"

// VC6 writes CLightRays's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLightRays *pcd_emit_10049140() { return new CLightRays; }

// TARGET: ??_GCLightRays@@UAEPAXI@Z
// END FUNCTION
