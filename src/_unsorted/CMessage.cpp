// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10101eb0 size=0xfe
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
