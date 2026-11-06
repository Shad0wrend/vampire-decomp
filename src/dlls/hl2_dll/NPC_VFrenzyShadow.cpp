// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
