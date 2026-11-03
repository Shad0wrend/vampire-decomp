// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10131430 size=0x6
#include "datamap.h"
#include "CTimerEntity.h"
namespace lifted {
extern char g_10575e50;
}
datamap_t *CTimerEntity::vfunc82()
{
    return (datamap_t *)&lifted::g_10575e50;
}
// END FUNCTION

// FUNCTION: 0x10131600 size=0x55
#include "CTimerEntity.h"
extern float g_10465b1c;

// TARGET: CTimerEntity::vfunc103
void CTimerEntity::vfunc103()
{
	if (m_n4a4 == 0 && m_fInterval < g_10465b1c)
		m_fInterval = g_10465b1c;
	if (m_n498 == 0 && (m_fInterval > 0.0f || m_n4a4 != 0))
		sub_10131750();
	else
		sub_10131770();
}
// END FUNCTION

// FUNCTION: 0x10131680 size=0x23
struct CTimerEntityCallee {
    void sub_10010794(void *a, void *b, int c);
};
void __fastcall sub_10001226(void *pSelf);

// TARGET: sub_10131680
void __fastcall sub_10131680(void *pSelf)
{
    if (*((unsigned char *)pSelf + 0x204) & 2) {
        ((CTimerEntityCallee *)((char *)pSelf + 0x450))->sub_10010794(pSelf, pSelf, 0);
    }
    sub_10001226(pSelf);
}
// END FUNCTION

// FUNCTION: 0x10135dc0 size=0x41
#include "CTimerEntity.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

void sub_100aa7b0(void *p);

CTimerEntity *CTimerEntity::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x480))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x450))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
