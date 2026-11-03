// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10101dd0 size=0x6
#include "datamap.h"
#include "CMessage.h"
namespace lifted {
extern char g_105694a8;
}
datamap_t * CMessage::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105694a8);
}
// END FUNCTION

// FUNCTION: 0x10101eb0 size=0xfe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CMessage.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CMessage::vfunc103()
{
    vfunc104();
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    vfunc93(0, 0);
    switch (m_n458) {
    case 1: m_f45c = 1.25f; break;
    case 2: m_f45c = 0.8f; break;
    case 3: m_f45c = 0.0f; break;
    default: m_f45c = 60.0f; break;
    }
    float f; f = (float)((0.1 * m_f454));
    m_n458 = 0;
    m_f454 = f;
    if (f <= 0.0f)
        m_f454 = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101022e0 size=0x2b
#include "CMessage.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CMessage::vfunc5
CMessage *CMessage::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x464))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
