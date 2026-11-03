// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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

CPointAngleSensor *CPointAngleSensor::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
