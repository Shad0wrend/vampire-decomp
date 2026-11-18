// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039aea0 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
#include "datamap.h"
namespace lifted {
extern char g_106474f0;
}
datamap_t *CNPC_VMingXiaoTentacle::vfunc82()
{
    return (datamap_t *)&lifted::g_106474f0;
}
// END FUNCTION

// FUNCTION: 0x1039b050 size=0x7
#include "CNPC_VMingXiaoTentacle.h"
namespace lifted {
extern float g_1044c3a4;
}
float CNPC_VMingXiaoTentacle::vfunc522()
{
    return lifted::g_1044c3a4;
}
// END FUNCTION

// FUNCTION: 0x1039b070 size=0x7
#include "CNPC_VMingXiaoTentacle.h"
namespace lifted {
extern float g_104492a8;
}
float CNPC_VMingXiaoTentacle::vfunc523()
{
    return lifted::g_104492a8;
}
// END FUNCTION

// FUNCTION: 0x1039b090 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
namespace lifted {
extern char g_1093bd38;
}
int CNPC_VMingXiaoTentacle::vfunc580()
{
    return (int)&lifted::g_1093bd38;
}
// END FUNCTION

// FUNCTION: 0x1039b0b0 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
namespace lifted {
extern int g_106477d8;
}
int CNPC_VMingXiaoTentacle::vfunc451()
{
    return lifted::g_106477d8;
}
// END FUNCTION

// FUNCTION: 0x1039b0d0 size=0x1e
#include "CNPC_VMingXiaoTentacle.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VMingXiaoTentacle::vfunc5
CNPC_VMingXiaoTentacle *CNPC_VMingXiaoTentacle::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1039b1d0 size=0x6
extern unsigned char g_106477d0;
// TARGET: sub_1039b1d0
unsigned char sub_1039b1d0()
{
    return g_106477d0;
}
// END FUNCTION

// FUNCTION: 0x1039b230 size=0x1d
#include "CNPC_VMingXiaoTentacle.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bd80;
extern B g_10936c74;
int CNPC_VMingXiaoTentacle::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bd80.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1039c220 size=0x106
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CBCCSlotViews.h"
#include "string_t.h"

struct TentEnt {
    VIEW_SLOT(0) VIEW_SLOT(1) VIEW_SLOT(2) VIEW_SLOT(3) VIEW_SLOT(4) VIEW_SLOT(5) VIEW_SLOT(6) VIEW_SLOT(7) VIEW_SLOT(8)
    virtual string_t GetModelName();
    VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5) VIEW_SLOT10(6) VIEW_SLOT10(7) VIEW_SLOT10(8) VIEW_SLOT10(9)
    VIEW_SLOT100(1)
    VIEW_SLOT10(20)
    VIEW_SLOT(210) VIEW_SLOT(211)
    virtual void SetModelName(string_t name);
};
struct TentBase { void sub_10298ad0(); };
extern char g_1064a340[];
extern char *g_106477c8;
extern char *g_106477cc;

inline const char *TentSTRING(const string_t &s) { return s.pszValue ? s.pszValue : g_106b8540; }
inline string_t TentMAKE(const char *p) { string_t s; s.pszValue = *p ? p : 0; return s; }

// TARGET: CNPC_VMingXiaoTentacle::vfunc104
void CNPC_VMingXiaoTentacle::vfunc104()
{
    TentEnt *e = (TentEnt *)this;
    if (e->GetModelName().pszValue == 0 || !TentSTRING(e->GetModelName()) || !*TentSTRING(e->GetModelName()))
        e->SetModelName(TentMAKE(g_1064a340));
    ((TentBase *)this)->sub_10298ad0();
    m_nModelIndex6664 = engine->vfunc13("models/character/monster/MingXiao/MingXiao_baby/MingXiao_baby.mdl", 0);
    m_nModelIndex6668 = engine->vfunc13("models/character/monster/MingXiao/MingXiao_baby/MingXiao_baby.mdl", 0);
    m_nModelIndex666c = engine->vfunc13("models/character/monster/MingXiao/MingXiao_transformation.mdl", 0);
    engine->vfunc17("Ming_xiao_tentacle_transform_emitter", 0);
    engine->vfunc17("Ming_xiao_baby_transform_emitter", 0);
    engine->vfunc17("Ming_xiao_baby_death_emitter", 0);
    enginesound->vfunc0(g_106477c8, 0);
    enginesound->vfunc0(g_106477cc, 0);
}
// END FUNCTION

// FUNCTION: 0x1039c380 size=0x86
#include "CNPC_VMingXiaoTentacle.h"
extern float g_10454110;
void CNPC_VMingXiaoTentacle::vfunc103()
{
	sub_10012855(0x4000000);
	sub_10012855(0x200000);
	sub_1000303a();
	sub_100153a7(0x80000);
	m_n6670 = 0;
	m_b63d8 = 1;
	m_n6674 = 0;
	m_n6678 = 0;
	m_n667c = 0;
	m_n6680 = 0;
	float now = gpGlobals->curtime;
	float t = now + g_10454110;
	m_b6688 = 1;
	m_b6698 = 0;
	m_b6699 = 0;
	m_flTimer6684 = t;
	sub_1000df44(4);
}
// END FUNCTION

// FUNCTION: 0x1039c440 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
int CNPC_VMingXiaoTentacle::vfunc473()
{
    return 0x81f;
}
// END FUNCTION

// FUNCTION: 0x1039c460 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
int CNPC_VMingXiaoTentacle::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x1039c4a0 size=0x5
#include "animevent_t.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VMingXiaoTentacle::vfunc259
// the game's 0x1039c4a0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc259
void CNPC_VMingXiaoTentacle::vfunc259(animevent_t *a0)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x1039d750 size=0x54a
#include "CNPC_VMingXiaoTentacle.h"
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "CBaseAnimating.h"
#include "CUnknown102e0150.h"
#include "ehandle.h"
#include "globalvars.h"
#include "engineserver.h"
#include <math.h>

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
extern EHANDLE g_1093bd34;
extern float g_1093bd30;
extern Vector g_10934060;
extern float g_104454c4;
extern float g_104bde70;

struct CTentListEnt
{
	char m_pad0[0x5d8];
	CTentListEnt *m_pNext;	// 0x5d8
	int m_nClassId;	// 0x5dc
};
extern CTentListEnt *g_10925450;

struct CTentStudioHdr
{
	char m_pad0[0x160];
	int m_nCount;
};

struct CTentNavGoal
{
	CTentNavGoal(int t, const Vector &d, int act = -1, float tol = g_104bde70)
	{
		type = t;
		dest = d;
		activity = act;
		arrivalActivity = 0x13;
		arrivalSequence = -1;
		pathCorner = -1;
		tolerance = tol;
		flags = 0;
		maxInitialSimplificationDist = g_1093bd30;
		arrivalDirection = g_10934060;
		pTarget = 0;
		unk = 0;
	}
	int type;
	Vector dest;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	int pathCorner;
	float tolerance;
	int flags;
	float maxInitialSimplificationDist;
	Vector arrivalDirection;
	int pTarget;
	int unk;
};

struct CTentNavigator
{
	bool sub_102ecd20(CTentNavGoal *pGoal, int flags);
};

struct CTentHullTest
{
	bool sub_1039ee20(Vector *pPos);	// CNPC_VMingXiaoTentacle::sub_1039ee20, answers in al
};

void CNPC_VMingXiaoTentacle::vfunc444(void *pTask)
{
	switch (*(int *)pTask) {
	case 0x8b:
		{
			sub_10280a50();
			CBaseEntity *pEnemy = vfunc167();
			if (pEnemy && *(int *)((char *)pEnemy + 0x9c)) {
				Vector vec;
				((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, vfunc167());
				m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
			}
			if (vfunc251()) {
				sub_10273e80(0);
				return;
			}
		}
		break;
	case 0x8e:
		{
			sub_10280a50();
			CBaseEntity *pEnemy = vfunc167();
			CBaseAnimating *pChar = 0;
			if (pEnemy)
				pChar = *(CBaseAnimating **)((char *)pEnemy + 0x9c);
			if (!pChar) {
				sub_10273e80(0);
				return;
			}
			int nSeq = *(int *)((char *)pChar + 0x6f0);
			char *pDesc = (char *)pChar->sub_1008d990(nSeq);
			if (pDesc) {
				float flCycle = pChar->sub_10091230(nSeq) * (gpGlobals->curtime - (*(float *)((char *)pChar + 0x174) - 0.1f)) * *(float *)((char *)pChar + 0x6f4) + *(float *)((char *)pChar + 0x6f8);
				for (int i = 0; i < *(int *)(pDesc + 0x2c4); i++) {
					if (flCycle < *(float *)(pDesc + *(int *)(pDesc + 0x2c8) + 4 + i * 0xbc))
						return;
				}
				sub_10273e80(0);
				return;
			}
		}
		break;
	case 0x14c:
		{
			CTentStudioHdr *pHdr = (CTentStudioHdr *)sub_100952d0(-1);
			if (!pHdr || pHdr->m_nCount <= 1) {
				vfunc416(0);
				sub_10273e80(0);
				return;
			}
			float flStart = m_f5c4c;
			float flTime = engine->vfunc119(0) - flStart;
			if (flTime > 4.0f)
				flTime = 4.0f;
			else if (flTime < g_104454c4)
				flTime = 0.0f;
			int nCount = pHdr->m_nCount;
			float flStep = 4.0f / (nCount - 1);
			for (int i = 0; i < nCount; i++) {
				float flWeight = 1.0 - fabs(flTime - i * flStep) / flStep;
				if (flWeight < g_104454c4)
					flWeight = 0.0f;
				char szName[30];
				Q_snprintf(szName, 30, "F%02d", i + 1);
				vfunc280(szName, flWeight);
				m_nFlags19c |= 0x10;
			}
			if (flTime >= 4.0f) {
				vfunc416(0);
				sub_10273e80(0);
				return;
			}
		}
		break;
	case 0x150:
		{
			CTentListEnt *p = (CTentListEnt *)g_1093bd34.Get();
			if (!p)
				p = g_10925450;
			for (; p; p = p->m_pNext) {
				if (p->m_nClassId == 0x4a38) {
					Vector vec = *(Vector *)((CNPC_VMingXiaoTentacle *)p)->vfunc217();
					if (((CTentHullTest *)this)->sub_1039ee20(&vec)) {
						CTentNavGoal goal(4, vec);
						if (((CTentNavigator *)m_p5d34)->sub_102ecd20(&goal, 0))
							sub_10273e80(0);
					}
					g_1093bd34 = (CBaseEntity *)p->m_pNext;
					return;
				}
			}
			g_1093bd34 = (CBaseEntity *)0;
		}
		return;
	case 0x154:
		sub_10280a50();
		if (vfunc251()) {
			sub_10289ee0(1);
			sub_10273e80(0);
			return;
		}
		break;
	default:
		sub_102aacf0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1039de00 size=0xd
#include "CNPC_VMingXiaoTentacle.h"
struct TentacleField1b2c { char pad[0x1b2c]; int m; };
int CNPC_VMingXiaoTentacle::vfunc437()
{
	((TentacleField1b2c *)this)->m = 0x1a;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1039e2d0 size=0x2b
// TARGET: CNPC_VMingXiaoTentacle::vfunc440
#include "CNPC_VMingXiaoTentacle.h"

int CNPC_VMingXiaoTentacle::vfunc440(int a)
{
    switch (a)
    {
    case 0xc7:
        return 0xc8;
    case 0x147:
        return 0x16d;
    }
    return sub_102b12f0(a);
}
// END FUNCTION

// FUNCTION: 0x1039e7e0 size=0x1
#include "CNPC_VMingXiaoTentacle.h"
void CNPC_VMingXiaoTentacle::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x1039e800 size=0x1d
#include "CNPC_VMingXiaoTentacle.h"

struct CBasePlayerCall
{
    void *sub_1039ede0();
    void sub_10001a78(CNPC_VMingXiaoTentacle *pSelf, int arg);
};

struct CTentacleUnit : CNPC_VMingXiaoTentacle
{
    void sub_1039e800(int arg);
};

void CTentacleUnit::sub_1039e800(int arg)
{
    void *pPlayer = ((CBasePlayerCall *)this)->sub_1039ede0();
    if (pPlayer)
        ((CBasePlayerCall *)pPlayer)->sub_10001a78(this, arg);
}
// END FUNCTION

// FUNCTION: 0x1039e830 size=0x1d
#include "CNPC_VMingXiaoTentacle.h"
// TARGET: CNPC_VMingXiaoTentacle::vfunc22
struct CUnk10397dd0
{
    char pad[0x66c0];
    int m_66c0;
    void sub_10397dd0(int a, int b);
};
void CNPC_VMingXiaoTentacle::vfunc22(int arg)
{
    CUnk10397dd0 *pPlayer = (CUnk10397dd0 *)sub_1039ede0();
    if (pPlayer)
    {
        pPlayer->sub_10397dd0((int)this, arg);
    }
}
// END FUNCTION

// FUNCTION: 0x1039e860 size=0x1d
#include "CNPC_VMingXiaoTentacle.h"

struct CUnk10397dd0 {
	void sub_10397dd0(CNPC_VMingXiaoTentacle *pSelf, int arg);
};

// TARGET: CNPC_VMingXiaoTentacle::vfunc23
void CNPC_VMingXiaoTentacle::vfunc23(int arg)
{
	void *pPlayer = sub_1039ede0();
	if (pPlayer)
	{
		((CUnk10397dd0 *)pPlayer)->sub_10397dd0(this, arg);
	}
}
// END FUNCTION

// FUNCTION: 0x1039e8e0 size=0x5
#include "CNPC_VMingXiaoTentacle.h"
bool CNPC_VMingXiaoTentacle::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1039e900 size=0x41
#include "CNPC_VMingXiaoTentacle.h"
#include "CNPC_VMingXiao.h"
void CNPC_VMingXiaoTentacle::vfunc144(int a)
{
	if (m_b6699) {
		CNPC_VMingXiao *pOwner = (CNPC_VMingXiao *)sub_1039ede0();
		if (pOwner)
			pOwner->sub_103979d0(this);
		sub_102bf340(a);
		return;
	}
	m_nTakeDamage = 1;
	sub_1039e970();
}
// END FUNCTION

// FUNCTION: 0x1039ea80 size=0x1a
#include "CNPC_VMingXiaoTentacle.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
// TARGET: CNPC_VMingXiaoTentacle::vfunc599
char CNPC_VMingXiaoTentacle::vfunc599(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x1039eab0 size=0x1a
// TARGET: CNPC_VMingXiaoTentacle::vfunc600
#include "CNPC_VMingXiaoTentacle.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VMingXiaoTentacle::vfunc600(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x1039eae0 size=0x19
#include "CNPC_VMingXiaoTentacle.h"

struct IUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern IUnk10924edc *g_10924edc;

// TARGET: vfunc601
void CNPC_VMingXiaoTentacle::vfunc601(int a)
{
	g_10924edc->v1();
	*((char *)this + 0x6078) = 0;
}
// END FUNCTION

// FUNCTION: 0x1039eb10 size=0x3
#include "CNPC_VMingXiaoTentacle.h"
bool CNPC_VMingXiaoTentacle::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1039eb30 size=0x3
#include "CNPC_VMingXiaoTentacle.h"
bool CNPC_VMingXiaoTentacle::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1039eb50 size=0x2a
#include "CNPC_VMingXiaoTentacle.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VMingXiaoTentacle::vfunc68
bool CNPC_VMingXiaoTentacle::vfunc68(CBaseEntity *pOther)
{
    if (pOther != 0 && (*(int *)((char *)pOther + 0x9c) == 0 || m_b6688 == 0)) {
        return ((CAI_BaseNPCTroika *)this)->vfunc68(pOther);
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1039eb90 size=0x2a
#include "CBaseEntity.h"
#include "CNPC_VMingXiaoTentacle.h"

// TARGET: CNPC_VMingXiaoTentacle::vfunc69
bool CNPC_VMingXiaoTentacle::vfunc69(CBaseEntity *pOther)
{
    if (pOther != 0 && (*(int *)((char *)pOther + 0x9c) == 0 || m_b6688 == 0)) {
        return sub_1029b180(pOther);
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1039ebd0 size=0x2a
#include "CBaseEntity.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CBaseEntitySlots.h"
// TARGET: CNPC_VMingXiaoTentacle::vfunc166
char CNPC_VMingXiaoTentacle::vfunc166(CBaseEntity *pEnt)
{
    if (pEnt == (CBaseEntity *)sub_1039ede0()) {
        return 0;
    }
    if (pEnt) {
        if (!((CBaseEntitySlots *)pEnt)->slot164()) {
            return 0;
        }
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1039ec10 size=0x94
#include "CNPC_VMingXiaoTentacle.h"
#include "CEntityVSlots.h"


struct CDevFlagObject {
	virtual void v0();
	virtual void v1();
};
extern CDevFlagObject *g_10924a6c;

struct CTentacleTimes {
	char m_pad0000[0x6268];
	float m_f6268;	// 0x6268
	char m_pad626c[0x6674 - 0x626c];
	float m_flTime6674;	// 0x6674
	float m_flTime6678;	// 0x6678
};

// TARGET: CNPC_VMingXiaoTentacle::vfunc433
void CNPC_VMingXiaoTentacle::vfunc433()
{
	CTentacleTimes *p = (CTentacleTimes *)this;
	sub_10269b50(0x77);
	sub_10269b50(0x79);
	sub_102b27f0();
	if (((CEntityVSlots *)this)->slot167() != 0 && gpGlobals->curtime >= p->m_flTime6678 && p->m_f6268 <= 256.0f) {
		g_10924a6c->v1();
		sub_10269a20(0x77);
	}
	if (gpGlobals->curtime >= p->m_flTime6674) {
		g_10924a6c->v1();
		sub_10269a20(0x79);
	}
}
// END FUNCTION

// FUNCTION: 0x1039ece0 size=0x32
#include "CNPC_VMingXiaoTentacle.h"

extern char g_1064a42c;
extern char g_1064a430;
extern char g_1064a434;

// TARGET: CNPC_VMingXiaoTentacle::vfunc408
void *CNPC_VMingXiaoTentacle::vfunc408(int condition)
{
    switch (condition) {
    case 0x77:
        return &g_1064a42c;
    case 0x78:
        return &g_1064a430;
    case 0x79:
        return &g_1064a434;
    }
    return sub_1027ede0(condition);
}
// END FUNCTION

// FUNCTION: 0x1039ed30 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
int CNPC_VMingXiaoTentacle::vfunc409()
{
    return 0x7a;
}
// END FUNCTION

// FUNCTION: 0x1039ed50 size=0x35
#include "CNPC_VMingXiaoTentacle.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

int CNPC_VMingXiaoTentacle::vfunc126(int a)
{
	void *member = (char *)this + 0x6674;
	sub_1009d940(member, 3);
	int r = sub_100025cc(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1039eda0 size=0x28
#include "CNPC_VMingXiaoTentacle.h"
void __cdecl sub_10015311(void *p, int mode);

// TARGET: CNPC_VMingXiaoTentacle::vfunc127
int CNPC_VMingXiaoTentacle::vfunc127(int a)
{
	int r = sub_1000527c(a);
	sub_10015311((char *)this + 0x6674, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1039efe0 size=0x5
#include "CNPC_VMingXiaoTentacle.h"
struct CTroikaVFunc527 { bool sub_10293e80(void *); };
// TARGET: CNPC_VMingXiaoTentacle::vfunc527
// the game's 0x1039efe0: a tail call (jmp) of CTroikaVFunc527::sub_10293e80
bool CNPC_VMingXiaoTentacle::vfunc527(void *a0)
{
	return ((CTroikaVFunc527 *)this)->CTroikaVFunc527::sub_10293e80(a0);
}
// END FUNCTION

// FUNCTION: 0x1039f000 size=0x17
#include "CNPC_VMingXiaoTentacle.h"
extern int g_1093bd34;

// TARGET: CNPC_VMingXiaoTentacle::vfunc130
void CNPC_VMingXiaoTentacle::vfunc130(int a)
{
	sub_10002b99(a);
	g_1093bd34 = -1;
}
// END FUNCTION
