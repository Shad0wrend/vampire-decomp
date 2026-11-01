// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013ff10 size=0x6
#include "CPathKeyFrame.h"
namespace lifted {
extern char g_1057a308;
}
datamap_t *CPathKeyFrame::vfunc82()
{
    return (datamap_t *)&lifted::g_1057a308;
}
// END FUNCTION

// FUNCTION: 0x1013ffa0 size=0x71
#include "CPathKeyFrame.h"
#include "CEntityVSlots.h"
static inline Vector &Assign(Vector &d, const Vector &s)
{
    d.x = s.x;
    d.y = s.y;
    d.z = s.z;
    return d;
}
void CPathKeyFrame::vfunc103()
{
    Assign(m_vOrigin, *((CEntityVSlots *)this)->slot220());
    Assign(m_vAngles, *((CEntityVSlots *)this)->slot221());
    sub_10140270(m_vAngles);
}
// END FUNCTION

// FUNCTION: 0x10140f00 size=0x1e
#include "CPathKeyFrame.h"

void sub_100aa7b0(void *p);

// TARGET: CPathKeyFrame::vfunc5
CPathKeyFrame *CPathKeyFrame::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
