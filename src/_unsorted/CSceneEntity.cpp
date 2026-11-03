// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100803c0 size=0x6
extern datamap_t g_10548180;

datamap_t *CSceneEntity::vfunc82()
{
	return &g_10548180;
}
// END FUNCTION

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


struct SceneAutoView_t {
	char pad[0x4ac];
	char bTimed;
	char pad4ad[3];
	int nType;
	float flTime;
	float flElapsed;
	CSceneEntityScene *pScene;
};

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
		pView->flElapsed = (gpGlobals->curtime - sub_100ac720(0)) + pView->flElapsed;
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

// FUNCTION: 0x10081450 size=0x19
#include "CSceneEntity.h"
#include "CBaseFlex.h"

void CSceneEntity::vfunc252(int b, CBaseFlex *pActor, CSceneEvent *pEvent)
{
	pActor->vfunc286(b, pEvent);
}
// END FUNCTION

// FUNCTION: 0x10081480 size=0x14
struct CVirtObj10081480
{
	void v0(int a);
};

// TARGET: sub_10081480
void __stdcall sub_10081480(int a1, CVirtObj10081480 *pObj, int a3)
{
	void **vt = *(void ***)pObj;
	union {
		void *p;
		void (CVirtObj10081480::*pm)(int);
	} u;
	u.p = vt[287];
	(pObj->*u.pm)(a3);
}
// END FUNCTION

// FUNCTION: 0x100814b0 size=0x1f
#include "CSceneEntity.h"

// TARGET: CSceneEntity::vfunc254
void CSceneEntity::vfunc254(int unused, CSceneActorSlots *pActor, void *pEvent)
{
	pActor->vfunc286(m_pScene4bc, pEvent);
}
// END FUNCTION

// FUNCTION: 0x100814e0 size=0x14
#include "CSceneEntity.h"

// TARGET: CSceneEntity::vfunc255
void CSceneEntity::vfunc255(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent)
{
	void **vt = *(void ***)pActor;
	union {
		void *p;
		void (CSceneEventActorEnt::*pm)(CSceneEvent *);
	} u;
	u.p = vt[287];
	(pActor->*u.pm)(pEvent);
}
// END FUNCTION

// FUNCTION: 0x10081510 size=0x62
#include "CSceneEntity.h"
#include "CBaseAnimating.h"
#include "CBaseAnimatingOverlay.h"
__declspec(dllimport) void __cdecl Warning(const char *, ...);
// TARGET: CSceneEntity::vfunc256
void CSceneEntity::vfunc256(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent)
{
	CBaseAnimatingOverlay *pNPC = (CBaseAnimatingOverlay *)pActor->m_pNPC94;
	int iSequence = ((CBaseAnimating *)pActor)->sub_1008f7b0(pEvent->sub_10075c50());
	if (pNPC && iSequence != -1) {
		pNPC->sub_10099140(iSequence, pEvent->sub_10076b30(), 1);
		return;
	}
	Warning("Could not find gesture sequence %s\n", pEvent->sub_10075c50());
}
// END FUNCTION

// FUNCTION: 0x100815a0 size=0x14
struct CVirtObj100815a0
{
	void v0(int a);
};

void __stdcall sub_100815a0(int a1, CVirtObj100815a0 *pObj, int a3)
{
	void **vt = *(void ***)pObj;
	union {
		void *p;
		void (CVirtObj100815a0::*pm)(int);
	} u;
	u.p = vt[287];
	(pObj->*u.pm)(a3);
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


extern CGlobalEntityList g_106eb5d8;

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
			pActor->m_flTime5cf0 = gpGlobals->curtime;
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

// FUNCTION: 0x100818d0 size=0x1f
#include "CSceneEntity.h"
#include "CAI_BaseNPC.h"

void CSceneEntity::vfunc261(int unused, CSceneEventActorEnt *pActor, CBaseEntity *pEnt, int d, int e)
{
	if (pActor->m_pNPC94 && pEnt)
		((CAI_BaseNPC *)pActor->m_pNPC94)->sub_10279cc0(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10081900 size=0x3d
#include "CSceneEntity.h"
#include "CBaseFlex.h"
// TARGET: CSceneEntity::vfunc262
void CSceneEntity::vfunc262(int b, CBaseFlex *pActor, void *pEvent)
{
	sub_100843d0(m_pScene4bc);
	pActor->vfunc286(b, pEvent);
	if (m_n578 == 3)
		pActor->sub_10090b20();
}
// END FUNCTION

// FUNCTION: 0x10081950 size=0x14
struct CVirtObj10081950
{
	void v0(int a);
};

// TARGET: sub_10081950
void __stdcall sub_10081950(int a1, CVirtObj10081950 *pObj, int a3)
{
	void **vt = *(void ***)pObj;
	union {
		void *p;
		void (CVirtObj10081950::*pm)(int);
	} u;
	u.p = vt[287];
	(pObj->*u.pm)(a3);
}
// END FUNCTION

// FUNCTION: 0x100819b0 size=0x145
#include "CSceneEntity.h"
#include "CEHandleGet.h"
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
		m_flNextThink = gpGlobals->curtime;
	else
		m_flNextThink = gpGlobals->curtime;
	if (m_bPlaying499) {
		vfunc241();
		m_b57c = 0;
		return;
	}
	m_f4a0 = gpGlobals->curtime - m_f4a8;
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

// FUNCTION: 0x10081b60 size=0x20c
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CUnknown1007ce20.h"
#include "CUnknown1007a2c0.h"
#include "ScopeTrace.h"

struct CUnknown10072d90
{
	int m_n0;
	int m_n4;
	int m_n8;
	int m_nc;
	int m_n10;
	char *sub_10072d90();
};
void sub_100828d0();

struct CSceneSolidView : CBaseEntity
{
	void SetSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::SetSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc580(flags);
	}
	void SetSolid(int solid)
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(solid);
	}
};

void CSceneEntity::vfunc247()
{
	if (!m_bPlaying498)
		return;
	sub_10082db0();
	((CUnknown1007ce20 *)m_pScene4bc)->sub_1007cfc0(1, 0, 0);
	m_bPlaying498 = 0;
	m_bPlaying499 = 0;
	m_f4a0 = 0;
	sub_100821f0(m_n578);
	sub_100845a0(m_pScene4bc);
	if (m_n574 == 1) {
		for (int i = 0; i < ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
			CUnknown10072d90 *pElem = (CUnknown10072d90 *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
			if (pElem) {
				CSceneSolidView *pEnt = (CSceneSolidView *)vfunc268(pElem->sub_10072d90(), 0);
				if (pEnt) {
					pEnt->vfunc93(pElem->m_n4, pElem->m_n8);
					pEnt->SetSolidFlags(pElem->m_n10);
					pEnt->SetSolid(pElem->m_nc);
				}
			}
		}
	}
	m_list4e4.sub_100cd660(this, this, 0);
	sub_10084170(m_pScene4bc);
	sub_100847e0(m_pScene4bc);
	if (m_b57e)
		sub_100828d0();
}
// END FUNCTION

// FUNCTION: 0x100829e0 size=0xbb
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"

void sub_100826b0(CSceneEntity *pEnt);

// TARGET: CSceneEntity::vfunc242
void CSceneEntity::vfunc242()
{
	if (m_pScene4bc && !m_bPlaying498)
	{
		m_bPlaying498 = 1;
		m_bPlaying499 = 0;
		m_f4a0 = 0;
		m_f4a4 = gpGlobals->curtime;
		m_f4a8 = gpGlobals->curtime;
		((CUnknown1007ce20 *)m_pScene4bc)->sub_1007cfc0(1, 0, 0);
		sub_10084170(m_pScene4bc);
		sub_100843d0(m_pScene4bc);
		sub_10081ed0();
		sub_10082c90();
		m_flNextThink = gpGlobals->curtime;
		if (m_b57e)
			sub_100826b0(this);
		m_list4cc.sub_100cd660(this, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10082ad0 size=0x1c
#include "CSceneEntity.h"

// TARGET: CSceneEntity::vfunc243
void CSceneEntity::vfunc243()
{
	if (m_bPlaying498 && !m_bPlaying499)
		m_bPlaying499 = 1;
}
// END FUNCTION

// FUNCTION: 0x10082b00 size=0x56
#include "CSceneEntity.h"
#include "globalvars.h"
void __fastcall sub_1007e580(int *p);
void CSceneEntity::vfunc244()
{
	if (m_bPlaying498 && m_bPlaying499) {
		sub_1007e580((int *)m_pScene4bc);
		sub_100843d0(m_pScene4bc);
		m_bPlaying499 = 0;
		m_f4a4 = gpGlobals->curtime;
		m_flNextThink = gpGlobals->curtime;
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

// FUNCTION: 0x10082c20 size=0x42
#include "CSceneEntity.h"
extern char g_106b8540[];
extern void (*g_109f3628)(const char *, ...);
void CSceneEntity::vfunc246()
{
	vfunc245();
	g_109f3628("Reloading %s from disk\n", m_pszSceneFile450 ? m_pszSceneFile450 : g_106b8540);
	sub_10083a30(m_pszSceneFile450 ? m_pszSceneFile450 : g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x10082e60 size=0x5c
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"
#include "CUnknown1007ecf0.h"
#include "CUnknown100766f0.h"
class CUnknown1007ed10
{
public:
	char sub_1007ed10();
};
void CSceneEntity::vfunc264(CUnknown1007ed10 *pEvent1, int unused, CSceneEvent *pEvent)
{
	if (!pEvent1->sub_1007ed10()) {
		CUnknown1007ce20 *pScene = pEvent->sub_10076710();
		if (!pScene) {
			pScene = (CUnknown1007ce20 *)sub_100839c0(pEvent->sub_10075c50());
			((CUnknown1007ecf0 *)pScene)->sub_1007ecf0(1);
			((CUnknown100766f0 *)pEvent)->sub_100766f0((int)pScene);
			if (!pScene)
				return;
		}
		pScene->sub_1007cfc0(1, 0, 0);
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

// FUNCTION: 0x10083c90 size=0x30
#include "CSceneEntity.h"
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1054910c[];
CSceneEventActorEnt *CSceneEntity::vfunc267(const char *pszName)
{
	CBaseEntity *pEnt = vfunc268(pszName, 0);
	if (!pEnt)
		return 0;
	return (CSceneEventActorEnt *)__RTDynamicCast(pEnt, 0, g_10538764, g_1054910c, 0);
}
// END FUNCTION

// FUNCTION: 0x100847e0 size=0x16d
#define NV(n) virtual void vfunc##n();
#define NV10(p) NV(p##0) NV(p##1) NV(p##2) NV(p##3) NV(p##4) NV(p##5) NV(p##6) NV(p##7) NV(p##8) NV(p##9)
#define NV100(p) NV10(p##0) NV10(p##1) NV10(p##2) NV10(p##3) NV10(p##4) NV10(p##5) NV10(p##6) NV10(p##7) NV10(p##8) NV10(p##9)
struct SActor847e0 {
	char m_bType;
	const char *sub_10072d90();
};
struct SEvent847e0;
struct SScene847e0 {
	int sub_1007a2a0();
	SActor847e0 *sub_1007a2c0(int index);
	int sub_1007a250();
	SEvent847e0 *sub_1007a270(int index);
	char sub_1007ed10();
};
struct SEvent847e0 {
	int sub_10075b70();
	SScene847e0 *sub_10076710();
};
struct SNpc847e0 {
	NV100(0) NV100(1) NV100(2) NV100(3) NV100(4) NV100(5)
	NV10(60) NV(610) NV(611) NV(612) NV(613) NV(614)
	char m_pad0004[0x178 - 4];
	float m_f178;
	float m_f17c;
	char m_pad0180[0xfe8 - 0x180];
	EHANDLE m_hFe8;
	char m_pad0fec[0x6554 - 0xfec];
	EHANDLE m_h6554;
	void sub_1029f300(char c);
	void sub_10033f60(int a);
};
struct SActorEnt847e0 {
	char m_pad0000[0x98];
	SNpc847e0 *m_pNpc98;
};
extern struct SGlobals847e0 { char pad[0xc]; float curtime; float frametime; } *g_1070b228;
extern float g_1044f02c;

void CSceneEntity::sub_100847e0(void *pSceneArg)
{
	SScene847e0 *pScene = (SScene847e0 *)pSceneArg;
	if (pScene) {
		for (int i = 0; i < pScene->sub_1007a2a0(); i++) {
			SActor847e0 *pActor = pScene->sub_1007a2c0(i);
			if (pActor) {
				SActorEnt847e0 *pEnt = (SActorEnt847e0 *)vfunc267(pActor->sub_10072d90());
				if (pEnt) {
					SNpc847e0 *pNpc = pEnt->m_pNpc98;
					if (pNpc) {
						if (!pNpc->m_hFe8.Get() && !pNpc->m_h6554.Get()) {
							pNpc->sub_1029f300(pActor->m_bType);
							pNpc->vfunc614();
							pNpc->sub_10033f60(0);
							if (pNpc->m_f17c <= pNpc->m_f178) {
								float flFrame = g_1070b228->frametime;
								pNpc->m_f17c = flFrame * g_1044f02c + g_1070b228->curtime;
							}
						}
					}
				}
			}
		}
		for (int j = 0; j < pScene->sub_1007a250(); j++) {
			SEvent847e0 *pEvent = pScene->sub_1007a270(j);
			if (pEvent && pEvent->sub_10075b70() == 0xb && !pScene->sub_1007ed10()) {
				SScene847e0 *pSub = pEvent->sub_10076710();
				if (pSub)
					sub_1000d97c(pSub);
			}
		}
	}
}
// END FUNCTION
