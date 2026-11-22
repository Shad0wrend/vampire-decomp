// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 40 blocks
#include "vampire.h"

// FUNCTION: 0x1010d430 size=0x8
#include "CBaseEntity.h"
#include "CBreakable.h"
// TARGET: CBreakable::vfunc117
int CBreakable::vfunc117() { return CBaseEntity::vfunc117() & ~2; }
// END FUNCTION

// FUNCTION: 0x1010d450 size=0x6
#include "datamap.h"
#include "CBreakable.h"
namespace lifted {
extern char g_1056e590;
}
datamap_t *CBreakable::vfunc82()
{
    return (datamap_t *)&lifted::g_1056e590;
}
// END FUNCTION

// FUNCTION: 0x1010d470 size=0x5
int * sub_1010d4b0(void);
int * g_1070995c = ((int * (*)(int))sub_1010d4b0)(0);
// END FUNCTION

// FUNCTION: 0x1010d4b0 size=0xb0
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
extern int g_1056e590[2];
void sub_1000a3a8();
void sub_10015014();
void sub_1000e142();
void sub_1000a9ca();
void sub_1000c00e();
void sub_10011081();
void sub_1000432c();

int *sub_1010d4b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_angle", {0x450, 0}, 1, 2 },
        { 4, "m_Material", {0x454, 0}, 1, 2 },
        { 12, "m_hBreaker", {0x458, 0}, 1, 2 },
        { 2, "m_iszGibModel", {0x460, 0}, 1, 2 },
        { 1, "m_flPressureDelay", {0x464, 0}, 1, 6, "PressureDelay" },
        { 2, "m_iszExplosionParamEnt", {0x468, 0}, 1, 6, "explosion_params" },
        { 0, "InputBreak", {0, 0}, 1, 8, "Break", 0, (void *)sub_1000a3a8 },
        { 4, "InputSetHealth", {0, 0}, 1, 8, "SetHealth", 0, (void *)sub_10015014 },
        { 4, "InputAddHealth", {0, 0}, 1, 8, "AddHealth", 0, (void *)sub_1000e142 },
        { 4, "InputRemoveHealth", {0, 0}, 1, 8, "RemoveHealth", 0, (void *)sub_1000a9ca },
        { 4, "InputSetDamageable", {0, 0}, 1, 8, "SetDamageable", 0, (void *)sub_1000c00e },
        { 0, "CBreakableBreakTouch", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10011081 },
        { 0, "CBreakableDie", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000432c },
        { 10, "m_OnBreak", {0x46c, 0}, 1, 0x16, "OnBreak", g_1055dc70 },
        { 10, "m_OnHealthChanged", {0x484, 0}, 1, 0x16, "OnHealthChanged", g_1055dc70 },
    };
    g_1056e590[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1056e590[0] = (int)&dataDesc[1];
    return g_1056e590;
}
// END FUNCTION

// FUNCTION: 0x1010d590 size=0xd0
#include "CBreakable.h"

extern "C" {
int _strcmpi(const char *, const char *);
int atoi(const char *);
}
int *sub_10002095(const char **ppValue, const char *pszValue);

struct CBreakableBase
{
    bool sub_1009e430(const char *szKeyName, const char *szValue);
};

bool CBreakable::vfunc110(const char *szKeyName, const char *szValue)
{
    if (!_strcmpi(szKeyName, "material")) {
        int nMaterial = atoi(szValue);
        if (nMaterial >= 0 && nMaterial < 10)
            m_nMaterial = nMaterial;
        else
            m_nMaterial = 1;
    } else if (!_strcmpi(szKeyName, "deadmodel")) {
    } else if (!_strcmpi(szKeyName, "shards")) {
    } else if (!_strcmpi(szKeyName, "gibmodel")) {
        m_iszGibModel = *sub_10002095(&szValue, szValue);
    } else if (!_strcmpi(szKeyName, "lip")) {
    } else
        return ((CBreakableBase *)this)->sub_1009e430(szKeyName, szValue);
    return true;
}
// END FUNCTION

// FUNCTION: 0x1010d6a0 size=0x17b
#include "CBreakable.h"
#include "CFuncBrush.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "Vector.h"
extern char g_106b8540[];
void sub_10011081();
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

void CBreakable::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	pEnt->vfunc104();
	if (1 & pEnt->m_flags204)
		pEnt->m_nTakeDamage = 0;
	else
		pEnt->m_nTakeDamage = 2;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(pEnt->m_name26c));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	pEnt->vfunc93(8, 0);
	Vector angles = *(Vector *)((CFuncBrushSlots *)this)->slot221();
	*(float *)((char *)this + 0x450) = angles.y;
	angles.y = 0;
	pEnt->vfunc64((float *)&angles);
	pEnt->sub_100aaa40(4);
	int tmp;
	const char *pszModel = *pEnt->vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	pEnt->vfunc105(pszModel);
	*(void **)(0x1ec + (char *)this) = (void *)sub_10011081;
	if (1 & pEnt->m_flags204)
		*(int *)(0x1ec + (char *)this) = 0;
	if (!sub_1010efc0() && *(int *)((char *)this + 0x16c))
		pEnt->sub_100b3580(0x1000000);
	if (sub_1010efc0())
		pEnt->sub_100b3580(0x20000000);
	((CFuncBrushSlots *)this)->slot223();
}
// END FUNCTION

// FUNCTION: 0x1010d880 size=0x8
#include "CBreakable.h"
namespace lifted {
int sub_10007284();
}
bool CBreakable::vfunc223()
{
    lifted::sub_10007284();
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1010d8a0 size=0x5
#include "CBreakable.h"
#include "CBaseEntity.h"

// TARGET: CBreakable::vfunc113
// the game's 0x1010d8a0: a tail call (jmp) of CBaseEntity::vfunc113
void CBreakable::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x1010d8c0 size=0xa0
#include "CBreakable.h"

extern char g_106b8540[];

void CBreakable::vfunc104()
{
	const char *pGibName = "models/gibs/woodgibs.mdl";
	switch (m_nMaterial) {
	case 1:
		pGibName = "models/gibs/woodgibs.mdl";
		break;
	case 3:
		pGibName = "models/gibs/fleshgibs.mdl";
		break;
	case 6:
		pGibName = "models/computergibs.mdl";
		break;
	case 0:
	case 7:
		pGibName = "models/gibs/glass_shard.mdl";
		break;
	case 2:
		pGibName = "models/gibs/metalgibs.mdl";
		break;
	case 4:
		pGibName = "models/gibs/concgibs.mdl";
		break;
	case 8:
		pGibName = "models/gibs/rockgibs.mdl";
		break;
	case 5:
		pGibName = "models/gibs/ceilinggibs.mdl";
		break;
	}
	if (m_iszGibModel) {
		pGibName = (const char *)m_iszGibModel;
		if (pGibName == 0)
			pGibName = g_106b8540;
	}
	m_nGibModelIndex = engine->vfunc13(pGibName, 0);
}
// END FUNCTION

// FUNCTION: 0x1010d990 size=0x18e
#include "CBreakable.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CUnknown101c26d0.h"
#include "CBaseEntitySlots.h"
#include "globalvars.h"
#include "Vector.h"

void sub_1010f4e0();

void CBreakable::sub_1010d990(CBaseEntity *pOther)
{
	CBaseEntity *pAttacker = pOther->m_pEdict2e0
		? (*(CBaseEntity **)(pOther->m_pEdict2e0 + 0x40)
			? (CBaseEntity *)(*(CBaseEntity **)(pOther->m_pEdict2e0 + 0x40))->vfunc4()
			: 0)
		: 0;
	CBaseEntity *pThis = (CBaseEntity *)this;
	if (!pOther->m_pA8)
		return;
	if (!sub_1010efc0())
		return;
	if (pThis->m_flags204 & 2)
	{
		float flSpeed = ((const Vector *)(const void *)pOther->m_vel3d4)->Length() * 0.01;
		if (flSpeed >= pThis->m_iHealth)
		{
			*(int *)((char *)this + 0x1ec) = 0;
			{
				CUnknown101c26d0 info;
				((CBaseEntitySlots *)this)->slot142(info.sub_101c26d0(pAttacker, pAttacker, flSpeed, 1, 0, 0, -1));
			}
			{
				CUnknown101c26d0 info;
				pOther->sub_100a1250(info.sub_101c26d0(pAttacker, pAttacker, flSpeed * 0.25f, 4, 0, 0, -1));
			}
		}
	}
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)pAttacker + 0x270);
	Vector vecMins, vecMaxs;
	pCol->sub_100dcd90(&pCol->m_vecMins.x, &pCol->m_vecMaxs.x, &vecMins.x, &vecMaxs.x);
	if (pThis->m_flags204 & 4)
	{
		CCollisionProperty *pMyCol = (CCollisionProperty *)((char *)this + 0x270);
		if (pMyCol->vfunc2()[2] - 2.0f <= vecMins.z)
		{
			*(int *)((char *)this + 0x458) = *pOther->vfunc1();
			pThis->sub_100ac4e0((int)sub_1010f4e0, 0, 0);
			*(int *)((char *)this + 0x1ec) = 0;
			pThis->m_flNextThink = *(float *)((char *)this + 0x464) + gpGlobals->curtime;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1010db90 size=0x74
#include "CBreakable.h"
#include "inputdata_t.h"
#include "COutputEvent.h"

struct CBreakableView
{
	char m_pad0000[0x210];
	int m_iHealth;
	char m_pad0214[0x484 - 0x214];
	COutputEvent m_OnHealthChanged;
};

// TARGET: CBreakable::sub_1010db90
void CBreakable::sub_1010db90(inputdata_t *pInput)
{
	CBreakableView *v = (CBreakableView *)this;
	v->m_iHealth += pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	void *pActivator = pInput->pActivator;
	int nHealth = v->m_iHealth;
	((CVariantCopy *)&v->m_OnHealthChanged)->sub_1000b320(4, &nHealth);
	v->m_OnHealthChanged.sub_100cd300(*(CVariantCopy *)&v->m_OnHealthChanged, pActivator, this, 0);
	if (v->m_iHealth <= 0)
		sub_1010ddc0(pInput->pActivator);
}
// END FUNCTION

// FUNCTION: 0x1010dc30 size=0xf
// TARGET: sub_1010dc30
struct CUnknown1010dc30
{
    void sub_1010ddc0(int v);
    void sub_1010dc30(int *p);
};

void CUnknown1010dc30::sub_1010dc30(int *p)
{
    sub_1010ddc0(*p);
}
// END FUNCTION

// FUNCTION: 0x1010dc50 size=0x74
#include "CBreakable.h"
#include "inputdata_t.h"
#include "COutputEvent.h"

void CBreakable::sub_1010dc50(inputdata_t &data)
{
	m_iHealth -= data.value.fieldType == 4 ? data.value.iValue : 0;
	void *pActivator = data.pActivator;
	int value = m_iHealth;
	((CVariantCopy *)&m_OnHealthChanged)->sub_1000b320(4, &value);
	((COutputEvent *)&m_OnHealthChanged)->sub_100cd300(*(CVariantCopy *)&m_OnHealthChanged, pActivator, this, 0.0f);
	if (m_iHealth <= 0)
		sub_1010ddc0(data.pActivator);
}
// END FUNCTION

// FUNCTION: 0x1010dcf0 size=0x6a
#include "CBreakable.h"
#include "inputdata_t.h"
#include "COutputEvent.h"

struct CBreakableView
{
	char m_pad0000[0x210];
	int m_iHealth;
	char m_pad0214[0x484 - 0x214];
	COutputEvent m_OnHealthChanged;
};

// TARGET: CBreakable::sub_1010dcf0
void CBreakable::sub_1010dcf0(inputdata_t *pInput)
{
	CBreakableView *v = (CBreakableView *)this;
	v->m_iHealth = pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	void *pActivator = pInput->pActivator;
	int nHealth = v->m_iHealth;
	((CVariantCopy *)&v->m_OnHealthChanged)->sub_1000b320(4, &nHealth);
	v->m_OnHealthChanged.sub_100cd300(*(CVariantCopy *)&v->m_OnHealthChanged, pActivator, this, 0);
	if (v->m_iHealth <= 0)
		sub_1010ddc0(pInput->pActivator);
}
// END FUNCTION

// FUNCTION: 0x1010dd80 size=0x2b
struct CVariantArg1010dd80
{
	char pad0[8];
	int m_value;	// 0x08
	char pad1[0x18 - 0xc];
	int m_type;	// 0x18
};

struct CUnk1010dd80
{
	char pad0[0x1fc];
	int m_unk1fc;

	void sub_1010dd80(const CVariantArg1010dd80 *d);
};

// TARGET: CUnk1010dd80::sub_1010dd80
void CUnk1010dd80::sub_1010dd80(const CVariantArg1010dd80 *d)
{
	if (d->m_type == 4 && d->m_value != 0)
	{
		m_unk1fc = 2;
		return;
	}
	m_unk1fc = 1;
}
// END FUNCTION

// FUNCTION: 0x1010ddc0 size=0xa7
#include "CBreakable.h"

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct Vec3 { float x, y, z; };

struct CBreakSlots
{
	virtual void s0();
	virtual unsigned int *v1();
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5)
	virtual void b62(); virtual void b63();
	virtual void v64(Vec3 *pAngles);
	SL100(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual Vec3 *v221();
	SL10(e0) virtual void e10(); virtual void e11(); virtual void e12(); virtual void e13(); virtual void e14();
	virtual void e15(); virtual void e16(); virtual void e17(); virtual void e18();
	virtual void v241();

	unsigned int m_pad[0x450 / 4];
};

extern char g_1070ba40[];
extern void sub_10139610(const Vec3 *, void *, void *, void *);

void CBreakable::sub_1010ddc0(void *pEnt)
{
	CBreakSlots *self = (CBreakSlots *)this;
	if (!sub_1010efc0())
		return;
	Vec3 *pAng = self->v221();
	Vec3 v;
	v.x = pAng->x;
	v.y = pAng->y;
	v.z = pAng->z;
	v.y = *(float *)((char *)this + 0x450);
	self->v64(&v);
	sub_10139610(self->v221(), g_1070ba40, 0, 0);
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x458);
	if (pEnt) {
		*pHandle = *((CBreakSlots *)pEnt)->v1();
	} else {
		*pHandle = 0xffffffff;
	}
	self->v241();
}
// END FUNCTION

// FUNCTION: 0x1010dea0 size=0x1d8
#include "CTakeDamageInfo.h"
#include "CBreakable.h"
#include "CGameTrace.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "UTIL_BloodStream.h"

// TARGET: CBreakable::vfunc141

struct CEffectsServerView
{
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual void Sparks(const Vector &origin, int nMagnitude, int nTrailLength, const Vector *pvecDir);
	virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7();
	virtual void e8(const Vector &origin, const Vector &dir);
};

struct CBaseEntityTraceBase
{
	void sub_100a7de0(void *pInfo, const Vector *pDir, void *pTrace);
};

struct CBreakableEdictView
{
	char m_pad[0x2e0];
	int m_pEdict;
	int edict() const { return m_pEdict; }
	int entindex() const { return engine->vfunc35(edict()); }
};

void CBreakable::vfunc141(class CVDmg_t *pInfo, const Vector *pDir, struct CGameTrace *pTrace)
{
#define pInfo ((CTakeDamageInfo *)pInfo)
#define pTrace ((CGameTrace *)pTrace)
	if (enginerandom->vfunc2(0, 1))
	{
		switch (m_nMaterial)
		{
		case 6:
			((CEffectsServerView *)g_10566258)->Sparks(*(const Vector *)pTrace->m_endpos, 1, 1, 0);
			{
				float flVolume = enginerandom->vfunc1(0.7f, 1.0f);
				CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 0.8f);
				switch (enginerandom->vfunc2(0, 1))
				{
				case 0:
					enginesound->vfunc3(&filter, ((CBreakableEdictView *)this)->entindex(), 2, "buttons/spark5.wav", flVolume, 0.8f, 0, 100, 0, 0, 1, 0);
					break;
				case 1:
					enginesound->vfunc3(&filter, ((CBreakableEdictView *)this)->entindex(), 2, "buttons/spark6.wav", flVolume, 0.8f, 0, 100, 0, 0, 1, 0);
					break;
				}
			}
			break;
		case 7:
			Vector vecDir = *pDir * -1.0f;
			((CEffectsServerView *)g_10566258)->e8(*(const Vector *)pTrace->m_endpos, vecDir);
			break;
		}
	}

	((CBaseEntityTraceBase *)this)->sub_100a7de0(pInfo, pDir, pTrace);
#undef pTrace
#undef pInfo
}
// END FUNCTION

// FUNCTION: 0x1010e100 size=0x34a
#include "CBreakable.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"
#include "CVariantCopy.h"
#include "Vector.h"

struct CBrkColl {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void slot15(Vector *a, Vector *b);
};
struct COutputView {
	void sub_100cd300(CVariantCopy value, void *pActivator, void *pCaller, float flDelay);
};
extern Vector g_1070ba40;

static inline void SetHandle458(unsigned int &h, CEntityVSlots *p)
{
	if (p)
		h = *p->slot1();
	else
		h = 0xffffffff;
}

int CBreakable::vfunc142(CTakeDamageInfo *pInfoV)
{
	CTakeDamageInfo info = *(CTakeDamageInfo *)pInfoV;
	CEntityVSlots *self = (CEntityVSlots *)this;
	if (self->slot140(info.m_pInflictor)) {
		Vector dir, mins, maxs;
		((CBrkColl *)((char *)this + 0x270))->slot15(&mins, &maxs);
		if (info.m_pAttacker) {
			if (info.m_pInflictor == info.m_pAttacker) {
				dir = *((CEntityVSlots *)info.m_pAttacker)->slot220() - (mins + *self->slot214() * 0.5f);
				if ((((CBaseEntity *)info.m_pInflictor)->sub_100b3700() & 0x80) && (m_flags204 & 0x100)) {
					if ((info.m_pVDmg00 ? info.m_pVDmg00->m_field10 | info.m_nFlags38 : info.m_nFlags38) & 0x80)
						info.m_flDamage = (float)m_iHealth;
				}
			} else {
				dir = *((CEntityVSlots *)info.m_pAttacker)->slot220() - (mins + *self->slot214() * 0.5f);
			}
		} else {
			Vector v;
			v.sub_1010e530(-1.0f, 1.0f);
			dir = v;
		}
		if (!sub_1010efc0())
			return 0;
		if ((info.m_pVDmg00 ? info.m_pVDmg00->m_field10 | info.m_nFlags38 : info.m_nFlags38) & 0x80)
			info.m_flDamage += info.m_flDamage;
		if ((info.m_pVDmg00 ? info.m_pVDmg00->m_field10 | info.m_nFlags38 : info.m_nFlags38) & 0x20000)
			info.m_flDamage *= 0.1f;
		g_1070ba40 = -dir;
		VectorNormalize(g_1070ba40);
		float flDmg = info.m_pVDmg00 ? (float)info.m_pVDmg00->sub_101faa70() : info.m_flDamage;
		int nNew = (int)(m_iHealth - flDmg);
		void *pInflictor = info.m_pInflictor;
		m_iHealth = nNew;
		int nHealth = nNew;
		((CVariantCopy *)&m_OnHealthChanged)->sub_1000b320(4, &nHealth);
		((COutputView *)&m_OnHealthChanged)->sub_100cd300(*(CVariantCopy *)&m_OnHealthChanged, pInflictor, this, 0);
		if (m_iHealth <= 0) {
			self->slot144(&info);
			SetHandle458((unsigned int &)m_hBreaker, (CEntityVSlots *)info.m_pInflictor);
			self->slot241();
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1010e530 size=0x62
#include "Vector.h"
#include <stdlib.h>
// TARGET: Vector::sub_1010e530
void Vector::sub_1010e530(float minVal, float maxVal)
{
	float scale = (maxVal - minVal) * 3.051851e-5f;
	x = rand() * scale + minVal;
	y = rand() * scale + minVal;
	z = rand() * scale + minVal;
}
// END FUNCTION

// FUNCTION: 0x1010e5c0 size=0x26
#include "CBreakable.h"

void sub_10006d61();

// TARGET: CBreakable::vfunc230
void CBreakable::vfunc230(int a, void *b)
{
#define b ((int)b)
    void (CBreakable::*pBase)(int, int);
    *(void **)&pBase = (void *)sub_10006d61;
    (this->*pBase)(a, b);

    void (CBreakable::*pSlot75)(int, int);
    void **vt = *(void ***)this;
    *(void **)&pSlot75 = vt[0x12c / 4];
    (this->*pSlot75)(a, b);
#undef b
}
// END FUNCTION

// FUNCTION: 0x1010e600 size=0x8
#include "CBreakable.h"
bool CBreakable::vfunc74(int a0)
{
    return sub_1010efc0();
}
// END FUNCTION

// FUNCTION: 0x1010e620 size=0xef
#include "CBreakable.h"
#include "CCollisionProperty.h"

#define SLA(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLB(p) SLA(p##0) SLA(p##1) SLA(p##2) SLA(p##3) SLA(p##4) SLA(p##5) SLA(p##6) SLA(p##7) SLA(p##8) SLA(p##9)
struct EntVT1010e620 {
	SLB(a) SLB(b)
	virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203();
	virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207();
	virtual void a208(EntVT1010e620 *pEnt);
	virtual void s209(); virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213();
	virtual float *a214();
	void sub_100b3640(unsigned int flags);
};

struct BreakableView1010e620 {
	char pad[0x270];
	CCollisionProperty m_collision;
};
int sub_10003f35(EntVT1010e620 **pOut, int nMax, float *pA, float *pB, int a, int b);

void CBreakable::sub_1010e620()
{
	EntVT1010e620 *apEnts[256];
	float vA[3];
	float vB[3];
	float flMax;
	EntVT1010e620 *self = (EntVT1010e620 *)this;
	flMax = self->a214()[0];
	if (flMax < self->a214()[1])
		flMax = self->a214()[1];
	if (flMax < self->a214()[2])
		flMax = self->a214()[2];
	CCollisionProperty *col = &((BreakableView1010e620 *)this)->m_collision;
	col->sub_100dcd90(&col->m_vecMins.x, &col->m_vecMaxs.x, vA, vB);
	vA[2] = vB[2] - 1.0f;
	vB[2] = vB[2] + 8.0f;
	int n = sub_10003f35(apEnts, 256, vA, vB, 1, 0);
	if (n != 0) {
		for (int i = 0; i < n; i++) {
			apEnts[i]->sub_100b3640(1);
			apEnts[i]->a208(0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1010e750 size=0x6b4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBreakable.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CPVSFilter.h"
#include "CParamsExplosion.h"
#include "COutputEvent.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Vector.h"
#include <stdlib.h>

__declspec(dllimport) void DevWarning(const char *pszFmt, ...);
void sub_101c0b10();
extern CGlobalEntityList g_106eb5d8;
void sub_10104730(Vector *pVec, Vector *pAngles, int *pParams, void *pThis);
extern "C" void *__cdecl __RTDynamicCast(void *inptr, long VfDelta, void *SrcType, void *TargetType, int isReference);
extern char g_10538764[];
extern char g_1056b4b8[];

struct CBreakTempEnts
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void BreakModel(CRecipientFilter &filter, float delay, const Vector &pos, const Vector &size,
		const Vector &vel, int modelindex, int randomization, int count, float time, int flags);
};
extern CBreakTempEnts *g_10540528;

struct CBreakSolidFlags
{
	char m_pad0000[0x44];
	unsigned short m_usSolidFlags;	// 0x44
	int GetSolidFlags() const { return m_usSolidFlags; }
	void sub_100dc580(int flags);	// CCollisionProperty::SetSolidFlags
	void AddSolidFlags(int flags) { sub_100dc580(GetSolidFlags() | flags); }
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline const char *STRING(string_t s) { return s.pszValue ? s.pszValue : g_106b8540; }

struct CBreakEntity : CBaseEntity
{
	int edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); }
	CBreakSolidFlags *CollisionProp() { return (CBreakSolidFlags *)((char *)this + 0x270); }
	void AddSolidFlags(int flags)
	{
		ScopeTrace scope("CBaseEntity::AddSolidFlags", STRINGR(*(const char **)((char *)this + 0x26c)));
		CollisionProp()->AddSolidFlags(flags);
	}
	void sub_100a0420(string_t name);	// CBaseEntity::SetName
};

#define BREAK_SOUND(s) enginesound->vfunc3(&filter, pThis->entindex(), 2, s, fvol, 0.8f, 0, pitch, 0, 0, 1, 0)

void CBreakable::vfunc241()
{
	CBreakEntity *pThis = (CBreakEntity *)this;
	Vector vecSpot, vecVelocity;
	char cFlag = 0;
	int pitch;
	float fvol;

	pitch = 95 + enginerandom->vfunc2(0, 29);
	if (pitch > 97 && pitch < 103)
		pitch = 100;

	fvol = enginerandom->vfunc1(0.85f, 1.0f) + abs(m_iHealth) * 0.01;
	if (fvol > 1.0)
		fvol = 1.0f;

	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);

	switch (m_nMaterial)
	{
	case 0:
		switch (enginerandom->vfunc2(0, 1))
		{
		case 0: BREAK_SOUND("debris/bustglass1.wav"); break;
		case 1: BREAK_SOUND("debris/bustglass2.wav"); break;
		}
		cFlag = 1;
		break;
	case 1:
		switch (enginerandom->vfunc2(0, 1))
		{
		case 0: BREAK_SOUND("debris/bustcrate1.wav"); break;
		case 1: BREAK_SOUND("debris/bustcrate2.wav"); break;
		}
		cFlag = 8;
		break;
	case 2:
	case 6:
		switch (enginerandom->vfunc2(0, 1))
		{
		case 0: BREAK_SOUND("debris/bustmetal1.wav"); break;
		case 1: BREAK_SOUND("debris/bustmetal2.wav"); break;
		}
		cFlag = 2;
		break;
	case 3:
		switch (enginerandom->vfunc2(0, 1))
		{
		case 0: BREAK_SOUND("debris/bustflesh1.wav"); break;
		case 1: BREAK_SOUND("debris/bustflesh2.wav"); break;
		}
		cFlag = 4;
		break;
	case 4:
	case 8:
		switch (enginerandom->vfunc2(0, 1))
		{
		case 0: BREAK_SOUND("debris/bustconcrete1.wav"); break;
		case 1: BREAK_SOUND("debris/bustconcrete2.wav"); break;
		}
		cFlag = 0x40;
		break;
	case 5:
		BREAK_SOUND("debris/bustceiling.wav");
		break;
	}

	if (m_nMaterial != 9)
	{
		vecSpot = *((CEntityVSlots *)this)->slot215();
		CPVSFilter filter2(vecSpot);
		g_10540528->BreakModel(filter2, 0.0f, vecSpot, *((CEntityVSlots *)this)->slot214(), vecVelocity,
			m_nGibModelIndex, 100, 0, 2.5f, cFlag);
	}

	sub_1010e620();
	pThis->sub_100a0420(string_t(0));
	pThis->AddSolidFlags(4);
	pThis->sub_100b3b00();

	((COutputEvent *)((char *)this + 0x46c))->sub_100cd660(m_hBreaker.Get(), pThis, 0);

	((CEntityVSlots *)this)->slot225();
	pThis->sub_100ac4e0((int)sub_101c0b10, 0, 0);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;

	if (m_iszExplosionParamEnt.pszValue)
	{
		CParamsExplosion *pParams = (CParamsExplosion *)__RTDynamicCast(
			g_106eb5d8.sub_100f7770(0, STRING(m_iszExplosionParamEnt), m_hBreaker.Get(), 0),
			0, g_10538764, g_1056b4b8, 0);
		if (pParams)
		{
			Vector vecCenter = ((CEntityVSlots *)this)->slot192();
			sub_10104730(&vecCenter, ((CEntityVSlots *)this)->slot219(), pParams->sub_10104510(), this);
		}
		else
		{
			DevWarning("%s could not find explosion parameters: %s\n", pThis->sub_100ab4f0(),
				STRING(m_iszExplosionParamEnt));
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1010efc0 size=0xf
// TARGET: sub_1010efc0
struct CUnknown1010efc0
{
    char pad[0x454];
    int m_i454;

    bool sub_1010efc0();
};

bool CUnknown1010efc0::sub_1010efc0()
{
    return m_i454 != 7;
}
// END FUNCTION

// FUNCTION: 0x1010efe0 size=0x31
#include "CBreakable.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CBreakable::vfunc154
int CBreakable::vfunc154(int a, int b)
{
    if (m_nMaterial == 0) {
        return g_1070b244->vfunc2(0, 2) + 0x2c;
    }
    if (m_nMaterial == 7) {
        return 0x34;
    }
    return sub_1000b9e2(a, b);
}
// END FUNCTION

// FUNCTION: 0x1010f030 size=0x43
#include "platform.h"
#include "CBaseEntity.h"
#include "CPushable.h"

void *sub_100aa720(int size);
extern char g_1056eeec[];

DLL_EXPORT CBaseEntity *func_pushable()
{
	void *mem = sub_100aa720(0x4ac);
	CPushable *p;
	if (mem)
		p = ((CPushable *)mem)->sub_1010f130();
	else
		p = 0;
	((CBaseEntity *)p)->vfunc106(g_1056eeec);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x1010f0a0 size=0x6
#include "CPushable.h"
#include "datamap.h"
namespace lifted {
extern char g_1056e868;
}
datamap_t *CPushable::vfunc82()
{
    return (datamap_t *)&lifted::g_1056e868;
}
// END FUNCTION

// FUNCTION: 0x1010f0c0 size=0x5
int sub_1010f100(void);
int g_10709958 = ((int (*)(int))sub_1010f100)(0);
// END FUNCTION

// FUNCTION: 0x1010f100 size=0x1a
namespace lifted {
extern int g_1056e868;
extern int g_1056e86c;
extern char g_1056e8ac;
}
int sub_1010f100()
{
    lifted::g_1056e86c = 4;
    lifted::g_1056e868 = (int)&lifted::g_1056e8ac;
    return (int)&lifted::g_1056e868;
}
// END FUNCTION

// FUNCTION: 0x1010f130 size=0x59
#include "CPushable.h"

struct COutputEventCtor
{
	void sub_10002ddd();
};

extern char g_1045f1cc[];

// TARGET: CPushable::sub_1010f130
CPushable *CPushable::sub_1010f130()
{
	sub_1009d980(0);
	*(int *)((char *)this + 0x458) = -1;
	((COutputEventCtor *)((char *)this + 0x46c))->sub_10002ddd();
	((COutputEventCtor *)((char *)this + 0x484))->sub_10002ddd();
	*(void **)this = g_1045f1cc;
	*(int *)((char *)this + 0x4a0) = 0x3dcccccd;
	*(int *)((char *)this + 0x4a4) = 0x3dcccccd;
	*(int *)((char *)this + 0x49c) = 0x41f00000;
	*(int *)((char *)this + 0x4a8) = 0x48;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010f1b0 size=0x5
#include "CPushable.h"
bool CPushable::vfunc73(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010f1d0 size=0x5
#include "CPushable.h"
bool CPushable::vfunc74(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010f1f0 size=0x36
#include "CPushable.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPushable *CPushable::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010f240 size=0x36
#include "CBreakable.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBreakable::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010f290 size=0xdc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPushable.h"
#include "CBreakable.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

static inline bool SpawnFlagBit7(const unsigned int *pFlags)
{
    return ((*pFlags >> 7) & 1) != 0;
}

void CPushable::vfunc103()
{
    if (SpawnFlagBit7((unsigned int *)((char *)this + 0x204))) {
        ((CBreakable *)this)->CBreakable::vfunc103();
        return;
    }
    *(unsigned int *)((char *)this + 0x4c) |= 0x2000;
    ((CEntityVSlots *)this)->slot104();
    {
        const char *pszName = *(const char **)((char *)this + 0x26c);
        ScopeTrace trace("CBaseEntity::SetSolid", pszName ? pszName : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
    }
    ((CEntityVSlots *)this)->slot93(8, 0);
    int nDummy;
    const char *pszModel = *((CEntityVSlots *)this)->slot9(&nDummy);
    ((CEntityVSlots *)this)->slot105(pszModel ? pszModel : g_106b8540);
    ((CEntityVSlots *)this)->slot223();
}
// END FUNCTION

// FUNCTION: 0x1010f3b0 size=0x5
#include "CPushable.h"
#include "CBaseEntity.h"

// TARGET: CPushable::vfunc180
// the game's 0x1010f3b0: a tail call (jmp) of CBaseEntity::vfunc180
void CPushable::vfunc180()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x1010f3d0 size=0x43
#include "CPushable.h"
#include "CBaseEntity.h"
struct CPushablePhysObj
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(int a); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(void *a, void *b);
};
bool CPushable::vfunc223()
{
	((CBaseEntity *)this)->sub_100a5ea0(6, 0, 0, 0);
	CPushablePhysObj *pObj = (CPushablePhysObj *)m_pObj36c;
	if (pObj)
	{
		pObj->v11(m_field49c);
		pObj->v17(&m_field4a0, &m_field4a4);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1010f440 size=0x17
#include "CPushable.h"
#include "CBreakable.h"

// TARGET: CPushable::vfunc142
int CPushable::vfunc142(void *pInfo)
{
	if (*(char *)((char *)this + 0x204) & 0x80)
		return ((CBreakable *)this)->CBreakable::vfunc142((CTakeDamageInfo *)pInfo);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1010f470 size=0x35
#include "CPushable.h"
#include "CBreakable.h"
#include "CBaseEntity.h"
#include "gamevcollisionevent_t.h"
void CPushable::vfunc230(int index, gamevcollisionevent_t *pEvent)
{
	CBaseEntity *pOther = pEvent->pEntities[index == 0];
	if (pOther->m_pA8)
		((CBaseEntity *)this)->CBaseEntity::vfunc230(index, pEvent);
	else
		((CBreakable *)this)->CBreakable::vfunc230(index, (void *)pEvent);
}
// END FUNCTION

// FUNCTION: 0x1010f4c0 size=0x9
#include "CPushable.h"
int CPushable::vfunc35(int a) { return m_field4a8; }
// END FUNCTION
