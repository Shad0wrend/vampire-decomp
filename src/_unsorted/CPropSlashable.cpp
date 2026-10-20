// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101932c0 size=0xa0
#include "CPropSlashable.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CPropSlashable::vfunc103
void CPropSlashable::vfunc103()
{
    sub_10011793();
    m_nTakeDamage = 2;
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
    }
    sub_100b3580(0x20000000);
    sub_100b3b00();
    sub_100a9470(1);
}
// END FUNCTION
