// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006d1f0 size=0x6
#include "CBaseCineCam.h"
namespace lifted {
extern char g_106c816c;
}
int CBaseCineCam::vfunc80()
{
    return (int)&lifted::g_106c816c;
}
// END FUNCTION

// FUNCTION: 0x1006d210 size=0x3
#include "CBaseCineCam.h"
int CBaseCineCam::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1006d500 size=0x6
#include "CBaseCineCam.h"
#include "datamap.h"
namespace lifted {
extern char g_105463a8;
}
datamap_t *CBaseCineCam::vfunc82()
{
    return (datamap_t *)&lifted::g_105463a8;
}
// END FUNCTION

// FUNCTION: 0x1006d8f0 size=0x8
#include "CBaseCineCam.h"
#include "CBaseEntity.h"
#include "vampire.h"
// TARGET: CBaseCineCam::vfunc117
unsigned char CBaseCineCam::vfunc117()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1006d910 size=0x21
#include "CBaseCineCam.h"

struct V3 {
	float x, y, z;
};

float *CBaseCineCam::vfunc193(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x5ec);
	return out;
}
// END FUNCTION

// FUNCTION: 0x1006d950 size=0x36
#include "CBaseCineCam.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseCineCam *CBaseCineCam::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1006d9a0 size=0x11
struct CCineCamFields1006d9a0 {
    char pad0[0x204];
    unsigned char flags204;
    char pad1[0x640 - 0x205];
    unsigned char flag640;
    void sub_1006d9a0();
};
void CCineCamFields1006d9a0::sub_1006d9a0()
{
    if (flags204 & 2) {
        flag640 = 1;
    }
}
// END FUNCTION

// FUNCTION: 0x1006e6a0 size=0x9c
#include "CBaseCineCam.h"
#include "CUnknown1006e890.h"
struct EntWithEdict { char pad[0x2e0]; int m_edict; };
struct EntSlot { EntWithEdict *pEnt; unsigned int serial; };
struct EntListEntry { int pad; EntSlot s; };
extern EntListEntry *g_10566458;

inline EntWithEdict *HGet(unsigned int h)
{
    if (h != 0xffffffff) {
        EntSlot *p = &g_10566458[h & 0x1fff].s;
        if (p->serial == (h >> 13))
            return p->pEnt;
    }
    return 0;
}

bool CBaseCineCam::sub_1006e6a0(int a, int b, int c, int d, int e)
{
    if (m_flTime90 > gpGlobals->curtime)
        return true;
    if (!HGet(m_hTarget5d0))
        return false;
    if (b != HGet(*(volatile unsigned int *)&m_hTarget5d0)->m_edict)
        return false;
    return ((CUnknown1006e890 *)this)->sub_1006e890();
}
// END FUNCTION

// FUNCTION: 0x1006ff40 size=0x41d
#include "CFlameCluster.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseCineCam.h"
#include "CEHandleGet.h"
#include "CUnknown100290c0.h"
#include "CUnknown10738964.h"
#include "DebugOverlay.h"

extern CUnknown10738964 *g_106c7fa4;
extern unsigned int g_1070ba38;
void sub_10139550(const Vector *pIn, Vector *pOut);
void sub_10142e90(const Vector &vecStart, const Vector &vecEnd, int r, int g, int b, unsigned char a, float flWidth);
void sub_10143b70(const Vector &vecOrigin, const Vector &vecMins, const Vector &vecMaxs, int r, int g, int b, int a, float flDuration);
const char *sub_101d3730(const char *pszFormat);

// ConVar::GetInt (inline): 0 for a command, else the value
static inline int CineCamCvarInt(CUnknown10738964 *const &pVar)
{
	return pVar->vfunc1() ? 0 : pVar->m_n2c;
}

// TARGET: CBaseCineCam::vfunc123
void CBaseCineCam::vfunc123()
{
	if (CineCamCvarInt(g_106c7fa4) != 1)
		return;

	Vector vecOrigin = m_vecShot5ec;

	if (m_nState638 == 2 || m_nState638 == 1) {
		Vector vecDir;
		sub_10139550(&m_vecShot604, &vecDir);
		Vector vecEnd = vecOrigin + vecDir * 20.0f;
		sub_10142e90(vecOrigin, vecEnd, 0xff, 0xff, 0xff, 1, 0);
		sub_10143b70(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 0xff, 0xff, 0xff, 1, 0);
	}

	if (((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(&m_hShot610[0])) {
		vecOrigin = sub_1006f010(0);
		sub_10143b70(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 0, 0, 0xff, 1, 0);
	}

	if (((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(&m_hShot610[1])) {
		vecOrigin = sub_1006f010(1);
		sub_10143b70(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 0, 0xff, 0, 1, 0);
	}

	if (((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(&m_hShot610[2])) {
		vecOrigin = sub_1006f010(2);
		sub_10143b70(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 0x7d, 0, 0, 1, 0);
	}

	if (((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(&m_hShot610[3])) {
		vecOrigin = sub_1006f010(3);
		sub_10143b70(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 0x7d, 0, 0, 1, 0);
	}

	vecOrigin = sub_1006f670();
	sub_10143b70(vecOrigin, Vector(-3.0f, -3.0f, -3.0f), Vector(3.0f, 3.0f, 3.0f), g_1070ba38 % 50 + 200, 0, 0, 1, 0);
	sub_10143710(&vecOrigin.x, sub_101d3730("(%.1f, %.1f, %.1f"), 1, 0);
}
// END FUNCTION
