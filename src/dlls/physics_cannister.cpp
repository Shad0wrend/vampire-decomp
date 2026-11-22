// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 15 blocks
#include "vampire.h"

// FUNCTION: 0x1014fac0 size=0xc
#include "CPhysicsCannister.h"
namespace lifted {
int sub_1000cfa9();
}
int CPhysicsCannister::vfunc226()
{
    *(char *)((char *)this + 0x1b1) = 1;
    return lifted::sub_1000cfa9();
}
// END FUNCTION

// FUNCTION: 0x1014fae0 size=0x67
#include "CPhysicsCannister.h"
#include "CCollisionProperty.h"

bool sub_102404e0(const float *a, const float *b, const float *c, const float *d, int e);

// TARGET: CPhysicsCannister::vfunc99
bool CPhysicsCannister::vfunc99(const float *pRay, int b, int c)
{
    float vA[3];
    float vB[3];
    CCollisionProperty *prop = (CCollisionProperty *)((char *)this + 0x270);
    prop->sub_100dcd90((const float *)((char *)prop + 4), (const float *)((char *)prop + 0x10), vB, vA);
    bool hit = sub_102404e0(vB, vA, pRay, pRay + 3, 0);
    if (!hit)
        return hit;
    return sub_100956e0(pRay, b, c);
}
// END FUNCTION

// FUNCTION: 0x1014fb70 size=0x3
#include "CPhysicsCannister.h"
bool CPhysicsCannister::vfunc158()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014fb90 size=0x5
#include "CPhysicsCannister.h"
bool CPhysicsCannister::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014fbb0 size=0x6
#include "datamap.h"
#include "CPhysicsCannister.h"
namespace lifted {
extern char g_1057c8b8;
}
datamap_t *CPhysicsCannister::vfunc82()
{
    return (datamap_t *)&lifted::g_1057c8b8;
}
// END FUNCTION

// FUNCTION: 0x1014fbd0 size=0x5
int * sub_1014fc10(void);
int * g_10723240 = ((int * (*)(int))sub_1014fc10)(0);
// END FUNCTION

// FUNCTION: 0x1014fc10 size=0x5e8
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
extern int g_1057c8b8[2];
void sub_1000ed4f();
void sub_10014051();
void sub_1000c617();
void sub_10002edc();
void sub_1000f79a();

int *sub_1014fc10()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_onActivate", {0x19fc, 0}, 1, 0x16, "OnActivate", g_1055dc70 },
        { 3, "m_thrustOrigin", {0x19b0, 0}, 1, 2, 0, 0, 0 },
        { 11, "m_pJet", {0x19e0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_active", {0x19e4, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_thrustTime", {0x19e8, 0}, 1, 6, "fuel", 0, 0 },
        { 1, "m_damage", {0x19ec, 0}, 1, 6, "expdamage", 0, 0 },
        { 1, "m_damageRadius", {0x19f0, 0}, 1, 6, "expradius", 0, 0 },
        { 15, "m_activateTime", {0x19f4, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_gasSound", {0x19f8, 0}, 1, 6, "gassound", 0, 0 },
        { 2, "m_iszExplosionParamEnt", {0x1a14, 0}, 1, 6, "explosion_params", 0, 0 },
        { 3, "m_thruster.m_thrustVector", {0x19c0, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_thruster.m_torqueVector", {0x19cc, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_thruster.m_thrust", {0x19d8, 0}, 1, 6, "thrust", 0, 0 },
        { 0, "InputActivate", {0, 0}, 1, 8, "Activate", 0, (void *)sub_1000ed4f },
        { 0, "InputDeactivate", {0, 0}, 1, 8, "Deactivate", 0, (void *)sub_10014051 },
        { 0, "InputExplode", {0, 0}, 1, 8, "Explode", 0, (void *)sub_1000c617 },
        { 0, "InputWake", {0, 0}, 1, 8, "Wake", 0, (void *)sub_10002edc },
        { 0, "CPhysicsCannisterBeginShutdownThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000f79a },
    };
    g_1057c8b8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057c8b8[0] = (int)&dataDesc[1];
    return g_1057c8b8;
}
// END FUNCTION

// FUNCTION: 0x10150380 size=0x120
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsCannister.h"
#include "CBaseCombatCharacter.h"
#include "CCollisionProperty.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

struct CannisterGlobals { char pad[0xc]; int curtime; };
extern CannisterGlobals *g_1070b228;

struct CannisterView : CBaseCombatCharacter {
};
struct CannisterSlots {
    VIEW_SLOT100(0) VIEW_SLOT100(1)
    VIEW_SLOT10(20) VIEW_SLOT(210) VIEW_SLOT(211) VIEW_SLOT(212) VIEW_SLOT(213) VIEW_SLOT(214) VIEW_SLOT(215) VIEW_SLOT(216) VIEW_SLOT(217) VIEW_SLOT(218) VIEW_SLOT(219)
    VIEW_SLOT(220) VIEW_SLOT(221) VIEW_SLOT(222)
    virtual void vfunc223();
};
struct CannisterFields {
    char m_pad0000[0x17c];
    int m_nNextThink;
    char m_pad0180[0x1fc - 0x180];
    int m_nTakeDamage;
    char m_pad0200[0x210 - 0x200];
    int m_iHealth;
};

void CPhysicsCannister::vfunc103()
{
    CBaseCombatCharacter *e = (CBaseCombatCharacter *)this;
    int t;
    e->vfunc104();
    const char *model = *e->vfunc9(&t);
    if (model == 0)
        model = g_106b8540;
    e->vfunc105(model);
    e->sub_10327960(-1);
    {
        ScopeTrace trace("CBaseEntity::AddSolidFlags", e->m_name26c ? e->m_name26c : g_106b8540);
        CCollisionProperty *c = (CCollisionProperty *)((char *)this + 0x270);
        c->sub_100dc580(*(unsigned short *)((char *)c + 0x44) | 1);
    }
    *(int *)((char *)this + 0x1fc) = 2;
    *(int *)((char *)this + 0x17c) = 0;
    if (*(int *)((char *)this + 0x210) <= 0)
        *(int *)((char *)this + 0x210) = 0x19;
    *(int *)((char *)this + 0x174) = g_1070b228->curtime;
    *(int *)((char *)this + 0x6f4) = 0;
    *(int *)((char *)this + 0x6f8) = 0;
    *(int *)((char *)this + 0x6f0) = 0;
    e->sub_100b3b00();
    *((char *)this + 0x19e4) = 0;
    e->sub_100b3580(0x20000000);
    ((CannisterSlots *)this)->vfunc223();
}
// END FUNCTION

// FUNCTION: 0x101504f0 size=0x28
#include "CPhysicsCannister.h"
#include "CUnknown101466e0.h"

void __stdcall sub_1000e78c(int a, int b, char c, int d);

// TARGET: CPhysicsCannister::vfunc223
char CPhysicsCannister::vfunc223()
{
    sub_1000e78c(6, 0, m_b204 & 1, 0);
    ((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10150530 size=0xc6
#include "CPhysicsCannister.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "matrix3x4_t.h"

extern char g_1057cf34[];

void sub_10138720(float *pMatrix, int column, Vector *pOut);

Vector CPhysicsCannister::sub_10150530(const Vector *pDir)
{
	matrix3x4_t mat;
	((CEntityVSlots *)this)->slot262(((CBaseAnimating *)this)->sub_10092d50((int)g_1057cf34), (void *)&mat);

	Vector vecDir;
	sub_10138720((float *)&mat, 2, &vecDir);
	sub_10138720((float *)&mat, 3, &m_vec19b0);

	vecDir = vecDir * -5.0f + *pDir;
	VectorNormalize(vecDir);
	return vecDir;
}
// END FUNCTION

// FUNCTION: 0x10150640 size=0x1c
#include "CPhysicsCannister.h"

extern char g_1046d524[];
void __fastcall sub_100cd2d0(char *p);
void __fastcall sub_103274d0(CPhysicsCannister *self);

// TARGET: CPhysicsCannister::sub_10150640
void CPhysicsCannister::sub_10150640()
{
	*(void **)this = g_1046d524;
	sub_100cd2d0((char *)this + 0x19fc);
	sub_103274d0(this);
}
// END FUNCTION

// FUNCTION: 0x10150670 size=0x1e
#include "CPhysicsCannister.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsCannister::vfunc5
CPhysicsCannister *CPhysicsCannister::vfunc5(unsigned int flags)
{
	sub_10001ebf();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101506a0 size=0x45
#include "CBaseCombatCharacter.h"
#include "CPhysicsCannister.h"
#include "engineiface.h"

void sub_10191ac0(const char *);
extern char g_106b8540[];

inline const char *STRINGR(const char *const &s)
{
	return s ? s : g_106b8540;
}

// TARGET: CPhysicsCannister::vfunc104
void CPhysicsCannister::vfunc104()
{
	CBaseCombatCharacter *p = (CBaseCombatCharacter *)this;
	int dummy;
	const char **name = p->vfunc9(&dummy);
	sub_10191ac0(*name);
	if (m_pszSound19f8)
		enginesound->vfunc0(STRINGR(m_pszSound19f8), 0);
	p->CBaseCombatCharacter::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10150710 size=0x104
#include "CVDmg_t.h"
#include "CPhysicsCannister.h"
struct CRandomHook { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
extern CRandomHook *g_1070b244;
extern char g_1070ba40[];

#define DMGBITS(p) ((p)->m_pDmg ? ((p)->m_pDmg->m_field10 | (p)->m_nDamageType) : (p)->m_nDamageType)

// TARGET: CPhysicsCannister::vfunc142
int CPhysicsCannister::vfunc142(CCannisterTakeInfo *pInfo)
{
	if (!m_nTakeDamage)
		return 0;
	if (!m_bLeaking) {
		float flDamage;
		if (pInfo->m_pDmg)
			flDamage = (float)pInfo->m_pDmg->sub_101faa70();
		else
			flDamage = pInfo->m_flDamage;
		m_iHealth = (int)((float)m_iHealth - flDamage);
		if (m_iHealth < 0)
			sub_10150f50();
		else if ((DMGBITS(pInfo) & 0x40) || ((DMGBITS(pInfo) & 0x85) && g_1070b244->RandomInt(1, 100) < 50))
			sub_10150910(pInfo->m_field2c, g_1070ba40);
		return 1;
	}
	if (gpGlobals->curtime - m_flLeakStart <= 0.1)
		return 0;
	if (DMGBITS(pInfo) & 0x400004a)
		sub_10150f50();
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10150870 size=0x76
#include "CPhysicsCannister.h"
#include "CGameTrace.h"

void CPhysicsCannister::vfunc141(CCannisterTakeInfo *pInfo, const Vector *pDir, CGameTrace *pTrace)
{
	if (!m_bLeaking && pTrace->m_hitgroup)
	{
		Vector vecDir(-pDir->x, -pDir->y, -pDir->z - 5.0f);
		VectorNormalize(vecDir);
		sub_10150910(pInfo->m_field2c, &vecDir);
	}
	sub_100a7de0(pInfo, pDir, pTrace);
}
// END FUNCTION
