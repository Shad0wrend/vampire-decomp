// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10238110 size=0x1e
#include "CWeaponRanged.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged::vfunc5
CWeaponRanged *CWeaponRanged::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10238160 size=0x99
#include "CWeaponRanged.h"

extern "C" int atoi(const char *);
extern int g_1088aee4;

// TARGET: CWeaponRanged::vfunc370
void CWeaponRanged::vfunc370(int *event, void *other)
{
	switch (event[0])
	{
	case 0xbd6: case 0xbd7: case 0xbd8: case 0xbd9: case 0xbda: case 0xbdb: case 0xbdc: case 0xbdd:
	case 0xbde: case 0xbdf: case 0xbe0: case 0xbe1: case 0xbe2: case 0xbe3: case 0xbe4:
		if (g_1088aee4 != 0 && *(int *)((char *)other + 0xa8) != 0)
		{
			sub_10238380();
			return;
		}
		sub_10238320();
		return;
	case 0xfa1:
		sub_10093b10(atoi((const char *)event[1]), 1);
		return;
	case 0xfa2:
		sub_10093b10(atoi((const char *)event[1]), 0);
		return;
	}
	sub_1024f030(event, other);
}
// END FUNCTION

// FUNCTION: 0x10238230 size=0x8d
#include "CWeaponRanged.h"
#include "CBaseCombatWeapon.h"

struct CGlobalVars_t
{
	char m_pad0000[0xc];
	float curtime;
};

struct COwnerObj_t
{
	void vfunc410();
};

extern CGlobalVars_t *g_1070b228;
extern int g_1088aee4;

typedef void (CWeaponRanged::*Fn6Int)(int, int, int, int, int, int);
typedef void (CWeaponRanged::*Fn1Int)(int);
typedef float (CWeaponRanged::*FnFloat)();
typedef void (COwnerObj_t::*FnOwner)();

#define WR_VSLOT(Type, obj, slot) (*(Type *)&(*(void ***)(obj))[slot])

void CWeaponRanged::vfunc291()
{
	(this->*WR_VSLOT(Fn6Int, this, 333))(0xc, 1, 0, 0, 0, 0);
	if (*(int *)((char *)this + 0x86c) == 0)
		(this->*WR_VSLOT(Fn1Int, this, 307))(0xc4);
	else
		(this->*WR_VSLOT(Fn1Int, this, 307))(0xe5);
	*(float *)((char *)this + 0x910) = (this->*WR_VSLOT(FnFloat, this, 332))() + g_1070b228->curtime;
	((float *)((char *)this + 0x730))[g_1088aee4] = (this->*WR_VSLOT(FnFloat, this, 332))() + g_1070b228->curtime;
	COwnerObj_t *pOwner = (COwnerObj_t *)((CBaseCombatWeapon *)this)->sub_10252290();
	if (pOwner)
		(pOwner->*WR_VSLOT(FnOwner, pOwner, 410))();
}
// END FUNCTION

// FUNCTION: 0x102382f0 size=0x12
extern int g_1088aee4;
void __stdcall sub_102383b0(int a);
void sub_102382f0()
{
	g_1088aee4 = 0;
	sub_102383b0(0);
}
// END FUNCTION

// FUNCTION: 0x10239250 size=0x8
// TARGET: CWeaponRanged::vfunc329
void CWeaponRanged::vfunc329()
{
	vfunc328();
}
// END FUNCTION

// FUNCTION: 0x10239270 size=0xae
#include "CWeaponRanged.h"

#define WV1(n) virtual void wv##n();
#define WV10(p) WV1(p##0) WV1(p##1) WV1(p##2) WV1(p##3) WV1(p##4) WV1(p##5) WV1(p##6) WV1(p##7) WV1(p##8) WV1(p##9)
#define WV100(p) WV10(p##0) WV10(p##1) WV10(p##2) WV10(p##3) WV10(p##4) WV10(p##5) WV10(p##6) WV10(p##7) WV10(p##8) WV10(p##9)

struct CWeaponRangedView	// the weapon's vtable up to slot 333, with the members the zoom toggle touches
{
	WV100(a) WV100(b) WV100(c)
	WV1(d0) WV1(d1) WV1(d2) WV1(d3) WV1(d4) WV1(d5) WV1(d6)
	virtual void slot307(int value);
	WV1(e8) WV1(e9)
	WV10(f0) WV10(f1) WV1(g0) WV1(g1) WV1(g2)
	virtual void slot333(int a, int b, int c, int d, int e, int f);

	char m_pad0004[0x84c - 4];
	int m_n84c;
	char m_pad0850[0x86c - 0x850];
	int m_n86c;
};

extern int g_1088aee4;
void sub_101cebc0(void *pOwner, int a, int b);

void CWeaponRanged::vfunc374()
{
	CWeaponRangedView *p = (CWeaponRangedView *)this;
	if (p->m_n86c == 0) {
		p->slot307(0xe7);
		p->m_n86c = 1;
		p->slot333(8, 1, 0, 0, 0, 0);
		p->m_n84c = 1;
		g_1088aee4 = 1;
	} else {
		p->slot307(0xe6);
		p->m_n86c = 0;
		p->slot333(3, 1, 0, 0, 0, 0);
		p->m_n84c = 0;
		g_1088aee4 = 0;
	}
	void *pOwner = sub_10252290();
	if (pOwner)
		sub_101cebc0(pOwner, 0x1a, p->m_n86c);
}
// END FUNCTION
