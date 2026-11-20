// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10219710 size=0x6
#include "CPropHacking.h"
namespace lifted {
extern char g_105af464;
}
datamap_t * CPropHacking::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105af464);
}
// END FUNCTION

// FUNCTION: 0x10219ec0 size=0x8
#include "CPropHacking.h"
// TARGET: CPropHacking::sub_10219ec0
unsigned char CPropHacking::sub_10219ec0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x10219ee0 size=0x1e
#include "CPropHacking.h"

void sub_100aa7b0(void *p);

// TARGET: CPropHacking::vfunc5
CBaseEntity *CPropHacking::vfunc5(unsigned int flags)
{
	sub_1000befb();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1021a1a0 size=0x5
#include "CPropHacking.h"
#include "CBaseTerminal.h"

// TARGET: CPropHacking::vfunc103
// the game's 0x1021a1a0: a tail call (jmp) of CBaseTerminal::vfunc103
void CPropHacking::vfunc103()
{
	((CBaseTerminal *)this)->CBaseTerminal::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x1021a200 size=0x4c
struct V1021a200 {
	char m_pad[0x784];
	int m_n784;
	char m_pad788[0x900 - 0x788];
	const char *m_psz900;
	char m_pad904[0x9ec - 0x904];
	char m_b9ec;
	void sub_1021a200();
	char sub_1021cba0(const char *s);
	const char *sub_100ab4f0();
};
void __fastcall sub_1000978c(V1021a200 *p);
extern const char g_106b8540[];
__declspec(dllimport) void Warning(const char *fmt, ...);
// TARGET: V1021a200::sub_1021a200
void V1021a200::sub_1021a200()
{
	sub_1000978c(this);
	const char *p = m_psz900;
	if (!p)
		p = g_106b8540;
	if (!sub_1021cba0(p))
		Warning("Could not load data for %s!!\n", sub_100ab4f0());
	m_n784 = 2;
	m_b9ec = 1;
}
// END FUNCTION

// FUNCTION: 0x1021a270 size=0x5e
#include "CPropHacking.h"
extern float (__cdecl *g_109f385c)(float, float);
void sub_10014b82();
void CPropHacking::vfunc113()
{
	sub_1018f3e0();
	sub_1021b140(0);
	sub_100ac4e0((int)sub_10014b82, 0, 0);
	m_flNextThink = g_109f385c(0.0f, 1.0f) + gpGlobals->curtime;
	if (m_flDelay09e4 < 2.0)
		m_flDelay09e4 = 2.0f;
}
// END FUNCTION

// FUNCTION: 0x1021a590 size=0x6
#include "CPropHacking.h"
int CPropHacking::vfunc33()
{
    return 0x12e;
}
// END FUNCTION

// FUNCTION: 0x1021a5b0 size=0xc2
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CPropHacking.h"
#include "CBasePlayer.h"
#include "CVFeat_t.h"
CBaseEntity *sub_10070470(const char *pszName, void *a, void *b, void *c, void *d);
// TARGET: CPropHacking::sub_1021a5b0
void CPropHacking::sub_1021a5b0(CBaseEntity *pPlayer)
{
	sub_1021a1c0();
	sub_102181a0(pPlayer);
	sub_1021a2f0((CRestore *)pPlayer);
	sub_100ac4e0(0, 0, 0);
	sub_1021aca0();
	sub_1021b410();
	((CBasePlayer *)pPlayer)->sub_1017cef0(sub_10070470("Hacking", 0, this, this, 0));
	CVFeatSet::Find(2)->sub_101e56e0(pPlayer);
}
// END FUNCTION

// FUNCTION: 0x1021a6c0 size=0x60
#include "CSave.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CPropHacking.h"
#include "globalvars.h"

void sub_10014b82();

void CPropHacking::vfunc42(void *pPlayer)
{
	sub_1021a3d0((CSave *)pPlayer);
	sub_10218220(pPlayer);
	sub_100ac4e0((int)sub_10014b82, 0, 0);
	m_flNextThink = m_flDelay09e8 + gpGlobals->curtime;
	sub_1021b140(0);
	m_n09dc = -1;
	m_n09e0 = -1;
	((CBasePlayer *)pPlayer)->sub_1017cef0(0);
}
// END FUNCTION

// FUNCTION: 0x1021a830 size=0x1ee
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <string.h>
#include "CPropHacking.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
struct CDepConVarView
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad[0x2c - 4];
	int m_nValue;
};
extern CDepConVarView *g_1074f714;
__declspec(dllimport) void DevMsg(const char *, ...);
__declspec(dllimport) int Q_strnicmp(const char *, const char *, int);

void CPropHacking::vfunc273(int a, char *pszCommand)
{
	ScopeTrace scope("CPropHacking::AcceptCmd", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_1074f714->vfunc1() && g_1074f714->m_nValue)
		DevMsg("\n%s processing command [%s]\n", sub_100ab4f0(), pszCommand);
	m_b09ec = 0;
	if (m_b082c)
		return;
	if (pszCommand && strlen(pszCommand) > 0x10)
		pszCommand[0x10] = 0;
	if (m_n09dc == -2) {
		sub_10218820(2, 0);
		if (!sub_1021b9c0(a, pszCommand))
			sub_1021c040();
	} else if (m_n09e0 != -1) {
		if (pszCommand && !Q_strnicmp("break", pszCommand, 0x10))
			sub_10217b30();
		else
			sub_10217f50(0, pszCommand);
	} else {
		sub_10218820(2, 0);
		if (!sub_1021aaa0(a, pszCommand) && !sub_1021b750(a, pszCommand))
			sub_1021c3c0(a, pszCommand);
	}
	if (m_b09ec && EHandle_Get(*(unsigned int *)((char *)this + 0x8c)) && m_n09e0 == -1)
		sub_1021b410();
	if (!g_1074f714->vfunc1() && g_1074f714->m_nValue)
		DevMsg("\n%s finished command [%s]\n", sub_100ab4f0(), pszCommand);
}
// END FUNCTION

// FUNCTION: 0x1021c4d0 size=0x67
#include "CPropHacking.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern const char g_106b8540[];

struct CPropHackingNameRecord {
    int m_nId;
    const char *m_pszName;
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

extern int g_1074b344;
extern CPropHackingNameRecord **g_1074b348;
extern int g_1074f758;

__forceinline int FindRecordId(const char *pszWanted)
{
    for (int i = 0; i < g_1074b344; i++) {
        if (!_strcmpi(STRINGR(g_1074b348[i]->m_pszName), pszWanted))
            return g_1074b348[i]->m_nId;
    }
    return -1;
}

// TARGET: CPropHacking::vfunc275
void CPropHacking::vfunc275()
{
    sub_1021c890(m_n09e0);
    g_1074f758 = FindRecordId("access");
}
// END FUNCTION

// FUNCTION: 0x1021c560 size=0xf2
#include "CPropHacking.h"
#include "CEHandleGet.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot268View
{
	SV100(a) SV100(b) SV10(c0) SV10(c1) SV10(c2) SV10(c3) SV10(c4) SV10(c5)
	SV(c60) SV(c61) SV(c62) SV(c63) SV(c64) SV(c65) SV(c66) SV(c67)
	virtual int s268(void *pEnt);
};

extern char g_106b8540[];
struct CNameObj
{
	const char *m_psz;
	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};
struct CNameRecord
{
	int m_nId;
	CNameObj m_Name;
};
struct CNameTable
{
	char m_pad[0x14];
	int m_nRecords;
	CNameRecord **m_ppRecords;
};
extern CNameTable g_1074b330;
extern int g_1074f75c;
int __cdecl sub_1043e780(const char *a, const char *b);

static inline int FindNameId(const char *pszName)
{
    for (int i = 0; i < g_1074b330.m_nRecords; i++) {
        if (!sub_1043e780(g_1074b330.m_ppRecords[i]->m_Name.Get(), pszName))
            return g_1074b330.m_ppRecords[i]->m_nId;
    }
    return -1;
}

// TARGET: CPropHacking::vfunc276
void CPropHacking::vfunc276()
{
    if (m_n09e0 == -2) {
        m_n0c28++;
    } else if (m_n09e0 >= 0 && m_n09e0 < m_nCounts0998) {
        m_pnCounts098c[m_n09e0]++;
    }
    sub_10218820(2, 0);
    if (m_b083c) {
        int nValue = ((CSlot268View *)this)->s268(EHandle_Get(*(unsigned int *)((char *)this + 0x8c)));
        sub_10218820(6, nValue);
        sub_1021c890(-1);
    } else {
        sub_1021b5e0(1);
    }
    g_1074f75c = FindNameId("error");
}
// END FUNCTION

// FUNCTION: 0x1021c6a0 size=0x14
#include "CPropHacking.h"

// TARGET: CPropHacking::vfunc277
void CPropHacking::vfunc277()
{
	sub_1021aca0();
	*(int *)((char *)this + 0x9e0) = 4294967295;
}
// END FUNCTION

// FUNCTION: 0x1021ca90 size=0x34
#include "CPropHacking.h"
#include "CBaseVampireSkillEntity.h"
// TARGET: CPropHacking::vfunc272
void CPropHacking::vfunc272()
{
	for (int i = 0; i < m_nCounts0998; i++)
		m_pnCounts098c[i] = 0;
	m_n0c28 = 0;
	((CBaseVampireSkillEntity *)this)->CBaseVampireSkillEntity::vfunc272();
}
// END FUNCTION

// FUNCTION: 0x1021cae0 size=0x53
#include "CPropHacking.h"
__declspec(dllimport) void DevMsg(const char *fmt, ...);
int CPropHacking::vfunc268(int a)
{
	int idx = m_n09e0;
	if (idx == -2)
		return sub_1020b1c0(a);
	if (idx >= 0 && idx < m_nCounts0998) {
		int value = *(int *)((char *)&m_pRecords09a0[idx] + 0x40);
		if (value <= 0)
			return sub_1020b1c0(a);
		return value;
	}
	DevMsg("%s has invalid difficulty for subdir: %d\n", sub_100ab4f0(), idx);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1021cb60 size=0x27
#include "CPropHacking.h"

// TARGET: CPropHacking::vfunc274
void *CPropHacking::vfunc274()
{
    if (m_n09e0 != -2) {
        return (char *)(m_pRecords09a0 + m_n09e0) + 0x30;
    }
    return (char *)this + 0x944;
}
// END FUNCTION

// FUNCTION: 0x1021d610 size=0x33
#include "CPropHacking.h"

void sub_10217ac0(CPropHacking *p, const char *fmt, ...);

// TARGET: CPropHacking::vfunc278
void CPropHacking::vfunc278(int a)
{
    sub_10218ff0(0, m_n0814 - 1);
    sub_10217ac0(this, "%s%s     ", sub_10219400(0xc), a);
}
// END FUNCTION
