// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 12 blocks
#include "vampire.h"

// FUNCTION: 0x1018cba0 size=0x6
#include "datamap.h"
#include "CPointAngleSensor.h"
namespace lifted {
extern char g_1058c1c8;
}
datamap_t * CPointAngleSensor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058c1c8);
}
// END FUNCTION

// FUNCTION: 0x1018cbc0 size=0x5
int * sub_1018cc00(void);
int * g_1072b008 = ((int * (*)(int))sub_1018cc00)(0);
// END FUNCTION

// FUNCTION: 0x1018cc00 size=0x108
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
extern int g_1058c1c8[2];
void sub_10010e88();

int *sub_1018cc00()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_nLookAtName", {0x450, 0}, 1, 6, "lookatname" },
        { 12, "m_hTargetEntity", {0x454, 0}, 1, 2 },
        { 12, "m_hLookAtEntity", {0x458, 0}, 1, 2 },
        { 1, "m_flDuration", {0x45c, 0}, 1, 6, "duration" },
        { 1, "m_flDotTolerance", {0x460, 0}, 1, 2 },
        { 15, "m_flFacingTime", {0x464, 0}, 1, 2 },
        { 5, "m_bFired", {0x468, 0}, 1, 2 },
        { 10, "m_OnFacingLookat", {0x46c, 0}, 1, 0x16, "OnFacingLookat", g_1055dc70 },
        { 10, "m_OnNotFacingLookat", {0x484, 0}, 1, 0x16, "OnNotFacingLookat", g_1055dc70 },
        { 0, "InputTest", {0, 0}, 1, 8, "Test", 0, (void *)sub_10010e88 },
    };
    g_1058c1c8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058c1c8[0] = (int)&dataDesc[1];
    return g_1058c1c8;
}
// END FUNCTION

// FUNCTION: 0x1018cd60 size=0x4e
#include "CPointAngleSensor.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern const float g_1044eb08;
bool CPointAngleSensor::vfunc110(const char *szKeyName, const char *szValue)
{
    if (!_strcmpi(szKeyName, "tolerance")) {
        m_flDotTolerance = cos(atof(szValue) * g_1044eb08);
        return true;
    }
    return CBaseEntity::sub_1009e430(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x1018cdd0 size=0xf
#include "CPointAngleSensor.h"
#include "globalvars.h"

void CPointAngleSensor::vfunc103()
{
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1018cdf0 size=0xe2
#include "CPointAngleSensor.h"

extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern char g_106b8540[];

#define STRING(x) ((x) ? (x) : g_106b8540)

static inline CBaseEntity *LookupHandle(const unsigned int *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

void CPointAngleSensor::vfunc113()
{
    CBaseEntity::vfunc113();
    if (!LookupHandle(&m_hTargetEntity)) {
        const char *pszName = *(const char **)((char *)this + 0x20c);
        CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, STRING(pszName), 0, 0);
        if (pEnt)
            m_hTargetEntity = *pEnt->vfunc1();
        else
            m_hTargetEntity = 0xffffffff;
    }
    if (!LookupHandle(&m_hLookAtEntity)) {
        const char *pszName = *(const char **)((char *)this + 0x450);
        CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, STRING(pszName), 0, 0);
        if (pEnt)
            m_hLookAtEntity = *pEnt->vfunc1();
        else
            m_hLookAtEntity = 0xffffffff;
    }
}
// END FUNCTION

// FUNCTION: 0x1018cf20 size=0xc7
#include "CPointAngleSensor.h"
#include "CEntityVSlots.h"
struct CBaseEntityVectorsUnit : CBaseEntity { void sub_100ad320(float *forward, float *right, float *up); };
bool CPointAngleSensor::sub_1018cf20(CBaseEntity *pTarget, CBaseEntity *pLookAt, float flDotTolerance)
{
    if (!pTarget || !pLookAt)
        return false;
    Vector forward;
    ((CBaseEntityVectorsUnit *)pTarget)->sub_100ad320(&forward.x, 0, 0);
    Vector *pA = ((CEntityVSlots *)pTarget)->slot220();
    Vector *pB = ((CEntityVSlots *)pLookAt)->slot220();
    Vector dir = *pB - *pA;
    VectorNormalize(dir);
    return m_flDotTolerance <= (dir.x * forward.x + forward.y * dir.y + forward.z * dir.z) ? true : false;
}
// END FUNCTION

// FUNCTION: 0x1018d030 size=0x172
#include "CPointAngleSensor.h"
#include "CGlobalEntityList.h"
#include "globalvars.h"

extern CGlobalEntityList *g_10566458;

inline CBaseEntity *LookupEnt(const unsigned int &h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)pSlot->m_pEntity;
	}
	return 0;
}

void CPointAngleSensor::vfunc134()
{
	if (LookupEnt(m_hTargetEntity) && LookupEnt(m_hLookAtEntity)) {
		if (sub_1018cf20(LookupEnt(m_hTargetEntity), LookupEnt(m_hLookAtEntity), m_flDotTolerance)) {
			if (!m_bFired) {
				if (m_flFacingTime == 0)
					m_flFacingTime = gpGlobals->curtime;
				if (m_flDuration + m_flFacingTime <= gpGlobals->curtime) {
					m_OnFacingLookat.sub_100cd660(this, this, 0);
					m_bFired = 1;
				}
			}
		} else if (m_bFired) {
			m_bFired = 0;
			m_flFacingTime = 0;
		}
		m_flNextThink = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x1018d210 size=0xa2
#include "CPointAngleSensor.h"

extern CGlobalEntityList *g_10566458;

struct CSensorHandle	// an entity handle with the game's inline Get
{
	unsigned int m_Index;

	__inline CBaseEntity *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
		if (pSlot->m_Serial == (int)(m_Index >> 13))
			return (CBaseEntity *)pSlot->m_pEntity;
		return 0;
	}
};

void CPointAngleSensor::sub_1018d210(inputdata_t *pInput)
{
	if (sub_1018cf20(((CSensorHandle *)&m_hTargetEntity)->Get(), ((CSensorHandle *)&m_hLookAtEntity)->Get(), m_flDotTolerance))
		m_OnFacingLookat.sub_100cd660(pInput->pActivator, this, 0);
	else
		m_OnNotFacingLookat.sub_100cd660(pInput->pActivator, this, 0);
}
// END FUNCTION

// FUNCTION: 0x1018d2f0 size=0x35
#include "CPointAngleSensor.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

int CPointAngleSensor::vfunc126(int a)
{
	void *member = (char *)this + 0x464;
	sub_1009d940(member, 3);
	int r = CBaseEntity::vfunc126(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1018d340 size=0x28
#include "CPointAngleSensor.h"
void __cdecl sub_10015311(void *p, int mode);
int CPointAngleSensor::vfunc127(int a)
{
	int r = CBaseEntity::vfunc127(a);
	sub_10015311((char *)this + 0x464, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1018d380 size=0x36
#include "CPointAngleSensor.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CPointAngleSensor::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
