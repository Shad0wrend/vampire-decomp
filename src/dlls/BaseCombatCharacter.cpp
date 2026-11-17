// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10330d00 size=0x704
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPCTroika.h"
#include "CPASFilter.h"
#include "CPVSFilter.h"
#include "CTakeDamageInfo.h"
#include "CUnknown101c2770.h"
#include "CVDmg_t.h"
#include "CUtlVector76.h"
#include "CEntityVSlots.h"
#include "engineiface.h"
#include "engineserver.h"

extern void *g_10540528;
void __cdecl sub_1034a170(void *pDest, void *pSrc);
extern int (*g_109f3868)(int lo, int hi);

struct CBccSlots
{
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
	virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39();
	virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47(); virtual void d48(); virtual void d49();
	virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53(); virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
	virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65(); virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69();
	virtual void d70(); virtual void d71(); virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77(); virtual void d78(); virtual void d79();
	virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83(); virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
	virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95(); virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99();
	virtual void d100(); virtual void d101(); virtual void d102(); virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107(); virtual void d108(); virtual void d109();
	virtual void d110(); virtual void d111(); virtual void d112(); virtual void d113(); virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118(); virtual void d119();
	virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124(); virtual void d125(); virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129();
	virtual void d130(); virtual void d131(); virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136(); virtual void d137(); virtual void d138(); virtual void d139();
	virtual void d140(); virtual void d141(); virtual void d142(); virtual void d143(); virtual void d144(); virtual void d145(); virtual void d146(); virtual void d147(); virtual void d148(); virtual void d149();
	virtual void d150(); virtual void d151(); virtual void d152(); virtual void d153(); virtual void d154(); virtual void d155(); virtual void d156(); virtual void d157(); virtual void d158(); virtual void d159();
	virtual void d160(); virtual void d161(); virtual void d162(); virtual void d163(); virtual void d164(); virtual void d165(); virtual void d166(); virtual void d167(); virtual void d168(); virtual void d169();
	virtual void slot170(const Vector *pVec); virtual void d171(); virtual void d172(); virtual void d173(); virtual void d174(); virtual void d175(); virtual void d176(); virtual void d177(); virtual void d178(); virtual void d179();
	virtual void d180(); virtual void d181(); virtual void d182(); virtual void d183(); virtual void d184(); virtual void d185(); virtual void d186(); virtual void d187(); virtual void d188(); virtual void d189();
	virtual void d190(); virtual void d191(); virtual Vector slot192(); virtual void d193(); virtual void d194(); virtual void d195(); virtual void d196(); virtual void d197(); virtual void d198(); virtual void d199();
	virtual void d200(); virtual void d201(); virtual void d202(); virtual void d203(); virtual void d204(); virtual void d205(); virtual void d206(); virtual void d207(); virtual void d208(); virtual void d209();
	virtual void d210(); virtual void d211(); virtual void d212(); virtual void d213(); virtual void d214(); virtual void d215(); virtual void d216(); virtual void d217(); virtual void d218(); virtual void d219();
	virtual void d220(); virtual void d221(); virtual void d222(); virtual void d223(); virtual void d224(); virtual void d225(); virtual void d226(); virtual void d227(); virtual void d228(); virtual void d229();
	virtual void d230(); virtual void d231(); virtual void d232(); virtual void d233(); virtual void d234(); virtual void d235(); virtual void d236(); virtual void d237(); virtual void d238(); virtual void d239();
	virtual void d240(); virtual void d241(); virtual void d242(); virtual void d243(); virtual void d244(); virtual void d245(); virtual void d246(); virtual void d247(); virtual void d248(); virtual void d249();
	virtual void d250(); virtual void d251(); virtual void d252(); virtual void d253(); virtual void d254(); virtual void d255(); virtual void d256(); virtual void d257(); virtual void d258(); virtual void d259();
	virtual void d260(); virtual void d261(); virtual void d262(); virtual void d263(); virtual void d264(); virtual void d265(); virtual void d266(); virtual void d267(); virtual void d268(); virtual void d269();
	virtual void d270(); virtual void d271(); virtual void d272(); virtual void d273(); virtual void d274(); virtual void d275(); virtual void d276(); virtual void d277(); virtual void d278(); virtual void d279();
	virtual void d280(); virtual void d281(); virtual void d282(); virtual void d283(); virtual void d284(); virtual void d285(); virtual void d286(); virtual void d287(); virtual void d288(); virtual void d289();
	virtual void d290(); virtual void d291(); virtual void d292(); virtual void d293(); virtual void d294(); virtual void d295(); virtual void d296(); virtual void d297(); virtual void d298(); virtual void d299();
	virtual void d300(); virtual void d301(); virtual void d302(); virtual void d303(); virtual void d304(); virtual void d305(); virtual void d306(); virtual void d307(); virtual void d308(); virtual void d309();
	virtual void d310(); virtual void d311(); virtual void d312(); virtual void d313(); virtual void d314(); virtual void d315(); virtual void d316(); virtual void d317(); virtual void d318(); virtual void d319();
	virtual void d320(); virtual void d321(); virtual void d322(); virtual void d323(); virtual void d324(); virtual void d325(); virtual void d326(); virtual void d327(); virtual void d328(); virtual void d329();
	virtual void d330(); virtual void d331(); virtual void d332(); virtual void d333(); virtual void d334(); virtual void d335(); virtual void d336(); virtual void d337(); virtual void d338(); virtual void d339();
	virtual void d340(); virtual void d341(); virtual void d342(); virtual void d343(); virtual void d344(); virtual void d345(); virtual void d346(); virtual void d347(); virtual void d348(); virtual void d349();
	virtual void d350(); virtual void d351(); virtual void d352(); virtual void d353(); virtual void d354(); virtual void d355(); virtual void d356(); virtual void d357(); virtual void d358(); virtual void d359();
	virtual void d360(); virtual void d361(); virtual void d362(); virtual void d363(); virtual void d364(); virtual void d365(); virtual void d366(); virtual void d367(); virtual Vector c368(); virtual void d369();
	virtual void d370(); virtual void d371(); virtual void d372(); virtual void d373(); virtual void d374(); virtual void d375(); virtual void d376(); virtual void d377(); virtual void d378(); virtual void d379();
	virtual void d380(); virtual void d381(); virtual void d382(); virtual void d383(); virtual void d384(); virtual void d385(); virtual void d386(); virtual void d387(); virtual void d388(); virtual void d389();
	virtual void d390(); virtual void d391(); virtual void d392(); virtual void d393(); virtual void d394(); virtual void d395(); virtual void d396(); virtual void d397(); virtual void d398(); virtual void d399();
	virtual void d400(); virtual void d401(); virtual void d402(); virtual void d403(); virtual void d404(); virtual void d405(); virtual void d406(); virtual void d407(); virtual void d408(); virtual void d409();
	virtual void d410(); virtual void d411(); virtual void d412(); virtual void d413(); virtual void d414(); virtual void d415(); virtual void d416(); virtual void d417(); virtual void d418(); virtual void d419();
	virtual void d420(); virtual void d421(); virtual void d422(); virtual void d423(); virtual void d424(); virtual void d425(); virtual void d426(); virtual void d427(); virtual void d428(); virtual void d429();
	virtual void d430(); virtual void d431(); virtual void d432(); virtual void d433(); virtual void d434(); virtual void d435(); virtual void d436(); virtual void d437(); virtual void d438(); virtual void d439();
	virtual void d440(); virtual void d441(); virtual void d442(); virtual void d443(); virtual void d444(); virtual void d445(); virtual void d446(); virtual void d447(); virtual void d448(); virtual void d449();
	virtual void d450(); virtual void d451(); virtual void d452(); virtual void d453(); virtual void d454(); virtual void d455(); virtual void d456(); virtual void d457(); virtual void d458(); virtual void d459();
	virtual void d460(); virtual void d461(); virtual void d462(); virtual void d463(); virtual void d464(); virtual void d465(); virtual void d466(); virtual void d467(); virtual void d468(); virtual void d469();
	virtual void d470(); virtual void d471(); virtual void d472(); virtual void d473(); virtual void d474(); virtual void d475(); virtual void d476(); virtual void d477(); virtual void d478(); virtual void d479();
	virtual void d480(); virtual void d481(); virtual void d482(); virtual void d483(); virtual void d484(); virtual void d485(); virtual void d486(); virtual void d487(); virtual void d488(); virtual void d489();
	virtual void d490(); virtual void d491(); virtual void d492(); virtual void d493(); virtual void d494(); virtual void d495(); virtual void d496(); virtual void d497(); virtual void d498(); virtual void d499();
	virtual void d500(); virtual void d501(); virtual void d502(); virtual void d503(); virtual void d504(); virtual void d505(); virtual void d506(); virtual void d507(); virtual void d508(); virtual void d509();
	virtual void d510(); virtual void d511(); virtual void d512(); virtual void d513(); virtual void d514(); virtual void d515(); virtual void d516(); virtual void d517(); virtual void d518(); virtual void d519();
	virtual void d520(); virtual void d521(); virtual void d522(); virtual void d523(); virtual void d524(); virtual void d525(); virtual void d526(); virtual void d527(); virtual void d528(); virtual void d529();
	virtual void d530(); virtual void d531(); virtual void d532(); virtual void d533(); virtual void d534(); virtual void d535(); virtual void d536(); virtual void d537(); virtual void d538(); virtual void d539();
	virtual void d540(); virtual void d541(); virtual void d542(); virtual void d543(); virtual void d544(); virtual void d545(); virtual void d546(); virtual void d547(); virtual void d548(); virtual void d549();
	virtual void d550(); virtual void d551(); virtual void d552(); virtual void d553(); virtual void d554(); virtual void d555(); virtual void d556(); virtual void d557(); virtual void d558(); virtual void d559();
	virtual void d560(); virtual void d561(); virtual void d562(); virtual void d563(); virtual void d564(); virtual void d565(); virtual void d566(); virtual void d567(); virtual void d568(); virtual void d569();
	virtual void d570(); virtual void d571(); virtual void d572(); virtual void d573(); virtual void d574(); virtual void d575(); virtual void d576(); virtual void d577(); virtual void d578(); virtual void d579();
	virtual void d580(); virtual void d581(); virtual void d582(); virtual void d583(); virtual void d584(); virtual void d585(); virtual void d586(); virtual void d587(); virtual void d588(); virtual void d589();
	virtual void d590(); virtual void d591(); virtual void d592(); virtual void d593(); virtual void d594(); virtual void d595(); virtual void d596(); virtual void d597(); virtual void d598(); virtual void d599();
	virtual void d600(); virtual void d601(); virtual void d602(); virtual void d603(); virtual void d604(); virtual void d605(); virtual void d606(); virtual void d607(); virtual void d608(); virtual void d609();
	virtual void d610(); virtual void d611(); virtual void d612(); virtual void d613(); virtual void d614(); virtual char slot615();
};
struct CTempEntsView
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(IRecipientFilter *pFilter, float delay, CBaseEntity *pEnt, int a, int b, const char *pszName);
	virtual void vfunc4(IRecipientFilter *pFilter, float delay, void *pEnt, int a, int b, const char *pszName);
};

struct CBBoxView
{
	int m_bone;
	int m_pad[7];
};

struct CHitboxSetView
{
	int m_sznameindex;
	int m_numhitboxes;
	int m_hitboxindex;
	CBBoxView *pHitbox(int i) const { return (CBBoxView *)(((char *)this) + m_hitboxindex) + i; }
};

struct CStudioHdrView
{
	char m_pad00[0xf0];
	int m_numbones;		// 0xf0
	int m_boneindex;	// 0xf4
	char m_padf8[0x100 - 0xf8];
	int m_numhitboxsets;	// 0x100
	int m_hitboxsetindex;	// 0x104
	CHitboxSetView *pHitboxSet(int i) const { return (CHitboxSetView *)(((char *)this) + m_hitboxsetindex) + i; }
	CBBoxView *pHitbox(int i, int set) const { CHitboxSetView const *s = pHitboxSet(set); if (!s) return 0; return s->pHitbox(i); }
	int iHitboxCount(int set) const { CHitboxSetView const *s = pHitboxSet(set); return s->m_numhitboxes; }
};

struct CBoneView
{
	int m_sznameindex;
	int m_parent;
	int m_pad[0x26];
};

struct CDmgNPCView
{
	void sub_10344f80(const Vector *pDir, int a, int b);
};

inline int DamageTypeOf(CTakeDamageInfo *pInfo)
{
	return pInfo->m_pVDmg00 ? (pInfo->m_pVDmg00->m_field10 | pInfo->m_nFlags38) : pInfo->m_nFlags38;
}

inline float DamageOf(CTakeDamageInfo *pInfo)
{
	float f;
	if (pInfo->m_pVDmg00)
		f = pInfo->m_pVDmg00->sub_101faa70();
	else
		f = pInfo->m_flDamage;
	return f;
}

inline float ApplyDmg(CVDmg_t *pDmg, int idx, CTakeDamageInfo *pInfo)
{
	return (float)pDmg->sub_101fb200(idx, pInfo->sub_101c29b0());
}

inline void SetDamage(CTakeDamageInfo *p, float f) { p->m_flDamage = f; }
inline float GetDamage(CTakeDamageInfo *p) { return p->m_flDamage; }
struct EntIdx : CBaseEntity { int edict() { return m_pEdict2e0; } int entindex() { return engine->vfunc35(edict()); } };
inline CAI_BaseNPCTroika *MyNPC(CBaseCombatCharacter *p) { return p->m_pNPC98; }
inline void *MyPlayer(CBaseCombatCharacter *p) { return p->m_pA8; }
inline void ApplyImpulse(CBccSlots *pEnt, Vector v)
{
	pEnt->slot170(&v);
}

void CBaseCombatCharacter::vfunc299(void *pInfoArg, char *pbOut)
{
	CTakeDamageInfo *pInfo = (CTakeDamageInfo *)pInfoArg;
	CBccSlots *pThis = (CBccSlots *)this;

	ScopeTrace scope("CBaseCombatCharacter::CreateDamageEffects", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (!m_b1480)
		return;

	CPASFilter pasFilter(pThis->slot192());
	CPVSFilter pvsFilter(pThis->slot192());

	CAI_BaseNPCTroika *pNPC = MyNPC(this);
	void *pPlayer = MyPlayer(this);
	CStudioHdrView *pStudioHdr = (CStudioHdrView *)sub_100952d0(-1);

	if (!pStudioHdr || (!pPlayer && !pNPC))
		return;

	*pbOut = 0;
	int hitbox = pInfo->sub_101c2a30();
	int bone;
	if (pStudioHdr->m_numhitboxsets > 0 && hitbox < pStudioHdr->iHitboxCount(0))
	{
		if (hitbox <= 0)
			goto lookup;
		bone = pStudioHdr->pHitbox(hitbox, 0)->m_bone;
	}
	else
	{
		if (pNPC) { hitbox = -1; goto lookup2; }
		hitbox = -1;
	lookup:
	lookup2:
		bone = sub_10092550((int)"bip01 spine2");
	}

	const char *pszSound = 0;
	int pitch = g_109f3868(0x5a, 0x6e);

	if ((DamageTypeOf(pInfo) & 8) && hitbox > 0 && (pPlayer || (pNPC && ((CBccSlots *)pNPC)->slot615())))
	{
		while (bone > 0 && bone < pStudioHdr->m_numbones && bone != m_nHeadBone1080)
		{
			int nHitbox = ((CBaseAnimating *)this)->sub_10097000(bone);
			float flScale = enginerandom->vfunc1(4.0f, 5.5f);
			sub_1032f770(nHitbox, flScale, 1.0f);
			bone = ((CBoneView *)((char *)pStudioHdr + pStudioHdr->m_boneindex) + bone)->m_parent;
		}
		pszSound = "environmental/fire/fire_hit.wav";
		if (pNPC && ((CBccSlots *)pNPC)->slot615())
		{
			CTakeDamageInfo infoCopy;
			((CUnknown101c2770 *)&infoCopy)->sub_101c2690();
			infoCopy = *pInfo;
			{ float flDmg; if (infoCopy.m_pVDmg00) flDmg = ApplyDmg(infoCopy.m_pVDmg00, ((EntIdx *)this)->entindex(), pInfo); else flDmg = infoCopy.m_flDamage; infoCopy.m_flDamage = flDmg; }
			infoCopy.m_pVDmg00 = 0;
			infoCopy.sub_101c2a10(-1);

			CUtlVector76 *pVec = (CUtlVector76 *)((char *)pNPC + 0x65a8);
			int count = pVec->m_size;
			pVec->sub_1034a030(1);
			pVec->sub_1034a100(count, 1);
			sub_1034a170(pVec->m_pMemory + count * 76, &infoCopy);
			pNPC->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\BaseCombatCharacter.cpp";
			pNPC->m_nLine1b34 = 0x18c7;
			pNPC->sub_102ae750(0x151, 0);
			*pbOut = 1;
		}
	}

	if (DamageTypeOf(pInfo) & 0x10)
	{
		((CTempEntsView *)g_10540528)->vfunc3(&pvsFilter, 0, this, 1, -1, "DMGFX_body_freeze_emitter");
		if (pPlayer)
			((CTempEntsView *)g_10540528)->vfunc4(&pvsFilter, 0, pPlayer, 0xe, 0, "DMGFX_hud_freeze_emitter");
		pszSound = "interface/stealth_discovered.wav";
	}

	if (DamageTypeOf(pInfo) & 0x100)
	{
		((CTempEntsView *)g_10540528)->vfunc3(&pvsFilter, 0, this, 1, -1, "DMGFX_body_shock_emitter");
		if (pPlayer)
			((CTempEntsView *)g_10540528)->vfunc4(&pvsFilter, 0, pPlayer, 0xe, 0, "DMGFX_hud_shock_emitter");
		pszSound = "disciplines/potence/melee_hit.wav";
	}

	if (DamageTypeOf(pInfo) & 0x40)
	{
		Vector vecDir;
		Vector vecCenter = pThis->slot192();
		if (pInfo->m_pAttacker)
			vecDir = vecCenter - ((CBccSlots *)pInfo->m_pAttacker)->slot192();
		else if (pInfo->m_pInflictor)
			vecDir = vecCenter - ((CBccSlots *)pInfo->m_pInflictor)->slot192();
		else
			vecDir = pThis->c368() * -1.0f;
		VectorNormalize(vecDir);
		if (MyNPC(this))
			((CDmgNPCView *)this)->sub_10344f80(&vecDir, 2, 1);
		else if (MyPlayer(this))
		{
			float flForce = (DamageOf(pInfo) * 50.0 > 1000.0) ? 1000.0 : ((DamageOf(pInfo) * 50.0 < 200.0) ? 200.0 : DamageOf(pInfo) * 50.0);
			Vector vecForce;
			vecForce = vecDir * flForce;
			vecForce.z *= 3.0f;
			ApplyImpulse(pThis, vecForce);
		}
	}

	if (pszSound)
	{
		int pEdict = (int)m_pEdict2e0;
		enginesound->vfunc2(&pasFilter, engine->vfunc35(pEdict), 0, pszSound, 1.0f, 0x4b, 0, pitch, 0, 0, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1033a9e0 size=0x5af
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include <stdio.h>
#include <stdlib.h>
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
struct CFoo1005f190 { int sub_1005f190(); };
extern CFoo1005f190 g_10937030;
void sub_10265680(int);
char sub_10265800();
CBaseEntity *sub_1023bd00();
const char *sub_101d3730(const char *fmt, ...);
struct CFeedFwd { void sub_10293e20(float); };
struct CFeedA8 { void sub_1017e150(int, float, const char *); };

namespace block_1033a9e0 {
struct CUnknown100290c0 : EHandleEntityList
{
	IHandleEntity *sub_100290c0(const CBaseHandle &handle) const;
};
IHandleEntity *CUnknown100290c0::sub_100290c0(const CBaseHandle &handle) const
{
	unsigned int i = handle.m_Index;
	if (i == 0xffffffff)
		return 0;
	const EHandleEntInfo *pInfo = &m_EntPtrArray[i & 0x1fff];
	if ((unsigned int)pInfo->m_SerialNumber == (i >> (m_EntPtrArray[0].m_pad & 31)))
		return pInfo->m_pEntity;
	else
		return 0;
}
}
using namespace block_1033a9e0;
inline CBaseCombatCharacter *LK(const CBaseHandle &h) { return (CBaseCombatCharacter *)((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(h); }

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CFeedNpc
{
	V100(a) V100(b) V100(c) V100(d)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
	virtual int slot404(void *pOther);
	V100(f) V100(g) virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8();
	virtual void slot614();
	char m_pad[0x1b30 - 4];
	const char *m_pszFile1b30;
	int m_nLine1b34;
	void sub_102ae750(int a, int b);
};
struct CFeedChar : CBaseCombatCharacter
{
	char sub_10337f30();
	void sub_103394a0(int a, bool b, bool c);
	void sub_103392c0(CBaseCombatCharacter *p, bool b, bool c);
	CBaseCombatCharacter *GetGrappleTarget() { if (m_nTarget153c != -1) return (CBaseCombatCharacter *)m_hTarget1538.Get(); return 0; }
	bool IsGrappling(int mode) { return m_hTarget1538.Get() && m_nTarget153c != -1 && m_nTargetMode1540 == mode; }
};

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}
inline bool ModeIs(CBaseEntity *p, int m) { return *(int *)((char *)p + 0x49c) == m; }
struct CFeedSelf : CBaseCombatCharacter { void sub_1033a9e0(); };

// TARGET: CFeedSelf::sub_1033a9e0
void CFeedSelf::sub_1033a9e0()
{
	ScopeTrace trace("CBaseCombatCharacter::FeedInterrupt", this ? STRINGR_F(m_name26c) : g_105387dc);
	if (g_10937030.sub_1005f190()) {
		char buf[256];
		sprintf(buf, "%s FeedInterrupt with %s", (const char *)sub_100ab4f0(), LK(m_h149c) ? (const char *)LK(m_h149c)->sub_100ab4f0() : "**NULL**");
		sub_103221b0(buf);
	}
	if (m_b14a9)
		return;
	m_b14a9 = 1;
	m_b14a8 = 0;
	m_bCantBreakGrapple = 0;
	m_bIsFrenzyGrapple = 0;
	m_flBreakGrappleTimer = 0;
	EHANDLE *pFeed = &m_h149c;
	if (LK(*pFeed)) {
		EHANDLE *pGrab = &m_hTarget1538;
		if (!(LK(*pGrab) && m_nTarget153c != -1 && m_nTargetMode1540 == 8)) {
			sub_1033b100(7);
			sub_1033b100(3);
			if (FindStatList(CVStatListSet::Of(LK(*pFeed)), 0)->sub_102012d0(0xc) > 0) {
				CFeedNpc *pNpc = *(CFeedNpc **)((char *)LK(*pFeed) + 0x98);
				if (pNpc && pNpc->slot404(this) != 1) {
					pNpc->slot614();
					pNpc->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\BaseCombatCharacter.cpp";
					pNpc->m_nLine1b34 = 0x24c6;
					pNpc->sub_102ae750(0xfb, 0);
				}
			} else {
				bool a = false;
				bool b = false;
				CBaseEntity *pPl = sub_1023bd00();
				if (pPl && *(int *)((char *)pPl + 0x49c) == 2 && LK(*pGrab) && m_nTarget153c != -1) {
					int m = m_nTargetMode1540;
					if (m == 2) a = true;
					if (m == 2) b = true;
				}
				if (((CFeedChar *)pFeed->Get())->sub_10337f30())
					((CFeedChar *)pFeed->Get())->sub_103394a0(1, a, b);
				else
					((CFeedChar *)pFeed->Get())->sub_103392c0(this, a, b);
			}
			sub_1033b100(3);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(9);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(5);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(1);
		}
		((CBaseCombatCharacter *)pFeed->Get())->c355();
		*pFeed = 0;
		if (*(int *)((char *)this + 0xa8) && !sub_10265800())
			sub_10265680(1);
	} else {
		CFeedChar *self = (CFeedChar *)this;
		if (self->GetGrappleTarget() && !self->IsGrappling(8) && !self->IsGrappling(2)) {
			CFeedA8 *pA8 = *(CFeedA8 **)((char *)this + 0xa8);
			if (pA8) {
				CFeedFwd *pF = *(CFeedFwd **)((char *)self->GetGrappleTarget() + 0x98);
				if (pF)
					pF->sub_10293e20(3.0f);
				pA8->sub_1017e150(1, 2.0f, sub_101d3730("FeedInterrupt %s", self->GetGrappleTarget()->sub_100ab4f0()));
			}
		}
	}
	m_flFeedInterval1494 = 0;
	m_b14a9 = 0;
}
// END FUNCTION
