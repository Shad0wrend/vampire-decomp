// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10212620 size=0x1e
#include "CGameSign.h"

void sub_100aa7b0(void *p);

// TARGET: CGameSign::vfunc5
CGameSign *CGameSign::vfunc5(unsigned int flags)
{
	sub_1000726b();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10212c00 size=0x74
#include "CGameSign.h"
struct CGlobalsView { char m_pad[0xc]; float curtime; };
extern CGlobalsView *g_1070b228;
extern int g_105abb08;
struct CSignPlayerView {
    char m_pad[0x2090];
    unsigned int m_nFlags2090;
    void sub_10178590(Vector vLook);
    void sub_10167fd0();
};

void CGameSign::vfunc41(void *pPlayer)
{
    CSignPlayerView *p = (CSignPlayerView *)pPlayer;
    p->sub_10178590(*(Vector *)((char *)this + 0x464));
    if (m_flags204 & 1) {
        if (g_1070b228->curtime - *(float *)((char *)this + 0x460) > *(float *)((char *)this + 0x458) + 2.0f) {
            if ((p->m_nFlags2090 & g_105abb08) == g_105abb08)
                p->sub_10167fd0();
        }
    }
}
// END FUNCTION
