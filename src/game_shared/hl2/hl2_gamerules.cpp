// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 20 blocks
#include "vampire.h"

// FUNCTION: 0x10355770 size=0x6
#include "CHalfLife2.h"
namespace lifted {
extern char g_10572c30;
}
int CHalfLife2::vfunc25()
{
    return (int)&lifted::g_10572c30;
}
// END FUNCTION

// FUNCTION: 0x10355790 size=0x24
#include "CGameRules.h"
#include "CHalfLife2.h"

extern int vt_1047a40c[];
void sub_1000d189();

// TARGET: CHalfLife2::vfunc0
CGameRules *CHalfLife2::vfunc0(unsigned int flags)
{
    *(int **)this = vt_1047a40c;
    sub_1000d189();
    if (flags & 1) {
        delete this;
    }
    return (CGameRules *)this;
}
// END FUNCTION

// FUNCTION: 0x103557d0 size=0x5
#include "CHalfLife2.h"
bool CHalfLife2::vfunc41(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103557f0 size=0x3
#include "CHalfLife2.h"
void CHalfLife2::vfunc35(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10355810 size=0x24f
#include "CHalfLife2.h"
#include "CGameRules.h"
#include "CUnknown10427700.h"

void CHalfLife2::vfunc56()
{
	m_pAmmoDef = (CUnknown10427700 *)new CGameRulesSub;
	m_pAmmoDef->sub_10427790("MediumRound", 2, 1, "sk_plr_dmg_medium_round", "sk_npc_dmg_medium_round", "sk_max_medium_round");
	m_pAmmoDef->sub_10427790("FragGrenade", 0x40, 0, "sk_plr_dmg_grenade", "sk_npc_dmg_grenade", "sk_max_grenade");
	m_pAmmoDef->sub_10427790("AnacondaRound", 2, 1, "sk_plr_dmg_anaconda_round", "sk_npc_dmg_anaconda_round", "sk_max_anaconda_round");
	m_pAmmoDef->sub_10427790("CrossbowBolt", 2, 1, "sk_plr_dmg_crossbow_bolt", "sk_npc_dmg_crossbow_bolt", "sk_max_crossbow_bolt");
	m_pAmmoDef->sub_10427790("DesertEagle_Round", 2, 1, "sk_plr_dmg_deserteagle_round", "sk_npc_dmg_deserteagle_round", "sk_max_deserteagle_round");
	m_pAmmoDef->sub_10427790("Glock_17cRound", 2, 1, "sk_plr_dmg_glock_17c_round", "sk_npc_dmg_glock_17c_round", "sk_max_glock_17c_round");
	m_pAmmoDef->sub_10427790("Ithica_M37Round", 0x4000002, 1, "sk_plr_dmg_ithica_m37_round", "sk_npc_dmg_ithica_m37_round", "sk_max_ithica_m37_round");
	m_pAmmoDef->sub_10427790("Mac_10Round", 2, 1, "sk_plr_dmg_mac10_round", "sk_npc_dmg_mac10_round", "sk_max_mac10_round");
	m_pAmmoDef->sub_10427790("Remington_M_700Round", 0x2000002, 1, "sk_plr_dmg_remington_round", "sk_npc_dmg_remington_round", "sk_max_remington_round");
	m_pAmmoDef->sub_10427790("Steyr_AugRound", 0x2000002, 1, "sk_plr_dmg_steyr_round", "sk_npc_dmg_steyr_round", "sk_max_steyr_round");
	m_pAmmoDef->sub_10427790("Super_ShotgunRound", 0x4000002, 1, "sk_plr_dmg_supershotgun_round", "sk_npc_dmg_supershotgun_round", "sk_max_supershotgun_round");
	m_pAmmoDef->sub_10427790("UziRound", 2, 1, "sk_plr_dmg_uzi_round", "sk_npc_dmg_uzi_round", "sk_max_uzi_round");
	m_pAmmoDef->sub_10427790("FlameThrowerRound", 8, 1, "sk_plr_dmg_flamethrower_round", "sk_npc_dmg_flamethrower_round", "sk_max_flamethrower_round");
	m_pAmmoDef->sub_10427790("ThirtyeightRound", 2, 1, "sk_plr_dmg_thirtyeight_round", "sk_npc_dmg_thirtyeight_round", "sk_max_thirtyeight_round");
	m_pAmmoDef->sub_10427790("BloodRound", 0, 0, "sk_plr_dmg_bloodpack_round", "sk_npc_dmg_bloodpack_round", "sk_max_bloodpack_round");
	m_pAmmoDef->sub_10427790("BlueBloodRound", 0, 0, "sk_plr_dmg_bluebloodpack_round", "sk_npc_dmg_bluebloodpack_round", "sk_max_bluebloodpack_round");
	m_pAmmoDef->sub_10427790("VitaeRound", 0, 0, "sk_plr_dmg_eldervitaepack_round", "sk_npc_dmg_eldervitaepack_round", "sk_max_eldervitaepack_round");
}
// END FUNCTION

// FUNCTION: 0x10355b00 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10939058;
extern char g_1062772c[];
ServerClassReg g_10938a9c("CCorpse", &g_10939058, g_1062772c);
// END FUNCTION

// FUNCTION: 0x10355b70 size=0x6
#include "CCorpse.h"
namespace lifted {
extern char g_10938a9c;
}
int CCorpse::vfunc80()
{
    return (int)&lifted::g_10938a9c;
}
// END FUNCTION

// FUNCTION: 0x10355b90 size=0x3
#include "CCorpse.h"
int CCorpse::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10355bb0 size=0xa
#include "SendTable.h"
SendTable g_10939058;
// END FUNCTION

// FUNCTION: 0x10355c30 size=0x5
int sub_10355c70(void);
int g_10939054 = ((int (*)(int))sub_10355c70)(0);
// END FUNCTION

// FUNCTION: 0x10355c70 size=0x93
#include "SendTable.h"

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int extra, void *proxy);
SendProp sub_10246dc0(const char *pVarName, int offset, int pTable, void *proxy);
void sub_10009539();
extern int g_1054d524;
extern const char *g_10627738;
extern SendTable g_10939058;

int sub_10355c70()
{
	static SendProp s_Props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1054d524, (void *)sub_10009539),
		sub_10246af0("m_nReferencePlayer", 0x730, 4, 10, 1, 0, 0),
	};
	g_10939058.sub_10247240(&s_Props[1], 2, g_10627738);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10355d70 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_104a320c;
extern char g_10628024[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: bodyque
DLL_EXPORT GP *bodyque()
{
	GP *p = (GP *)sub_1000db89(0x734);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_104a320c;
	} else {
		p = 0;
	}
	p->name(g_10628024);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10355de0 size=0x6
#include "CCorpse.h"
int CCorpse::vfunc117()
{
    return -2147483648;
}
// END FUNCTION

// FUNCTION: 0x10355e00 size=0x4f
#include "CBaseEntity.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CBodyQueView {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t)
	virtual void z0(); virtual void z1();
	virtual void SetOwnerEntity(CBodyQueView *pOwner);
};

CBodyQueView *sub_10136580(const char *name);
extern CBodyQueView *g_10938738;

void sub_10355e00()
{
	g_10938738 = sub_10136580("bodyque");
	CBodyQueView *pEnt = g_10938738;
	for (int i = 0; i < 3; i++) {
		CBodyQueView *pNext = sub_10136580("bodyque");
		pEnt->SetOwnerEntity(pNext);
		pEnt = pNext;
	}
	pEnt->SetOwnerEntity(g_10938738);
}
// END FUNCTION

// FUNCTION: 0x10355e70 size=0x167
#include "CBaseAnimating.h"
#include "IVEngineServer.h"
#include "string_t.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CRagdollCopySlots
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7)
	virtual int v8();
	virtual string_t v9();
	virtual void v10(int index);
	PV(11) PV(12) PV(13) PV(14) PV(15) PV(16) PV(17) PV(18) PV(19)
	PV10(2) PV10(3) PV10(4) PV10(5)
	PV(60) PV(61) PV(62) PV(63)
	virtual void v64(const float *angles);
	PV(65) PV(66) PV(67) PV(68) PV(69)
	PV10(7) PV10(8)
	PV(90) PV(91) PV(92)
	virtual void v93(int moveType, int moveCollide);
	PV(94) PV(95) PV(96)
	virtual CRagdollCopySlots *v97();
	PV(98) PV(99)
	PV100(1)
	PV10(20)
	PV(210) PV(211)
	virtual void v212(const char *name);
	PV(213) PV(214) PV(215) PV(216) PV(217) PV(218) PV(219)
	virtual float *v220();
	virtual float *v221();
};

struct CRagdollCopyFields
{
	char m_pad0000[0x168];
	int m_n168;
	char m_pad016c[0x174 - 0x16c];
	int m_n174;
	char m_pad0178[0x19c - 0x178];
	unsigned int m_flags19c;
	char m_pad01a0[0x2e0 - 0x1a0];
	int m_pEdict;
	char m_pad02e4[0x5a4 - 0x2e4];
	int m_n5a4;
	char m_pad05a8[0x688 - 0x5a8];
	int m_n688;
	int m_n68c;
	char m_pad0690[0x6f0 - 0x690];
	int m_n6f0;
	char m_pad06f4[0x6f8 - 0x6f4];
	int m_n6f8;
	char m_pad06fc[0x730 - 0x6fc];
	int m_n730;
};

struct CRagdollCopyColl
{
	virtual void v0();
	virtual const float *vfunc1();
	virtual const float *vfunc2();
};

struct CRagdollCopyUnit : CBaseAnimating
{
	void sub_10090180(int a, int b, int c);
};

void sub_100043cc(CRagdollCopyUnit *pEnt, float *pOrigin, int a);
void sub_10011432(CRagdollCopyUnit *pEnt, const float *pMins, const float *pMaxs);
extern CRagdollCopyUnit *g_10938738;
extern IVEngineServer *g_1070b22c;

// TARGET: sub_10355e70
CRagdollCopyUnit *sub_10355e70(CRagdollCopyUnit *pSrc, int a, int b)
{
	CRagdollCopyFields *pSrcF = (CRagdollCopyFields *)pSrc;
	if (pSrcF->m_flags19c & 0x40)
		return 0;
	CRagdollCopyUnit *pDst = g_10938738;
	if (!pDst)
		return 0;
	CRagdollCopySlots *s = (CRagdollCopySlots *)pSrc;
	CRagdollCopySlots *d = (CRagdollCopySlots *)pDst;
	CRagdollCopyFields *pDstF = (CRagdollCopyFields *)pDst;
	d->v64(s->v221());
	d->v212(s->v9().pszValue);
	d->v10(s->v8());
	pDstF->m_n6f8 = pSrcF->m_n6f8;
	pDstF->m_n688 = pSrcF->m_n688;
	pDstF->m_n68c = pSrcF->m_n68c;
	d->v93(6, 0);
	pDst->sub_100b37a0();
	int edict = pSrcF->m_pEdict;
	pDstF->m_n730 = g_1070b22c->vfunc35(edict);
	pDstF->m_flags19c = pSrcF->m_flags19c | 0x10;
	pDstF->m_n6f0 = pSrcF->m_n6f0;
	int n174 = pSrcF->m_n174;
	pDstF->m_n174 = n174;
	if (((CBaseAnimating *)pSrcF)->sub_1008f7b0("ragdoll") > -1)
		pDst->sub_10090180(a, b, 0);
	pDstF->m_n168 = pSrcF->m_n168;
	pDstF->m_n5a4 = pSrcF->m_n5a4;
	sub_100043cc(pDst, s->v220(), 0);
	CRagdollCopyColl *pColl = (CRagdollCopyColl *)((char *)pSrcF + 0x270);
	const float *pMins = pColl->vfunc1();
	const float *pMaxs = pColl->vfunc2();
	sub_10011432(pDst, pMins, pMaxs);
	g_10938738 = (CRagdollCopyUnit *)d->v97();
	return pDst;
}
// END FUNCTION

// FUNCTION: 0x10356040 size=0x2b
class CUnk10938738 {
public:
	virtual void vfn0(); virtual void vfn1(); virtual void vfn2(); virtual void vfn3(); virtual void vfn4();
	virtual void vfn5(); virtual void vfn6(); virtual void vfn7(); virtual void vfn8(); virtual void vfn9();
	virtual void vfn10(); virtual void vfn11(); virtual void vfn12(); virtual void vfn13(); virtual void vfn14();
	virtual void vfn15(); virtual void vfn16(); virtual void vfn17(); virtual void vfn18(); virtual void vfn19();
	virtual void vfn20(); virtual void vfn21(); virtual void vfn22(); virtual void vfn23(); virtual void vfn24();
	virtual void vfn25(); virtual void vfn26(); virtual void vfn27(); virtual void vfn28(); virtual void vfn29();
	virtual void vfn30(); virtual void vfn31(); virtual void vfn32(); virtual void vfn33(); virtual void vfn34();
	virtual void vfn35(); virtual void vfn36(); virtual void vfn37(); virtual void vfn38(); virtual void vfn39();
	virtual void vfn40(); virtual void vfn41(); virtual void vfn42(); virtual void vfn43(); virtual void vfn44();
	virtual void vfn45(); virtual void vfn46(); virtual void vfn47(); virtual void vfn48(); virtual void vfn49();
	virtual void vfn50(); virtual void vfn51(); virtual void vfn52(); virtual void vfn53(); virtual void vfn54();
	virtual void vfn55(); virtual void vfn56(); virtual void vfn57(); virtual void vfn58(); virtual void vfn59();
	virtual void vfn60(); virtual void vfn61(); virtual void vfn62(); virtual void vfn63(); virtual void vfn64();
	virtual void vfn65(); virtual void vfn66(); virtual void vfn67(); virtual void vfn68(); virtual void vfn69();
	virtual void vfn70(); virtual void vfn71(); virtual void vfn72(); virtual void vfn73(); virtual void vfn74();
	virtual void vfn75(); virtual void vfn76(); virtual void vfn77(); virtual void vfn78(); virtual void vfn79();
	virtual void vfn80(); virtual void vfn81(); virtual void vfn82(); virtual void vfn83(); virtual void vfn84();
	virtual void vfn85(); virtual void vfn86(); virtual void vfn87(); virtual void vfn88(); virtual void vfn89();
	virtual void vfn90(); virtual void vfn91(); virtual void vfn92(); virtual void vfn93(); virtual void vfn94();
	virtual void vfn95(); virtual void vfn96();
	virtual CUnk10938738 *vfn97();
	char pad[0x730 - 4];
	int field730;
};
extern CUnk10938738 *g_10938738;

// TARGET: sub_10356040
void sub_10356040()
{
    CUnk10938738 *first = g_10938738;
    CUnk10938738 *p = first;
    if (!p) return;
    do {
        p->field730 = 0;
        p = p->vfn97();
    } while (p != first && p);
}
// END FUNCTION

// FUNCTION: 0x10356080 size=0x1
#include "CHalfLife2.h"
void CHalfLife2::vfunc57()
{
}
// END FUNCTION

// FUNCTION: 0x103560a0 size=0x134
#include "CHalfLife2.h"
extern char g_1062820c[];
extern char g_106281fc[];
extern char g_106281e0[];
extern char g_106281c8[];
extern char g_106281b0[];
extern char g_1062819c[];
extern char g_1062818c[];
extern char g_10628170[];
extern char g_10628160[];
extern char g_10628140[];
extern char g_10628130[];
extern char g_10628120[];
extern char g_10628104[];
extern char g_106280f4[];
extern char g_106280e0[];
extern char g_106280cc[];
extern char g_106280bc[];
extern char g_106280ac[];
extern char g_10628098[];
extern char g_10628088[];
extern char g_10628074[];
extern char g_10628064[];
extern char g_1062803c[];
const char *CHalfLife2::vfunc58(int classify)
{
    switch (classify) {
    case 0: return g_1062820c;
    case 1: return g_106281fc;
    case 2: return g_106281e0;
    case 3: return g_106281c8;
    case 4: return g_106281b0;
    case 5: return g_1062819c;
    case 6: return g_1062818c;
    case 7: return g_10628170;
    case 8: return g_10628160;
    case 10: return g_10628140;
    case 11: return g_10628130;
    case 14: return g_10628120;
    case 15: return g_10628104;
    case 16: return g_106280f4;
    case 18: return g_106280e0;
    case 19: return g_106280cc;
    case 20: return g_106280bc;
    case 21: return g_106280ac;
    case 22: return g_10628098;
    case 23: return g_10628088;
    case 24: return g_10628074;
    case 25: return g_10628064;
    default: return g_1062803c;
    }
}
// END FUNCTION

// FUNCTION: 0x10356230 size=0xb
#include "CHalfLife2.h"

struct CHL2VFunc0Obj
{
	virtual void vfunc0();
};

int sub_1042c0a0();

void CHalfLife2::vfunc77()
{
	((CHL2VFunc0Obj *)sub_1042c0a0())->vfunc0();
}
// END FUNCTION

// FUNCTION: 0x10356250 size=0x3
#include "CHalfLife2.h"
void CHalfLife2::vfunc36(int a0)
{
}
// END FUNCTION
