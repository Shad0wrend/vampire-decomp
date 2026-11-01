// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10357350 size=0x7
#include "CNPC_Crow.h"
namespace lifted {
extern float g_1044f00c;
}
float CNPC_Crow::vfunc516()
{
    return lifted::g_1044f00c;
}
// END FUNCTION

// FUNCTION: 0x10357370 size=0x6
#include "CNPC_Crow.h"
namespace lifted {
extern char g_1093a0d0;
}
int CNPC_Crow::vfunc580()
{
    return (int)&lifted::g_1093a0d0;
}
// END FUNCTION

// FUNCTION: 0x10357390 size=0x6
#include "CNPC_Crow.h"
namespace lifted {
extern int g_10628a50;
}
int CNPC_Crow::vfunc451()
{
    return lifted::g_10628a50;
}
// END FUNCTION

// FUNCTION: 0x103573b0 size=0x6
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628928;
}
int CNPC_Crow::vfunc82()
{
    return (int)&lifted::g_10628928;
}
// END FUNCTION

// FUNCTION: 0x10357440 size=0x1a6
#include "CNPC_Crow.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CUnknown1070b244.h"
#include "ScopeTrace.h"
#include "globalvars.h"

struct CCrowTimeView
{
	virtual void v0();
	virtual bool vfunc1();
	char pad[0x24];
	float m_flFrameTime;	// 0x28
};

extern CCrowTimeView *g_1093a08c;
extern CUnknown1070b244 *g_1070b244;

static inline void Crow_SetSolid(CNPC_Crow *pCrow, int solid)
{
	ScopeTrace trace("CBaseEntity::SetSolid", pCrow->m_name26c ? pCrow->m_name26c : g_106b8540);
	((CCollisionProperty *)((char *)pCrow + 0x270))->sub_100dc480(solid);
}

void CNPC_Crow::vfunc103()
{
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	sub_10273200();
	pThis->slot104();
	pThis->slot105("models/crow.mdl");
	m_n210 = (int)(g_1093a08c->vfunc1() ? 0.0f : g_1093a08c->m_flFrameTime);
	m_n1568 = 4;
	m_n156c = 4;
	sub_10273070(0);
	Crow_SetSolid(this, 2);
	pThis->slot93(4, 0);
	m_f1574 = -1.0f;
	Vector vecOffset(6.0f, 0.0f, 11.0f);
	sub_1009f380(&vecOffset);
	m_f5f48 = g_1070b244->vfunc1(0.0f, 5.0f) + gpGlobals->curtime;
	sub_10327960(0xf7);
	m_n5cc0 = 0;
	m_n5f50 = g_1070b244->vfunc2(0, 12);
	sub_100aaa40(0x11);
	sub_1026dc60();
	sub_103580d0((m_flags204 >> 4) & 1);
	sub_10332aa0(0xe, 4, 0);
	pThis->slot420();
}
// END FUNCTION

// FUNCTION: 0x10357660 size=0x6
#include "CNPC_Crow.h"
int CNPC_Crow::vfunc138()
{
    return 0xa;
}
// END FUNCTION

// FUNCTION: 0x10357680 size=0xac
#include "CNPC_Crow.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CCrowSlotView
{
	SV100(a) SV100(b) SV10(c0) SV10(c1)
	virtual float *vfunc220();
};

struct CCrowFieldView
{
	char m_pad0000[0x5f4c];
	float m_flEnemyDist;
};

struct CDevFlag
{
	virtual void vfunc0();
	virtual bool vfunc1();
};

extern CDevFlag *g_10924a6c;

void CNPC_Crow::vfunc481(CBaseEntity *pEnemy)
{
	CCrowFieldView *pView = (CCrowFieldView *)this;
	const Vector *pMine = (const Vector *)((CCrowSlotView *)this)->vfunc220();
	const Vector *pOther = (const Vector *)((CCrowSlotView *)pEnemy)->vfunc220();
	Vector vecDelta = *pMine - *pOther;
	pView->m_flEnemyDist = FastSqrt(vecDelta.x * vecDelta.x + (vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z));
	if (pView->m_flEnemyDist < 256.0f)
	{
		g_10924a6c->vfunc1();
		sub_10269a20(0x78);
	}
	if (pView->m_flEnemyDist < 512.0f)
	{
		g_10924a6c->vfunc1();
		sub_10269a20(0x77);
	}
	sub_10270b20(pEnemy);
}
// END FUNCTION

// FUNCTION: 0x10357760 size=0x45
#include "CNPC_Crow.h"

#define HS(n) virtual void n();
#define HS10(p) HS(p##0) HS(p##1) HS(p##2) HS(p##3) HS(p##4) HS(p##5) HS(p##6) HS(p##7) HS(p##8) HS(p##9)

struct CCrowSlots
{
	HS10(a0) HS10(a1) HS10(a2) HS10(a3) HS10(a4) HS10(a5) HS10(a6) HS10(a7) HS10(a8) HS10(a9)
	HS10(b0) HS10(b1) HS10(b2) HS10(b3) HS10(b4) HS10(b5) HS10(b6) HS10(b7) HS10(b8) HS10(b9)
	HS10(c0) HS10(c1)
	virtual float *slot220();
};

Vector CNPC_Crow::vfunc192()
{
	CCrowSlots *p = (CCrowSlots *)this;
	float *py = p->slot220();
	float *px = p->slot220();
	float *pz = p->slot220();
	return Vector(px[0], py[1], pz[2] + 6.0f);
}
// END FUNCTION

// FUNCTION: 0x10357800 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628bb4;
int __stdcall sub_10005f29(int);
}
int CNPC_Crow::vfunc511()
{
    return lifted::sub_10005f29((int)&lifted::g_10628bb4);
}
// END FUNCTION

// FUNCTION: 0x10357b30 size=0x28
#include "CNPC_Crow.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_Crow::vfunc465
void CNPC_Crow::vfunc465(int nEvent)
{
    if (nEvent == 0x22)
    {
        m_fl6f8 = g_1070b244->vfunc1(0.0f, 0.75f);
    }
}
// END FUNCTION

// FUNCTION: 0x10357ba0 size=0x25
#include "CNPC_Crow.h"

// TARGET: vfunc525
bool CNPC_Crow::vfunc525(int a)
{
    if (sub_1027d990() == 2) {
        sub_1000b61d(a);
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10358310 size=0x1
#include "CNPC_Crow.h"
void CNPC_Crow::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x10358c40 size=0xd
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c14;
int __stdcall sub_10005c59(int);
}
bool CNPC_Crow::vfunc394()
{
    lifted::sub_10005c59((int)&lifted::g_10628c14);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10358ce0 size=0x17a
#include "CNPC_Crow.h"
#include "CUnknown1070b244.h"
extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_Crow::vfunc438
int CNPC_Crow::vfunc438()
{
	if (sub_1027d990() == 2)
		return 0x45;
	if (sub_10269aa0(0x79)) {
		sub_10269b50(0x79);
		return 0x49;
	}
	if (!(sub_100b3700() & 1) && gpGlobals->curtime > 2.0)
		return 0x49;
	if (sub_10269aa0(0x6a)) return 0x49;
	if (sub_10269aa0(0x6d)) return 0x49;
	if (sub_10269aa0(0x4c)) return 0x49;
	if (sub_10269aa0(0x4d)) return 0x49;
	if (sub_10269aa0(0x78)) {
		sub_10269b50(0x78);
		*(int *)((char *)this + 0x5f50) = 0;
		return 0x49;
	}
	if (sub_10269aa0(0x77)) {
		sub_10269b50(0x77);
		if (*(float *)((char *)this + 0x5f4c) > 400.0f)
			return 0x46;
		if (*(float *)((char *)this + 0x5f4c) > 300.0f) {
			*(int *)((char *)this + 0x5f50) -= 1;
			return 0x47;
		}
		*(int *)((char *)this + 0x5f50) -= 2;
		return 0x48;
	}
	int state = *(int *)((char *)this + 0x5cc0);
	if (state > 0 && state <= 3 && sub_1027d990() != 2) {
		if (gpGlobals->curtime > *(float *)((char *)this + 0x5f48))
			*(float *)((char *)this + 0x5f48) = g_1070b244->vfunc1(10.0f, 20.0f) + gpGlobals->curtime;
		return 0x44;
	}
	return sub_1028a380();
}
// END FUNCTION

// FUNCTION: 0x10358ef0 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c24;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc490()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c24);
}
// END FUNCTION

// FUNCTION: 0x10358f10 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c34;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc489()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c34);
}
// END FUNCTION

// FUNCTION: 0x10358f30 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c48;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc491()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c48);
}
// END FUNCTION

// FUNCTION: 0x10358f50 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c58;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc488()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c58);
}
// END FUNCTION

// FUNCTION: 0x10358f90 size=0x103
#include "CNPC_Crow.h"
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern char g_10628c84[];
extern char g_10628c68[];
void sub_101434b0(int index, int line, const char *text, int duration, int r, int g, int b, int a);
int CNPC_Crow::vfunc124()
{
	char buf[512];
	int line = sub_102767d0();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		Q_snprintf(buf, 512, g_10628c84, *(int *)((char *)this + 0x5f50));
		int edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(edict), line, buf, 0, 255, 255, 255, 255);
		line++;
		if (((CAI_BaseNPC *)this)->vfunc167()) {
			Q_snprintf(buf, 512, g_10628c68, ((CBaseEntity *)((CAI_BaseNPC *)this)->vfunc167())->sub_1009f200(), (double)*(float *)((char *)this + 0x5f4c));
			int edict2 = *(int *)((char *)this + 0x2e0);
			sub_101434b0(engine->vfunc35(edict2), line, buf, 0, 255, 255, 255, 255);
			line++;
		}
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x103590f0 size=0x6
#include "CNPC_Crow.h"
int CNPC_Crow::vfunc473()
{
    return 0xf;
}
// END FUNCTION

// FUNCTION: 0x103591e0 size=0x6
extern char g_10628a48;
// TARGET: sub_103591e0
char sub_103591e0() { return g_10628a48; }
// END FUNCTION

// FUNCTION: 0x10359240 size=0x1d
#include "CNPC_Crow.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a070;
extern B g_10936c74;
int CNPC_Crow::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a070.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10359b70 size=0x1e
#include "CNPC_Crow.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Crow::vfunc5
CNPC_Crow *CNPC_Crow::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
