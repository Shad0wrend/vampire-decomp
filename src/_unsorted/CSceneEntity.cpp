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
