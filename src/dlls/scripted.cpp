// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x101a7500 size=0x2d
#include "CCineNPC.h"

extern char g_106b8540[];
extern void (*g_109f3650)(int level, const char *pszFormat, ...);
void sub_101a7170(CCineNPC *pNpc);

// TARGET: CCineNPC::sub_101a7500
void CCineNPC::sub_101a7500(int unused)
{
	const char *pszName = m_pszScript5f48;
	if (pszName == 0) {
		pszName = g_106b8540;
	}
	g_109f3650(2, "InputCancelScript: Cancelling script '%s'\n", pszName);
	sub_101a7170(this);
}
// END FUNCTION

// FUNCTION: 0x101a7540 size=0x2a
struct CUnit101a7540 {
    int sub_101a7540();
};

int CUnit101a7540::sub_101a7540()
{
    int nCount = *(int *)((char *)this + 0x5f70);
    if (nCount <= 0) {
        if (gpGlobals->curtime >= *(float *)((char *)this + 0x5f74)) {
            return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a7580 size=0x3
// TARGET: sub_101a7580
void __stdcall sub_101a7580(int a) {
}
// END FUNCTION

// FUNCTION: 0x101a75a0 size=0x3
// TARGET: sub_101a75a0
void __stdcall sub_101a75a0(int a) {
}
// END FUNCTION

// FUNCTION: 0x101a75c0 size=0xf
namespace lifted {
extern char g_10015b68;
int __stdcall sub_10007fe5(int, int, int);
}
int sub_101a75c0()
{
    return lifted::sub_10007fe5((int)&lifted::g_10015b68, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101a75e0 size=0x1
void sub_101a75e0()
{
}
// END FUNCTION

// FUNCTION: 0x101a7600 size=0x110
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCineNPC.h"
#include "CCineNPCSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern void (__cdecl *g_109f3628)(const char *fmt, ...);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }


struct SeqV
{
	CCS_V100(a) CCS_V100(b)
	CCS_V10(c0) CCS_V10(c1)
	virtual const Vector &slot220();
	CCS_V(c221) CCS_V(c222) CCS_V(c223) CCS_V(c224) CCS_V(c225) CCS_V(c226) CCS_V(c227) CCS_V(c228) CCS_V(c229)
	CCS_V10(c3) CCS_V10(c4) CCS_V10(c5) CCS_V10(c6) CCS_V10(c7) CCS_V10(c8) CCS_V10(c9)
	CCS_V100(d)
	CCS_V10(e0) CCS_V10(e1) CCS_V10(e2) CCS_V10(e3) CCS_V10(e4) CCS_V10(e5) CCS_V10(e6) CCS_V10(e7)
	CCS_V(e480) CCS_V(e481)
	virtual int CanPlaySequence(bool a, int b);
	CCS_V(e483) CCS_V(e484) CCS_V(e485) CCS_V(e486) CCS_V(e487) CCS_V(e488) CCS_V(e489)
	CCS_V10(g49) CCS_V10(g50) CCS_V10(g51) CCS_V10(g52) CCS_V10(g53) CCS_V10(g54) CCS_V10(g55) CCS_V10(g56) CCS_V10(g57)
	CCS_V(g580) CCS_V(g581) CCS_V(g582) CCS_V(g583) CCS_V(g584)
	virtual bool FCanOverrideState();
};

void *CCineNPC::sub_101a7600()
{
	SeqV *pEnqueueNPC = 0;

	CBaseEntity *pEntity = g_106eb5d8.sub_100f7f70(m_pSearchStart5f98, STRINGR(m_pszTarget5f54), ((CCineNPCSlots *)this)->slot220(), *(float *)&m_n5f68, (CBaseEntity *)this, 0);

	while (pEntity != 0)
	{
		SeqV *pNPC = *(SeqV **)((char *)pEntity + 0x94);
		if (pNPC)
		{
			int eCanPlay = pNPC->CanPlaySequence(((SeqV *)this)->FCanOverrideState(), 0);
			if (eCanPlay == 1)
			{
				return pNPC;
			}
			else if (eCanPlay == 2)
			{
				pEnqueueNPC = pNPC;
			}
			else if (!(m_flags204 & 0x800))
			{
				g_109f3628("Found %s, but can't play!\n", STRINGR(m_pszTarget5f54));
			}
		}

		pEntity = g_106eb5d8.sub_100f7f70(pEntity, STRINGR(m_pszTarget5f54), ((CCineNPCSlots *)this)->slot220(), *(float *)&m_n5f68, (CBaseEntity *)this, 0);
	}

	if (pEnqueueNPC != 0)
	{
		return pEnqueueNPC;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a7760 size=0x2e
#include "CBaseEntity.h"
// TARGET: CCineNPC::sub_101a7760
#include "CAI_BaseNPC.h"
#include "CCineNPC.h"

char CCineNPC::sub_101a7760() {
    void *pNPC = sub_101a7600();
    if (m_flags204 & 0x400) {
        m_pSearchStart5f98 = (CBaseEntity *)pNPC;
    }
    ((CAI_BaseNPC *)this)->sub_10279cc0((CBaseEntity *)pNPC);
    return pNPC ? 1 : 0;
}
// END FUNCTION

// FUNCTION: 0x101a77a0 size=0xa2
#include "CCineNPC.h"
extern void (__cdecl *g_109f364c)(const char *fmt, ...);
extern char g_10594b18[];
struct SNamed { const char *sub_100ab4f0(); };

void CCineNPC::sub_101a77a0(void *pNpc)
{
    void (__cdecl *DevWarning)(const char *fmt, ...) = g_109f364c;
    *((char *)pNpc + 0x5d78) = 1;
    DevWarning("********************************\n");
    DevWarning("********************************\n");
    DevWarning("**\n");
    DevWarning(g_10594b18);
    DevWarning("Attempting to play a scripted sequence (%s) on an NPC (%s) that is ScriptHidden.  Satan will eat your babies if you continue to do this.\n", ((SNamed *)this)->sub_100ab4f0(), ((SNamed *)pNpc)->sub_100ab4f0());
    DevWarning("Performing voodoo flag magic.\n");
    DevWarning("This is so asking to break.\n");
    DevWarning("Look for weird things to happen if you do this.\n");
    DevWarning("And tell me all about them.\n");
    DevWarning("ALL about them.\n");
    DevWarning("Like story time.\n");
    DevWarning("I like story time.\n");
    DevWarning(g_10594b18);
    DevWarning("**\n");
    DevWarning("********************************\n");
    DevWarning("********************************\n");
}
// END FUNCTION

// FUNCTION: 0x101a7880 size=0x644
#include "CAI_Motor.h"
#include "CCineNPC.h"
#include "CEntityVSlots.h"
#include "ConVar.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);
__declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
__declspec(dllimport) void Msg(const char *fmt, ...);
extern Vector g_1070d1b0;
extern Vector g_1070d9d0;
extern ConVar g_1072bb80;

struct CStartScriptSeq;

struct CStartScriptMotor
{
	char pad[0x1c];
	int m_n1c;
	char pad2[0x28 - 0x20];
	char m_b28;
	char pad3[0x34 - 0x29];
	float m_f34;
	void sub_102e0b40();
	float sub_102e0a80(float yaw);
};

struct CStartScriptObj : CEntityVSlots
{
	char pad[0x14b8 - 4];
	int m_n14b8;
};

struct CStartScriptNpc : CEntityVSlots
{
	char pad[0x98 - 4];
	CStartScriptObj *m_pObj98;
	char pad2[0x19c - 0x9c];
	unsigned int m_flags19c;
	char pad3[0x1b3c - 0x1a0];
	const char *m_pszFile;
	int m_nLine;
	char pad4[0x1b4c - 0x1b44];
	char m_b1b4c;
	char pad5[0x5cc4 - 0x1b4d];
	int m_nNewState;
	char pad6[0x5d44 - 0x5cc8];
	CStartScriptMotor *m_pMotor;
	char pad7[0x5d70 - 0x5d48];
	int m_scriptState;
	CHandle<CStartScriptSeq> m_hCine;
	char pad8[0x5de8 - 0x5d78];
	void *m_pGoalEnt;
	const char *sub_1000b5cd();
	char sub_100b5190();
	void sub_1026d130();
	void sub_10279cc0(void *pScript);
	void sub_1027f270(int a);
	void sub_100b2f50(const Vector *p);
};

struct CStartScriptTarget : CEntityVSlots
{
	char pad[0x94 - 4];
	CStartScriptNpc *m_pNpc;
	const char *sub_1000b5cd();
};

struct CStartScriptSeq : CEntityVSlots
{
	char pad[0x19c - 4];
	unsigned int m_flags19c;
	char pad2[0x5ce4 - 0x1a0];
	CHandle<CStartScriptTarget> m_hTarget;
	char pad3[0x5f94 - 0x5ce8];
	CHandle<CStartScriptSeq> m_hNextCine;
	const char *sub_1000b5cd();
	void sub_10279cc0(void *pScript);
	void sub_101a8cf0(int a);
};

void CCineNPC::vfunc583()
{
	CStartScriptSeq *pThis = (CStartScriptSeq *)this;
	CStartScriptTarget *pEntity = pThis->m_hTarget.Get();
	CStartScriptNpc *pTarget = 0;
	if (pEntity)
		pTarget = pEntity->m_pNpc;

	if (pTarget)
	{
		if (!pTarget->m_b1b4c)
		{
			DevMsg("************************************************\n");
			DevMsg("***  WARNING  **********************************\n");
			DevMsg("   scripted sequence(%s)\n", sub_1000b5cd());
			DevMsg("   is targeting an entity(%s)\n", pTarget->sub_1000b5cd());
			DevMsg("   that has not run it's AI yet.....\n");
			DevMsg("   This can happen if it starts hidden and is\n");
			DevMsg("   immediately put into a script without a delay.\n");
			DevMsg("   If this is the case.  Put at least a .1 second\n");
			DevMsg("   delay between ScriptUnhide and starting the\n");
			DevMsg("   scripted sequence.\n");
			DevMsg("   Otherwise, talk to a programmer.\n");
			DevMsg("***  WARNING  **********************************\n");
			DevMsg("************************************************\n");
		}

		if (pTarget->m_hCine != 0)
		{
			if (g_1072bb80.GetInt())
			{
				if (pThis->m_hTarget != 0)
					Msg("Sequence %s targeting %s posession delayed\n", sub_1000b5cd(), pThis->m_hTarget->sub_1000b5cd());
				else
					Msg("Sequence %s targeting %s posession delayed\n", sub_1000b5cd(), "**UNKNOWN**");
				sub_101a6ec0();
			}
			if (pTarget->m_hCine->m_hNextCine != 0)
			{
				CStartScriptSeq *pCine = pTarget->m_hCine->m_hNextCine.Get();
				pCine->sub_10279cc0(0);
				DevMsg(2, "script \"%s\" kicking script \"%s\" out of the queue\n", sub_1000b5cd(), pCine->sub_1000b5cd());
			}
			pTarget->m_hCine->m_hNextCine = pThis;
			return;
		}

		if (g_1072bb80.GetInt())
		{
			if (pThis->m_hTarget != 0)
				Msg("Sequence %s targeting %s is posessing entity\n", sub_1000b5cd(), pThis->m_hTarget->sub_1000b5cd());
			else
				Msg("Sequence %s targeting %s is posessing entity\n", sub_1000b5cd(), "**UNKNOWN**");
			sub_101a6ec0();
		}

		if (pTarget->sub_100b5190())
			sub_101a77a0(pTarget);
		if (!m_b5f90)
			pTarget->sub_1026d130();
		if (!m_n5f58)
			pThis->m_hNextCine = 0;

		pTarget->m_pGoalEnt = this;
		pTarget->m_hCine = pThis;
		pTarget->sub_10279cc0(this);

		m_saved_movetype = pTarget->slot94();
		m_saved_movecollide = pTarget->slot95();
		m_saved_solid = pTarget->slot92();
		m_saved_solidflags = pTarget->slot211();
		m_saved_effects = pTarget->m_flags19c;

		CStartScriptObj *pObj = pTarget->m_pObj98;
		if (pObj)
		{
			pObj->slot614();
			m_saved_troika_flags = pObj->m_n14b8;
			if (m_flags204 & 0x1000)
				pObj->m_n14b8 |= 0x40;
		}

		pTarget->m_flags19c |= pThis->m_flags19c;

		switch (m_fMoveTo)
		{
		case 0:
		case 5:
			pTarget->sub_1027f270(1);
			pTarget->m_scriptState = 1;
			break;
		case 1:
			pTarget->sub_1027f270(4);
			pTarget->m_scriptState = 4;
			pThis->sub_101a8cf0(1);
			break;
		case 2:
			pTarget->sub_1027f270(5);
			pTarget->m_scriptState = 5;
			pThis->sub_101a8cf0(1);
			break;
		case 3:
			pTarget->sub_1027f270(6);
			pTarget->m_scriptState = 6;
			pThis->sub_101a8cf0(1);
			break;
		case 4:
		{
			pTarget->slot181(pThis->slot220(), 0, (int)&g_1070d1b0);
			pTarget->m_pMotor->sub_102e0b40();
			CStartScriptMotor *pMotor = pTarget->m_pMotor;
			float flYaw = pThis->slot221()->y;
			if (pMotor->m_b28)
			{
				if (flYaw >= 180.0f)
					flYaw -= 180.0f;
				else
					flYaw += 180.0f;
			}
			if (pMotor->m_n1c == 0x43340000)
				pMotor->m_f34 = flYaw;
			else
				pMotor->m_f34 = pMotor->sub_102e0a80(flYaw);
			pTarget->sub_100b2f50(&g_1070d9d0);
			pTarget->m_flags19c |= 0x10;
			Vector angles = *pTarget->slot221();
			angles.y = pThis->slot221()->y;
			pTarget->slot64(&angles.x);
			pTarget->sub_1027f270(1);
			pTarget->m_scriptState = 1;
			break;
		}
		}

		pTarget->m_pszFile = "E:\\Vampire\\main\\dlls\\scripted.cpp";
		pTarget->m_nLine = 712;
		pTarget->m_nNewState = 4;
	}
}
// END FUNCTION

// FUNCTION: 0x101a8070 size=0x8b
#include "CCineNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"

extern char g_106b8540[];
extern void (*g_109f3650)(int, const char *, ...);
struct DebugNameView { const char *sub_100ab4f0(); };

void CCineNPC::sub_101a8070()
{
	if (sub_101a7760()) {
		*((char *)this + 0x5f91) = 0;
		((CAI_BaseNPCTroika *)this)->vfunc583();
		const char *pszTarget = m_pszTarget5f54;
		if (!pszTarget)
			pszTarget = g_106b8540;
		g_109f3650(2, "script \"%s\" using NPC \"%s\"\n", ((DebugNameView *)this)->sub_100ab4f0(), pszTarget);
		return;
	}
	sub_101a8c30();
	const char *pszTarget = m_pszTarget5f54;
	if (!pszTarget)
		pszTarget = g_106b8540;
	g_109f3650(2, "script \"%s\" can't find NPC \"%s\"\n", ((DebugNameView *)this)->sub_100ab4f0(), pszTarget);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 1.0;
}
// END FUNCTION

// FUNCTION: 0x101a8130 size=0x44
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
#include "CCineNPC.h"
extern CGlobalEntityList g_106eb5d8;
extern "C" void *_RTDynamicCast(void *p, long delta, void *pSrc, void *pDst, int bRef);
extern char g_10538764[];
extern char g_105947c8[];
struct SCineScriptName { char pad[0x5f5c]; const char *m5f5c; };
struct SCineEntNpc { char pad[0x94]; void *m94; };
CCineNPC *CCineNPC::sub_101a8130()
{
	if (((SCineScriptName *)this)->m5f5c) {
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, ((SCineScriptName *)this)->m5f5c, 0, 0);
		if (pEnt && ((SCineEntNpc *)pEnt)->m94)
			return (CCineNPC *)_RTDynamicCast(pEnt, 0, g_10538764, g_105947c8, 0);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a81a0 size=0xe7
#include "CCineNPC.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "COutputEvent.h"
struct CCineNpcView
{
	char m_pad0000[0x65c];
	char m_b065c;
	char m_pad065d[0x6f4 - 0x65d];
	float m_fl06f4;
	void sub_10273e80(int a);
	void sub_10280d30();
};
struct CCineEntView
{
	char m_pad0000[0x94];
	CCineNpcView *m_pNpc;
};
struct CCineSlots
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44) EVS10(45) EVS10(46) EVS10(47) EVS10(48) EVS10(49)
	EVS10(50) EVS10(51) EVS10(52) EVS10(53) EVS10(54) EVS10(55) EVS10(56) EVS10(57)
	EVS(580) EVS(581) EVS(582) EVS(583)
	virtual char slot584(CCineNpcView *pNpc, const char *pszSequence, char bLoop);
	void sub_10006a00();
};
// TARGET: CCineNPC::sub_101a81a0
void CCineNPC::sub_101a81a0()
{
	CCineNPC *pScript = sub_101a8130();
	CCineNpcView *pNpc;
	if (pScript) {
		CCineEntView *pEnt = (CCineEntView *)EHandle_Get(pScript->m_hTarget5ce4);
		if (pEnt && (pNpc = pEnt->m_pNpc) != 0) {
			pNpc->sub_10273e80(0);
			if (pScript->sub_101a8130() != this)
				((CCineSlots *)pScript)->sub_10006a00();
			((CCineSlots *)pScript)->slot584(pNpc, pScript->m_pszScript5f48, 1);
			if (pNpc->m_b065c)
				pNpc->sub_10280d30();
			pNpc->m_fl06f4 = 1.0f;
		}
	}
	((COutputEvent *)&m_slotA)->sub_100cd660(EHandle_Get(m_h010c), this, 0);
}
// END FUNCTION

// FUNCTION: 0x101a82d0 size=0x13b
#include "CCineNPC.h"
#include "CBaseAnimating.h"
#include "CEHandleGet.h"

struct CDevCheck {
	virtual void v0();
	virtual bool v1();
	char m_pad[0x28];
	int m_n2c;
};
extern CDevCheck *g_1072bb84;
extern char g_106b8540[];
__declspec(dllimport) void Warning(const char *fmt, ...);
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

// TARGET: CCineNPC::vfunc584
char CCineNPC::vfunc584(CBaseAnimating *pNpc, const char *pszSequence, char bLoop)
{
	m_b5f91 = 1;
	if (!pszSequence && bLoop) {
		sub_101a8460(pNpc);
		return 0;
	}
	int seq = pNpc->sub_1008f7b0(pszSequence ? pszSequence : g_106b8540);
	*(int *)((char *)pNpc + 0x6f0) = seq;
	if (seq == -1) {
		if (!pszSequence)
			pszSequence = g_106b8540;
		Warning("%s: unknown scripted sequence \"%s\"\n", pNpc->sub_100ab4f0(), pszSequence);
		*(int *)((char *)pNpc + 0x6f0) = 0;
	}
	*(int *)((char *)pNpc + 0x6f8) = 0;
	pNpc->sub_10090950();
	if (!g_1072bb84->v1() && g_1072bb84->m_n2c) {
		if (EHandle_Get(m_hTarget5ce4))
			Msg("Sequence %s targeting %s is starting\n", sub_1000b5cd(), (const char *)((CBaseAnimating *)EHandle_Get(m_hTarget5ce4))->sub_100ab4f0());
		else
			Msg("Sequence %s targeting %s is starting\n", sub_1000b5cd(), "**UNKNOWN**");
		sub_101a6ec0();
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a8460 size=0x173
#include "CBaseAnimating.h"
#include "CBaseEntity.h"
#include "CCineNPC.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

struct CCineConVarView
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CCineNpcView
{
	char m_pad0000[0x5d70];
	int m_n5d70;
	void sub_1027f270(int a);	// stub 0x10005cc2
};

extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
extern CCineConVarView *g_1072bb84;

void CCineNPC::sub_101a8460(CBaseAnimating *pNpc)
{
	if (!g_1072bb84->vfunc1() && g_1072bb84->m_n2c)
	{
		if (EHandle_Get(m_hTarget5ce4))
			Msg("Sequence %s targeting %s is done\n", sub_1000b5cd(), ((CCineNPC *)EHandle_Get(m_hTarget5ce4))->sub_1000b5cd());
		else
			Msg("Sequence %s targeting %s is done\n", sub_1000b5cd(), "**UNKNOWN**");
		sub_101a6ec0();
	}
	if (!m_pszSequence5f4c || (EHandle_Get(m_hNPC5f94) != 0))
	{
		sub_101a8640(pNpc);
	}
	else
	{
		((CCineNpcView *)pNpc)->sub_1027f270(2);
		((CCineNpcView *)pNpc)->m_n5d70 = 2;
		((CEntityVSlots *)this)->slot584((CEntityVSlots *)pNpc, m_pszSequence5f4c, 0);
	}
	m_slotB.sub_100cd660((CBaseEntity *)EHandle_Get(m_h010c), this, 0);
}
// END FUNCTION

// FUNCTION: 0x101a8640 size=0x18c
#include "CCineNPC.h"
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "CEHandleGet.h"

extern char g_106b8540[];
extern void (__cdecl *g_109f3650)(int level, const char *fmt, ...);
void sub_101c0b10();

void CCineNPC::sub_101a8640(CBaseAnimating *pNpc)
{
	CAI_BaseNPCTroika *pTroika = (CAI_BaseNPCTroika *)pNpc;
	if (m_pszSequence5f4c && (m_flags204 & 0x100) && !EHandle_Get(m_hNPC5f94)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(pTroika->m_h5d74);
		const char *psz = pCine->m_pszSequence5f4c;
		if (!psz)
			psz = g_106b8540;
		g_109f3650(2, "Post Idle %s finished\n", psz);
		pTroika->sub_1027f270(2);
		pTroika->m_n5d70 = 2;
		((CEntityVSlots *)this)->slot584((CEntityVSlots *)pNpc, m_pszSequence5f4c, 0);
		return;
	}
	if (!(m_flags204 & 4)) {
		sub_100ac4e0((void *)sub_101c0b10, 0, 0);
		m_flNextThink = gpGlobals->curtime + 0.1;
	}
	pTroika->sub_1027d170();
	((CEntityVSlots *)this)->slot586((CEntityVSlots *)pNpc);
	if (EHandle_Get(m_hNPC5f94)) {
		CAI_BaseNPCTroika *pNext = (CAI_BaseNPCTroika *)EHandle_Get(m_hNPC5f94);
		if (pNext != (CAI_BaseNPCTroika *)this || (m_flags204 & 4)) {
			pNext->sub_10279cc0((CBaseEntity *)pNpc);
			((CEntityVSlots *)pNext)->slot583();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101a8840 size=0x33
extern char g_10594b48[];

struct CCineStateView {
    char pad0[0x1b3c];
    const char *m_psz1b3c;
    int m_n1b40;
    char pad1[0x5cc4 - 0x1b44];
    int m_n5cc4;
    void sub_10006a8c();
};

// TARGET: sub_101a8840
void __stdcall sub_101a8840(CCineStateView *p)
{
    if (p->m_n5cc4 != 7) {
        p->m_psz1b3c = g_10594b48;
        p->m_n1b40 = 0x3ca;
        p->m_n5cc4 = 1;
    }
    p->sub_10006a8c();
}
// END FUNCTION

// FUNCTION: 0x101a8890 size=0x7b
#include "CBaseEntity.h"

struct CScriptedAiObject {
	void sub_100050d3();
	void sub_10007ea0();
};
struct CScriptedNpcTarget {
	char m_pad[0x94];
	CScriptedAiObject *m_pAi;
};
struct CScriptedNpcUnit {
	char m_pad0[0x204];
	int m_spawnflags;
	char m_pad208[0x5ce4 - 0x208];
	EHANDLE m_hTarget;
	char m_pad5ce8[0x5f90 - 0x5ce8];
	bool m_bActive;
	void sub_101a8890(bool bFlag);
};

void CScriptedNpcUnit::sub_101a8890(bool bFlag)
{
	if (m_spawnflags & 0x20)
		return;
	CScriptedNpcTarget *pTarget = (CScriptedNpcTarget *)m_hTarget.Get();
	if (pTarget && pTarget->m_pAi)
	{
		if (m_bActive)
		{
			if (!bFlag)
				pTarget->m_pAi->sub_100050d3();
		}
		else if (bFlag)
		{
			pTarget->m_pAi->sub_10007ea0();
		}
	}
	m_bActive = bFlag;
}
// END FUNCTION

// FUNCTION: 0x101a8930 size=0x4b
#include "CCineNPC.h"
#include "CEHandleGet.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SSlot158 {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual char vfunc158();
};
// TARGET: CCineNPC::sub_101a8930
char CCineNPC::sub_101a8930()
{
    if (m_b5f90) {
        SSlot158 *p = (SSlot158 *)EHandle_Get(m_hTarget5ce4);
        if (p && p->vfunc158())
            return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a89a0 size=0xd1
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CCineTargetNPC
{
	char m_pad[0x5b80];
	char m_b5b80;
	void sub_10269b50(int nCondition);	// ClearCondition (stub 0x10015839)
};

struct CCineHandleTarget { char m_pad[0x94]; CCineTargetNPC *m_pNPC; };

static inline CCineHandleTarget *ResolveHandle(unsigned int h)
{
	CGlobalEntityList_Slot *e;
	return (h != 0xffffffff && (e = &g_10566458->m_Slots[h & 0x1fff], e->m_Serial == (int)(h >> 13))) ? (CCineHandleTarget *)e->m_pEntity : 0;
}

void CCineNPC::vfunc459()
{
	if (sub_101a8930())
		return;
	CCineHandleTarget *pEnt = ResolveHandle(*(unsigned int *)((char *)this + 0x5ce4));
	if (!pEnt)
		return;
	CCineTargetNPC *pNPC = pEnt->m_pNPC;
	if (!pNPC)
		return;
	pNPC->sub_10269b50(0x4c);
	pNPC->sub_10269b50(0x4d);
	pNPC->sub_10269b50(0x4e);
	pNPC->m_b5b80 = 0;
	pNPC->sub_10269b50(0x1e);
	pNPC->sub_10269b50(0x1f);
	pNPC->sub_10269b50(0x21);
	pNPC->sub_10269b50(0x72);
	pNPC->sub_10269b50(0x20);
	pNPC->sub_10269b50(0x22);
	pNPC->sub_10269b50(0x25);
	pNPC->sub_10269b50(0x26);
	pNPC->sub_10269b50(0x27);
	pNPC->sub_10269b50(10);
}
// END FUNCTION

// FUNCTION: 0x101a8ac0 size=0x116
#include "CBaseEntity.h"
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern void (*g_109f3628)(const char *pMsg, ...);
extern char g_10594f80[];
extern char g_10594f30[];

struct EntNameView
{
    const char *sub_1000b5cd();	// "CBaseEntity::GetDebugName" (stub 0x1000b5cd); valid with a null this
};

inline EntNameView *ResolveHandle(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13))
            return (EntNameView *)pSlot->m_pEntity;
    }
    return 0;
}

char CCineNPC::sub_101a8ac0()
{
    const unsigned int *ph = &m_hNPC5f94;
    const unsigned int *ph2 = &m_hNPC5f94;
    if (!ResolveHandle(m_hNPC5f94))
        return 1;
    if (m_n5f58 != 0) {
        g_109f3628(g_10594f80, ResolveHandle(*ph)->sub_1000b5cd());
        return 0;
    }
    if (!(((CBaseEntity *)ResolveHandle(*ph))->m_flags204 & 0x200))
        return 1;
    g_109f3628(g_10594f30, ResolveHandle(*ph2)->sub_1000b5cd());
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a8c30 size=0x82
#include "CBaseEntity.h"
#include "CCineNPC.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
void sub_101a7170(CCineNPC *pScript);
void CCineNPC::sub_101a8c30()
{
	DevMsg(2, "Cancelling script: %s\n", m_pszScript5f48 ? m_pszScript5f48 : g_106b8540);
	if (!m_pszName26c) {
		sub_101a7170(this);
		return;
	}
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszName26c, 0, 0); pEnt; pEnt = g_106eb5d8.sub_100f7770(pEnt, m_pszName26c ? m_pszName26c : g_106b8540, 0, 0))
		sub_101a7170((CCineNPC *)pEnt);
}
// END FUNCTION

// FUNCTION: 0x101a8cf0 size=0xc0
#include "CLogicAuto.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;
extern char *g_1070b228;
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CScriptedCount
{
	char m_pad[0x5f70];
	int m_nCount;	// 0x5f70
	float m_flTime;	// 0x5f74
};

void __fastcall sub_101a8cf0(CBaseEntity *self, int, int bStart)
{
	const char *pszName = self->m_name26c ? self->m_name26c : g_106b8540;
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0); pEnt != 0; pEnt = g_106eb5d8.sub_100f7770(pEnt, pszName, 0, 0)) {
		const char *pszClass = pEnt->m_classname11c ? pEnt->m_classname11c : g_106b8540;
		if (_strcmpi(pszClass, "scripted_sequence") == 0) {
			CScriptedCount *pSeq = (CScriptedCount *)pEnt;
			if (bStart) {
				pSeq->m_nCount += 1;
			} else if (--pSeq->m_nCount <= 0) {
				pSeq->m_flTime = *(float *)(0xc + g_1070b228) + 0.05;
				pSeq->m_nCount = 0;
			}
		}
		pszName = self->m_name26c ? self->m_name26c : g_106b8540;
	}
}
// END FUNCTION

// FUNCTION: 0x101a8de0 size=0x186
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCineNPC.h"
#include "CBaseAnimating.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
void sub_10428880(void *pModel, int pszName);

struct S_CineNames {
    char pad[0x5f44];
    const char *m_p5f44;
    const char *m_p5f48;
    const char *m_p5f4c;
};

void CCineNPC::vfunc113()
{
    sub_100a0bc0();
    S_CineNames *v = (S_CineNames *)this;
    CBaseEntity *pEnt = 0;
    CBaseAnimating *pNPC = 0;
    while ((pEnt = g_106eb5d8.sub_100f7f20(pEnt, m_pszTarget5f54 ? m_pszTarget5f54 : g_106b8540, 0, 0)) != 0) {
        pNPC = *(CBaseAnimating **)((char *)pEnt + 0x94);
        if (pNPC)
            break;
    }
    if (pNPC) {
        void *pModel = pNPC->sub_100952d0(-1);
        if (pModel) {
            sub_10428880(pModel, (int)(v->m_p5f44 ? v->m_p5f44 : g_106b8540));
            sub_10428880(pModel, (int)(v->m_p5f4c ? v->m_p5f4c : g_106b8540));
            sub_10428880(pModel, (int)(v->m_p5f48 ? v->m_p5f48 : g_106b8540));
        } else {
            DevMsg("**********\n");
            DevMsg("NPC %s has no model in CCineNPC::Activate for %s\n", ((CCineNPC *)pNPC)->sub_1000b5cd(), sub_1000b5cd());
            DevMsg("**********\n");
        }
    } else {
        DevMsg("**********\n");
        const char *n = m_pszTarget5f54 ? m_pszTarget5f54 : g_106b8540;
        DevMsg("Could not find NPC %s in CCineNPC::Activate for %s\n", n, sub_1000b5cd());
        DevMsg("**********\n");
    }
    CGlobalEntityList_Ent *pFound = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100f7770(0, m_n5f58 ? (const char *)m_n5f58 : g_106b8540, 0, 0);
    if (pFound)
        m_hNPC5f94 = *pFound->v1();
    else
        m_hNPC5f94 = 0xffffffff;
    if (!EHandle_Get(m_hNPC5f94))
        m_n5f58 = 0;
}
// END FUNCTION

// FUNCTION: 0x101a8fe0 size=0x53
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ee9e(GP *);
extern int vt_10477d1c;
extern int vt_10477cf0;
extern char g_10595090[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: aiscripted_sequence
DLL_EXPORT GP *aiscripted_sequence()
{
	GP *p = (GP *)sub_1000db89(0x608c);
	if (p) {
		sub_1000ee9e(p);
		*(int **)p = &vt_10477d1c;
		*(int **)((char *)p + 0x19b0) = &vt_10477cf0;
	} else {
		p = 0;
	}
	p->name(g_10595090);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101a9060 size=0x3
#include "CCineAI.h"
bool CCineAI::vfunc585()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a9080 size=0x39c
#include "CAI_Motor.h"
// TARGET: CCineAI::vfunc583
#include "CCineAI.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);
__declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
extern void (*g_109f3658)(int level, const char *pszFormat, ...);
extern Vector g_1070d1b0;
extern Vector g_1070d9d0;

struct CCineThisView
{
	EVS(0) virtual unsigned int *slot1x(); EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10)
	EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19) EVS10(20) EVS10(21)
	virtual Vector *slot220x(int a, const Vector *b);
	virtual Vector *slot221x();
	char pad[0x19c - 4];
	unsigned int m_flags19c;
};

struct CCineNpcSlot181
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10)
	EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17)
	EVS(180) virtual void slot181x(const Vector *pPos);
};

struct CCineMotor
{
	char pad[0x1c];
	int m_n1c;
	char pad2[0x28 - 0x20];
	char m_b28;
	char pad3[0x34 - 0x29];
	float m_f34;
	void sub_102e0b40();
	float sub_102e0a80(float yaw);
};

struct CCineNpcView : CEntityVSlots
{
	char pad[0x98 - 4];
	CEntityVSlots *m_pObj98;
	char pad2[0x19c - 0x9c];
	unsigned int m_flags19c;
	char pad3[0x1b3c - 0x1a0];
	const char *m_pszFile;
	int m_nLine;
	char pad4[0x1b4c - 0x1b44];
	char m_b1b4c;
	char pad5[0x5cc0 - 0x1b4d];
	int m_nState;
	int m_nNewState;
	char pad6[0x5d44 - 0x5cc8];
	CCineMotor *m_pMotor;
	char pad7[0x5d70 - 0x5d48];
	int m_nMoveState;
	unsigned int m_hScript;
	char pad8[0x5de8 - 0x5d78];
	void *m_pScript;
	const char *sub_1000b5cd();
	char sub_100b5190();
	void sub_1026d130();
	void sub_10279cc0(void *pScript);
	void sub_1027f270(int a);
	void sub_10280de0(int a);
	void sub_100b2f50(const Vector *p);
	void sub_100b3640(int a);
};

struct CCineTargetView : CEntityVSlots
{
	char pad[0x94 - 4];
	CCineNpcView *m_pNpc;
};

void CCineAI::vfunc583()
{
	CCineTargetView *pEnt = (CCineTargetView *)EHandle_Get(m_hTarget5ce4);
	if (!pEnt)
		return;
	CCineNpcView *pNpc = pEnt->m_pNpc;
	if (!pNpc)
		return;
	CCineThisView *pThis = (CCineThisView *)this;
	if (!pNpc->m_b1b4c)
	{
		DevMsg("************************************************\n");
		DevMsg("***  WARNING  **********************************\n");
		DevMsg("   scripted sequence(%s)\n", sub_1000b5cd());
		DevMsg("   is targeting an entity(%s)\n", pNpc->sub_1000b5cd());
		DevMsg("   This can happen if it starts hidden and is\n");
		DevMsg("   immediately put into a script without a delay.\n");
		DevMsg("   If this is the case.  Put at least a .1 second\n");
		DevMsg("   delay between ScriptUnhide and starting the\n");
		DevMsg("   scripted sequence.\n");
		DevMsg("   Otherwise, talk to a programmer.\n");
		DevMsg("***  WARNING  **********************************\n");
		DevMsg("************************************************\n");
	}
	if (pNpc->sub_100b5190())
		sub_101a77a0(pNpc);
	if (!m_b5f90)
		pNpc->sub_1026d130();
	pNpc->m_pScript = this;
	pNpc->m_hScript = *pThis->slot1x();
	pNpc->sub_10279cc0(this);
	m_saved_movetype = pNpc->slot94();
	m_saved_movecollide = pNpc->slot95();
	m_saved_solid = pNpc->slot92();
	m_saved_solidflags = pNpc->slot211();
	m_saved_effects = pNpc->m_flags19c;
	CEntityVSlots *pObj = pNpc->m_pObj98;
	if (pObj)
	{
		pObj->slot614();
		m_saved_troika_flags = *(int *)((char *)pObj + 0x14b8);
		if (m_flags204 & 0x1000)
			*(int *)((char *)pObj + 0x14b8) |= 0x40;
	}
	pNpc->m_flags19c |= pThis->m_flags19c;
	switch (m_fMoveTo)
	{
	case 0:
	case 5:
		pNpc->sub_1027f270(1);
		pNpc->m_nMoveState = 1;
		break;
	case 1:
		pNpc->sub_1027f270(4);
		pNpc->m_nMoveState = 4;
		break;
	case 2:
		pNpc->sub_1027f270(5);
		pNpc->m_nMoveState = 5;
		break;
	case 3:
		pNpc->sub_1027f270(6);
		pNpc->m_nMoveState = 6;
		break;
	case 4:
		{
			((CCineNpcSlot181 *)pNpc)->slot181x(pThis->slot220x(0, &g_1070d1b0));
			pNpc->m_pMotor->sub_102e0b40();
			CCineMotor *pMotor = pNpc->m_pMotor;
			float yaw = pThis->slot221x()->y;
			if (pMotor->m_b28)
			{
				if (yaw >= 180.0f)
					yaw -= 180.0f;
				else
					yaw += 180.0f;
			}
			if (pMotor->m_n1c == 0x43340000)
				pMotor->m_f34 = yaw;
			else
				pMotor->m_f34 = pMotor->sub_102e0a80(yaw);
			pNpc->sub_100b2f50(&g_1070d9d0);
			unsigned int npcFlags = pNpc->m_flags19c;
			npcFlags |= 0x10;
			pNpc->m_flags19c = npcFlags;
			Vector ang = *pNpc->slot221();
			ang.y = pThis->slot221x()->y;
			pNpc->slot64(&ang.x);
			pNpc->sub_1027f270(1);
			pNpc->m_nMoveState = 1;
			pNpc->sub_100b3640(1);
		}
		break;
	default:
		g_109f3658(2, "aiscript:  invalid Move To Position value!");
		break;
	}
	DevMsg(2, "\"%s\" found and used\n", pNpc->sub_1000b5cd());
	int oldState = pNpc->m_nState;
	pNpc->m_pszFile = "E:\\Vampire\\main\\dlls\\scripted.cpp";
	pNpc->m_nLine = 0x554;
	pNpc->m_nNewState = 4;
	if (oldState == 4)
		pNpc->sub_10280de0(0x2e);
}
// END FUNCTION

// FUNCTION: 0x101a9510 size=0x8b
#include "CCineAI.h"

extern char g_106b8540[];
__declspec(dllimport) void Warning(const char *fmt, ...);

struct CCineAIFields {
	char m_pad[0x5f91];
	char m_bFlag5f91;
};

struct CCineAINpc {
	char m_pad[0x6f0];
	int m_iSequence;	// 0x6f0
	char m_pad6f4[4];
	float m_flSequenceTime;	// 0x6f8
	int sub_1008f7b0(const char *pszName);	// CBaseAnimating::LookupSequence
	const char *sub_100ab4f0();	// GetDebugName (stub 0x1000b5cd)
	void sub_10090950();	// stub 0x100117b1
};

bool CCineAI::vfunc584(void *pNpc, const char *pszSequence, char bFindOnly)
{
	CCineAINpc *pNPC = (CCineAINpc *)pNpc;
	((CCineAIFields *)this)->m_bFlag5f91 = 1;
	if (!pszSequence && bFindOnly) {
		sub_101a8460(pNpc);
		return true;
	}
	pNPC->m_iSequence = pNPC->sub_1008f7b0(pszSequence ? pszSequence : g_106b8540);
	if (pNPC->m_iSequence == -1) {
		Warning("%s: unknown aiscripted sequence \"%s\"\n", pNPC->sub_100ab4f0(), pszSequence ? pszSequence : g_106b8540);
		pNPC->m_iSequence = 0;
	}
	pNPC->m_flSequenceTime = 0;
	pNPC->sub_10090950();
	return true;
}
// END FUNCTION

// FUNCTION: 0x101a95d0 size=0x38
#include "CCineAI.h"
extern void (*g_109f3650)(int level, const char *pMsg, ...);

struct CCineAINpcView
{
	void sub_10006a8c();
	void sub_1000c27a(int a);
};

// TARGET: CCineAI::vfunc586
void CCineAI::vfunc586(void *pNpc)
{
	CCineAINpcView *p = (CCineAINpcView *)pNpc;
	switch (m_iFinishSchedule)
	{
	case 0:
		break;
	case 1:
		p->sub_1000c27a(0x2a);
		return;
	default:
		g_109f3650(2, "FixScriptNPCSchedule - no case!\n");
		break;
	}
	p->sub_10006a8c();
}
// END FUNCTION

// FUNCTION: 0x101a9620 size=0x6
#include "datamap.h"
#include "CCineAISchedule.h"
namespace lifted {
extern char g_10593c9c;
}
datamap_t *CCineAISchedule::vfunc82()
{
    return (datamap_t *)&lifted::g_10593c9c;
}
// END FUNCTION

// FUNCTION: 0x101a9640 size=0x5
int sub_101a9680(void);
int g_1072bb70 = ((int (*)(int))sub_101a9680)(0);
// END FUNCTION

// FUNCTION: 0x101a9680 size=0x1a
namespace lifted {
extern int g_10593c9c;
extern int g_10593ca0;
extern char g_10593ce4;
}
int sub_101a9680()
{
    lifted::g_10593ca0 = 4;
    lifted::g_10593c9c = (int)&lifted::g_10593ce4;
    return (int)&lifted::g_10593c9c;
}
// END FUNCTION

// FUNCTION: 0x101a96b0 size=0x53
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ee9e(GP *);
extern int vt_10478854;
extern int vt_10478824;
extern char g_10595174[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: aiscripted_schedule
DLL_EXPORT GP *aiscripted_schedule()
{
	GP *p = (GP *)sub_1000db89(0x6098);
	if (p) {
		sub_1000ee9e(p);
		*(int **)p = &vt_10478854;
		*(int **)((char *)p + 0x19b0) = &vt_10478824;
	} else {
		p = 0;
	}
	p->name(g_10595174);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101a9730 size=0x2e
#include "CCineAISchedule.h"
// TARGET: CCineAISchedule::vfunc103
extern void (*g_109f3650)(int level, const char *pszMsg);
extern const char g_1059518c[];

void CCineAISchedule::vfunc103()
{
    sub_1000c711();
    if (m_n6094 == 0 && m_n6090 == 0)
    {
        g_109f3650(2, g_1059518c);
    }
}
// END FUNCTION

// FUNCTION: 0x101a9770 size=0x3
#include "CCineAISchedule.h"
bool CCineAISchedule::vfunc585()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a9790 size=0xe9
#include "CCineAISchedule.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);

extern CGlobalEntityList *g_10566458;

#define W10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define W100(p) W10(p##0) W10(p##1) W10(p##2) W10(p##3) W10(p##4) W10(p##5) W10(p##6) W10(p##7) W10(p##8) W10(p##9)

class CCineAIVSlots
{
public:
    W100(a) W100(b) W100(c) W100(d) W100(e) W10(f0) W10(f1) W10(f2) W10(f3) W10(f4) W10(f5) W10(f6) W10(f7)
    virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
    virtual void vfunc586(CBaseEntity *pNPC);
};

struct CNPCAIUnit : public CBaseEntity
{
    void sub_1026d130();
};

static inline CBaseEntity *LookupHandle(const unsigned int *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

void CCineAISchedule::vfunc583()
{
    CBaseEntity *pEnt = LookupHandle((unsigned int *)((char *)this + 0x5ce4));
    if (pEnt) {
        CNPCAIUnit *pNPC = *(CNPCAIUnit **)((char *)pEnt + 0x94);
        if (pNPC) {
            if (!*((char *)pNPC + 0x1b4c)) {
                DevMsg("************************************************\n");
                DevMsg("***  WARNING  **********************************\n");
                DevMsg("   scripted sequence(%s)\n", ((CBaseEntity *)this)->sub_100ab4f0());
                DevMsg("   is targeting an entity(%s)\n", pNPC->sub_100ab4f0());
                DevMsg("   This can happen if it starts hidden and is\n");
                DevMsg("   immediately put into a script without a delay.\n");
                DevMsg("   If this is the case.  Put at least a .1 second\n");
                DevMsg("   delay between ScriptUnhide and starting the\n");
                DevMsg("   scripted sequence.\n");
                DevMsg("   Otherwise, talk to a programmer.\n");
                DevMsg("***  WARNING  **********************************\n");
                DevMsg("************************************************\n");
            }
            if (!*((char *)this + 0x5f90))
                pNPC->sub_1026d130();
            ((CCineAIVSlots *)this)->vfunc586(pNPC);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101a98c0 size=0x1f0
#include "CBaseEntity.h"
#include "CCineAISchedule.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern void (*g_109f3650)(int, const char *, ...);

struct CCineDevFlagObj { virtual void v0(); virtual void v1(); };
extern CCineDevFlagObj *g_10924a6c;

struct CCineFollowPathView
{
	char sub_102801e0(int a, CBaseEntity *pGoal, int act);
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CCineAISchedule::vfunc586(CAI_BaseNPC *pNPC)
{
	CBaseEntity *pGoal = g_106eb5d8.sub_100f7f20(0, STRINGR(m_pszGoalName608c), (CBaseEntity *)this, 0);
	if (!pGoal)
	{
		g_109f3650(1, "Can't find goal entity %s\nCan't execute script %s\n", STRINGR(m_pszGoalName608c), sub_1000b5cd());
		return;
	}
	switch (m_n6094)
	{
	case 1: pNPC->sub_1026e340(1); break;
	case 2: pNPC->sub_1026e340(3); break;
	case 3: pNPC->sub_1026e340(2); break;
	}
	switch (m_n6090)
	{
	case 1:
	case 2:
	{
		int act = (m_n6090 != 1) ? 0x13 : 9;
		if (pNPC->vfunc94() == 5 || pNPC->vfunc94() == 6)
			act = 0x22;
		if (!pNPC->sub_102800c0(2, pGoal, act) && !(*(unsigned int *)((char *)this + 0x204) & 0x800))
		{
			g_109f3650(1, "ScheduledMoveToGoalEntity to goal entity %s failed\nCan't execute script %s\n", STRINGR(m_pszGoalName608c), sub_1000b5cd());
			return;
		}
		break;
	}
	case 4:
	case 5:
	{
		int act = (m_n6090 != 4) ? 0x13 : 9;
		if (pNPC->vfunc94() == 5 || pNPC->vfunc94() == 6)
			act = 0x22;
		if (!((CCineFollowPathView *)pNPC)->sub_102801e0(2, pGoal, act) && !(*(unsigned int *)((char *)this + 0x204) & 0x800))
		{
			g_109f3650(1, "ScheduledFollowPath to goal entity %s failed\nCan't execute script %s\n", STRINGR(m_pszGoalName608c), sub_1000b5cd());
			return;
		}
		break;
	}
	case 3:
		pNPC->sub_10279a50((int)pGoal);
		pNPC->vfunc544(pGoal, (int)((CAI_BaseNPC *)pGoal)->vfunc217(), (int)((char *)pGoal + 0x3d4));
		g_10924a6c->v1();
		pNPC->sub_10269a20(0x54);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x101a9b30 size=0x23
#include "globalvars.h"
struct CThinkCall_101a9b30
{
    void sub_100ac4e0(void *fn, int a, int b);
};
void sub_1000556f();

// TARGET: sub_101a9b30
void __fastcall sub_101a9b30(char *self, int dummy, int arg)
{
    ((CThinkCall_101a9b30 *)self)->sub_100ac4e0((void *)sub_1000556f, 0, 0);
    *(float *)(self + 0x17c) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x101a9b70 size=0x6
#include "datamap.h"
#include "CScriptedSentence.h"
namespace lifted {
extern char g_10593d94;
}
datamap_t *CScriptedSentence::vfunc82()
{
    return (datamap_t *)&lifted::g_10593d94;
}
// END FUNCTION

// FUNCTION: 0x101a9b90 size=0x5
int * sub_101a9bd0(void);
int * g_1072bb78 = ((int * (*)(int))sub_101a9bd0)(0);
// END FUNCTION

// FUNCTION: 0x101a9bd0 size=0xb0
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_10593d94[2];
void sub_1000880a();
void sub_10003297();
void sub_1000fce0();

int *sub_101a9bd0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszSentence", {0x450, 0}, 1, 6, "sentence" },
        { 2, "m_iszEntity", {0x454, 0}, 1, 6, "entity" },
        { 1, "m_flRadius", {0x458, 0}, 1, 6, "radius" },
        { 1, "m_flDelay", {0x45c, 0}, 1, 6, "delay" },
        { 1, "m_flRepeat", {0x460, 0}, 1, 6, "refire" },
        { 2, "m_iszListener", {0x474, 0}, 1, 6, "listener" },
        { 4, "m_TempAttenuation", {0x468, 0}, 1, 4, "attenuation" },
        { 4, "m_iSoundLevel", {0x464, 0}, 1, 2 },
        { 1, "m_flVolume", {0x46c, 0}, 1, 2 },
        { 5, "m_active", {0x470, 0}, 1, 2 },
        { 0xc, "m_pActivator", {0x478, 0}, 1, 2 },
        { 0, "CScriptedSentenceFindThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000880a },
        { 0, "CScriptedSentenceDelayThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10003297 },
        { 0, "InputBeginSentence", {0, 0}, 1, 8, "BeginSentence", 0, (void *)sub_1000fce0 },
        { 10, "m_OnBeginSentence", {0x47c, 0}, 1, 0x16, "OnBeginSentence", g_1055dc70 },
        { 10, "m_OnEndSentence", {0x494, 0}, 1, 0x16, "OnEndSentence", g_1055dc70 },
    };
    g_10593d94[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10593d94[0] = (int)&dataDesc[1];
    return g_10593d94;
}
// END FUNCTION

// FUNCTION: 0x101a9cb0 size=0x67
#include "platform.h"
#include "CScriptedSentence.h"

// TARGET: scripted_sentence
DLL_EXPORT CBaseEntity *scripted_sentence()
{
	CScriptedSentence *p = new CScriptedSentence;
	p->vfunc106("scripted_sentence");
	return p;
}
// END FUNCTION

// FUNCTION: 0x101a9d40 size=0x8
unsigned char sub_10001109();

// TARGET: sub_101a9d40
unsigned char sub_101a9d40()
{
    unsigned char bVar1;
    bVar1 = sub_10001109();
    bVar1 &= 0xfd;
    return bVar1;
}
// END FUNCTION

// FUNCTION: 0x101a9d60 size=0x4c
#include <string.h>
#include <stdlib.h>
#include "CBaseEntity.h"
#include "CScriptedSentence.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
struct CScriptedSentenceView : CBaseEntity {
	char m_pad[0x46c - sizeof(CBaseEntity)];
	float m_flAttenuation;
};
// TARGET: CScriptedSentence::vfunc110
bool CScriptedSentence::vfunc110(const char *key, const char *value)
{
	CScriptedSentenceView *p = (CScriptedSentenceView *)this;
	if (!_strcmpi(key, "volume")) {
		p->m_flAttenuation = atof(value) * 0.1;
		return true;
	}
	return p->CBaseEntity::vfunc110(key, value);
}
// END FUNCTION

// FUNCTION: 0x101a9dd0 size=0x3c
#include "CBaseEntity.h"

void sub_1000880a();

struct CUnk101a9dd0 {
    void sub_101a9dd0(int *pValue);
};

void CUnk101a9dd0::sub_101a9dd0(int *pValue)
{
    if (*((char *)this + 0x470) != 0) {
        *(int *)((char *)this + 0x478) = *pValue;
        ((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000880a, 0, 0);
        *(int *)((char *)this + 0x17c) = *(int *)&gpGlobals->curtime;
    }
}
// END FUNCTION

// FUNCTION: 0x101a9e20 size=0x122
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CScriptedSentence.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1053dafc[];
extern double g_10449280;
extern float g_104454c4;
void sub_1000880a();


void CScriptedSentence::vfunc103()
{
	CBaseEntity *pEntity = (CBaseEntity *)this;
	{
		ScopeTrace trace(g_1053dafc, this ? (pEntity->m_name26c ? pEntity->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*((char *)this + 0x470) = 1;
	if (!pEntity->m_name26c) {
		pEntity->sub_100ac4e0((int)sub_1000880a, 0, 0);
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + g_10449280;
	}
	switch (*(int *)((char *)this + 0x468)) {
	case 1:
		*(int *)((char *)this + 0x464) = 0x46;
		break;
	case 2:
		*(int *)((char *)this + 0x464) = 0x4b;
		break;
	case 3:
		*(int *)((char *)this + 0x464) = 0;
		break;
	default:
		*(int *)((char *)this + 0x464) = 0x3c;
		break;
	}
	if (*(float *)((char *)this + 0x46c) <= g_104454c4) {
		*(int *)((char *)this + 0x468) = 0;
		*(float *)((char *)this + 0x46c) = 1.0f;
	} else {
		*(int *)((char *)this + 0x468) = 0;
	}
	pEntity->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x101a9fa0 size=0x100
#include "CUnknown101aa210.h"
#include "CEHandleGet.h"
#include "COutputEvent.h"

extern float g_104454c4;	// 0.0f

#define ES1(n) virtual void s##n();
#define ES10(p) ES1(p##0) ES1(p##1) ES1(p##2) ES1(p##3) ES1(p##4) ES1(p##5) ES1(p##6) ES1(p##7) ES1(p##8) ES1(p##9)
struct CEngineSlots57 {	// the engine interface up to slot 57
	ES10(0) ES10(1) ES10(2) ES10(3) ES10(4)
	ES1(50) ES1(51) ES1(52) ES1(53) ES1(54) ES1(55) ES1(56)
	virtual float vfunc57(int key);	// slot 57: the duration of a line
};
extern CEngineSlots57 *g_1070b22c;

struct CActorBindView {
	char m_pad0000[0x10c];
	unsigned int m_h10c;	// 0x10c: entity handle
	char m_pad0110[0x17c - 0x110];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x204 - 0x180];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x45c - 0x208];
	float m_flPause45c;	// 0x45c
	float m_flDelay460;	// 0x460
	char m_pad0464[0x470 - 0x464];
	char m_b470;	// 0x470
	char m_pad0471[0x494 - 0x471];
	COutputEvent m_Out494;	// 0x494

	int sub_100ac4e0(int func, int thinkTime, const char *szContext);
};

void sub_101cd940(void *pEntity);
void sub_10003297();	// the think function (stub)

// TARGET: CUnknown101aa210::sub_101a9fa0
void CUnknown101aa210::sub_101a9fa0()
{
	CActorBindView *p = (CActorBindView *)this;
	void *pNPC = sub_101aa210();
	if (pNPC) {
		int key = sub_101aa390(pNPC);
		float flDuration = g_1070b22c->vfunc57(key);
		CGlobalEntityList_Ent *pEnt = EHandle_Get(p->m_h10c);
		p->m_Out494.sub_100cd660(pEnt, this, flDuration + p->m_flDelay460);
		if (p->m_flags204 & 1)
			sub_101cd940(this);
		flDuration = flDuration + p->m_flPause45c + 0.1;
		if (flDuration < g_104454c4)
			flDuration = 0.0f;
		p->sub_100ac4e0((int)sub_10003297, 0, 0);
		p->m_flNextThink = gpGlobals->curtime + p->m_flDelay460 + flDuration;
		p->m_b470 = 0;
	} else {
		p->m_flNextThink = p->m_flDelay460 + gpGlobals->curtime + 0.5;
	}
}
// END FUNCTION

// FUNCTION: 0x101aa0e0 size=0x34
void sub_1000880a();

struct CThinkOwnerView {
    char pad0[0x17c];
    float m_flNextThink;
    char pad1[0x26c - 0x180];
    const char *m_name26c;
    char pad2[0x470 - 0x270];
    unsigned char m_b470;
    void sub_100ac4e0(void *pFunc, float flTime, const char *pszContext);
};

// TARGET: sub_101aa0e0
void __fastcall sub_101aa0e0(CThinkOwnerView *p)
{
    p->m_b470 = 1;
    if (p->m_name26c == 0)
        p->m_flNextThink = gpGlobals->curtime + 0.1;
    p->sub_100ac4e0((void *)sub_1000880a, 0.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x101aa130 size=0xa8
#include "CUnknown101aa210.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

struct CNpcHandleView : CEntityVSlots {
	char m_pad0004[0x5ce4 - 4];
	unsigned int m_h5ce4;	// 0x5ce4
};

bool CUnknown101aa210::sub_101aa130(void *pNPC)
{
	CNpcHandleView *pView = (CNpcHandleView *)pNPC;
	if (pView) {
		unsigned int flags = m_flags204;
		if (!(flags & 2) || (EHandle_Get(pView->m_h5ce4) && *(int *)((char *)EHandle_Get(pView->m_h5ce4) + 0xa8))) {
			CSlot483Arg arg;
			arg.b = ((unsigned char)flags >> 2) & 1;
			if (pView->slot483(arg))
				return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101aa210 size=0x127
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CUnknown101aa210.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern "C" int _strcmpi(const char *, const char *);
extern CGlobalEntityList g_106eb5d8;

struct SNamedEnt
{
	char pad0[0x94];
	void *pNPC;
	char pad1[0x11c - 0x98];
	const char *pszClassname;
};

struct SQueryFill
{
	void sub_101cccf0(const float *pCenter);
};

struct SSphereQuery
{
	int m_index;
	int m_count;
	SNamedEnt *m_list[256];

	SQueryFill *Fill() { return (SQueryFill *)((char *)this + 0xc); }
};

int __fastcall sub_101ccd40(int *p);

void *CUnknown101aa210::sub_101aa210()
{
	SNamedEnt *pEnt = (SNamedEnt *)g_106eb5d8.sub_100f7770(0, m_pszName454 ? m_pszName454 : g_106b8540, 0, 0);
	while (pEnt) {
		void *pNPC = pEnt->pNPC;
		if (pNPC && sub_101aa130(pNPC))
			return pNPC;
		pEnt = (SNamedEnt *)g_106eb5d8.sub_100f7770((CBaseEntity *)pEnt, m_pszName454 ? m_pszName454 : g_106b8540, 0, 0);
	}
	SSphereQuery query;
	int nRadius = m_n458;
	float *pCenter = vfunc220(nRadius, 0x2000, 0);
	query.Fill()->sub_101cccf0(pCenter);
	pEnt = (SNamedEnt *)sub_101ccd40(&query.m_index);
	while (pEnt) {
		if (_strcmpi(pEnt->pszClassname ? pEnt->pszClassname : g_106b8540, m_pszName454 ? m_pszName454 : g_106b8540) == 0) {
			pEnt = (SNamedEnt *)pEnt->pNPC;
			if (sub_101aa130(pEnt))
				return pEnt;
		}
		query.m_index++;
		pEnt = (SNamedEnt *)sub_101ccd40(&query.m_index);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa390 size=0x15e
#include "CBaseEntity.h"
#include "CScriptedSentence.h"
#include "CGlobalEntityList.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

#define V virtual void
#define S10(p) V p##0(); V p##1(); V p##2(); V p##3(); V p##4(); V p##5(); V p##6(); V p##7(); V p##8(); V p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct SSpeaker {
	S100(a0) S100(a1) S10(b0) S10(b1)
	virtual const float *vfunc220();
	S100(d0) S100(d1) S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5)
	V f0(); V f1(); V f2(); V f3();
	virtual int vfunc485(const char *pszName, int volume, int attenuation, int pitch, bool bConcurrent, int duration);
};
struct SEntListObj {
	int sub_1000b12c(const char *pszName, const float *origin, float radius, void *pCaller, void *pActivator);
};

extern "C" __declspec(dllimport) void __cdecl DevMsg(int level, const char *fmt, ...);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern SEntListObj g_106eb5d8;

#define STR(s) STRINGR_F((s).pszValue)

int CScriptedSentence::sub_101aa390(CBaseEntity *pTarget)
{
	if (!pTarget) {
		DevMsg(2, "Not Playing sentence %s\n", STR(m_iszSentence));
		return -1;
	}
	bool bConcurrent = false;
	if (!(m_flags204 & 8))
		bConcurrent = true;
	int pListener = 0;
	if (m_flags204 & 0x10) {
		pListener = m_pActivator;
	} else if (m_iszListener.pszValue) {
		float radius = m_flRadius;
		if (_strcmpi(STR(m_iszListener), "!player") == 0)
			radius = 56755.84f;
		pListener = g_106eb5d8.sub_1000b12c(STR(m_iszListener), ((SSpeaker *)pTarget)->vfunc220(), radius, this, 0);
	}
	int result = ((SSpeaker *)pTarget)->vfunc485(STR(m_iszSentence), *(int *)&m_flDelay, *(int *)&m_flVolume, m_iSoundLevel, bConcurrent, pListener);
	DevMsg(2, "Playing sentence %s\n", STR(m_iszSentence));
	m_Output47c.sub_100cd660(m_hActivator10c.Get(), this, 0.0f);
	return result;
}
// END FUNCTION
