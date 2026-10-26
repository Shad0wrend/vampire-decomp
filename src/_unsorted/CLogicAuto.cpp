// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10130d10 size=0x15
#include "CLogicAuto.h"
struct globalvars_t { int pad[3]; float curtime; };
extern globalvars_t *g_1070b228;
void CLogicAuto::sub_10130d10()
{
	m_flTime = g_1070b228->curtime + 0.2;
}
// END FUNCTION

// FUNCTION: 0x10130db0 size=0x27
#include "CLogicAuto.h"

struct CLogicAutoSub450 {
    void sub_10010794(int a, CLogicAuto *b, int c);
};

void __cdecl sub_10014614(CLogicAuto *p);

// TARGET: CLogicAuto::vfunc134
void CLogicAuto::vfunc134()
{
    ((CLogicAutoSub450 *)((char *)this + 0x450))->sub_10010794(0, this, 0);
    if (*(unsigned char *)((char *)this + 0x204) & 1) {
        sub_10014614(this);
    }
}
// END FUNCTION
