// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d7290 size=0x8
#include "CAI_TestHull.h"
// TARGET: CAI_TestHull::vfunc117
char CAI_TestHull::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x102d72b0 size=0x7
#include "CAI_TestHull.h"
namespace lifted {
extern float g_10462950;
}
float CAI_TestHull::vfunc522()
{
    return lifted::g_10462950;
}
// END FUNCTION

// FUNCTION: 0x102d72d0 size=0x7
#include "CAI_TestHull.h"
namespace lifted {
extern float g_10462950;
}
float CAI_TestHull::vfunc523()
{
    return lifted::g_10462950;
}
// END FUNCTION

// FUNCTION: 0x102d72f0 size=0x16b
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CAI_TestHull.h"
int sub_102d6210(int index);
void sub_1000f36c(int a);
struct TestHullFields {
    char pad[0x1568];
    int m_nHull;
};
void CAI_TestHull::vfunc103()
{
    CBaseEntity *self = (CBaseEntity *)this;
    int mask = sub_1000d8b9();
    int idx = 0;
    if (mask > 0) {
        int m = sub_102d6210(0);
        while ((mask & m) == 0) {
            idx++;
            if (idx == 0x16) {
                sub_1000f36c(0);
                idx = 0;
                break;
            }
            m = sub_102d6210(idx);
        }
    }
    ((TestHullFields *)self)->m_nHull = idx;
    sub_1000dc29(0);
    const char *pName = self->m_name26c ? self->m_name26c : g_106b8540;
    CCollisionProperty *pCol = (CCollisionProperty *)((char *)self + 0x270);
    {
        ScopeTrace trace("CBaseEntity::SetSolid", pName);
        pCol->sub_100dc480(2);
    }
    {
        ScopeTrace trace("CBaseEntity::AddSolidFlags", self->m_name26c ? self->m_name26c : g_106b8540);
        pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
    }
    self->vfunc93(4, 0);
    self->m_iHealth = 0x32;
    self->sub_100b3580(0x40000);
    *((char *)self + 0x5f44) = 0;
    self->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x102d7760 size=0x26
// TARGET: CAI_TestHull::vfunc521
#include "CAI_TestHull.h"

void CAI_TestHull::vfunc521(int a, int b, int c)
{
	sub_1001484e(a, b, c, 1024.0f, 1024.0f, 1024.0f);
}
// END FUNCTION

// FUNCTION: 0x102d77d0 size=0x1e
#include "CAI_TestHull.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_TestHull::vfunc5
CAI_TestHull *CAI_TestHull::vfunc5(unsigned int flags)
{
	sub_100033a0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
