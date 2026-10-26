// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x10358ce0 size=0x17a
#include "CNPC_Crow.h"
#include "CUnknown1070b244.h"
struct CGlobalsView { char pad[0xc]; float curtime; };
extern CGlobalsView *g_1070b228;
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
	if (!(sub_100b3700() & 1) && g_1070b228->curtime > 2.0)
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
		if (g_1070b228->curtime > *(float *)((char *)this + 0x5f48))
			*(float *)((char *)this + 0x5f48) = g_1070b244->vfunc1(10.0f, 20.0f) + g_1070b228->curtime;
		return 0x44;
	}
	return sub_1028a380();
}
// END FUNCTION

// FUNCTION: 0x10358f90 size=0x103
#include "CNPC_Crow.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
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
		sub_101434b0(g_1070b22c->vfunc35(edict), line, buf, 0, 255, 255, 255, 255);
		line++;
		if (((CAI_BaseNPC *)this)->vfunc167()) {
			Q_snprintf(buf, 512, g_10628c68, ((CBaseEntity *)((CAI_BaseNPC *)this)->vfunc167())->sub_1009f200(), (double)*(float *)((char *)this + 0x5f4c));
			int edict2 = *(int *)((char *)this + 0x2e0);
			sub_101434b0(g_1070b22c->vfunc35(edict2), line, buf, 0, 255, 255, 255, 255);
			line++;
		}
	}
	return line;
}
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
