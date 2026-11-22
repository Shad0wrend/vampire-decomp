// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
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

// FUNCTION: 0x10378a30 size=0xf0
#include "CNPC_VGargoyle.h"
#include "CNPC_VHuman.h"

int CNPC_VGargoyle::vfunc440(int schedule)
{
    switch (schedule) {
    case 0x5b: return 0x15d;
    case 0xea: return 0x15e;
    case 0xdc: return 0x15f;
    case 0xdd: return 0x160;
    }
    return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(schedule);
}
// END FUNCTION

// FUNCTION: 0x10378b60 size=0xf
#include "CNPC_VGargoyle.h"
namespace lifted {
int sub_10011225();
}
int CNPC_VGargoyle::vfunc461()
{
    *(int *)((char *)this + 0x1b38) = 0x11;
    return lifted::sub_10011225();
}
// END FUNCTION

// FUNCTION: 0x10378b80 size=0x50
#include "CNPC_VGargoyle.h"
// TARGET: CNPC_VGargoyle::vfunc432
void CNPC_VGargoyle::vfunc432(int a)
{
	int kind;
	void *pObj = sub_10006ae6(&kind);
	if (pObj) {
		switch (kind) {
		case 0:
			goto other;
		case 1:
			sub_1000d3cd(pObj);
			break;
		default:
		other:
			sub_100027a7(pObj);
			break;
		}
	}
	sub_1000698d(a);
}
// END FUNCTION

// FUNCTION: 0x10378bf0 size=0x5
#include "CNPC_VGargoyle.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGargoyle::vfunc434
// the game's 0x10378bf0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VGargoyle::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x10378c10 size=0x7c
#include "CBaseEntity.h"
#include "CNPC_VGargoyle.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S10378c10Dmg { char m_pad[0x10]; unsigned int m_nDamageType; };
struct S10378c10Info {
    S10378c10Dmg *m_pDmg;
    char m_pad[0x38 - 4];
    unsigned int m_nDamageType;
};
int CNPC_VGargoyle::vfunc390(void *pInfo)
{
    S10378c10Info *info = (S10378c10Info *)pInfo;
    m_nVulnerable = 1;
    unsigned int type;
    if (info->m_pDmg)
        type = info->m_pDmg->m_nDamageType | info->m_nDamageType;
    else
        type = info->m_nDamageType;
    if (type & 0x4000000)
        m_nVulnerable = 0;
    unsigned int h = *(unsigned int *)((char *)this + 0x628c);
    CGlobalEntityList_Ent *pTarget;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        pTarget = s->m_Serial == (int)(h >> 13) ? s->m_pEntity : 0;
    } else
        pTarget = 0;
    sub_10005849((CBaseEntity *)pTarget, 1, 10);
    return sub_10001b45(pInfo);
}
// END FUNCTION

// FUNCTION: 0x10378cb0 size=0x5c
#include "CNPC_VGargoyle.h"
#include "CVDmg_t.h"
struct CGargoyleDmgInfo
{
	CVDmg_t *m_pDmg;	// 0x0
	char m_pad04[0x30 - 4];
	float m_flDamage;	// 0x30
	char m_pad34[4];
	unsigned int m_nFlags;	// 0x38
};

// TARGET: CNPC_VGargoyle::vfunc292
void CNPC_VGargoyle::vfunc292(CGargoyleDmgInfo *pInfo, int b, int c)
{
	unsigned int flags;
	if (pInfo->m_pDmg)
		flags = pInfo->m_pDmg->m_field10 | pInfo->m_nFlags;
	else
		flags = pInfo->m_nFlags;
	if (!(flags & 0x4000002)) {
		float dmg;
		if (pInfo->m_pDmg)
			dmg = (float)pInfo->m_pDmg->sub_101faa70();
		else
			dmg = pInfo->m_flDamage;
		if (dmg != 0.0f)
			sub_10015843(pInfo, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x10378d30 size=0x3e
#include "vampire.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1070b244.h"
#include "CNPC_VGargoyle.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_VGargoyle::vfunc320
bool CNPC_VGargoyle::vfunc320(int a, int b)
{
    if (m_nVulnerable)
    {
        if (g_1070b244->vfunc2(1, 100) <= 0x32)
        {
            ((CAI_BaseNPCTroika *)this)->vfunc320(a, b);
            return true;
        }
    }
    return false;
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
        ((CNPC_VVampire *)this)->CNPC_VVampire::vfunc144((void *)info);
        return;
    }
    *(const char **)((char *)this + 0x1b30) = g_1063a854;
    *(int *)((char *)this + 0x1b34) = 0x248;
    sub_102ae750(0x15c, 1);
}
// END FUNCTION
