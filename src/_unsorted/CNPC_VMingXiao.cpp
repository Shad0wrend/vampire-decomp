// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10391390 size=0x1d
#include "CNPC_VMingXiao.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bacc;
extern B g_10936c74;
int CNPC_VMingXiao::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bacc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10392660 size=0xff
#include "CBaseEntity.h"
#include "CUnknown1070b22c.h"
#include "CNPC_VMingXiao.h"

struct CMingXiaoPrecacheIface {
	virtual void vfunc0(const char *pszName, int a);
};

extern CUnknown1070b22c *g_1070b22c;
extern CMingXiaoPrecacheIface *g_1070b248;
extern const char *g_1064339c[];
void sub_101d0ec0(const char *pszClassname);

void CNPC_VMingXiao::vfunc104()
{
	sub_10298ad0();
	g_1070b22c->vfunc17((int)"Ming_xiao_slimetrail_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_slimetrail_emitter2", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_tentacle_damage_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_tentacle_burst_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_death_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_death_emitter2", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_death_proxy_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_death_proxy_emitter2", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_vomit_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_transform_emitter", 0);
	g_1070b22c->vfunc17((int)"Ming_xiao_transform_emitter2", 0);
	g_1070b248->vfunc0(g_1064339c[0], 0);
	sub_101d0ec0("item_w_mingxiao_melee");
	sub_101d0ec0("item_w_mingxiao_tentacle");
	sub_101d0ec0("item_w_mingxiao_spit");
}
// END FUNCTION

// FUNCTION: 0x10394090 size=0x6c
#include "CNPC_VMingXiao.h"
struct CUnknown102e0a60 { void sub_102e0a60(int); };
void CNPC_VMingXiao::vfunc448(int a)
{
    switch (*(int *)((char *)this + 0x673c)) {
    case 3:
    case 4:
        (*(CUnknown102e0a60 **)((char *)this + 0x5d44))->sub_102e0a60(0x43340000);
        break;
    case 0:
    case 1:
    case 2:
        goto other;
    default:
    other:
        ((CUnknown10398d90 *)this)->sub_10398d90(0);
        *(int *)((char *)this + 0x6718) = -1;
        break;
    }
    sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x10394690 size=0xe0
#include "CNPC_VMingXiao.h"
int CNPC_VMingXiao::vfunc376(int act)
{
    switch (act) {
    case 0x3d:
        return 0x3b;
    case 0x3e:
        return 0x3c;
    case 0x9f:
        return 0x9d;
    case 0xa0:
        return 0x9e;
    case 0xa3:
        return 0xa1;
    case 0xa4:
        return 0xa2;
    default:
        return sub_1000fb14(act);
    }
}
// END FUNCTION

// FUNCTION: 0x103951d0 size=0x7c
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"

const char *CNPC_VMingXiao::vfunc408(int index)
{
	switch (index) {
	case 0x77:
		return "xfr";
	case 0x78:
		return "xfl";
	case 0x79:
		return "xmr";
	case 0x7a:
		return "xml";
	case 0x7b:
		return "xbr";
	case 0x7c:
		return "xbl";
	case 0x7d:
		return "xsp";
	case 0x7e:
		return "xmh";
	default:
		return sub_10011590(index);
	}
}
// END FUNCTION

// FUNCTION: 0x10395ae0 size=0x75
#include "CNPC_VMingXiao.h"

struct CNPC_VMingXiaoUnit : CNPC_VMingXiao
{
	int sub_10012b3e(int a, void *pWeapon);	// sub_10395650 as the game calls it (through the stub)
};

void CNPC_VMingXiao::vfunc390(CTakeDamageInfo *pInfo)
{
	if (sub_10398870()) {
		sub_102beda0(pInfo);
		return;
	}
	CTakeDamageInfo info = *pInfo;
	void *pWeapon;
	if (info.m_pAttacker == 0)
		pWeapon = 0;
	else
		pWeapon = info.m_pAttacker->m_pWeapon;
	int nCode = ((CNPC_VMingXiaoUnit *)this)->sub_10012b3e((int)&info, pWeapon);
	sub_10395750(nCode, &info, pWeapon);
	sub_102beda0(&info);
}
// END FUNCTION

// FUNCTION: 0x10395e70 size=0xcd
#include "CNPC_VMingXiao.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_VMingXiao::vfunc603
float CNPC_VMingXiao::vfunc603(float *pCurrent, float *pTarget)
{
    if (*pTarget + 32.0f < *pCurrent)
        return g_1070b244->vfunc1(-30.0f, 30.0f);
    if (*pCurrent < *pTarget - 32.0f) {
        *pCurrent = *pTarget;
        if (g_1070b244->vfunc2(0, 1))
            return g_1070b244->vfunc1(170.0f, 179.0f);
        return g_1070b244->vfunc1(-170.0f, -179.0f);
    }
    if (g_1070b244->vfunc2(0, 1))
        return g_1070b244->vfunc1(80.0f, 120.0f);
    return g_1070b244->vfunc1(-80.0f, -120.0f);
}
// END FUNCTION

// FUNCTION: 0x10396fd0 size=0x18
#include "CNPC_VMingXiao.h"

char CNPC_VMingXiao::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x10397000 size=0x98
#include "CNPC_VMingXiao.h"

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct EntSlot {
	void *ent;
	unsigned int serial;
	int pad;
};
extern char *g_10566458;

struct EntV {
	V64(a) V64(b) V16(c) V16(d) V4(e)
	virtual char v164();
};

static inline void *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *s = &((EntSlot *)(g_10566458 + 4))[h & 0x1fff];
		if (s->serial == (h >> 13))
			return s->ent;
	}
	return 0;
}

char CNPC_VMingXiao::vfunc166(void *pOther)
{
	unsigned int *p = (unsigned int *)((char *)this + 0x66a8);
	for (int i = 0; i < 6; i++, p++) {
		if (ResolveHandle(p[-7]) == pOther)
			return 0;
		if (ResolveHandle(p[0]) == pOther)
			return 0;
	}
	if (pOther && !((EntV *)pOther)->v164())
		return 0;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10399d40 size=0x148
#include "CNPC_VMingXiao.h"
#include "CEntityVSlots.h"

void sub_10144a30(const Vector &vecOrigin, const Vector &vecDir, float flA, float flB, int r, int g, int b, int a, float flC);

void CNPC_VMingXiao::vfunc123()
{
	if (*(unsigned int *)&m_pad0224 & 0x20000000) {
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 100.0f, 8.0f, 255, 32, 32, 128, 0.0f);
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 150.0f, 8.0f, 255, 32, 32, 128, 0.0f);
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 200.0f, 8.0f, 255, 32, 32, 128, 0.0f);
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 300.0f, 8.0f, 255, 32, 32, 128, 0.0f);
	}
	sub_1029ca50();
}
// END FUNCTION
