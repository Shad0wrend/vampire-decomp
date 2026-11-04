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
