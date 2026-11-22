// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 10 blocks
#include "vampire.h"

// FUNCTION: 0x101023b0 size=0x6
#include "datamap.h"
#include "CEnvMicrophone.h"
namespace lifted {
extern char g_105698f8;
}
datamap_t * CEnvMicrophone::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105698f8);
}
// END FUNCTION

// FUNCTION: 0x101023d0 size=0x5
int * sub_10102410(void);
int * g_10709118 = ((int * (*)(int))sub_10102410)(0);
// END FUNCTION

// FUNCTION: 0x10102410 size=0x52
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
extern int g_105698f8[2];
void sub_10003701();
void sub_10011022();

int *sub_10102410()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_nSoundMask", {0x458, 0}, 1, 6, "SoundMask" },
        { 1, "m_flSensitivity", {0x45c, 0}, 1, 6, "Sensitivity" },
        { 1, "m_flSmoothFactor", {0x460, 0}, 1, 6, "SmoothFactor" },
        { 5, "m_bDisabled", {0x450, 0}, 1, 6, "StartDisabled" },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_10003701 },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_10011022 },
        { 10, "m_SoundLevel", {0x464, 0}, 1, 0x16, "SoundLevel", g_1055dc70 },
    };
    g_105698f8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105698f8[0] = (int)&dataDesc[1];
    return g_105698f8;
}
// END FUNCTION

// FUNCTION: 0x10102490 size=0xd1
#include "CEnvMicrophone.h"

extern char g_10569a70[];


void CEnvMicrophone::vfunc103()
{
	for (unsigned int off = 0; off < 0x20; off += 8) {
		if (*(unsigned int *)(g_10569a70 + off) & m_flags204)
			m_nSpeakerFlags |= *(unsigned int *)(g_10569a70 + off + 4);
	}
	if (m_flSensitivity == 0.0f)
		m_flSensitivity = 1.0f;
	else if (m_flSensitivity > 10.0f)
		m_flSensitivity = 10.0f;
	m_flSmoothFactor = (m_flSmoothFactor > 0.9) ? 0.9 : ((m_flSmoothFactor < 0.0f) ? 0.0f : m_flSmoothFactor);
	if (!m_bDisabled)
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101025b0 size=0xc9
#include "CGlobalEntityList.h"
#include "CEnvMicrophone.h"

extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern void (__cdecl *g_109f362c)(const char *fmt, ...);

static inline CBaseEntity *LookupHandle(const unsigned long *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

void CEnvMicrophone::vfunc113()
{
    CBaseEntity::vfunc113();
    const char *pszTarget = *(const char **)((char *)this + 0x20c);
    if (pszTarget) {
        CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
        if (pEnt)
            m_hMeasureTarget.m_Index = *pEnt->vfunc1();
        else
            m_hMeasureTarget.m_Index = 0xffffffff;
        if (LookupHandle(&m_hMeasureTarget.m_Index)) {
            if (*(int *)((char *)LookupHandle(&m_hMeasureTarget.m_Index) + 0x2e0))
                return;
        }
        g_109f362c("EnvMicrophone - Measure target not found or measure target with no origin!\n");
    }
    m_hMeasureTarget.m_Index = *vfunc1();
}
// END FUNCTION

// FUNCTION: 0x101026c0 size=0x28
struct CUnk101026c0
{
    char pad0000[0x17c];
    float m_f17c;
    char pad0180[0x450 - 0x180];
    unsigned char m_b450;

    void sub_101026c0(int unused);
};

// TARGET: CUnk101026c0::sub_101026c0
void CUnk101026c0::sub_101026c0(int unused)
{
    if (m_b450)
    {
        m_b450 = 0;
        m_f17c = gpGlobals->curtime + 0.1;
    }
}
// END FUNCTION

// FUNCTION: 0x10102700 size=0x14
struct CUnknown10102700 { void sub_10102700(int); };
void CUnknown10102700::sub_10102700(int a0)
{
    *(char *)((char *)this + 0x450) = 1;
    *(int *)((char *)this + 0x17c) = 0;
}
// END FUNCTION

// FUNCTION: 0x10102730 size=0x10d
#include "CEnvMicrophone.h"
#include "CSound.h"
#include "CEHandleGet.h"

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CEntityOriginView
{
    SV100(a) SV100(b)
    SV10(c0) SV10(c1)
    virtual const Vector *vfunc220();
};

bool CEnvMicrophone::sub_10102730(CSound *pSound, float *pLevel)
{
    CEntityOriginView *pTarget = (CEntityOriginView *)EHandle_Get((const unsigned int &)m_hMeasureTarget.m_Index);
    const Vector *pOrigin = pTarget->vfunc220();
    float dx = pSound->m_vecOrigin.x - pOrigin->x;
    float dy = pSound->m_vecOrigin.y - pOrigin->y;
    float dz = pSound->m_vecOrigin.z - pOrigin->z;
    float flSqr = dz * dz;
    flSqr += dx * dx;
    flSqr += dy * dy;
    float flDist = FastSqrt(flSqr);
    if (flDist == 0.0f) {
        *pLevel = 1.0f;
        return true;
    }
    float flRadius = pSound->m_iVolume * m_flSensitivity;
    if (flDist <= flRadius) {
        float flLevel = 1.0f - flDist / flRadius;
        *pLevel = flLevel;
        *pLevel = (flLevel > 1.0f) ? 1.0f : ((flLevel < 0.0f) ? 0.0f : flLevel);
        return true;
    }
    *pLevel = 0.0f;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10102890 size=0x10a
#include "CSound.h"
#include "CEnvMicrophone.h"
#include "CSoundEnt.h"
#include <math.h>

struct CMicSound	// the fields of a sound record used here (see CSoundEntSlot)
{
	char m_pad0000[4];
	unsigned int m_iType;	// 0x04
	char m_pad0008[0x18 - 8];
	int m_iNext;	// 0x18
};


extern float g_10459634;	// 0.005f
int sub_101bb0f0();	// CSoundEnt::ActiveList (stub 0x10012120)

void CEnvMicrophone::vfunc134()
{
	int iSound = sub_101bb0f0();
	float flMax; flMax = 0.0f;
	CMicSound *pSound;
	for (; iSound != -1; iSound = pSound->m_iNext)
	{
		pSound = (CMicSound *)CSoundEnt::sub_101bb150(iSound);
		if (pSound && (m_nSpeakerFlags & pSound->m_iType))
		{
			float flLevel; flLevel = 0.0f;
			if (sub_10102730((CSound *)pSound, &flLevel) && flLevel > flMax)
				flMax = flLevel;
		}
	}
	if (flMax != m_SoundLevel.Get())
	{
		if (fabs(flMax - m_SoundLevel.Get()) < g_10459634)
			m_SoundLevel.Set(flMax, this, this);
		else
			m_SoundLevel.Set((1.0f - m_flSmoothFactor) * flMax + m_SoundLevel.Get() * m_flSmoothFactor, this, this);
	}
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101029f0 size=0x2b
#include "CEnvMicrophone.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CEnvMicrophone::vfunc5
CBaseEntity *CEnvMicrophone::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x464))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
