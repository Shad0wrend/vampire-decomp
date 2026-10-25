// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100809c0 size=0x1e
#include "CSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CSceneEntity::vfunc5
CSceneEntity *CSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10080f60 size=0x8
// TARGET: CSceneEntity::vfunc103
void CSceneEntity::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10080f80 size=0x76
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

struct CSceneEntityUnit : CSceneEntity {
    void sub_10001226();
    void sub_10080f80();
};

void CSceneEntity::vfunc113()
{
    CSceneEntityUnit *u = (CSceneEntityUnit *)this;
    u->sub_10001226();
    unsigned int h = *(unsigned int *)((char *)this + 0x47c);
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity)
            return;
    }
    const char *pszName = *(const char **)((char *)this + 0x468);
    if (!pszName)
        pszName = g_106b8540;
    CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
    if (pTarget)
        *(unsigned int *)((char *)this + 0x47c) = *pTarget->vfunc1();
    else
        *(unsigned int *)((char *)this + 0x47c) = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10081020 size=0x118
#include "CSceneEntity.h"

struct SceneGlobals_t {
	char pad[0xc];
	float curtime;
};

struct SceneAutoView_t {
	char pad[0x4ac];
	char bTimed;
	char pad4ad[3];
	int nType;
	float flTime;
	float flElapsed;
	CSceneEntityScene *pScene;
};

extern SceneGlobals_t *g_1070b228;
void sub_10081190(const char *pszFormat, ...);

void CSceneEntity::vfunc241()
{
	SceneAutoView_t *pView = (SceneAutoView_t *)this;
	if (!pView->pScene)
		return;
	if (pView->pScene->sub_1007d190()) {
		switch (pView->nType) {
		case 1:
			vfunc245();
			break;
		case 2:
			vfunc244();
			break;
		default:
			vfunc244();
			break;
		}
	} else {
		if (!pView->bTimed)
			return;
		pView->flElapsed = (g_1070b228->curtime - sub_100ac720(0)) + pView->flElapsed;
		if (pView->flTime > 0.0f && pView->flElapsed < pView->flTime)
			return;
		switch (pView->nType) {
		case 1:
			sub_10081190("Automatically canceling playback\n");
			vfunc245();
			break;
		case 2:
			sub_10081190("Automatically resuming playback\n");
			vfunc244();
			break;
		default:
			sub_10081190("Unknown action %i, automatically resuming playback\n", pView->nType);
			vfunc244();
			break;
		}
	}
	pView->bTimed = 0;
	pView->nType = 0;
	pView->flElapsed = 0;
	pView->flTime = 0;
}
// END FUNCTION

// FUNCTION: 0x10081210 size=0x113
#include "IVEngineServerFull.h"

extern IVEngineServerFull *g_1070b22c;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);

void CSceneEntity::vfunc266(int unused, const char *pszArgs)
{
    char token[1024];
    const char *pData;
    vfunc243();
    m_bAutomateTimed = 0;
    m_nAutomateType = 0;
    m_flAutomateTime = 0;
    m_nAutomateField = 0;
    pData = g_1070b22c->ParseFile(pszArgs, token);
    if (_strcmpi(token, "automate") == 0) {
        pData = g_1070b22c->ParseFile(pData, token);
        if (_strcmpi(token, "Cancel") == 0)
            m_nAutomateType = 1;
        else if (_strcmpi(token, "Resume") == 0)
            m_nAutomateType = 2;
        if (m_nAutomateType != 0) {
            g_1070b22c->ParseFile(pData, token);
            m_flAutomateTime = (float)atof(token);
            if (m_flAutomateTime > 0.0f) {
                m_bAutomateTimed = 1;
                m_nAutomateField = 0;
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10081380 size=0x9a
#include <stdlib.h>
#include "CSceneEntity.h"
#include "CUnknown10078540.h"

struct CSceneEventSpeed	// the choreography event: text parameter, ramp state, elapsed time
{
	const char *sub_10075c50();
	int sub_10078610();
	int sub_100785d0();
	float sub_10075e70();
	void sub_1007dfc0(int value);
};

void CSceneEntity::vfunc265(void *pTarget, void *pEvent)
{
	CSceneEventSpeed *pSpeed = (CSceneEventSpeed *)pEvent;
	float flSpeed = (float)atof(pSpeed->sub_10075c50());
	if (pSpeed->sub_10078610() != -1)
	{
		int n = pSpeed->sub_100785d0();
		if (n <= 0)
			return;
		((CUnknown10078540 *)pSpeed)->sub_100785f0(n - 1);
	}
	((CSceneEventSpeed *)pTarget)->sub_1007dfc0(*(int *)&flSpeed);
	m_f49c = (m_f49c - (pSpeed->sub_10075e70() - m_f4a0) < 0.0f) ? 0.0f : m_f49c - (pSpeed->sub_10075e70() - m_f4a0);
	m_f4a0 = flSpeed;
}
// END FUNCTION

// FUNCTION: 0x10081620 size=0xad
#include "CSceneEntity.h"
#include "CGlobalEntityList.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CSceneActorX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8)
	PV(90) PV(91) PV(92)
	virtual void vfunc93(int moveType, int moveCollide);
	char m_pad0004[0x5cf0 - 4];
	float m_flTime5cf0;
	char m_pad5cf4[0x5db8 - 0x5cf4];
	float m_vCentroid[3];
	float m_vOrigin[3];

	void sub_10280de0(int a);
};

struct CSceneTargetX
{
	PV100(0)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18)
	PV(190) PV(191)
	virtual float *vfunc192(float *pOut);
	PV(193) PV(194) PV(195) PV(196) PV(197) PV(198) PV(199)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213) PV(214) PV(215) PV(216) PV(217) PV(218)
	virtual float *vfunc219();
};

struct CSceneEventX
{
	char m_pad0000[0x94];
	CSceneActorX *m_pActor;
};

struct CGlobalVars1070b228
{
	char m_pad0000[0xc];
	float curtime;
};

extern CGlobalEntityList g_106eb5d8;
extern CGlobalVars1070b228 *g_1070b228;

// TARGET: CSceneEntity::vfunc259
void CSceneEntity::vfunc259(int unused, void *pEvent, const char *pszTarget)
{
	CSceneActorX *pActor = ((CSceneEventX *)pEvent)->m_pActor;
	if (pActor) {
		CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
		if (pTarget) {
			pActor->vfunc93(4, 0);
			float vTemp[3];
			const float *pCentroid = ((CSceneTargetX *)pTarget)->vfunc192(vTemp);
			pActor->m_vCentroid[0] = pCentroid[0];
			pActor->m_vCentroid[1] = pCentroid[1];
			pActor->m_vCentroid[2] = pCentroid[2];
			const float *pOrigin = ((CSceneTargetX *)pTarget)->vfunc219();
			pActor->m_vOrigin[0] = pOrigin[0];
			pActor->m_vOrigin[1] = pOrigin[1];
			pActor->m_vOrigin[2] = pOrigin[2];
			pActor->sub_10280de0(0x39);
			pActor->m_flTime5cf0 = g_1070b228->curtime;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10081700 size=0x13f
#include "CAI_BaseNPCTroika.h"
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern "C" __declspec(dllimport) void __cdecl Q_SetExtension(char *, const char *, int);
struct FileSysX { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual char v9(const char *p, int a); };
extern FileSysX *g_1070b238;
extern CGlobalEntityList *g_10566458;
struct SceneEventX { char pad[0x98]; CAI_BaseNPCTroika *pActor; };
struct NpcX : CAI_BaseNPCTroika { void sub_102c0520(const char *, int, char); };

void CSceneEntity::vfunc260(int unused, void *pEvent, const char *pszTarget, int a4, int a5)
{
    if (!pEvent)
        return;
    NpcX *pActor = (NpcX *)((SceneEventX *)pEvent)->pActor;
    if (!pActor)
        return;
    char szName[260];
    Q_snprintf(szName, 260, "sound/%s", pszTarget);
    Q_SetExtension(szName, ".mp3", 260);
    if (!g_1070b238->v9(szName, 0)) {
        Q_snprintf(szName, 260, "*%s", pszTarget);
    } else {
        Q_snprintf(szName, 260, "*%s", pszTarget);
        Q_SetExtension(szName, ".mp3", 260);
    }
    CBasePlayer *pThis = (CBasePlayer *)this;
    if (pThis->sub_10081890())
        ((CBaseEntity *)pActor)->sub_100a8d30(pThis->sub_10081890());
    if (*((char *)pActor + 0x64c0)) {
        unsigned int h = *(unsigned int *)((char *)pActor + 0x6554);
        CGlobalEntityList_Ent *pEnt;
        if (h != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
            if (s->m_Serial == (int)(h >> 13))
                pEnt = s->m_pEntity;
            else
                pEnt = 0;
        } else
            pEnt = 0;
        if ((void *)pEnt != (void *)this)
            pActor->sub_102c0bb0();
    }
    pActor->sub_102c0520(szName, a5, *((char *)this + 0x57f));
}
// END FUNCTION

// FUNCTION: 0x100819b0 size=0x145
#include "CSceneEntity.h"
#include "CEHandleGet.h"
struct CSceneGlobalVars { char m_pad0000[0xc]; float curtime; };
extern CSceneGlobalVars *g_1070b228;
struct CSceneObj
{
	void *sub_1007a2c0(int index);
	void sub_1007e5a0(float flValue);
	void sub_1007d7f0(int nValue);
	char sub_1007d1e0();
};
struct CSceneAIView { char m_pad0000[0xfe8]; unsigned int m_hDialog; };
struct CSceneActorEntView { char m_pad0000[0x98]; CSceneAIView *m_pAI98; };
// TARGET: CSceneEntity::vfunc134
void CSceneEntity::vfunc134()
{
	if (!m_pScene4bc)
		return;
	if (!m_bPlaying498)
		return;
	m_b57c = 1;
	CSceneEventActor *pActor = (CSceneEventActor *)((CSceneObj *)m_pScene4bc)->sub_1007a2c0(0);
	CSceneActorEntView *pEnt;
	if (pActor && (pEnt = (CSceneActorEntView *)vfunc267(pActor->sub_10008a99())) != 0 && pEnt->m_pAI98 && EHandle_Get(pEnt->m_pAI98->m_hDialog))
		m_flNextThink = g_1070b228->curtime;
	else
		m_flNextThink = g_1070b228->curtime;
	if (m_bPlaying499) {
		vfunc241();
		m_b57c = 0;
		return;
	}
	m_f4a0 = g_1070b228->curtime - m_f4a8;
	((CSceneObj *)m_pScene4bc)->sub_1007e5a0(sub_10080ac0());
	((CSceneObj *)m_pScene4bc)->sub_1007d7f0(*(int *)&m_f4a0);
	if (m_pScene4bc) {
		if (!m_bPlaying499 && ((CSceneObj *)m_pScene4bc)->sub_1007d1e0()) {
			vfunc247();
			m_b57c = 0;
			return;
		}
		if (m_n574 == 1)
			sub_100846c0(m_pScene4bc);
	}
	m_b57c = 0;
}
// END FUNCTION

// FUNCTION: 0x100829e0 size=0xbb
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"

struct CGlobalVarsView
{
	char m_pad0000[0xc];
	float curtime;
};
extern CGlobalVarsView *g_1070b228;
void sub_100826b0(CSceneEntity *pEnt);

// TARGET: CSceneEntity::vfunc242
void CSceneEntity::vfunc242()
{
	if (m_pScene4bc && !m_bPlaying498)
	{
		m_bPlaying498 = 1;
		m_bPlaying499 = 0;
		m_f4a0 = 0;
		m_f4a4 = g_1070b228->curtime;
		m_f4a8 = g_1070b228->curtime;
		((CUnknown1007ce20 *)m_pScene4bc)->sub_1007cfc0(1, 0, 0);
		sub_10084170(m_pScene4bc);
		sub_100843d0(m_pScene4bc);
		sub_10081ed0();
		sub_10082c90();
		m_flNextThink = g_1070b228->curtime;
		if (m_b57e)
			sub_100826b0(this);
		m_list4cc.sub_100cd660(this, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10082b80 size=0x7f
#include "CSceneEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
void __stdcall sub_100845a0(void *pScene);
void sub_100828d0();

struct CHandleLookup
{
	static CGlobalEntityList_Ent *Get(unsigned int h)
	{
		if (h != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
			if (s->m_Serial == (int)(h >> 13))
				return s->m_pEntity;
		}
		return 0;
	}
};

void CSceneEntity::vfunc245()
{
	if (m_pScene4bc)
		sub_100845a0(m_pScene4bc);
	if (m_bPlaying498) {
		sub_10082d20();
		if (m_b57e)
			sub_100828d0();
		m_list4fc.sub_100cd660(CHandleLookup::Get(m_hPlayer10c), this, 0);
		m_bPlaying498 = 0;
		m_bPlaying499 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10083700 size=0x120
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"

void sub_10081190(const char *pszFormat, double flTime, const char *pszName);

void CSceneEntity::vfunc249(float a, int b, CSceneEvent *pEvent)
{
	CSceneEventActorEnt *pActor = 0;
	CSceneEventActor *pEventActor = pEvent->sub_10001b5e();
	if (pEventActor)
		pActor = vfunc267(pEventActor->sub_10008a99());

	sub_10081190("%8.4f:  finish %s\n", a, pEvent->sub_10075d00());

	switch (pEvent->sub_100029c8())
	{
	case 2:
		if (pActor)
			vfunc253(b, pActor, pEvent);
		break;
	case 10:
		if (pActor)
			vfunc255(b, pActor, pEvent);
		break;
	case 6:
		if (pActor)
			vfunc257(b, pActor, pEvent);
		break;
	case 7:
		if (pActor)
			vfunc263(b, pActor, pEvent);
		break;
	case 11:
		{
			CUnknown1007ce20 *pScene = pEvent->sub_10076710();
			if (pScene)
				pScene->sub_1007cfc0(1, 0, 0);
		}
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10083bf0 size=0x7e
#include "CSceneEntity.h"

__declspec(dllimport) void Warning(const char *pMsg, ...);

// TARGET: CSceneEntity::vfunc251
char CSceneEntity::vfunc251(float a, int b, CSceneEvent *pEvent)
{
	CSceneEventActorEnt *pActorEnt = 0;
	CSceneEventActor *pActor = pEvent->sub_10001b5e();
	if (pActor) {
		pActorEnt = vfunc267(pActor->sub_10008a99());
		if (!pActorEnt) {
			Warning("CSceneEntity unable find actor \"%s\"\n", pActor->sub_10008a99());
			return 1;
		}
	}
	if (pEvent->sub_100029c8() == 4 && pActorEnt->m_pNPC94 && pActorEnt->m_pNPC94->m_pNav5d34->sub_10012963())
		return 0;
	return 1;
}
// END FUNCTION
