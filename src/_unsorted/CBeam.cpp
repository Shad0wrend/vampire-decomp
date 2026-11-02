// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ba370 size=0x6
#include "CBeam.h"
namespace lifted {
extern char g_106d16f0;
}
int CBeam::vfunc80()
{
    return (int)&lifted::g_106d16f0;
}
// END FUNCTION

// FUNCTION: 0x100ba390 size=0x3
#include "CBeam.h"
int CBeam::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100babc0 size=0x6
#include "CBeam.h"
namespace lifted {
extern char g_1055a97c;
}
datamap_t * CBeam::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1055a97c);
}
// END FUNCTION

// FUNCTION: 0x100bac50 size=0x2c
#include "CBeam.h"

// TARGET: CBeam::CBeam
CBeam::CBeam() : CBaseEntity(0)
{
	*(int *)((char *)this + 0x4e4) = -1;
}
// END FUNCTION

// FUNCTION: 0x100bacc0 size=0x90
#include "CBeam.h"
#include "TempVector.h"

Vector *CBeam::vfunc215()
{
	Vector &vec = AllocTempVector();
	VectorAdd(*(Vector *)sub_100bb270(), *(Vector *)sub_100bb440(), vec);
	vec *= 0.5f;
	return &vec;
}
// END FUNCTION

// FUNCTION: 0x100bad80 size=0x1e
#include "CBeam.h"

void sub_100aa7b0(void *p);

// TARGET: CBeam::vfunc5
CBeam *CBeam::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100badb0 size=0x53
#include "CBeam.h"

struct CModelInfoBeam {
	virtual void s0(); virtual void s1();
	virtual const void *GetModel(int modelindex);
	virtual void s3(); virtual void s4(); virtual void s5();
	virtual int GetModelType(const void *model);
	virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual int GetModelIndex(const char *name);
};
extern CModelInfoBeam *g_1070b250;
extern void (*g_109f3628)(const char *, ...);
void sub_101cf4a0(CBaseEntity *pEnt, const char *pszName);

// TARGET: CBeam::vfunc105
void CBeam::vfunc105(const char *pszModelName)
{
	int index = g_1070b250->GetModelIndex(pszModelName);
	const void *pModel = g_1070b250->GetModel(index);
	if (pModel && g_1070b250->GetModelType(pModel) != 2)
		g_109f3628("Setting CBeam to non-sprite model %s\n", pszModelName);
	sub_101cf4a0(this, pszModelName);
}
// END FUNCTION

// FUNCTION: 0x100bae30 size=0x97
#include "CBeam.h"
#include "CCollisionProperty.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CBeam::vfunc103
void CBeam::vfunc103()
{
    vfunc93(0, 0);
    const char *name = m_name26c;
    if (name == 0)
        name = g_106b8540;
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    --*g_109f3680;
    *(int *)((char *)this + 0x16c) = 2;
    vfunc104();
}
// END FUNCTION

// FUNCTION: 0x100baf00 size=0x8e
#include "CBeam.h"
extern CGlobalEntityList *g_10566458;

struct CHandleX {
    unsigned int m_Index;
    CBaseEntity *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if (s->m_Serial == (int)(m_Index >> 13))
                return (CBaseEntity *)s->m_pEntity;
        }
        return 0;
    }
};

struct CBeamH : CBeam {
    CHandleX m_hAttach;
    void Run();
};

void CBeam::vfunc104()
{
    if (vfunc97())
        sub_100bafc0(vfunc97());
    CBeamH *p = (CBeamH *)this;
    if (p->m_hAttach.Get() != 0)
        sub_100bb030(p->m_hAttach.Get());
}
// END FUNCTION

// FUNCTION: 0x100bc130 size=0x93
#include "CBeam.h"
#include "CBaseEntity.h"

struct CCheckTransmitInfo_t { char pad[0x10]; unsigned char *m_pPVS; };

// TARGET: CBeam::vfunc87
void CBeam::vfunc87(void *pCheckTransmitInfo)
{
    CCheckTransmitInfo_t *pInfo = (CCheckTransmitInfo_t *)pCheckTransmitInfo;
    int edict = m_pEdict2e0;
    int idx = engine->vfunc35(edict);
    if (!(pInfo->m_pPVS[idx >> 3] & (1 << (idx & 7)))) {
        CBaseEntity::vfunc87(pInfo);
        EHANDLE *p = (EHANDLE *)&m_hEndEntity;
        for (int i = 10; i != 0; i--, p++) {
            if (*p)
                (*p)->vfunc87(pInfo);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100bc200 size=0x128
#include "CBeam.h"
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int index, int line, const char *text, int a, int r, int g, int b, int al);
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct BeamEntView {
    V100(a) V100(b) V10(c0)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
    virtual const float *GetAbsOrigin();
};
int CBeam::vfunc124()
{
    int offset = CBaseEntity::vfunc124();
    if (*((char *)this + 0x224) & 1) {
        char tempstr[512];
        BeamEntView *pEnt = (BeamEntView *)this;
        Q_snprintf(tempstr, sizeof(tempstr), "start: (%.2f,%.2f,%.2f)", pEnt->GetAbsOrigin()[0], pEnt->GetAbsOrigin()[1], pEnt->GetAbsOrigin()[2]);
        int edict = m_pEdict2e0;
        sub_101434b0(engine->vfunc35(edict), offset, tempstr, 0, 255, 255, 255, 255);
        offset++;
        Q_snprintf(tempstr, sizeof(tempstr), "end  : (%.2f,%.2f,%.2f)", m_vecEndPos[0], m_vecEndPos[1], m_vecEndPos[2]);
        edict = m_pEdict2e0;
        sub_101434b0(engine->vfunc35(edict), offset, tempstr, 0, 255, 255, 255, 255);
        offset++;
    }
    return offset;
}
// END FUNCTION
