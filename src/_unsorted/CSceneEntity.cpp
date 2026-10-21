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
