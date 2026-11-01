// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002b700 size=0x6
#include "CPhysHinge.h"
namespace lifted {
extern char g_10538ddc;
}
datamap_t *CPhysHinge::vfunc82()
{
    return (datamap_t *)&lifted::g_10538ddc;
}
// END FUNCTION

// FUNCTION: 0x1002b920 size=0x96
#include "CPhysHinge.h"

void sub_10142e90(const Vector &start, const Vector &end, int r, int g, int b, bool noDepthTest, float duration);

// TARGET: CPhysHinge::vfunc123
void CPhysHinge::vfunc123()
{
    if (m_debugOverlays224 & 0x2c)
    {
        Vector vecEnd = m_hinge.worldPosition + m_hinge.worldAxisDirection * 48.0f;
        sub_10142e90(m_hinge.worldPosition, vecEnd, 0, 255, 0, false, 0.0f);
    }
    sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x1002cae0 size=0x1e
#include "CPhysHinge.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysHinge::vfunc5
CPhysHinge *CPhysHinge::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
