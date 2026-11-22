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

CBaseEntity *CNPC_VMingXiao::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x665c))->~CUtlVector<int>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10391230 size=0x1a
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VMingXiao.h"

// TARGET: CNPC_VMingXiao::vfunc180
void CNPC_VMingXiao::vfunc180()
{
	if (m_nMode673c)
		sub_10398fd0();
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc180();
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

// FUNCTION: 0x103927a0 size=0x1b4
#include "CNPC_VMingXiao.h"
#include "CEntityVSlots.h"
#include "CUnknown10739d08.h"
#include "globalvars.h"
extern CUnknown10739d08 g_10739d08;

#define H(x) (*(EHANDLE *)&(x))

void CNPC_VMingXiao::vfunc103()
{
	sub_1026dc00(0x4000000);
	sub_1026dc00(0x200000);
	sub_10298d30();
	sub_1033c6b0(0x80000);
	m_f1574 = -0.5f;
	H(m_hOwner6670) = (CBaseEntity *)0;
	m_n6674 = -1;
	m_b6678 = 0;
	m_n6710 = 0;
	m_flTime66a4 = 0;
	m_flTime66c0 = sub_10397f70() + gpGlobals->curtime;
	for (int i = 0; i < 6; i++) {
		H(m_hSlotOld[i]) = (CBaseEntity *)0;
		m_bSlotFlag[i] = 0;
		H(m_hSlotNew[i]) = (CBaseEntity *)0;
		m_flSlotTimeA[i] = 0;
		float flValue = *g_10739d08.sub_101e8da0();
		m_flSlotValue[i] = flValue;
		m_flSlotTimeB[i] = 3.402823466e+38f;
	}
	m_n670c = 6;
	sub_10398800();
	m_h667c = sub_10336f20();
	m_h6680 = (CBaseEntity *)((CEntityVSlots *)this)->slot309();
	CBaseEntity *pEnt = m_h6680.Get();
	((CEntityVSlots *)this)->slot388(pEnt == 0 ? 0 : *(int *)((char *)pEnt + 0xa0), 0);
	Vector vecSize;
	vecSize.x = 120.0f;
	vecSize.y = 120.0f;
	vecSize.z = 92.0f;
	sub_1009b060(&vecSize);
	m_b1482 = 1;
	m_nMode673c = 0;
	m_n6740 = 0;
	m_bActive6744 = 0;
	m_f6748 = sub_103986b0();
	m_f674c = 0;
	m_b6750 = 0;
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

// FUNCTION: 0x10392a10 size=0x2d
#include "CNPC_VMingXiao.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: ?vfunc418@CNPC_VMingXiao@@UAEMM@Z
float CNPC_VMingXiao::vfunc418(float a)
{
    if ((int)a != -1000004)
    {
        return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc418(a);
    }
    return m_f6748;
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
