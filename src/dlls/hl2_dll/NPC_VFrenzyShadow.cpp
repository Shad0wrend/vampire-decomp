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
