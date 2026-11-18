// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103788d0 size=0x107
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CNPC_VGargoyle.h"
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CVStatList_t.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot530View
{
	SV100(a) SV100(b) SV100(c) SV100(d) SV100(e)
	SV10(f0) SV10(f1) SV10(f2)
	virtual char s530(CEntityVSlots *pEnt);
};

struct CNavView { char sub_102ee380(const float *pFrom, const float *pTo); };

struct CGargoyleView
{
	char m_pad0[0x1b2c];
	int m_n1b2c;
	const char *m_pszFile1b30;
	int m_nLine1b34;
	char m_pad1b38[0x5cc0 - 0x1b38];
	int m_nState5cc0;
	char m_pad5cc4[0x5d34 - 0x5cc4];
	CNavView *m_pNav;
};

// TARGET: CNPC_VGargoyle::vfunc438
int CNPC_VGargoyle::vfunc438()
{
    CGargoyleView *p = (CGargoyleView *)this;
    p->m_n1b2c = 0x11;
    if (CVStatListSet::Of(this)->Find(0)->sub_102017b0(0xf, 0x11)) {
        p->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VGargoyle.cpp";
        p->m_nLine1b34 = 0x174;
        return 0x15c;
    }
    switch (p->m_nState5cc0) {
    case 2:
        CEntityVSlots *pEnemy = (CEntityVSlots *)((CAI_BaseNPC *)this)->vfunc167();
        bool bNoPath = true;
        if (pEnemy && !((CSlot530View *)this)->s530(pEnemy)) {
            CNavView *pNav = p->m_pNav;
            bNoPath = !pNav->sub_102ee380(((CAI_BaseNPC *)this)->vfunc217(), (const float *)pEnemy->slot217());
        }
        if (bNoPath) {
            int r = sub_10378f80();
            if (r)
                return r;
        }
    }
    return sub_10384ee0();
}
// END FUNCTION

// FUNCTION: 0x10378d80 size=0x5
#include "CNPC_VGargoyle.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGargoyle::vfunc366
// the game's 0x10378d80: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VGargoyle::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x10378da0 size=0x32
// TARGET: CNPC_VGargoyle::vfunc144
#include "CNPC_VGargoyle.h"
#include "CNPC_VVampire.h"

extern char g_1063a854[];

void CNPC_VGargoyle::vfunc144(int info)
{
    if (m_p6684) {
        ((CNPC_VVampire *)this)->vfunc144(info);
        return;
    }
    *(const char **)((char *)this + 0x1b30) = g_1063a854;
    *(int *)((char *)this + 0x1b34) = 0x248;
    sub_102ae750(0x15c, 1);
}
// END FUNCTION
