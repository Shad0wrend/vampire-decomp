// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102341d0 size=0x6
namespace lifted {
extern char g_10751cf0;
}
int CWeaponRanged::vfunc80()
{
    return (int)&lifted::g_10751cf0;
}
// END FUNCTION

// FUNCTION: 0x102341f0 size=0x3
int CWeaponRanged::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102343a0 size=0x6
extern char g_105b6bc8[];

// TARGET: sub_102343a0
void *sub_102343a0()
{
	return g_105b6bc8;
}
// END FUNCTION

// FUNCTION: 0x10234430 size=0x6
extern char g_105b6c90[];

// TARGET: sub_10234430
void *sub_10234430()
{
	return g_105b6c90;
}
// END FUNCTION

// FUNCTION: 0x10234450 size=0x6
// TARGET: sub_10234450
int sub_10234450()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x102347c0 size=0x6
// TARGET: sub_102347c0
int sub_102347c0()
{
	return 0x2000;
}
// END FUNCTION

// FUNCTION: 0x102347e0 size=0xb
#include "CWeaponRanged.h"

const Vector &CWeaponRanged::vfunc331()
{
	return *(const Vector *)((char *)sub_102517e0() + 0x3ac);
}
// END FUNCTION

// FUNCTION: 0x10234800 size=0x3
// TARGET: sub_10234800
char sub_10234800() {
	return 0;
}
// END FUNCTION

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


struct COwnerObj_t
{
	void vfunc410();
};

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
	*(float *)((char *)this + 0x910) = (this->*WR_VSLOT(FnFloat, this, 332))() + gpGlobals->curtime;
	((float *)((char *)this + 0x730))[g_1088aee4] = (this->*WR_VSLOT(FnFloat, this, 332))() + gpGlobals->curtime;
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

// FUNCTION: 0x10238350 size=0x12
namespace lifted {
extern int g_1088aee4;
int __stdcall sub_10010ab9(int);
}

void sub_10238350()
{
	lifted::g_1088aee4 = 1;
	lifted::sub_10010ab9(0);
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

// FUNCTION: 0x10239350 size=0x1ad
#include "CWeaponRanged.h"
#include "CBaseCombatWeapon.h"
#include "CUnknown1070b244.h"
#include "globalvars.h"

struct CWRTimeView
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x28];
	int m_n2c;
};

struct CWeaponRangedView
{
	char m_pad0000[0x730];
	float m_flTimes730[2];
	char m_pad738[0x74c - 0x738];
	int m_nClip74c;
	char m_pad750[0x854 - 0x750];
	int m_nPending854;
	char m_pad858[0x86c - 0x858];
	int m_nState86c;
};

extern CWRTimeView *g_107520a4;
extern int g_10752954;
extern int g_10751a54;
extern int g_105bf918[];
extern CUnknown1070b244 *g_1070b244;
char __fastcall sub_102506a0(CBaseCombatWeapon *pWeapon);
void __fastcall sub_10253110(CBaseCombatWeapon *pWeapon);

void CWeaponRanged::vfunc321()
{
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)this;
	CWeaponRangedView *pView = (CWeaponRangedView *)this;
	if (!pWeapon->vfunc309())
		return;
	if (!g_107520a4->vfunc1() && g_107520a4->m_n2c)
	{
		g_10752954++;
		if (g_10752954 > g_10751a54)
			g_10752954 = 0;
		pWeapon->vfunc307(g_105bf918[g_10752954]);
		return;
	}
	if (pView->m_nPending854 == -1)
	{
		if (!sub_102506a0(pWeapon) && g_1070b244->vfunc2(0, 100) <= 5)
		{
			switch (pView->m_nState86c)
			{
			case 0:
				pWeapon->vfunc307(0xb7);
				return;
			case 1:
				pWeapon->vfunc307(0xda);
				return;
			}
			return;
		}
		switch (pView->m_nState86c)
		{
		case 0:
			if (pWeapon->vfunc277(0) && pView->m_nClip74c <= 0)
			{
				pWeapon->vfunc307(0xd8);
				return;
			}
			pWeapon->vfunc307(0xb6);
			return;
		case 1:
			if (pWeapon->vfunc277(0) && pView->m_nClip74c <= 0)
			{
				pWeapon->vfunc307(0xd9);
				return;
			}
			pWeapon->vfunc307(0xdf);
			return;
		}
	}
	else
	{
		sub_10253110(pWeapon);
		pWeapon->vfunc307(pView->m_nPending854);
		pView->m_nPending854 = -1;
		void *pOwner = pWeapon->sub_102521f0();
		if (pOwner)
			*(float *)((char *)pOwner + 0x1564) = pWeapon->vfunc311();
		for (int i = 0; i < 2; i++)
			pView->m_flTimes730[i] = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10239570 size=0x3f
#include "CWeaponRanged.h"

struct CWeaponRangedView
{
	char m_pad0000[0x86c];
	int m_n086c;	// +0x86c
	char m_pad0870[0x898 - 0x870];
	char m_b0898;	// +0x898
	char m_b0899;	// +0x899
	char m_pad089a[0x8c8 - 0x89a];
	char m_b08c8;	// +0x8c8

	void sub_10254b00(int a);	// CBaseCombatWeapon::sub_10254b00 (stub 0x10007784), called directly
};

// TARGET: CWeaponRanged::vfunc325
void CWeaponRanged::vfunc325()
{
	CWeaponRangedView *pView = (CWeaponRangedView *)this;
	if (!pView->m_b0898 && pView->m_b08c8) {
		pView->m_b0899 = 0;
		pView->sub_10254b00(0xc1);
		return;
	}
	pView->sub_10254b00(pView->m_n086c ? 0xe3 : 0xc2);
}
// END FUNCTION

// FUNCTION: 0x10239680 size=0x69
#include "CWeaponRanged.h"

struct CWeaponRangedView
{
	char m_pad0000[0x74c];
	int m_nClip[2];
	char m_pad0754[0x898 - 0x754];
	char m_b898;
	char m_b899;
	char m_pad089a[0x8c8 - 0x89a];
	char m_b8c8;
};

struct CWeaponRangedOwnerAI
{
	char m_pad0000[0x2088];
	unsigned int m_flags2088;
	unsigned int m_flags208c;
};

struct CWeaponRangedRoll
{
	char m_pad0000[0x10c];
	int m_iSlot;
};

struct CWeaponRangedOwnerEnt
{
	char m_pad0000[0xa8];
	CWeaponRangedOwnerAI *m_pAI;
};

// TARGET: CWeaponRanged::vfunc319
void CWeaponRanged::vfunc319()
{
	CWeaponRangedOwnerEnt *pOwner = (CWeaponRangedOwnerEnt *)sub_102521f0();
	if (pOwner)
	{
		CWeaponRangedOwnerAI *pAI = pOwner->m_pAI;
		if (pAI)
		{
			CWeaponRangedView *v = (CWeaponRangedView *)this;
			if (v->m_b898 && v->m_b8c8 && ((pAI->m_flags208c | pAI->m_flags2088) & 0x801))
			{
				CWeaponRangedRoll *pRoll = (CWeaponRangedRoll *)sub_102517e0();
				if (0 < v->m_nClip[pRoll->m_iSlot])
					v->m_b899 = 1;
			}
			sub_10253ea0();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10239710 size=0x73
#include "CWeaponRanged.h"

struct COwnerChar
{
	char m_pad0000[0x2088];
	unsigned int m_f2088;
	unsigned int m_f208c;
};

struct COwnerObj
{
	char m_pad0000[0xa8];
	COwnerChar *m_pChar;
};

struct CRollRecord
{
	char m_pad0000[0x10c];
	int m_nAmmoSlot;
};

struct CWeaponView	// the fields of the weapon at their real offsets
{
	char m_pad0000[0x74c];
	int m_aClip[2];	// 0x74c
	char m_pad0754[0x898 - 0x754];
	char m_b898;
	char m_b899;
	char m_pad089a[0x8c8 - 0x89a];
	char m_b8c8;
};

void CWeaponRanged::vfunc320()
{
	CWeaponView *w = (CWeaponView *)this;
	COwnerObj *pOwner = (COwnerObj *)sub_102521f0();
	if (!pOwner)
		return;
	COwnerChar *pChar = pOwner->m_pChar;
	if (!pChar)
		return;
	if (w->m_b898 && w->m_b8c8 && ((pChar->m_f208c | pChar->m_f2088) & 0x801)) {
		CRollRecord *pRoll = (CRollRecord *)sub_102517e0();
		if (w->m_aClip[pRoll->m_nAmmoSlot] > 0) {
			w->m_b899 = 1;
			vfunc319();
		}
	}
	sub_10254250();
}
// END FUNCTION

// FUNCTION: 0x10239d10 size=0x4e
#include "CWeaponRanged.h"
#include "CFlagSet10174550.h"
struct CRangedCharView : CFlagSet10174550 { char m_pad[0x1e78 - 1]; int m_n1e78; };
struct CRangedOwnerView { char m_pad[0xa8]; CRangedCharView *m_pChar; };
void CWeaponRanged::vfunc316(int a)
{
	CRangedOwnerView *pOwner = (CRangedOwnerView *)sub_102521f0();
	if (pOwner) {
		CRangedCharView *pChar = pOwner->m_pChar;
		if (pChar && *(int *)((char *)this + 0x914) > -1) {
			pChar->sub_10174550(true);
			pChar->m_n1e78 = 0;
			*(int *)((char *)this + 0x914) = -1;
		}
	}
	sub_10253ca0(a);
}
// END FUNCTION

// FUNCTION: 0x1023a210 size=0x2c
#include "CWeaponRanged.h"

#define S10(b) virtual void s##b##0(); virtual void s##b##1(); virtual void s##b##2(); virtual void s##b##3(); virtual void s##b##4(); virtual void s##b##5(); virtual void s##b##6(); virtual void s##b##7(); virtual void s##b##8(); virtual void s##b##9();

struct CIntObj1023a210 {
    virtual void vfunc0();
    virtual int *vfunc1();
};
struct CWRView1023a210 {
    S10(0) S10(1) S10(2) S10(3) S10(4) S10(5) S10(6) S10(7) S10(8) S10(9)
    S10(10) S10(11) S10(12) S10(13) S10(14) S10(15) S10(16) S10(17) S10(18) S10(19)
    S10(20) S10(21) S10(22) S10(23) S10(24) S10(25) S10(26) S10(27) S10(28)
    virtual void s290();
    virtual void s291();
    virtual void s292();
    virtual CIntObj1023a210 *vfunc293();
    char pad[0x874 - 4];
    int m_i874;
};

// TARGET: CWeaponRanged::vfunc294
void CWeaponRanged::vfunc294()
{
    CIntObj1023a210 *pObj = ((CWRView1023a210 *)this)->vfunc293();
    if (pObj != 0) {
        int *pVal = pObj->vfunc1();
        ((CWRView1023a210 *)this)->m_i874 = *pVal;
        return;
    }
    ((CWRView1023a210 *)this)->m_i874 = -1;
}
// END FUNCTION
