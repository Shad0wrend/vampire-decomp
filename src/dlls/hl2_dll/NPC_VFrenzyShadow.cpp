// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x10375470 size=0x62e
#include "UtlMem.h"
#include "UtlVec8.h"
#include "CUtlVector4.h"
#include "CUtlVector16.h"
#include "CUnknown10359c50.h"

extern "C" void __cdecl qsort(void *, unsigned int, unsigned int, int (__cdecl *)(const void *, const void *));
extern "C" int __cdecl sub_102bec60(const void *, const void *);
extern char g_109203cc[], g_109203d4[], g_109203dc[], g_10936c74[];
extern char g_1093d258[], g_1093d270[], g_1093d288[], g_1093d2a4[];
extern char g_10638edc[], g_10638d18[], g_10638cf4[], g_10638b50[], g_10638b24[], g_106388f8[];
extern char g_106388c0[], g_106386a0[], g_10638670[], g_106383b0[], g_10638388[], g_106381a0[];
extern char g_10638170[], g_10638018[], g_10637fe8[], g_10637e90[], g_10637e6c[], g_10637c78[];
extern char g_10637c4c[], g_10637c24[], g_10637be4[];
extern bool g_10637b44;
extern const char *g_10637b4c;
extern const char g_10594488[], g_10600e78[], g_10577ca0[], g_10628c94[];
extern CUnknown10359c50 g_1093ae48, g_1093ae60, g_1093ae78, g_1093ae28;

struct VecU {
	UtlMem mem;
	int size;
	int *elems;
};

struct Frame {
	UtlVec8Elem e;
	VecU a;
	UtlVec8 sched;
	VecU b;
	UtlVec8 cond;
	UtlVec8 task;
	UtlVec8 squad;
	const char *tTurnRight;
	const char *tUnknown;
	const char *tLookAround;
	const char *tHunt;
	const char *tFinish;
	const char *tFeed;
	const char *tTurnLeft;
	const char *tInvestigate;
	const char *tSetup;
};

class CUnknown10936b68 { public: bool sub_1030d850(const char *cls, int name, CUnknown10359c50 *reg); };
extern CUnknown10936b68 g_10936b68;
struct SchedPurge { void sub_10373420(); };
struct VecPurgeA { void sub_1021e410(); };

struct Elem { const char *name; int id; };

#define VERIFY(vec, reg, kind) \
	for (i = 0; i < f.vec.m_Size; i++) { \
		Elem *p = (Elem *)f.vec.m_pMemory; \
		const char *cn = g_10637b4c; \
		int id = p[i].id; \
		const char *nm = p[i].name; \
		if (!reg.sub_102ea130(nm, id, kind, cn)) \
			goto fail; \
	}

// TARGET: sub_10375470
void sub_10375470()
{
	int i;
	Frame f;

	f.a.mem.sub_102c6a00(0, 0);
	f.a.size = 0;
	f.a.elems = f.a.mem.m_pMemory;
	f.b.mem.sub_102c6b80(0, 0);
	f.b.size = 0;
	f.b.elems = f.b.mem.m_pMemory;
	f.sched.sub_102c66f0(0, 0);
	f.task.sub_102c66f0(0, 0);
	f.cond.sub_102c66f0(0, 0);
	f.squad.sub_102c66f0(0, 0);

	f.e.a = (int)g_10638edc;
	f.e.b = 0x158;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tSetup = g_10638d18;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tSetup);
	f.e.a = (int)g_10638cf4;
	f.e.b = 0x15a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tHunt = g_10638b50;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tHunt);
	f.e.a = (int)g_10638b24;
	f.e.b = 0x15b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tInvestigate = g_106388f8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tInvestigate);
	f.e.a = (int)g_106388c0;
	f.e.b = 0x15c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tUnknown = g_106386a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tUnknown);
	f.e.a = (int)g_10638670;
	f.e.b = 0x15d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tLookAround = g_106383b0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tLookAround);
	f.e.a = (int)g_10638388;
	f.e.b = 0x15e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tFinish = g_106381a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tFinish);
	f.e.a = (int)g_10638170;
	f.e.b = 0x15f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tTurnLeft = g_10638018;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tTurnLeft);
	f.e.a = (int)g_10637fe8;
	f.e.b = 0x160;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tTurnRight = g_10637e90;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tTurnRight);
	f.e.a = (int)g_10637e6c;
	f.e.b = 0x161;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.tFeed = g_10637c78;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.tFeed);
	f.e.a = (int)g_10637c4c;
	f.e.b = 0x79;
	f.cond.sub_102c6a50(f.cond.m_Size, &f.e);
	f.e.a = (int)g_10637c24;
	f.e.b = 0x14a;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);

	if (g_1093ae48.sub_1001153b(g_109203cc, g_1093d258)) {
		if (g_1093ae60.sub_1001153b(g_109203d4, g_1093d270))
			g_1093ae78.sub_1001153b(g_109203dc, g_1093d288);
	}
	g_1093ae28.sub_1001153b(g_10936c74, g_1093d2a4);

	if (f.sched.m_Size)
		qsort(f.sched.m_pMemory, f.sched.m_Size, 8, sub_102bec60);
	if (f.task.m_Size)
		qsort(f.task.m_pMemory, f.task.m_Size, 8, sub_102bec60);
	if (f.cond.m_Size)
		qsort(f.cond.m_pMemory, f.cond.m_Size, 8, sub_102bec60);
	if (f.squad.m_Size)
		qsort(f.squad.m_pMemory, f.squad.m_Size, 8, sub_102bec60);

	VERIFY(sched, g_1093ae48, g_10594488)
	VERIFY(task, g_1093ae60, g_10600e78)
	VERIFY(cond, g_1093ae78, g_10577ca0)
	for (i = 0; i < f.squad.m_Size; i++) {
		if (!g_1093ae28.sub_102ea130(((Elem *)f.squad.m_pMemory)[i].name, ((Elem *)f.squad.m_pMemory)[i].id, g_10628c94, g_10637b4c))
			goto fail;
	}
	for (i = 0; i < f.b.size; i++)
		((void (__cdecl *)())f.b.mem.m_pMemory[i])();
	for (i = 0; i < f.a.size; i++) {
		if (!g_10637b44)
			break;
		g_10637b44 = g_10936b68.sub_1030d850(g_10637be4, f.a.mem.m_pMemory[i], &g_1093ae48);
	}

	((CUtlVector16 *)&f.squad)->sub_102c8b60();
	((UtlMem *)&f.squad)->sub_102c8c00();
	((CUtlVector16 *)&f.cond)->sub_102c8b60();
	((UtlMem *)&f.cond)->sub_102c8c00();
	((CUtlVector16 *)&f.task)->sub_102c8b60();
	((UtlMem *)&f.task)->sub_102c8c00();
	((SchedPurge *)&f.sched)->sub_10373420();
	((UtlMem *)&f.sched)->sub_102c8c00();
	f.sched.m_pElements = (UtlVec8Elem *)f.sched.m_pMemory;
	((UtlMem *)&f.sched)->sub_102c8c00();
	((CUtlVector16 *)&f.b)->sub_10359ba0();
	((UtlMem *)&f.b)->sub_102c8c40();
	f.b.elems = f.b.mem.m_pMemory;
	((UtlMem *)&f.b)->sub_102c8c40();
	((VecPurgeA *)&f.a)->sub_1021e410();
	((UtlMem *)&f.a)->sub_1021e540();
	f.a.elems = f.a.mem.m_pMemory;
	((UtlMem *)&f.a)->sub_1021e540();
	return;
fail:
	f.squad.sub_102c8a90();
	f.cond.sub_102c8a90();
	f.task.sub_102c8a90();
	f.sched.sub_102c8a90();
	((CUtlVector16 *)&f.b)->sub_102c8bb0();
	((UtlMem *)&f.b)->sub_102c8c40();
	((CUtlVector16 *)&f.a)->sub_102c8b10();
	((UtlMem *)&f.a)->sub_1021e540();
}
// END FUNCTION

// FUNCTION: 0x10375c30 size=0x5
#include "CNPC_VFrenzyShadow.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VFrenzyShadow::vfunc375
// the game's 0x10375c30: a tail call (jmp) of CNPC_VHuman::vfunc375
int CNPC_VFrenzyShadow::vfunc375(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc375(a0);
}
// END FUNCTION

// FUNCTION: 0x10375c50 size=0x15
#include "CNPC_VFrenzyShadow.h"
#include "CNPC_VPlayerController.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VFrenzyShadow::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
    ((CNPC_VPlayerController *)this)->CNPC_VPlayerController::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10375c80 size=0xb5
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CNPC_VFrenzyShadow.h"
#include "CNPC_VPlayerController.h"

struct CUnknown1024f7b0	// a weapon as the NPC set-up sees it
{
	void sub_1024f7b0();	// stub 0x10003ca1
};

struct CSensesFlagView
{
	char m_pad0000[0x80];
	char m_b80;	// 0x80
};

// TARGET: CNPC_VFrenzyShadow::vfunc420
void CNPC_VFrenzyShadow::vfunc420()
{
	void *pWeapon = sub_1032e120("item_w_fists");
	if (pWeapon) {
		if (sub_10334c20(pWeapon))
			((CAI_BaseNPC *)this)->vfunc383(pWeapon, 0);
		else
			((CUnknown1024f7b0 *)pWeapon)->sub_1024f7b0();
	}
	((CBaseEntity *)pWeapon)->m_nEffectFlags |= 0x40;
	((CNPC_VPlayerController *)this)->sub_103a4580();
	m_pszSourceFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VFrenzyShadow.cpp";
	m_nSourceLine = 0xe4;
	m_nIdealState = 0xb;
	((CAI_BaseNPC *)this)->sub_1026e340(0xb);
	m_n5b84 = 0x5ddf;
	((CSensesFlagView *)m_pSenses)->m_b80 = 1;
	m_n6664 = 0;
	m_b6668 = 0;
	m_fl1488 = 8.0f;
	m_b65f7 = 1;
	sub_10376c10();
}
// END FUNCTION

// FUNCTION: 0x10375d70 size=0x6
#include "CNPC_VFrenzyShadow.h"
int CNPC_VFrenzyShadow::vfunc138()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x10375d90 size=0x88
#include "CNPC_VFrenzyShadow.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// The object slot 167 returns: slot 158 asks whether it accepts.
struct CFrenzyShadowTarget
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o)
	virtual void v150(); virtual void v151(); virtual void v152(); virtual void v153(); virtual void v154(); virtual void v155(); virtual void v156(); virtual void v157();
	virtual bool vfunc158();
};
// The NPC's own table up to slot 167.
struct CFrenzyShadowView
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o)
	virtual void v150(); virtual void v151(); virtual void v152(); virtual void v153(); virtual void v154(); virtual void v155(); virtual void v156(); virtual void v157();
	virtual void v158(); virtual void v159(); virtual void v160(); virtual void v161(); virtual void v162(); virtual void v163(); virtual void v164(); virtual void v165(); virtual void v166();
	virtual CFrenzyShadowTarget *vfunc167();
};
int CNPC_VFrenzyShadow::vfunc438()
{
	char *p = (char *)this;
	int state = *(int *)(p + 0x5cc0);
	*(int *)(p + 0x1b2c) = 0xf;
	switch (state) {
	case 2:
		*(char *)(p + 0x5b80) = 0;
		if (*(int *)(p + 0x6664) <= 1) {
			CFrenzyShadowView *pView = (CFrenzyShadowView *)this;
			if (pView->vfunc167()) {
				if (pView->vfunc167()->vfunc158()) {
					if (!sub_10014df8(0x59) && !*(char *)(p + 0x6668)) {
						*(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VFrenzyShadow.cpp";
						*(int *)(p + 0x1b34) = 0x133;
						return 0x161;
					}
				}
			}
		}
		break;
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x10375e50 size=0x53
#include "CBaseEntity.h"
#include "CNPC_VFrenzyShadow.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CFrenzyShadowTarget
{
	S100(a0) S100(a1)
	S10(b0)
	virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual void b15(); virtual void b16();
	virtual int vfunc217();
};

void CNPC_VFrenzyShadow::vfunc431()
{
	sub_103a4700();
	CBaseEntity *pTarget = vfunc167();
	if (m_nState5cc0 == 2 && pTarget && !sub_10014df8(0x46))
		vfunc544(pTarget, ((CFrenzyShadowTarget *)pTarget)->vfunc217(), (int)((char *)pTarget + 0x3d4));
}
// END FUNCTION

// FUNCTION: 0x10375ed0 size=0x32
#include "CNPC_VFrenzyShadow.h"
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c { virtual void vfunc0(); virtual void vfunc1(); };
extern CUnknown10924a6c *g_10924a6c;
void __fastcall sub_10013f2f(void *self);

void CNPC_VFrenzyShadow::vfunc433()
{
    sub_10013f2f(this);
    if (m_n6664 > 1) {
        g_10924a6c->vfunc1();
        ((CAI_BaseNPCTroika *)this)->sub_100041b0(0x79);
        return;
    }
    ((CAI_BaseNPCTroika *)this)->sub_10015839(0x79);
}
// END FUNCTION

// FUNCTION: 0x10375f20 size=0x1f
#include "CNPC_VHuman.h"
#include "CNPC_VFrenzyShadow.h"

// TARGET: CNPC_VFrenzyShadow::vfunc440
void CNPC_VFrenzyShadow::vfunc440(int a)
{
    if (((CAI_BaseNPCTroika *)this)->sub_102b11c0(a) == 0)
    {
        ((CNPC_VHuman *)this)->vfunc440(a);
    }
}
// END FUNCTION

// FUNCTION: 0x10375f50 size=0x5f8
#include "CNPC_VFrenzyShadow.h"
#include "CUnknown102ee120.h"
#include "Vector.h"
struct CFinder { CNPC_VFrenzyShadow *sub_100f8580(Vector *v, float f); };
extern CFinder g_106eb5d8;
float sub_102d61b0(int);
struct CGoalView { char sub_10306700(CNPC_VFrenzyShadow *p, Vector *a, Vector *b, float f); };
#define F(t, o) (*(t *)((char *)this + (o)))
#define SRCFILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VFrenzyShadow.cpp"
inline float VecLen(const Vector &v) { return FastSqrt(v.x * v.x + (v.y * v.y + v.z * v.z)); }
// TARGET: CNPC_VFrenzyShadow::vfunc442
void CNPC_VFrenzyShadow::vfunc442(int *pEvt)
{
	Vector tmp;
	char *p97 = (char *)vfunc97();
	if (p97) {
		char *q = *(char **)(p97 + 0xa8);
		if (q)
			F(char, 0x1474) = q[0x1474];
	}
	switch (pEvt[0]) {
	case 0x4e: case 0x9f:
		F(float, 0x6320) = sub_102d61b0(0) * 0.2;
		{
			float f = vfunc418(pEvt[1]) + F(float, 0x6320);
			F(float, 0x6320) = f;
			(*(CUnknown102ee120 **)((char *)this + 0x5d34))->sub_102ee1c0(*(int *)&f);
			(*(CUnknown102ee120 **)((char *)this + 0x5d34))->sub_102f2fe0(F(int, 0x6320));
		}
		sub_10273e80(0);
		return;
	case 0x34: case 0x35: case 0x36: case 0x37: case 0x3e: case 0x3f:
		if (!F(char, 0x1474)) {
			CNPC_VFrenzyShadow *e = (CNPC_VFrenzyShadow *)sub_1032e7b0();
			if (e && (e->vfunc360() & 0x18000)) {
				F(float, 0x5d9c) = gpGlobals->curtime;
				if (pEvt[0] != 0x37)
					e->vfunc372(0xf18, 1, 1);
				else
					e->vfunc372(0xf18, 1, 1);
				return;
			}
			F(const char *, 0x1b44) = SRCFILE;
			F(int, 0x1b48) = 0x1b5;
			vfunc448(0x1f);
			return;
		}
		break;
	case 0xae: {
		CNPC_VFrenzyShadow *t = (CNPC_VFrenzyShadow *)vfunc168();
		Vector *pv = 0;
		if (!t)
			t = g_106eb5d8.sub_100f8580(vfunc220(), 256.0f);
		if (t) {
			tmp = *t->vfunc220();
			pv = &tmp;
		}
		CGoalView *g = *(CGoalView **)((char *)this + 0x5d3c);
		if (g->sub_10306700(this, vfunc220(), pv, 256.0f)) {
			sub_10273e80(0);
			break;
		}
		F(const char *, 0x1b44) = SRCFILE;
		F(int, 0x1b48) = 0x1eb;
		vfunc448(0x20);
		break;
	}
	case 0xaf: {
		CNPC_VFrenzyShadow *t = (CNPC_VFrenzyShadow *)vfunc168();
		if (!t)
			t = g_106eb5d8.sub_100f8580(vfunc220(), 256.0f);
		if (t) {
			Vector *src = t->vfunc220();
			float x = src->x;
			float y = src->y;
			tmp.z = src->z;
			F(float, 0x645c) = x;
			F(float, 0x6460) = y;
			F(float, 0x6464) = tmp.z;
			sub_10273e80(0);
		} else {
			F(const char *, 0x1b44) = SRCFILE;
			F(int, 0x1b48) = 0x206;
			vfunc448(0x20);
		}
		break;
	}
	case 0x123: case 0x124: {
		int n = 0;
		int act = 0x13;
		float f = vfunc418(pEvt[1]);
		CNPC_VFrenzyShadow *t = (CNPC_VFrenzyShadow *)vfunc168();
		if (t) {
			Vector *pa = t->vfunc217();
			Vector *pb = vfunc217();
			VecLen(*pb - *pa);
		} else {
			F(const char *, 0x1b44) = SRCFILE;
			F(int, 0x1b48) = 0x25c;
			vfunc448(6);
			n = 1000;
		}
		if (f == -1.0f && sub_1032e7b0()) {
			sub_1032e7b0();
			sub_1032e7b0();
		}
		if (sub_10295460(0x13, 0) == -1) {
			act = 9;
			if (sub_10295460(act, 0) == -1) {
				F(const char *, 0x1b44) = SRCFILE;
				F(int, 0x1b48) = 0x26d;
				vfunc448(0x15);
				return;
			}
		}
		for (; n < 1; n++) {
			if (sub_102a1650(act, 0, F(int, 0x6330))) {
				F(int, 0x63ec) = 0;
				float fc = gpGlobals->curtime;
				F(float, 0x5db4) = fc + F(float, 0x6330);
				sub_10289ee0(act);
				return;
			}
		}
		if (n == 1000)
			return;
		F(const char *, 0x1b44) = SRCFILE;
		F(int, 0x1b48) = 0x28b;
		vfunc448(0xe);
		return;
	}
	case 0x14a: {
		CNPC_VFrenzyShadow *o = (CNPC_VFrenzyShadow *)vfunc97();
		if (o) {
			CNPC_VFrenzyShadow *q = *(CNPC_VFrenzyShadow **)((char *)o + 0xa8);
			if (q) {
				if (q->vfunc424(1)) {
					((char *)q)[0x1476] = 1;
					q->sub_1033f6d0();
					F(char, 0x6668) = 0;
					sub_10273e80(0);
					return;
				}
				F(char, 0x6668) = 1;
			}
		}
		sub_10273e80(0);
		return;
	}
	}
	sub_10013336(pEvt);
}
// END FUNCTION
