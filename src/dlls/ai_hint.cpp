// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 46 blocks
#include "vampire.h"

// FUNCTION: 0x102d0370 size=0x6
#include "CAI_Hint.h"
#include "datamap.h"
namespace lifted {
extern char g_106099f0;
}
datamap_t *CAI_Hint::vfunc82()
{
    return (datamap_t *)&lifted::g_106099f0;
}
// END FUNCTION

// FUNCTION: 0x102d0390 size=0x5
int * sub_102d03d0(void);
int * g_1092543c = ((int * (*)(int))sub_102d03d0)(0);
// END FUNCTION

// FUNCTION: 0x102d03d0 size=0x368
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
extern int g_106099f0[2];
void sub_100073fb();
void sub_10015320();
void sub_1000b6c2();
void sub_1000f3b7();
void sub_100011bd();

int *sub_102d03d0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_strActivity", {0x450, 0}, 1, 2 },
        { 4, "m_nHintType", {0x5dc, 0}, 1, 6, "HintType" },
        { 12, "m_hHintOwner", {0x5e0, 0}, 1, 2 },
        { 4, "m_nNodeID", {0x5e4, 0}, 1, 2 },
        { 4, "m_iDisabled", {0x5e8, 0}, 1, 6, "StartHintDisabled" },
        { 15, "m_flNextUseTime", {0x5ec, 0}, 1, 2 },
        { 2, "m_strGroup", {0x5f0, 0}, 1, 6, "Group" },
        { 1, "m_flTargetAngleRange", {0x454, 0}, 1, 6, "target_angle_range" },
        { 1, "m_flTargetAngleRangeDot", {0x458, 0}, 1, 2 },
        { 1, "m_flTargetDistMin", {0x45c, 0}, 1, 6, "target_dist_min" },
        { 1, "m_flTargetDistMax", {0x460, 0}, 1, 6, "target_dist_max" },
        { 1, "m_flHintRating", {0x464, 0}, 1, 6, "hint_rating" },
        { 2, "m_strTargetName", {0x468, 0}, 1, 6, "target_name" },
        { 4, "m_iIPPercent", {0x46c, 0}, 1, 6, "ip_percent" },
        { 4, "m_iGroupID", {0x470, 0}, 1, 6, "group_id" },
        { 2, "m_iszUserData", {0x5d4, 0}, 1, 6, "UserData" },
        { 0, "InputEnableHint", {0, 0}, 1, 8, "EnableHint", 0, (void *)sub_100073fb },
        { 0, "InputDisableHint", {0, 0}, 1, 8, "DisableHint", 0, (void *)sub_10015320 },
        { 0, "InputWalk", {0, 0}, 1, 8, "Walk", 0, (void *)sub_1000b6c2 },
        { 0, "InputDontWalk", {0, 0}, 1, 8, "DontWalk", 0, (void *)sub_1000f3b7 },
        { 2, "InputSetUserData", {0, 0}, 1, 8, "SetUserData", 0, (void *)sub_100011bd },
        { 10, "m_OnNPCArrival", {0x5f4, 0}, 1, 0x16, "OnNPCArrival", g_1055dc70 },
        { 10, "m_OnNPCKicked", {0x5bc, 0}, 1, 0x16, "OnNPCKicked", g_1055dc70 },
        { 10, "m_OnAnimEvent[0]", {0x4fc, 0}, 1, 0x16, "OnAnimEvent1", g_1055dc70 },
        { 10, "m_OnAnimEvent[1]", {0x514, 0}, 1, 0x16, "OnAnimEvent2", g_1055dc70 },
        { 10, "m_OnAnimEvent[2]", {0x52c, 0}, 1, 0x16, "OnAnimEvent3", g_1055dc70 },
        { 10, "m_OnAnimEvent[3]", {0x544, 0}, 1, 0x16, "OnAnimEvent4", g_1055dc70 },
        { 10, "m_OnAnimEvent[4]", {0x55c, 0}, 1, 0x16, "OnAnimEvent5", g_1055dc70 },
        { 10, "m_OnAnimEvent[5]", {0x574, 0}, 1, 0x16, "OnAnimEvent6", g_1055dc70 },
        { 10, "m_OnAnimEvent[6]", {0x58c, 0}, 1, 0x16, "OnAnimEvent7", g_1055dc70 },
        { 10, "m_OnAnimEvent[7]", {0x5a4, 0}, 1, 0x16, "OnAnimEvent8", g_1055dc70 },
    };
    g_106099f0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_106099f0[0] = (int)&dataDesc[1];
    return g_106099f0;
}
// END FUNCTION

// FUNCTION: 0x102d0820 size=0x5
inline int pcd_initial_10925444() { return 0xffffffff; }
int g_10925444 = pcd_initial_10925444();
// END FUNCTION

// FUNCTION: 0x102d0860 size=0x14
#include "CAI_Hint.h"

// TARGET: CAI_Hint::vfunc77
void CAI_Hint::vfunc77()
{
	sub_100a8710();
	*(int *)((char *)this + 0x5e8) = 1;
}
// END FUNCTION

// FUNCTION: 0x102d0890 size=0x14
#include "CAI_Hint.h"

// TARGET: CAI_Hint::vfunc78
void CAI_Hint::vfunc78()
{
	sub_100a8990();
	*(int *)((char *)this + 0x5e8) = 0;
}
// END FUNCTION

// FUNCTION: 0x102d08c0 size=0x8
#include "CAI_Hint.h"
// TARGET: CAI_Hint::vfunc119
void CAI_Hint::vfunc119()
{
	vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102d08e0 size=0x16
#include "CPhysBox.h"

void CPhysBox::sub_102d08e0(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x5f4))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x102d0910 size=0x7c
#include "CBaseEntity.h"
#include <string.h>

class CUnk102d0910;
struct CUnk102d0910Sub {
    void sub_100cd660(CUnk102d0910 *pOwner, int arg, int flags);
};

class CUnk102d0910 : public CBaseEntity {
public:
    char m_padBase[0x5bc - sizeof(CBaseEntity)];
    CUnk102d0910Sub m_sub;	// 0x5bc
    char m_pad5bc[0x5d8 - 0x5bc - sizeof(CUnk102d0910Sub)];
    CUnk102d0910 *m_pNext;	// 0x5d8
    char m_pad5dc[0x5f0 - 0x5dc];
    const char *m_pszName;	// 0x5f0
    void sub_102d0910(int arg);
};
extern CUnk102d0910 *g_10925450;

void CUnk102d0910::sub_102d0910(int arg)
{
    m_sub.sub_100cd660(this, arg, 0);
    const char *pszName = m_pszName ? m_pszName : "";
    if (!*pszName) {
        vfunc77();
        return;
    }
    for (CUnk102d0910 *p = g_10925450; p; p = p->m_pNext) {
        const char *pszOther = p->m_pszName ? p->m_pszName : "";
        if (!_strcmpi(pszName, pszOther))
            p->vfunc77();
    }
}
// END FUNCTION

// FUNCTION: 0x102d09b0 size=0x28
#include "CPropHaunted.h"

struct CUnknown102d09b0 {
    char pad_0000[0x4e4];
    void sub_102d09b0(CBaseEntity *pOther, int i);
};

// TARGET: CUnknown102d09b0::sub_102d09b0
void CUnknown102d09b0::sub_102d09b0(CBaseEntity *pOther, int i)
{
    if (i >= 1 && i <= 8)
        ((CPropHauntedSub *)((char *)this + 0x4e4 + i * 0x18))->sub_100cd660(pOther, (CBaseEntity *)this, 0);
}
// END FUNCTION

// FUNCTION: 0x102d09f0 size=0x16
struct CThis100a8990 { void sub_100a8990(); };

// TARGET: sub_102d09f0
void __fastcall sub_102d09f0(void *pThis, int, int)
{
	((CThis100a8990 *)pThis)->sub_100a8990();
	*(int *)((char *)pThis + 0x5e8) = 0;
}
// END FUNCTION

// FUNCTION: 0x102d0a20 size=0x16
struct CThis100a8710 { void sub_100a8710(); };

// TARGET: sub_102d0a20
void __fastcall sub_102d0a20(void *pThis, int, int)
{
	((CThis100a8710 *)pThis)->sub_100a8710();
	*(int *)((char *)pThis + 0x5e8) = 1;
}
// END FUNCTION

// FUNCTION: 0x102d0a50 size=0x1b
// TARGET: sub_102d0a50
struct CUnk102d0a50Target {
    void sub_102f97c0(int a);
};
struct CUnk102d0a50 {
    CUnk102d0a50Target *sub_102d3e60();
    void sub_102d0a50(int a);
};
void CUnk102d0a50::sub_102d0a50(int a)
{
    CUnk102d0a50Target *p = sub_102d3e60();
    if (p) {
        a = 1;
        p->sub_102f97c0(a);
    }
}
// END FUNCTION

// FUNCTION: 0x102d0a80 size=0x1b
// TARGET: sub_102d0a80
struct CUnk102d0a80Target {
    void sub_102f97c0(int a);
};
struct CUnk102d0a80 {
    CUnk102d0a80Target *sub_102d3e60();
    void sub_102d0a80(int a);
};
void CUnk102d0a80::sub_102d0a80(int a)
{
    CUnk102d0a80Target *p = sub_102d3e60();
    if (p) {
        a = 0;
        p->sub_102f97c0(a);
    }
}
// END FUNCTION

// FUNCTION: 0x102d0ab0 size=0x48
extern void (*g_109f3890)(char *dst, const char *src, int n);
struct CAI_FailView {
    char m_pad[0x478];
    char m_szFail[0x80];
    float m_flFailTime;
    void sub_102d0ab0(const char *pszMsg);
};
void CAI_FailView::sub_102d0ab0(const char *pszMsg)
{
    if (pszMsg)
        g_109f3890(m_szFail, pszMsg, 0x80);
    else
        g_109f3890(m_szFail, "Unknown failure", 0x80);
    m_flFailTime = gpGlobals->curtime + 10.0f;
}
// END FUNCTION

// FUNCTION: 0x102d0b20 size=0x24
extern char g_106b8540[];

struct CUnknown102d0b20 {
	void sub_102d0b20();
};

// TARGET: CUnknown102d0b20::sub_102d0b20
void CUnknown102d0b20::sub_102d0b20()
{
	char *p = g_106b8540;
	char *dst = (char *)this + 0x478;
	char c;
	do {
		c = *p;
		*(char *)(dst + (p - g_106b8540)) = c;
		p++;
	} while (c != 0);
	*(int *)((char *)this + 0x4f8) = 0;
}
// END FUNCTION

// FUNCTION: 0x102d0b60 size=0x4d9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_Hint.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include <math.h>

struct CInspectStatLevels { float sub_1006caa0(int level); };	// stub 0x1000c874
struct CInspectStatOwner
{
	int sub_1006cf30(const char *pszName);	// stub 0x1000fb46
	CInspectStatLevels *sub_1006cff0(int id);
};
extern CInspectStatOwner g_106c7c34;
extern float g_104454c4;
void __fastcall sub_100b3b00(CAI_Hint *p);

struct CAI_HintNameView
{
	char m_pad0000[0x26c];
	const char *m_name26c;
};

void CAI_Hint::vfunc103()
{
	static int s_nStat = g_106c7c34.sub_1006cf30("NPC_Cover_Distance_Scalar");
	CInspectStatLevels *pStat = g_106c7c34.sub_1006cff0(s_nStat);
	{
		CAI_HintNameView *pView = (CAI_HintNameView *)this;
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (pView->m_name26c ? pView->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	sub_100b3b00(this);
	float flNew;
	switch (m_n5dc) {
	case 0x27d8:
		if (m_f454 == g_104454c4) m_f454 = 17.0f;
		if (m_f45c == g_104454c4) m_f45c = 256.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 + 43.0f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 1;
		m_f464 = flNew;
		break;
	case 100:
	case 101:
		if (m_f454 == g_104454c4) m_f454 = 60.0f;
		if (m_f45c == g_104454c4) m_f45c = 256.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		if (m_f45c == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 1;
		m_f464 = flNew;
		break;
	case 0x283c:
		if (m_f454 == g_104454c4) m_f454 = 60.0f;
		if (m_f45c == g_104454c4) m_f45c = 256.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 4;
		m_f464 = flNew;
		break;
	case 0x283d:
		if (m_f454 == g_104454c4) m_f454 = 10.0f;
		if (m_f45c == g_104454c4) m_f45c = 64.0f;
		if (m_f460 == g_104454c4) m_f460 = 256.0f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 8;
		m_f464 = flNew;
		break;
	case 0x28a0:
		if (m_f454 == g_104454c4) m_f454 = 10.0f;
		if (m_f45c == g_104454c4) m_f45c = 64.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 0x10;
		m_f464 = flNew;
		break;
	}
	if (m_n470 < 1 || m_n470 > 32)
		m_n470 = -1;
	else
		m_n470 = 1 << (m_n470 - 1);
}
// END FUNCTION

// FUNCTION: 0x102d1180 size=0x48
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CUnknown102f46d0.h"
class CBaseEntity;
extern CUnknown102f46d0 *g_1093407c;
struct CAI_VecView : CAI_BaseNPC {
    char m_pad[0x5e4 - sizeof(CAI_BaseNPC)];
    int m_n5e4;
    void sub_102d1180(void *pObj, Vector *pOut);
};
void CAI_VecView::sub_102d1180(void *pObj, Vector *pOut)
{
    if (m_n5e4 != -1)
        *pOut = g_1093407c->sub_102f46d0(pObj, m_n5e4);
    else
        *pOut = *(const Vector *)vfunc217();
}
// END FUNCTION

// FUNCTION: 0x102d11f0 size=0x1d
// TARGET: sub_102d11f0
float sub_102d12e0();
void sub_101d2f40(int a, float f);
int __stdcall sub_102d11f0(int a)
{
    sub_101d2f40(a, sub_102d12e0());
    return a;
}
// END FUNCTION

// FUNCTION: 0x102d1220 size=0x90
#include "CUnknown102d1220.h"

extern "C" unsigned int __cdecl strlen(const char *);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern char g_106b8540[];

class COverlay {
public:
	char m_pad0[0x26c];
	const char *volatile m_pszName;
	char m_pad270[0x5dc - 0x270];
	int m_nKey;

	const char *GetName()
	{
		const char *p = m_pszName;
		return p ? p : g_106b8540;
	}

	bool NamesMatch(const char *pszName)
	{
		if (GetName() == pszName)
			return true;
		int diff;
		unsigned int len = strlen(pszName);
		if (len == 0)
			diff = (int)m_pszName;
		else if (pszName[len - 1] != '*')
			diff = _strcmpi(GetName(), pszName);
		else
			diff = _strnicmp(GetName(), pszName, len - 1);
		return diff == 0;
	}

	bool Check(int key, const char *pszName)
	{
		if (key == m_nKey && NamesMatch(pszName))
			return true;
		return false;
	}
};

bool CUnknown102d1220::sub_102d1220(int key, const char *pszName)
{
	return ((COverlay *)this)->Check(key, pszName);
}
// END FUNCTION

// FUNCTION: 0x102d12e0 size=0x24
extern void *g_1093407c;
struct CUnknown102f47b0Callee {
    float sub_102f47b0(int handle);
};

// TARGET: sub_102d12e0
float __fastcall sub_102d12e0(void *pSelf)
{
    int handle = *(int *)((char *)pSelf + 0x5e4);
    if (handle != -1) {
        return ((CUnknown102f47b0Callee *)g_1093407c)->sub_102f47b0(handle);
    }
    float *pValue = ((float *(__fastcall *)(void *))(*(void ***)pSelf)[0x374 / 4])(pSelf);
    return pValue[1];
}
// END FUNCTION

// FUNCTION: 0x102d1320 size=0x18
// TARGET: CAI_Hint::vfunc163
#include "CAI_Hint.h"
char CAI_Hint::vfunc163()
{
    if (m_n5e8 != 0) {
        return 0;
    }
    return m_n5dc == 0xd;
}
// END FUNCTION

// FUNCTION: 0x102d1350 size=0x94
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

struct EntInfo { CBaseEntity *p; unsigned int serial; int x; };
struct EntList { int pad; EntInfo e[1]; };
extern EntList *g_10566458;

static inline CBaseEntity *HandleGet(unsigned int h)
{
	if (h != 0xFFFFFFFF) {
		EntInfo *info = &g_10566458->e[h & 0x1fff];
		if (info->serial == (h >> 13))
			return info->p;
	}
	return 0;
}

static inline bool HandleIsValid(unsigned int h)
{
	if (h != 0xFFFFFFFF) {
		EntInfo *info = &g_10566458->e[h & 0x1fff];
		if (info->serial == (h >> 13) && info->p)
			return true;
	}
	return false;
}

bool CAI_BaseNPC::sub_102d1350(CBaseEntity *pEnt)
{
	volatile unsigned int *ph = (unsigned int *)((char *)this + 0x5e0);
	if (HandleGet(*ph) != pEnt && HandleIsValid(*ph))
		return false;
	if (pEnt)
		*ph = *pEnt->vfunc1();
	else
		*ph = 0xFFFFFFFF;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102d1420 size=0x1f
#include "globalvars.h"

struct CUnk102d1420
{
    char pad[0x5e0];
    int m_5e0;
    char pad2[0x5ec - 0x5e4];
    float m_5ec;
    void sub_102d1420(float flTime);
};
void CUnk102d1420::sub_102d1420(float flTime)
{
    m_5e0 = -1;
    m_5ec = flTime + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x102d1450 size=0x4b
#include "CAI_Hint.h"
#include "CUnknown102c63b0.h"

// TARGET: CAI_Hint::sub_102d1450
bool CAI_Hint::sub_102d1450(void *pOwner)
{
	return ((CUnknown102c63b0 *)&m_n5e0)->Get() == pOwner;
}
// END FUNCTION

// FUNCTION: 0x102d14c0 size=0x56
#include "CAI_BaseNPCTroika.h"
struct CNpcView14c0 {
	char m_pad0000[0x5e0];
	EHANDLE m_h5e0;
	char m_pad5e4[4];
	int m_n5e8;
	float m_f5ec;
};

bool CAI_BaseNPCTroika::sub_102d14c0()
{
	CNpcView14c0 *p = (CNpcView14c0 *)this;
	if (p->m_n5e8)
		return true;
	if (gpGlobals->curtime < p->m_f5ec)
		return true;
	if (p->m_h5e0.Get())
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102d1540 size=0x8b
#include "CLogicAuto.h"
#include "CAI_BaseNPCTroika.h"

struct EntSub { void *ent; unsigned int serial; };
struct EntInfo { int pad; EntSub s; };
extern EntInfo *g_10566458;

struct CHandleLike {
	unsigned int m_index;
	void *Get() const
	{
		if (m_index == 0xffffffff)
			return 0;
		EntSub *s = &g_10566458[m_index & 0x1fff].s;
		if (s->serial == (m_index >> 13))
			return s->ent;
		return 0;
	}
};

class CTimerHolder {
public:
	char m_pad[0x5e0];
	CHandleLike m_hTarget;
	char m_pad2[8];
	float m_flTime;
	bool Check(void *pOther)
	{
		if (m_hTarget.Get() != pOther) {
			if (gpGlobals->curtime < m_flTime)
				return false;
			if (m_hTarget.Get() != 0)
				return false;
		}
		return true;
	}
};

bool CAI_BaseNPCTroika::sub_102d1540(void *pOther)
{
	return ((CTimerHolder *)this)->Check(pOther);
}
// END FUNCTION

// FUNCTION: 0x102d1600 size=0x104
#include "CAI_Hint.h"
__declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern float g_104454c4;
void sub_101434b0(int, int, const char *, int, int, int, int, int);
int sub_100a02b0();
struct SHintView {
    char pad0[0x224]; unsigned char fl;
    char pad1[0x2e0 - 0x225]; int edict;
    char pad2[0x5dc - 0x2e4]; int id;
    char pad3[0xc]; float lockTime;
};
inline int ENTINDEX(int pEdict)
{
    return engine->vfunc35(pEdict);
}
int CAI_Hint::vfunc124()
{
    int n = sub_100a02b0();
    SHintView *v = (SHintView *)this;
    char buf[0x200];
    if (v->fl & 1) {
        Q_snprintf(buf, 0x200, "%i", v->id);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        float d = v->lockTime - gpGlobals->curtime;
        n++;
        if (g_104454c4 > d) d = g_104454c4;
        Q_snprintf(buf, 0x200, "delay %f", (double)d);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        n++;
    }
    return n;
}
// END FUNCTION

// FUNCTION: 0x102d1760 size=0x2c1
#include "utlrbtree.h"
#include "CAIHintSlots.h"
#include "CAI_Hint.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
#include "UTIL_Trace.h"
#include "utlvector.h"
#include "engineiface.h"

#include "globalvars.h"
struct CNpcView14c0 {
	char m_pad0000[0x5e0];
	EHANDLE m_h5e0;
	char m_pad5e4[4];
	int m_n5e8;
	float m_f5ec;
};
#pragma auto_inline(off)
namespace block_102d1760 {
struct CAI_HintU : CAI_Hint { bool sub_102d14c0(); };
bool CAI_HintU::sub_102d14c0()
{
	CNpcView14c0 *p = (CNpcView14c0 *)this;
	if (p->m_n5e8)
		return true;
	if (gpGlobals->curtime < p->m_f5ec)
		return true;
	if (p->m_h5e0.Get())
		return true;
	return false;
}
}
#pragma auto_inline(on)
using namespace block_102d1760;
// TARGET: sub_102d1760
CAI_Hint *sub_102d1760(CEntityVSlots *pNPC, int hintType, unsigned flags, float radius, const Vector *pCenter)
{
	if (!g_10925450)
		return 0;

	float flRadiusSqr = radius * radius;
	CUtlVector<CAI_Hint *> hintList;

	if (!pCenter)
		pCenter = pNPC->slot217();

	for (CAI_Hint *pHint = g_10925450; pHint; pHint = pHint->m_pNext)
	{
		CAI_Hint *pTest = pHint;
		if (((CAI_HintU *)pTest)->sub_102d14c0())
			continue;
		if (hintType && pTest->m_n5dc != hintType)
			continue;
		Vector d;
		VectorSubtract(*((CEntityVSlots *)pTest)->slot217(), *pCenter, d);
		if (d.LengthSqr() < flRadiusSqr && pNPC->slot566(pHint))
		{
			if (flags & 1)
			{
				Vector vecTarget = *((CEntityVSlots *)pHint)->slot217() + ((CBaseEntity *)pNPC)->m_vecViewOffset;
				Vector vecEye;
				CGameTrace tr;
				UTIL_TraceLine_Calls(*pNPC->slot193(&vecEye), vecTarget, 0x2400b, pNPC, 0, &tr);
				if (tr.m_fraction == 1.0)
					hintList.AddToTail(pHint);
			}
			else
				hintList.AddToTail(pHint);
		}
	}

	if (hintList.Count() <= 0)
	{
		g_10925454 = 0;
		return 0;
	}
	else
	{
		int index = enginerandom->vfunc2(0, hintList.Count() - 1);
		g_10925454 = hintList[index];
		return g_10925454;
	}
}
// END FUNCTION

// FUNCTION: 0x102d1af0 size=0x3ea
#include "CAI_Hint.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"

extern CAI_Hint *g_10925450;
extern CAI_Hint *g_10925454;
CAI_Hint *sub_102d1760(CAI_BaseNPCTroika *pNPC, int hintType, unsigned int flags, float radius, int a);

CAI_Hint *sub_102d1af0(CBaseEntity *pNPC, int hintType, unsigned int flags, float radius, Vector *origin, float *pDistOut)
{
	if (flags & 4)
		return sub_102d1760((CAI_BaseNPCTroika *)pNPC, hintType, flags, radius, 0);
	if (!g_10925450)
		return 0;
	if (!origin)
		origin = ((CEntityVSlots *)pNPC)->slot217();
	CAI_Hint *pHint = g_10925454 ? g_10925454->m_pNext : 0;
	if (!pHint)
		pHint = g_10925450;
	float flRadSqr; flRadSqr = radius * radius;
	CAI_Hint *pStart = pHint;
	float flBest = 3.4028235e+38f;
	CAI_Hint *pBest = 0;
	do {
		if (!pHint->sub_102d14c0() && (hintType == 0 || pHint->m_n5dc == hintType)) {
			if ((*((CEntityVSlots *)pHint)->slot217() - *origin).LengthSqr() < flRadSqr && ((CAI_BaseNPCTroika *)pNPC)->vfunc566((CBaseEntity *)pHint)) {
				float flDist = 3.4028235e+38f;
				if (flags & 8) {
					Vector *pA = ((CEntityVSlots *)pNPC)->slot217();
					Vector *pB = ((CEntityVSlots *)pHint)->slot217();
					flDist = (*pB - *pA).Length() * pHint->m_f464;
					if (!(flDist > flBest))
						goto los;
					goto next;
				} else if (flags & 2) {
					Vector *pA = ((CEntityVSlots *)pNPC)->slot217();
					Vector *pB = ((CEntityVSlots *)pHint)->slot217();
					flDist = (*pB - *pA).LengthSqr();
					if (flDist > flBest)
						goto next;
				}
los:
				if (flags & 1) {
					CGameTrace trace;
					Vector end;
					VectorAdd(pNPC->m_vecViewOffset, *((CEntityVSlots *)pHint)->slot217(), end);
					Vector buf;
					UTIL_TraceLine_SumYXZ(*((CEntityVSlots *)pNPC)->slot193(&buf), end, 0x2400b, pNPC, 0, &trace);
					if (1.0 != trace.m_fraction)
						goto next;
				}
				flBest = flDist;
				pBest = pHint;
				if (!(flags & 10))
					break;
			}
		}
next:
		pHint = pHint->m_pNext;
		if (!pHint)
			pHint = g_10925450;
	} while (pHint != pStart);
	if (pBest) {
		if (pDistOut)
			*pDistOut = flBest;
		g_10925454 = pBest;
		return pBest;
	}
	g_10925454 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102d1fe0 size=0x3ce
#include "CVTraitEffect_t.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CAI_Hint.h"
#include "CAIHintSlots.h"
#include "AITrace.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CUnknown102d01e0.h"
#include "CUnknown102d0270.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "Vector.h"
#include "UTIL_Trace.h"
#include <string.h>

struct CHintQuery
{
	unsigned int m_flags;
	int m_type;
	const char *m_name;
	int m_n0c;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
	int m_n20;
	int m_n24;
	int m_n28;
	int m_n2c;
};

extern char g_106b8540[];

inline const char *STRINGR(const char *const &s)
{
	return s ? s : g_106b8540;
}


namespace block_102d1fe0l {
#pragma auto_inline(off)
struct CNpcView14c0 {
	char m_pad0000[0x5e0];
	EHANDLE m_h5e0;
	char m_pad5e4[4];
	int m_n5e8;
	float m_f5ec;
	bool sub_102d14c0();
};
bool CNpcView14c0::sub_102d14c0()
{
	CNpcView14c0 *p = this;
	if (p->m_n5e8)
		return true;
	if (gpGlobals->curtime < p->m_f5ec)
		return true;
	if (p->m_h5e0.Get())
		return true;
	return false;
}
#pragma auto_inline(on)
}

struct MyRay : Ray_t
{
	__forceinline void MyInit(const Vector &start, const Vector &end)
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != g_104454c4;
		m_StartOffset[0] = m_StartOffset[1] = m_StartOffset[2] = 0.0f;
		m_IsRay = true;
		m_Extents[0] = m_Extents[1] = m_Extents[2] = 0.0f;
		m_Start[0] = start.x;
		m_Start[1] = start.y;
		m_Start[2] = start.z;
		m_b32 = 0;
		m_n34 = 0;
		m_b33 = 0;
	}
};

inline void MyTraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	MyRay ray;
	ray.MyInit(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline const char *STRINGV(const char *s)
{
	return s ? s : g_106b8540;
}
CAI_Hint *sub_102d1fe0(CBaseEntity *pNPC, CHintQuery *pQuery)
{
	if (!g_10925450)
		return 0;
	CAI_Hint *pHint = g_10925454 ? g_10925454->m_pNext : 0;
	if (!pHint)
		pHint = g_10925450;
	unsigned int nBest = (unsigned int)-1;
	CAI_Hint *pBest = 0;
	do {
		if (!((block_102d1fe0l::CNpcView14c0 *)pHint)->sub_102d14c0() && pHint->m_n5dc == pQuery->m_type) {
			if (pQuery->m_name && pHint->m_strGroup.pszValue) {
				if (strcmp(STRINGV(pHint->m_strGroup.pszValue), STRINGV(pQuery->m_name)) != 0)
					goto next;
			}
			if (pQuery->m_n18 && !((CUnknown102d01e0 *)pQuery)->sub_102d01e0((const float *)((CEntityVSlots *)pHint)->slot217()))
				goto next;
			if (pQuery->m_n2c && ((CUnknown102d0270 *)pQuery)->sub_102d0270((const float *)((CEntityVSlots *)pHint)->slot217()))
				goto next;
			if (((CEntityVSlots *)pNPC)->slot566(pHint)) {
				if (pQuery->m_flags & 1) {
					Vector vecPos;
					((CAI_VecView *)pHint)->sub_102d1180(pNPC, &vecPos);
					Vector vecEnd = vecPos + pNPC->m_vecViewOffset;
					Vector vecEyeBuf;
					CGameTrace trace;
					MyTraceLine(*((CEntityVSlots *)pNPC)->slot193(&vecEyeBuf), vecEnd, 0x2400b, pNPC, 0, &trace);
					if (trace.m_fraction != 1.0f) goto next;
				}
				if (pQuery->m_flags & 8) {
					unsigned int nDist = (unsigned int)((float)(__int64)(unsigned int)(*((CEntityVSlots *)pHint)->slot217() - *((CEntityVSlots *)pNPC)->slot217()).Length() * pHint->m_f464);
					if (nDist > nBest) {
						pBest = pHint;
						nBest = nDist;
					}
				} else if (pQuery->m_flags & 2) {
					unsigned int nDist = (unsigned int)(*((CEntityVSlots *)pHint)->slot217() - *((CEntityVSlots *)pNPC)->slot217()).Length();
					if (nDist < nBest) {
						pBest = pHint;
						nBest = nDist;
					}
				} else {
					g_10925454 = pHint; return pHint;
				}
			}
		}
next:
		pHint = pHint->m_pNext;
		if (!pHint && g_10925454)
			pHint = g_10925450;
	} while (pHint != *(CAI_Hint **)&g_10925454);
	g_10925454 = pBest;
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x102d24b0 size=0x2cc
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "Vector.h"
extern CAI_Hint *g_10925450;
extern CAI_Hint *g_10925454;
CAI_Hint *sub_102d1760(CAI_BaseNPCTroika *pNPC, int hintType, unsigned int flags, float radius, int a);

namespace block_102d24b0 {
struct CAI_HintUnit : CAI_Hint {
	char sub_102d14c0();
};
char CAI_HintUnit::sub_102d14c0()
{
	if (m_n5e8)
		return 1;
	if (gpGlobals->curtime < *(float *)&m_n5ec)
		return 1;
	if (((EHANDLE *)&m_n5e0)->Get())
		return 1;
	return 0;
}
}
using namespace block_102d24b0;

// TARGET: ?sub_102d24b0@@YAPAVCAI_Hint@@PAVCAI_BaseNPCTroika@@PAVCBaseEntity@@HIM@Z
CAI_Hint *sub_102d24b0(CAI_BaseNPCTroika *pNPC, CBaseEntity *pEntity, int hintType, unsigned int flags, float radius)
{
	if (flags & 4)
		return sub_102d1760(pNPC, hintType, flags, radius, 0);
	if (!g_10925450)
		return 0;
	CAI_Hint *pHint = g_10925454 ? g_10925454->m_pNext : 0;
	if (!pHint)
		pHint = g_10925450;
	float flRadSqr = radius * radius;
	do {
		if (!((CAI_HintUnit *)pHint)->sub_102d14c0() && (hintType == 0 || pHint->m_n5dc == hintType)) {
			Vector *pA = ((CEntityVSlots *)pEntity)->slot217();
			Vector *pB = ((CEntityVSlots *)pHint)->slot217();
			if ((*pB - *pA).LengthSqr() < flRadSqr && pNPC->vfunc566((CBaseEntity *)pHint)) {
				if (!(flags & 1)) {
					g_10925454 = pHint;
					return pHint;
				}
				Vector buf;
				CGameTrace trace;
				UTIL_TraceLine(*((CEntityVSlots *)pEntity)->slot193(&buf), pEntity->m_vecViewOffset + *((CEntityVSlots *)pHint)->slot217(), 0x2400b, pEntity, 0, &trace);
				if (trace.m_fraction == 1.0) {
					g_10925454 = pHint;
					return pHint;
				}
			}
		}
		pHint = pHint->m_pNext;
		if (!pHint && g_10925454)
			pHint = g_10925450;
	} while (pHint != g_10925454);
	g_10925454 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102d2840 size=0x82
extern "C" int strcmp(const char *, const char *);
extern char g_106b8540[];

struct SNode {
    char pad0[0x5d8];
    SNode *m_pNext;
    int m_type;
    char pad5e0[0x5f0 - 0x5e0];
    const char *m_pName;
};
extern SNode *g_10925450;

SNode *sub_102d2840(int unused, const char *name)
{
    for (SNode *n = g_10925450; n; n = n->m_pNext) {
        if (n->m_type == 10000 || n->m_type == 800) {
            const char *s = n->m_pName;
            if (!s)
                s = g_106b8540;
            if (strcmp(s, name) == 0)
                return n;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102d2900 size=0x21
int sub_102d2840(int a, int b);

// TARGET: sub_102d2900
int sub_102d2900(int a, int b)
{
    int *p = (int *)sub_102d2840(a, b);
    if (p)
        return p[0x5e4 / 4];
    return -1;
}
// END FUNCTION

// FUNCTION: 0x102d2940 size=0x24
void sub_1000a1e1(int a, int b, int c, int d, int e, int f);

void sub_102d2940(int a, int b, int c, int d, int e)
{
    sub_1000a1e1(a, b, 1, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x102d2980 size=0x3bf
#include "CAI_Hint.h"
#include "CAIHintSlots.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"

inline float DistSqr(const Vector *a, const Vector *b)
{
	float dx = a->x - b->x;
	float dy = a->y - b->y;
	float dz = a->z - b->z;
	return dx * dx + dy * dy + dz * dz;
}

// TARGET: sub_102d2980
CAI_Hint *sub_102d2980(CBaseEntity *pNpc, unsigned int flags, unsigned int moveMask, float flMaxDist, const Vector *pOrigin, float *pOutDist)
{
	if (!g_10925450)
		return 0;
	CEntityVSlots *pN = (CEntityVSlots *)pNpc;
	if (!pOrigin)
		pOrigin = pN->slot217();
	CAI_Hint *h = g_10925454 ? g_10925454->m_pNext : 0;
	if (!h)
		h = g_10925450;
	float flMaxDist2 = flMaxDist * flMaxDist;
	float flBest = 3.4028235e+38f;
	CAI_Hint *pBest = 0;
	do {
		CEntityVSlots *pH = (CEntityVSlots *)h;
		if (!h->sub_102d14c0() && (moveMask & h->m_n474) && DistSqr(pOrigin, pH->slot217()) < flMaxDist2 && pN->slot566(h)) {
			float flDist = 3.4028235e+38f;
			bool bSkip = false;
			if (flags & 8) {
				const Vector *pA = pN->slot217();
				const Vector *pB = pH->slot217();
				flDist = FastSqrt(DistSqr(pB, pA)) * h->m_f464;
				if (flDist > flBest)
					bSkip = true;
			} else if (flags & 2) {
				const Vector *pA = pN->slot217();
				const Vector *pB = pH->slot217();
				flDist = DistSqr(pB, pA);
				if (flDist > flBest)
					bSkip = true;
			}
			if (!bSkip && (flags & 1)) {
				const Vector *pHintPos = pH->slot217();
				Vector vecEnd;
				vecEnd.x = pHintPos->x;
				vecEnd.x += pNpc->m_vecViewOffset.x;
				vecEnd.y = pNpc->m_vecViewOffset.y + pHintPos->y;
				vecEnd.z = pNpc->m_vecViewOffset.z + pHintPos->z;
				Vector vecTemp;
				const Vector *pEye = pN->slot193(&vecTemp);
				CGameTrace tr;
				UTIL_TraceLine(*pEye, vecEnd, 0x2400b, pNpc, 0, &tr);
				if (tr.m_fraction != 1.0)
					bSkip = true;
			}
			if (!bSkip) {
				pBest = h;
				if (!(flags & 1))
					break;
				flBest = flDist;
			}
		}
		h = h->m_pNext;
		if (!h && g_10925454)
			h = g_10925450;
		CAI_Hint *volatile *pCur = (CAI_Hint **)&g_10925454;
		if (h == *pCur)
			break;
	} while (1);
	if (pBest) {
		if (pOutDist)
			*pOutDist = flBest;
		g_10925454 = pBest;
		return pBest;
	}
	g_10925454 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102d2e30 size=0x6b
#include "CAI_Hint.h"
extern CAI_Hint *g_10925450;
extern void *vt_1049b9a4[];

CAI_Hint *CAI_Hint::sub_102d2e30()
{
	sub_1009d980(0);
	for (int i = 0; i < 8; i++)
		m_items4fc[i].sub_100cd2a0();
	m_item5bc.sub_100cd2a0();
	m_n5e0 = -1;
	m_item5f4.sub_100cd2a0();
	*(void ***)this = vt_1049b9a4;
	m_n5ec = 0;
	m_pNext = g_10925450;
	g_10925450 = this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102d2ec0 size=0x5
#include "CAI_Hint.h"
#include "CBaseEntity.h"

// TARGET: CAI_Hint::vfunc219
// the game's 0x102d2ec0: a tail call (jmp) of CBaseEntity::vfunc219
float * CAI_Hint::vfunc219()
{
	return ((CBaseEntity *)this)->CBaseEntity::vfunc219();
}
// END FUNCTION

// FUNCTION: 0x102d2ee0 size=0x8
#include "CBaseEntity.h"
#include "CAI_Hint.h"
// TARGET: CAI_Hint::sub_102d2ee0
unsigned char CAI_Hint::sub_102d2ee0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x102d2f00 size=0x1e
#include "CAI_Hint.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_Hint::vfunc5
CAI_Hint *CAI_Hint::vfunc5(unsigned int flags)
{
	sub_10005e98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102d2f30 size=0xc1
#include "CEntityVSlots.h"
#include "CBaseEntity.h"

extern int g_10925454;
extern int g_10925458;
extern char g_1060a388[];
CEntityVSlots *sub_10002e32(const char *pszClassName);

struct HintData2
{
	int a, b;
	HintData2(int v) { a = v; b = v; }
};

CEntityVSlots *sub_102d2f30(int a, int b, int c, int d)
{
	g_10925454 = 0;
	g_10925458++;
	CEntityVSlots *pHint = sub_10002e32(g_1060a388);
	if (pHint) {
		HintData2 data(c);
		pHint->slot107((const float *)&data);
		pHint->slot111();
		if (*(int *)((char *)pHint + 0x124) == 0) {
			pHint->slot216(pHint->slot220());
			pHint->slot218(pHint->slot221());
		}
		pHint->slot122(g_1060a388);
		*(int *)((char *)pHint + 0x5e4) = d;
		pHint->slot103();
		((CBaseEntity *)pHint)->sub_100aaf30();
		return pHint;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102d3040 size=0x127
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
extern CAI_Hint *g_10925450;
extern CAI_Hint *g_10925454;
extern CAI_Hint *g_1092545c;
extern int g_10925458;
extern void *vt_1049b9a4;
struct CDevView102d3040 { virtual void v0(); virtual void v1(); };
extern CDevView102d3040 *g_10924a6c;
struct CBaseDtorView102d3040 { void sub_1009df20(); };
inline void DestroyItems102d3040(CAI_HintItem *a, int n)
{
	a += n;
	while (--n >= 0) {
		--a;
		a->sub_100cd2d0();
	}
}
// TARGET: CAI_Hint::sub_102d3040
void CAI_Hint::sub_102d3040()
{
	*(void **)this = &vt_1049b9a4;
	if (EHandle_Get((unsigned int &)m_n5e0)) {
		CBaseEntity *pEnt = (CBaseEntity *)EHandle_Get((unsigned int &)m_n5e0);
		CAI_BaseNPC *pNPC = *(CAI_BaseNPC **)((char *)pEnt + 0x98);
		if (pNPC) {
			g_10924a6c->v1();
			pNPC->sub_10269a20(0x29);
			((CAI_BaseNPCTroika *)pNPC)->sub_10295ab0(0);
		}
	}
	CAI_Hint *pHead = g_10925450;
	if (pHead == this) {
		g_10925450 = pHead->m_pNext;
	} else {
		while (pHead) {
			if (pHead->m_pNext == this) {
				pHead->m_pNext = pHead->m_pNext->m_pNext;
				break;
			}
			pHead = pHead->m_pNext;
		}
	}
	if (g_10925454 == this) g_10925454 = 0;
	if (g_1092545c == this) g_1092545c = 0;
	g_10925458--;
	m_item5f4.sub_100cd2d0();
	m_item5bc.sub_100cd2d0();
	DestroyItems102d3040(m_items4fc, 8);
	((CBaseDtorView102d3040 *)this)->sub_1009df20();
}
// END FUNCTION

// FUNCTION: 0x102d31c0 size=0xa09
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "ehandle.h"
#include "CEHandleGet.h"
#include "CUnknown100290c0.h"
#include "Vector.h"

struct HintNodeV { Vector sub_102fb0d0(int hull); };
struct HintNetV { int m_iNumNodes; HintNodeV **m_pAInode; };
extern HintNetV *g_1093407c;
extern int g_106c994c;
extern int g_109340d8;
extern int g_10925458;

struct HintV
{
	char pad0[0x454];
	float m_flYawOffset;	// 0x454
	char pad458[0x478 - 0x458];
	char m_szDebug[0x4f8 - 0x478];
	float m_flDebugTime;	// 0x4f8
	char pad4fc[0x5d8 - 0x4fc];
	HintV *m_pNextHint;	// 0x5d8
	int m_nHintType;	// 0x5dc
	unsigned int m_hHintOwner;	// 0x5e0
	int m_nNodeID;	// 0x5e4
	int m_iDisabled;	// 0x5e8
	char sub_102d14c0();	// IsLocked
	float sub_102d12e0();	// Yaw
	void sub_102d0b20();
};
extern HintV *g_10925450;
extern HintV *g_1092545c;

void sub_10142af0(const Vector &origin, const Vector &mins, const Vector &maxs, const Vector &dir, int r, int g, int b, int a, float flDuration);
void sub_10142aa0(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float flDuration);
void sub_10143710(const Vector &origin, const char *text, int bViewCheck, float flDuration);
void sub_10142e90(const Vector &origin, const Vector &target, int r, int g, int b, int noDepthTest, float flDuration);
Vector sub_101d2f40(float yaw);	// UTIL_YawToVector
extern int (*g_109f3890)(char *, const char *, int);	// Q_strncpy

inline HintNodeV *GetNode(int id)
{
	if (id >= 0 && id < g_1093407c->m_iNumNodes)
		return g_1093407c->m_pAInode[id];
	g_106c994c++;
	return 0;
}

void sub_102d31c0(float flDrawDuration)
{
	if (!g_10925450)
		return;
	flDrawDuration = (float)(g_10925458 >> 4) * 0.1f;

	HintV *pHint = g_1092545c;
	if (!pHint)
		pHint = g_10925450;

	for (int count = 16; count; count--)
	{
		int r = 0;
		int g = 0;
		int b = 127;
		int a = 0;
		Vector vHintPos;

		if (pHint->m_nNodeID != -1)
			vHintPos = GetNode(pHint->m_nNodeID)->sub_102fb0d0(g_109340d8);
		else
			vHintPos = *((CEntityVSlots *)pHint)->slot217();

		switch (pHint->m_nHintType)
		{
		case 10200:
			g = 127;
			break;
		case 100:
			g = 127;
			break;
		case 101:
			g = 127;
			break;
		case 10000:
			r = 220;
			g = 32;
			b = 220;
			break;
		case 10300:
			r = 220;
			g = 32;
			b = 32;
			break;
		case 10301:
			r = 220;
			g = 32;
			b = 32;
			break;
		case 10400:
			r = 220;
			g = 32;
			b = 32;
			break;
		}

		if (pHint->m_iDisabled)
		{
			r >>= 1;
			g >>= 1;
			b >>= 1;
		}
		else if (((CUnknown100290c0 *)g_10566458)->sub_100290c0(&pHint->m_hHintOwner))
		{
			a = 64;
			CBaseEntity *pOwner = (CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&pHint->m_hHintOwner);
			if (pOwner)
			{
				char owner[255];
				g_109f3890(owner, pOwner->sub_1000b5cd(), sizeof(owner));
				Vector loc = vHintPos;
				loc.x += 6;
				loc.y += 6;
				loc.z += 6;
				sub_10143710(loc, owner, 1, flDrawDuration);
			}
		}
		else if (pHint->sub_102d14c0())
		{
			a = 64;
		}

		bool bDrawCone = false;
		float flAng1 = 0, flAng2 = 0;
		bool bDrawCone2 = false;
		float flAng3 = 0, flAng4 = 0;
		Vector vecOffset(0, 0, 0);
		Vector vecDir = sub_101d2f40(pHint->sub_102d12e0());

		switch (pHint->m_nHintType)
		{
		case 10200:
			sub_10142af0(vHintPos, Vector(-15, -15, 0), Vector(15, 15, 70), vecDir, r, g, b, a, flDrawDuration);
			vecOffset = Vector(0, 0, 70);
			flAng3 = -pHint->m_flYawOffset;
			flAng1 = 43;
			flAng2 = pHint->m_flYawOffset;
			bDrawCone2 = true;
			flAng4 = -43;
			bDrawCone = true;
			break;
		case 100:
			sub_10142af0(vHintPos, Vector(-15, -15, 0), Vector(15, 15, 54), vecDir, r, g, b, a, flDrawDuration);
			vecOffset = Vector(0, 0, 54);
			flAng2 = pHint->m_flYawOffset;
			flAng1 = -pHint->m_flYawOffset;
			bDrawCone = true;
			break;
		case 101:
			sub_10142af0(vHintPos, Vector(-15, -15, 0), Vector(15, 25, 37), vecDir, r, g, b, a, flDrawDuration);
			vecOffset = Vector(0, 0, 37);
			flAng2 = pHint->m_flYawOffset;
			flAng1 = -pHint->m_flYawOffset;
			bDrawCone = true;
			break;
		case 10300:
			sub_10142af0(vHintPos, Vector(-15, -15, 0), Vector(15, 15, 15), vecDir, r, g, b, a, flDrawDuration);
			vecOffset = Vector(0, 0, 15);
			flAng2 = pHint->m_flYawOffset;
			flAng1 = -pHint->m_flYawOffset;
			bDrawCone = true;
			break;
		case 10301:
			sub_10142af0(vHintPos, Vector(-15, -15, 0), Vector(15, 15, 15), vecDir, r, g, b, a, flDrawDuration);
			vecOffset = Vector(0, 0, 15);
			flAng2 = pHint->m_flYawOffset;
			flAng1 = -pHint->m_flYawOffset;
			bDrawCone = true;
			break;
		default:
			sub_10142aa0(vHintPos, Vector(-3, -3, -3), Vector(3, 3, 3), r, g, b, a, flDrawDuration);
			break;
		}

		if (pHint->m_flDebugTime > 0)
		{
			if (gpGlobals->curtime >= pHint->m_flDebugTime)
				pHint->sub_102d0b20();
			else
			{
				Vector vecText;
				vecText.x = vHintPos.x;
				vecText.y = vHintPos.y;
				vecText.z = vHintPos.z + 16;
				sub_10143710(vecText, pHint->m_szDebug, 0, flDrawDuration);
			}
		}

		if (bDrawCone)
		{
			Vector vecLeft = sub_101d2f40(pHint->sub_102d12e0() + flAng1);
			Vector vecRight = sub_101d2f40(pHint->sub_102d12e0() + flAng2);
			Vector vecStart = vecOffset + vHintPos;
			sub_10142af0(vecStart, Vector(0, 0, -10), Vector(32, 0, 10), vecLeft, 255, 0, 0, 50, flDrawDuration);
			sub_10142af0(vecStart, Vector(0, 0, -10), Vector(32, 0, 10), vecRight, 255, 0, 0, 50, flDrawDuration);
		}
		if (bDrawCone2)
		{
			Vector vecLeft = sub_101d2f40(pHint->sub_102d12e0() + flAng3);
			Vector vecRight = sub_101d2f40(pHint->sub_102d12e0() + flAng4);
			Vector vecStart = vHintPos + vecOffset;
			sub_10142af0(vecStart, Vector(0, 0, -10), Vector(32, 0, 10), vecLeft, 255, 0, 0, 50, flDrawDuration);
			sub_10142af0(vecStart, Vector(0, 0, -10), Vector(32, 0, 10), vecRight, 255, 0, 0, 50, flDrawDuration);
		}

		vecDir = vecDir * 12.0f;
		sub_10142e90(vHintPos, vHintPos + vecDir, r, g, b, 0, flDrawDuration);

		pHint = pHint->m_pNextHint;
		if (!pHint)
			pHint = g_10925450;
	}
	g_1092545c = pHint;
}
// END FUNCTION

// FUNCTION: 0x102d3e60 size=0x29
extern int g_106c994c;

struct CUnknownList102d3e60 {
    int m_nCount;
    int *m_pElements;
};
extern CUnknownList102d3e60 *g_1093407c;

struct CUnknown102d3e60 {
    char pad_0000[0x5e4];
    int m_nIndex;
    int sub_102d3e60();
};

// TARGET: CUnknown102d3e60::sub_102d3e60
int CUnknown102d3e60::sub_102d3e60()
{
    if (m_nIndex != -1) {
        if (m_nIndex >= 0 && m_nIndex < g_1093407c->m_nCount)
            return g_1093407c->m_pElements[m_nIndex];
        g_106c994c++;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102d3ea0 size=0x1
void sub_102d3ea0()
{
}
// END FUNCTION

// FUNCTION: 0x102d3ec0 size=0x6c
#include "CAI_Hint.h"
#include "CBaseEntity.h"

__declspec(dllimport) void DevMsg(const char *, ...);

void CAI_Hint::vfunc130(int a)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc130(a);
	char *pNode = sub_102d3e60();
	if (!pNode) {
		DevMsg("Warning: AI hint has incorrect or no AI node\n");
		return;
	}
	Vector vecPos = *(Vector *)(pNode + 8);
	vfunc181(&vecPos, 0, 0);
	*(CAI_Hint **)(pNode + 0xa0) = this;
}
// END FUNCTION
