// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10390de0 size=0x6
#include "CNPC_VMingXiao.h"
namespace lifted {
extern char g_10642e88;
}
datamap_t * CNPC_VMingXiao::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10642e88);
}
// END FUNCTION

// FUNCTION: 0x10391030 size=0x7
#include "CNPC_VMingXiao.h"
namespace lifted {
extern float g_104492a8;
}
float CNPC_VMingXiao::vfunc522()
{
    return lifted::g_104492a8;
}
// END FUNCTION

// FUNCTION: 0x10391050 size=0x7
#include "CNPC_VMingXiao.h"
namespace lifted {
extern float g_1044ffe8;
}
float CNPC_VMingXiao::vfunc523()
{
    return lifted::g_1044ffe8;
}
// END FUNCTION

// FUNCTION: 0x10391070 size=0x6
#include "CNPC_VMingXiao.h"
namespace lifted {
extern char g_1093b918;
}
int CNPC_VMingXiao::vfunc580()
{
    return (int)&lifted::g_1093b918;
}
// END FUNCTION

// FUNCTION: 0x10391090 size=0x6
#include "CNPC_VMingXiao.h"
namespace lifted {
extern int g_106433a8;
}
int CNPC_VMingXiao::vfunc451()
{
    return lifted::g_106433a8;
}
// END FUNCTION

// FUNCTION: 0x103910b0 size=0x86
#include "CNPC_VMingXiao.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CNPC_VMingXiao *CNPC_VMingXiao::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x665c))->~CUtlVector<int>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10391330 size=0x6
extern unsigned char g_106433a0;
// TARGET: sub_10391330
unsigned char sub_10391330()
{
    return g_106433a0;
}
// END FUNCTION

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
#include "CNPC_VMingXiao.h"

struct CMingXiaoPrecacheIface {
	virtual void vfunc0(const char *pszName, int a);
};

extern CMingXiaoPrecacheIface *g_1070b248;
extern const char *g_1064339c[];
void sub_101d0ec0(const char *pszClassname);

void CNPC_VMingXiao::vfunc104()
{
	sub_10298ad0();
	engine->vfunc17((const char *)"Ming_xiao_slimetrail_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_slimetrail_emitter2", 0);
	engine->vfunc17((const char *)"Ming_xiao_tentacle_damage_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_tentacle_burst_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_death_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_death_emitter2", 0);
	engine->vfunc17((const char *)"Ming_xiao_death_proxy_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_death_proxy_emitter2", 0);
	engine->vfunc17((const char *)"Ming_xiao_vomit_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_transform_emitter", 0);
	engine->vfunc17((const char *)"Ming_xiao_transform_emitter2", 0);
	g_1070b248->vfunc0(g_1064339c[0], 0);
	sub_101d0ec0("item_w_mingxiao_melee");
	sub_101d0ec0("item_w_mingxiao_tentacle");
	sub_101d0ec0("item_w_mingxiao_spit");
}
// END FUNCTION

// FUNCTION: 0x103929d0 size=0x6
#include "CNPC_VMingXiao.h"
int CNPC_VMingXiao::vfunc473()
{
    return 0x81f;
}
// END FUNCTION

// FUNCTION: 0x103929f0 size=0x6
#include "CNPC_VMingXiao.h"
int CNPC_VMingXiao::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x10392a50 size=0xb
#include "CNPC_VMingXiao.h"
namespace lifted {
int sub_1000be92();
}
int CNPC_VMingXiao::vfunc337()
{
    return (lifted::sub_1000be92()) | 0x38000;
}
// END FUNCTION

// FUNCTION: 0x10392a70 size=0x16d
#include "CNPC_VMingXiao.h"

extern "C++" __declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_101cdba0(float *pOrigin, float a, float b, float c, float d, int e, int f);

#define MXV(n) virtual void m##n();
#define MXV10(p) MXV(p##0) MXV(p##1) MXV(p##2) MXV(p##3) MXV(p##4) MXV(p##5) MXV(p##6) MXV(p##7) MXV(p##8) MXV(p##9)
struct CMingXiaoView	// the NPC as seen for slot 220 (GetAbsOrigin)
{
	MXV(0) MXV(1) MXV(2) MXV(3) MXV(4) MXV(5) MXV(6) MXV(7) MXV(8) MXV(9)
	MXV10(1) MXV10(2) MXV10(3) MXV10(4) MXV10(5) MXV10(6) MXV10(7) MXV10(8) MXV10(9)
	MXV10(10) MXV10(11) MXV10(12) MXV10(13) MXV10(14) MXV10(15) MXV10(16) MXV10(17) MXV10(18) MXV10(19)
	MXV10(20) MXV(210) MXV(211) MXV(212) MXV(213) MXV(214) MXV(215) MXV(216) MXV(217) MXV(218) MXV(219)
	virtual float *vfunc220();
};

// TARGET: CNPC_VMingXiao::vfunc259
void CNPC_VMingXiao::vfunc259(int *pEvent)
{
	switch (*pEvent)
	{
	case 0x7f8:
		if (m_nMode673c == 2)
		{
			sub_10398db0();
			return;
		}
		DevMsg("WARNING: Ming Xiao is getting NPC_EVENT_PICKUP but is not at VMING_XIAO_TO_MODE_GRABBING.\n");
		return;
	case 0x802:
	case 0x803:
		break;
	case 0x834:
		sub_101cdba0(((CMingXiaoView *)this)->vfunc220(), 5.0f, 0.6f, 0.2f, 512.0f, 0, 0);
		return;
	case 0x835:
		sub_101cdba0(((CMingXiaoView *)this)->vfunc220(), 15.0f, 1.0f, 1.5f, 1024.0f, 0, 0);
		return;
	default:
		sub_1029b290(pEvent);
		return;
	case 0xbd7:
		sub_102c42a0("Ming_xiao_vomit_emitter", this, "Bip01 MouthRoot", 0);
		sub_1029b290(pEvent);
		return;
	case 0xbbd:
		if (m_nMode673c == 4)
		{
			sub_103990c0();
			return;
		}
		DevMsg("WARNING: Ming Xiao is getting EVENT_WEAPON_THROW but is not at VMING_XIAO_TO_MODE_THROWING.\n");
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10392c40 size=0xf9
#include "CNPC_VMingXiao.h"
#include "CUnknown1027d990.h"

#define SLA(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLB(p) SLA(p##0) SLA(p##1) SLA(p##2) SLA(p##3) SLA(p##4) SLA(p##5) SLA(p##6) SLA(p##7) SLA(p##8) SLA(p##9)
struct EntVT10392c40 {
	SLB(a) SLA(b0) SLA(b1) SLA(b2) SLA(b3) SLA(b4) SLA(b5) SLA(b6) SLA(b7) SLA(b8)
	virtual void s190(); virtual void s191(); virtual void s192();
	virtual Vector *a193(Vector *pOut);
	SLA(c0) SLA(c1)
	virtual void s214(); virtual void s215(); virtual void s216();
	virtual float *a217();
	virtual void s218(); virtual void s219();
	virtual float *a220();
};
struct NpcView10392c40 {
	char pad0[0x654];
	int m_n654;
	char pad1[0x6320 - 0x658];
	int m_n6320;
};

void CNPC_VMingXiao::vfunc563(CBaseEntity *pEnt, Vector *pPos, int *pOut1, int *pOut2)
{
	Vector out;
	if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
		EntVT10392c40 *e = (EntVT10392c40 *)pEnt;
		const Vector *org = (const Vector *)e->a217();
		*pPos += *e->a193(&out) - *org;
		return;
	}
	NpcView10392c40 *v = (NpcView10392c40 *)this;
	*pOut2 = v->m_n6320;
	sub_102c3b50(pEnt, *pPos, pPos, pOut2);
	*pOut1 = *pOut2;
	const Vector *origin = (const Vector *)((EntVT10392c40 *)this)->a220();
	sub_102c36d0(*origin, pEnt, v->m_n654, pPos, &out);
	*pPos = out;
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

// FUNCTION: 0x10394570 size=0x1c
#include "CNPC_VMingXiao.h"

// TARGET: CNPC_VMingXiao::vfunc440
int CNPC_VMingXiao::vfunc440(int a)
{
	if (a != 0x147)
		return sub_102b12f0(a);
	return 0x16f;
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

// FUNCTION: 0x10394930 size=0x30
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

float CNPC_VMingXiao::vfunc516()
{
	int act = *(int *)((char *)this + 0xfec);
	if (act >= 0x112a && act <= 0x112d)
		return g_10739d08.sub_101e8da0()[0x12];
	return g_10739d08.sub_101e8da0()[0x11];
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

// FUNCTION: 0x10395270 size=0x6
#include "CNPC_VMingXiao.h"
int CNPC_VMingXiao::vfunc409()
{
    return 0x7f;
}
// END FUNCTION

// FUNCTION: 0x10395290 size=0x1
#include "CNPC_VMingXiao.h"
void CNPC_VMingXiao::vfunc434()
{
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

// FUNCTION: 0x10395b80 size=0x5
#include "CNPC_VMingXiao.h"
bool CNPC_VMingXiao::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10395ba0 size=0x9c
#include "CNPC_VMingXiao.h"
#include "CEHandleGet.h"
struct CUnk1093b9b4 { virtual char vf0(); virtual char vf1(); char pad[0x28]; int m_n2c; };
extern CUnk1093b9b4 *g_1093b9b4;
// TARGET: CNPC_VMingXiao::vfunc144
void CNPC_VMingXiao::vfunc144(int a)
{
	if (m_bActive6744) {
		CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hOwner6670);
		if (pEnt)
			((CNPC_VMingXiao *)pEnt)->sub_10397a50(this);
		if (!g_1093b9b4->vf1() && g_1093b9b4->m_n2c) {
			if (!sub_10398870()) {
				sub_10397e90();
				sub_10397f00();
			}
		}
		sub_102bf340(a);
	} else {
		*(int *)((char *)this + 0x200) = 1;
		sub_10395c70();
	}
}
// END FUNCTION

// FUNCTION: 0x10395d00 size=0x90
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"

Vector CNPC_VMingXiao::vfunc574(const Vector &vecPos, int a, int b)
{
	Vector vecTarget;
	sub_10278650(&vecTarget, &vecPos, a, b);
	vecTarget.z += 20.0f;
	Vector vecDir = vecTarget - vecPos;
	VectorNormalize(vecDir);
	return vecDir;
}
// END FUNCTION

// FUNCTION: 0x10395dc0 size=0x17
#include "CNPC_VMingXiao.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

// TARGET: CNPC_VMingXiao::vfunc599
bool CNPC_VMingXiao::vfunc599(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10395df0 size=0x17
#include "CNPC_VMingXiao.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

// TARGET: CNPC_VMingXiao::vfunc600
bool CNPC_VMingXiao::vfunc600(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10395e20 size=0x19
#include "CNPC_VMingXiao.h"

struct IUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern IUnk10924edc *g_10924edc;

// TARGET: vfunc601
void CNPC_VMingXiao::vfunc601(int a)
{
	g_10924edc->v1();
	m_b6078 = 0;
}
// END FUNCTION

// FUNCTION: 0x10395e50 size=0x3
#include "CNPC_VMingXiao.h"
bool CNPC_VMingXiao::vfunc602()
{
    return 0;
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

// FUNCTION: 0x10395f80 size=0x51
#include "CNPC_VMingXiao.h"
void sub_1009d940(float *p, int mode);
void sub_1009d960(float *p, int mode);
int CNPC_VMingXiao::vfunc126(int a)
{
	int i;
	for (i = 0; i < 6; i++)
		sub_1009d940(&m_flSlotTimeB[i], 4);
	int r = sub_102993c0(a);
	for (i = 0; i < 6; i++)
		sub_1009d960(&m_flSlotTimeB[i], 4);
	return r;
}
// END FUNCTION

// FUNCTION: 0x10396000 size=0x35
struct CUnknownTroikaBase
{
	int sub_1000527c(int a);
};

void sub_10015311(void *pValue, int nBytes);

struct CUnknown10396000
{
	char m_pad0000[0x66f4];
	float m_fl66f4[6];

	int sub_10396000(int a);
};

// TARGET: CUnknown10396000::sub_10396000
int CUnknown10396000::sub_10396000(int a)
{
	int result = ((CUnknownTroikaBase *)this)->sub_1000527c(a);
	for (int i = 0; i < 6; i++)
	{
		sub_10015311(&m_fl66f4[i], 4);
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10396e90 size=0xd2
#include "CNPC_VMingXiao.h"
#include "CCineNPC.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct CNPCStateView {
	char m_pad0000[0x5cc0];
	int m_nState;	// 0x5cc0
	int m_nIdealState;	// 0x5cc4
	char m_pad5cc8[0x5d74 - 0x5cc8];
	unsigned int m_h5d74;	// 0x5d74
};

int CNPC_VMingXiao::vfunc482(char bDisregardState, int interruptLevel)
{
	CNPCStateView *pView = (CNPCStateView *)this;
	int result = 1;
	if (EHandle_Get(pView->m_h5d74)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(pView->m_h5d74);
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	if (!bDisregardState && pView->m_nState != 0 && pView->m_nState != 1 && pView->m_nIdealState != 1 && (pView->m_nState != 3 || interruptLevel < 1))
		return (pView->m_nState == 4) ? result : 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10396fb0 size=0x3
#include "CNPC_VMingXiao.h"
bool CNPC_VMingXiao::vfunc70()
{
    return 1;
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
