// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010d430 size=0x8
#include "CBaseEntity.h"
#include "CBreakable.h"
// TARGET: CBreakable::vfunc117
char CBreakable::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
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

void CBreakable::sub_1010d6a0()
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

void CBreakable::vfunc141(CTakeDamageInfo *pInfo, const Vector *pDir, CGameTrace *pTrace)
{
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

// TARGET: CBreakable::sub_1010e100
int CBreakable::sub_1010e100(void *pInfoV)
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
		((CVariantCopy *)m_out0484)->sub_1000b320(4, &nHealth);
		((COutputView *)m_out0484)->sub_100cd300(*(CVariantCopy *)m_out0484, pInflictor, this, 0);
		if (m_iHealth <= 0) {
			self->slot144(&info);
			SetHandle458(m_h458, (CEntityVSlots *)info.m_pInflictor);
			self->slot241();
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1010e5c0 size=0x26
#include "CBreakable.h"

void sub_10006d61();

// TARGET: CBreakable::vfunc230
void CBreakable::vfunc230(int a, int b)
{
    void (CBreakable::*pBase)(int, int);
    *(void **)&pBase = (void *)sub_10006d61;
    (this->*pBase)(a, b);

    void (CBreakable::*pSlot75)(int, int);
    void **vt = *(void ***)this;
    *(void **)&pSlot75 = vt[0x12c / 4];
    (this->*pSlot75)(a, b);
}
// END FUNCTION

// FUNCTION: 0x1010e600 size=0x8
#include "CBreakable.h"
namespace lifted {
int sub_10012e1d();
}
int CBreakable::vfunc74(int a0)
{
    return lifted::sub_10012e1d();
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

void CBreakable::sub_1010e750()
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

	((COutputEvent *)((char *)this + 0x46c))->sub_100cd660(((EHANDLE &)m_h458).Get(), pThis, 0);

	((CEntityVSlots *)this)->slot225();
	pThis->sub_100ac4e0((int)sub_101c0b10, 0, 0);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;

	if (m_iszExplosionParamEnt.pszValue)
	{
		CParamsExplosion *pParams = (CParamsExplosion *)__RTDynamicCast(
			g_106eb5d8.sub_100f7770(0, STRING(m_iszExplosionParamEnt), ((EHANDLE &)m_h458).Get(), 0),
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

CBreakable *CBreakable::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
