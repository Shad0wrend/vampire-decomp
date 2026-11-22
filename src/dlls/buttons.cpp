// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 51 blocks
#include "vampire.h"

// FUNCTION: 0x100c8430 size=0x6
#include "CBaseButton.h"
#include "datamap.h"
namespace lifted {
extern char g_1055beb0;
}
datamap_t *CBaseButton::vfunc82()
{
    return (datamap_t *)&lifted::g_1055beb0;
}
// END FUNCTION

// FUNCTION: 0x100c8450 size=0x5
int * sub_100c8490(void);
int * g_106e6f74 = ((int * (*)(int))sub_100c8490)(0);
// END FUNCTION

// FUNCTION: 0x100c8490 size=0x16f
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
extern int g_1055beb0[2];
void sub_10002cd4();
void sub_1000fca9();
void sub_10008f30();
void sub_10010e6f();
void sub_10009764();
void sub_100111da();
void sub_10014f88();
void sub_1000127b();
void sub_1000ad12();

int *sub_100c8490()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_fStayPushed", {0x55c, 0}, 1, 2 },
        { 5, "m_fRotating", {0x55d, 0}, 1, 2 },
        { 4, "m_nState", {0x5c0, 0}, 1, 2 },
        { 5, "m_bLocked", {0x5c4, 0}, 1, 2 },
        { 5, "m_allowPhysicsObjectUse", {0x5c5, 0}, 1, 2 },
        { 4, "m_UseIcon", {0x5c8, 0}, 1, 6, "use_icon" },
        { 4, "m_LockedIcon", {0x5cc, 0}, 1, 6, "locked_icon" },
        { 0, "CBaseButtonButtonTouch", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10002cd4 },
        { 0, "CBaseButtonButtonSpark", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000fca9 },
        { 0, "CBaseButtonTriggerAndWait", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10008f30 },
        { 0, "CBaseButtonButtonReturn", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10010e6f },
        { 0, "CBaseButtonButtonBackHome", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10009764 },
        { 0, "CBaseButtonButtonUse", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100111da },
        { 0, "InputLock", {0, 0}, 1, 8, "Lock", 0, (void *)sub_10014f88 },
        { 0, "InputUnlock", {0, 0}, 1, 8, "Unlock", 0, (void *)sub_1000127b },
        { 0, "InputPress", {0, 0}, 1, 8, "Press", 0, (void *)sub_1000ad12 },
        { 0xa, "m_OnDamaged", {0x560, 0}, 1, 0x16, "OnDamaged", g_1055dc70 },
        { 0xa, "m_OnPressed", {0x578, 0}, 1, 0x16, "OnPressed", g_1055dc70 },
        { 0xa, "m_OnIn", {0x590, 0}, 1, 0x16, "OnIn", g_1055dc70 },
        { 0xa, "m_OnOut", {0x5a8, 0}, 1, 0x16, "OnOut", g_1055dc70 },
    };
    g_1055beb0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1055beb0[0] = (int)&dataDesc[1];
    return g_1055beb0;
}
// END FUNCTION

// FUNCTION: 0x100c8660 size=0x43
#include "platform.h"
#include "CBaseEntity.h"
#include "CBaseButton.h"
void *sub_100aa720(int size);
extern char g_1055cb18[];

// TARGET: func_button
DLL_EXPORT CBaseEntity *func_button()
{
	void *mem = sub_100aa720(0x5d0);
	CBaseButton *p;
	if (mem)
		p = ((CBaseButton *)mem)->sub_100c86d0();
	else
		p = 0;
	((CBaseEntity *)p)->vfunc106(g_1055cb18);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x100c86d0 size=0x4f
#include "CBaseButton.h"
CBaseButton::CBaseButton()
{
	m_n5c8 = 12;
	m_n5cc = 12;
}
// END FUNCTION

// FUNCTION: 0x100c8740 size=0x3
#include "CBaseButton.h"
bool CBaseButton::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c8760 size=0x62
#include "CBaseButton.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CBaseEntity *CBaseButton::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5a8))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x590))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x578))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x560))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100c87f0 size=0x8
#include "CBaseButton.h"

void CBaseButton::vfunc104()
{
	vfunc71();
}
// END FUNCTION

// FUNCTION: 0x100c8810 size=0xe5
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "ScopeTrace.h"
#include "CBaseButton.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_106e6f78;
extern int g_106e6f7c;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

struct CSoundNameView
{
	const char *m_psz;
	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};

// TARGET: CBaseButton::vfunc71
void CBaseButton::vfunc71()
{
	m_nVSoundTableIdx = 0;
	m_nVSoundGroup = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CSoundNameView *)&m_iszVSoundGroup)->Get(), 0);

	g_106e6f78 = FindSoundId("on");
	g_106e6f7c = FindSoundId("off");
}
// END FUNCTION

// FUNCTION: 0x100c8940 size=0x3b
#include "CBaseEntity.h"
#include "CBaseButton.h"

// TARGET: CBaseButton::vfunc35
int CBaseButton::vfunc35(int pActivator)
{
    if (*(char *)((char *)this + 0x5c4))
    {
        return *(int *)((char *)this + 0x5cc);
    }
    if (!((CBaseEntity *)this)->sub_100a7bd0((CBaseEntity *)pActivator))
    {
        return *(int *)((char *)this + 0x5cc);
    }
    return *(int *)((char *)this + 0x5c8);
}
// END FUNCTION

// FUNCTION: 0x100c8990 size=0x16
#include "CBaseButton.h"

int CBaseButton::vfunc34(int a)
{
	return vfunc35(a) != 0;
}
// END FUNCTION

// FUNCTION: 0x100c89c0 size=0x5
#include "CBaseButton.h"
#include "CBaseToggle.h"

// TARGET: CBaseButton::vfunc110
// the game's 0x100c89c0: a tail call (jmp) of CBaseToggle::vfunc110
bool CBaseButton::vfunc110(char const *a0, char const *a1)
{
	return ((CBaseToggle *)this)->CBaseToggle::vfunc110(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x100c89e0 size=0xa
void __fastcall sub_100c89e0(char *self, int, int)
{
	self[0x5c4] = 1;
}
// END FUNCTION

// FUNCTION: 0x100c8a00 size=0xa
void __fastcall sub_100c8a00(char *self, int, int)
{
	self[0x5c4] = 0;
}
// END FUNCTION

// FUNCTION: 0x100c8a20 size=0x105
#include "CBaseButton.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

void CBaseButton::sub_100c8a20(CBaseEntity *pOther)
{
	if (m_nState4f8 != 2 && m_nState4f8 != 3 && !m_b5c4) {
		if (sub_100a7bd0((CBaseEntity *)EHandle_Get(m_hActivator53c))) {
			m_pfnTouch = 0;
			if (m_nState4f8 == 0) {
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0);
				sub_100c97c0();
			} else {
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0);
				sub_100c9560();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100c8b80 size=0x175
#include "CBaseButton.h"
#include "CEHandleGet.h"

struct CButtonAttackerView {
	virtual void v0();
	virtual unsigned int *GetRefEHandle();
};

struct CButtonDamageInfoView {
	char m_pad0000[0x2c];
	CButtonAttackerView *m_pAttacker;
};

// TARGET: CBaseButton::vfunc142
int CBaseButton::vfunc142(struct CTakeDamageInfo *pInfo)
{
	CButtonDamageInfoView *pDamage = (CButtonDamageInfoView *)pInfo;
	m_Output560.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
	if ((m_flags204 & 0x200) || m_iHealth) {
		int state = sub_100c93b0();
		if (state) {
			if (pDamage->m_pAttacker)
				m_hActivator53c = *pDamage->m_pAttacker->GetRefEHandle();
			else
				m_hActivator53c = 0xffffffff;
			if (EHandle_Get(m_hActivator53c) && !m_b5c4) {
				m_pfnTouch = 0;
				if (state == 2) {
					m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
					sub_100c97c0();
					return 0;
				}
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
				sub_100c9560();
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100c8d60 size=0x33c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "vampire.h"
#include "CBaseButton.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include <math.h>

void CBaseButton::vfunc103()
{
	CBaseEntity *e = (CBaseEntity *)this;
	vfunc104();
	if (m_flags204 & 0x40) {
		union { void (CBaseButton::*pm)(); int n; } think;
		think.pm = &CBaseButton::sub_100c9190;
		e->sub_100ac4e0(think.n, 0, 0);
		m_flNextThink = gpGlobals->curtime + 0.5;
	}
	vfunc171();
	e->vfunc93(8, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", e->m_name26c ? e->m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	{
		int local;
		const char *name = *e->vfunc9(&local);
		e->vfunc105(name ? name : g_106b8540);
	}
	if (m_flSpeed164 == 0.0f)
		m_flSpeed164 = 40.0f;
	m_nTakeDamage = 2;
	if (m_flWait500 == 0.0f)
		m_flWait500 = 1.0f;
	if (m_flLip504 == 0.0f)
		m_flLip504 = 4.0f;
	m_nState4f8 = 1;
	m_vec508 = *(Vector *)vfunc220();
	float dist = fabs((vfunc214()[0] - 2.0f) * m_vecMovedir[0])
		+ fabs((vfunc214()[1] - 2.0f) * m_vecMovedir[1])
		+ fabs((vfunc214()[2] - 2.0f) * m_vecMovedir[2]);
	m_vec514 = m_vec508 + (*(Vector *)m_vecMovedir) * (dist - m_flLip504);
	if ((m_vec514 - m_vec508).Length() < 1.0f || (m_flags204 & 1))
		m_vec514 = m_vec508;
	int bNoReturn = (m_flWait500 == -1.0f);
	m_b55c = bNoReturn;
	m_b55d = 0;
	if (m_flags204 & 0x800)
		m_b5c4 = 1;
	if (m_flags204 & 0x1000)
		m_b5c5 = 1;
	if (m_flags204 & 0x400)
		m_pfnUse = static_cast<void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float)>(&CBaseButton::sub_100c9250);
	else
		m_pfnUse = 0;
	if (m_flags204 & 0x100) {
		m_pfnTouch = static_cast<void (CBaseEntity::*)(CBaseEntity *)>(&CBaseButton::sub_100c9430);
	} else {
		m_pfnTouch = 0;
	}
	vfunc223();
}
// END FUNCTION

// FUNCTION: 0x100c9170 size=0xe
#include "CBaseButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CBaseButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100c9190 size=0x81
#include "CBaseEntity.h"
#include "engineiface.h"
#include "globalvars.h"

struct CollX {
	virtual void v0();
	virtual int vfunc1();
};
extern char g_1070d1b0[];
void sub_1000fca9();
void __cdecl sub_10002a22(CBaseEntity *p, int a, int b, int c, int d, char *e);

struct CUnknown100c9190 : CBaseEntity {
	void sub_100c9190();
};

void CUnknown100c9190::sub_100c9190()
{
	sub_100ac4e0((int)sub_1000fca9, 0, 0);
	float lo, hi;
	double add;
	if (enginerandom->vfunc2(0, 5)) {
		float t = enginerandom->vfunc1(10.0f, 15.0f);
		t += 10.0;
		*(float *)((char *)this + 0x17c) = t + gpGlobals->curtime;
	} else {
		float t = enginerandom->vfunc1(0.0f, 0.3f);
		t += 0.1;
		*(float *)((char *)this + 0x17c) = t + gpGlobals->curtime;
	}
	CollX *c = (CollX *)((char *)this + 0x270);
	sub_10002a22(this, c->vfunc1(), 1, 1, 1, g_1070d1b0);
}
// END FUNCTION

// FUNCTION: 0x100c9250 size=0x104
#include "CBaseButton.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

void CBaseButton::sub_100c9250(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
	if (m_nState4f8 != 2 && m_nState4f8 != 3 && !m_b5c4) {
		if (sub_100a7bd0(pActivator)) {
			if (pActivator)
				m_hActivator53c = *pActivator->vfunc1();
			else
				m_hActivator53c = 0xffffffff;
			if (m_nState4f8 == 0) {
				if (m_flags204 & 0x20) {
					m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0);
					sub_100c97c0();
				}
			} else {
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0);
				sub_100c9560();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100c93b0 size=0x51
#include "CBaseButton.h"

static inline bool HasSpawnFlags(CBaseButton *p, int flags) { return (p->m_flags204 & flags) != 0; }

int CBaseButton::sub_100c93b0()
{
	// Ignore touches if button is moving, or pushed-in and waiting to auto-come-out.
	if (m_nState4f8 == 2 ||
		m_nState4f8 == 3 ||
		(m_nState4f8 == 0 && !m_b55c && !HasSpawnFlags(this, 32)))
		return 0;

	if (m_nState4f8 == 0)
	{
		if (HasSpawnFlags(this, 32) && !m_b55c)
		{
			return 2;
		}
	}
	else
		return 1;

	return 0;
}
// END FUNCTION

// FUNCTION: 0x100c9430 size=0xec
#include "CBaseButton.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

struct CButtonToucherView {
	virtual void v0();
	virtual unsigned int *GetRefEHandle();
	char m_pad0004[0x4c - 4];
	unsigned int m_flags4c;
	char m_pad0050[0xa8 - 0x50];
	int m_fieldA8;
	bool Bit2() const { unsigned int f = m_flags4c; f >>= 2; return (f & 1) != 0; }
};

// TARGET: CBaseButton::sub_100c9430
void CBaseButton::sub_100c9430(CBaseEntity *pOther)
{
	CButtonToucherView *pTouch = (CButtonToucherView *)pOther;
	if (pTouch->m_fieldA8 != 0 || (m_b5c5 && pTouch->Bit2())) {
		m_hActivator53c = *pTouch->GetRefEHandle();
		int state = sub_100c93b0();
		if (state && !m_b5c4) {
			m_pfnTouch = 0;
			if (state == 2) {
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
				sub_100c97c0();
			} else {
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
				sub_100c9560();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100c9560 size=0xcc
#include "CBaseButton.h"
#include "CBaseToggle.h"
#include "CUnknown1073dc00.h"
#include "CEHandleGet.h"

extern CUnknown1073dc00 g_1073dc00;
extern int g_106e6f78;

// TARGET: CBaseButton::sub_100c9560
void CBaseButton::sub_100c9560()
{
	if (!m_b5c4) {
		if (!((unsigned char)(m_flags204 >> 13) & 1))
			g_1073dc00.sub_101f5950((CBaseEntity *)this, g_106e6f78, 2, 1.0f, 1.25f);
		if (m_flags204 & 1)
			m_Output590.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0);
		m_nState4f8 = 2;
		m_pfn0114 = static_cast<void (CBaseEntity::*)()>(&CBaseButton::sub_100c96a0);
		if (!m_b55d)
			((CBaseToggle *)this)->sub_101c1520(&m_vec514, m_flSpeed164);
		else
			((CBaseToggle *)this)->sub_101c17e0(&m_vec52c, *(int *)&m_flSpeed164);
	}
}
// END FUNCTION

// FUNCTION: 0x100c9670 size=0x1a
#include "CBaseEntity.h"
#include "CBaseButton.h"

int CBaseButton::vfunc117()
{
    return (((CBaseEntity *)this)->CBaseEntity::vfunc117() & ~2) | ((m_flags204 >> 7) & 8);
}
// END FUNCTION

// FUNCTION: 0x100c96a0 size=0xd7
#include "CBaseEntity.h"
#include "CCameraTrack.h"

struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
void sub_10002cd4();
void sub_10010e6f();

struct CUnknown100c96a0 : CBaseEntity {
	void sub_100c96a0();
};

void CUnknown100c96a0::sub_100c96a0()
{
	if (!*((char *)this + 0x5c4)) {
		*(int *)((char *)this + 0x4f8) = 0;
		if (*((char *)this + 0x55c) || (*(unsigned int *)((char *)this + 0x204) & 0x20)) {
			if (*(unsigned int *)((char *)this + 0x204) & 0x100)
				*(void (**)())((char *)this + 0x1ec) = sub_10002cd4;
			else
				*(void (**)())((char *)this + 0x1ec) = 0;
		}
		if (!*((char *)this + 0x55c)) {
			*(float *)((char *)this + 0x17c) = *(float *)((char *)this + 0x500) + gpGlobals->curtime;
			sub_100ac4e0((int)sub_10010e6f, 0, 0);
		}
		*(int *)((char *)this + 0x5c0) = 1;
		if (!(*((char *)this + 0x204) & 1)) {
			unsigned int h = *(unsigned int *)((char *)this + 0x53c);
			EntInfo *e;
			((CCameraTrackMember *)((char *)this + 0x590))->sub_10010794((CCameraTrack *)((h != 0xffffffff && (e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff), e->serial == (h >> 13))) ? e->ent : 0), (CCameraTrack *)this, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100c97c0 size=0xd4
#include "CBaseButton.h"
#include "CBaseToggle.h"
#include "CEHandleGet.h"
#include "CUnknown1073dc00.h"
extern CUnknown1073dc00 g_1073dc00;
extern int g_106e6f7c;

// TARGET: CBaseButton::sub_100c97c0
void CBaseButton::sub_100c97c0()
{
    m_nState4f8 = 3;
    if (m_flags204 & 1)
        m_Output5a8.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
    if (!((char)(m_flags204 >> 13) & 1))
        g_1073dc00.sub_101f5950((CBaseEntity *)this, g_106e6f7c, 2, 1.0f, 1.25f);
    m_pfn0114 = static_cast<void (CBaseEntity::*)()>(&CBaseButton::sub_100c98e0);
    if (!m_b55d) {
        ((CBaseToggle *)this)->sub_101c1520(&m_vec508, m_flSpeed164);
        m_n5c0 = 0;
    } else {
        ((CBaseToggle *)this)->sub_101c17e0(&m_vec520, *(int *)&m_flSpeed164);
        m_n5c0 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100c98e0 size=0x9f
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CCameraTrack.h"

extern CGlobalEntityList *g_10566458;
extern double g_10449270;
void sub_10002cd4();
void sub_1000fca9();


struct CHandleLookup
{
	static CGlobalEntityList_Ent *Get(unsigned int hHandle)
	{
		if (hHandle != (unsigned int)-1) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[hHandle & 0x1fff];
			if (pSlot->m_Serial == (int)(hHandle >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

void __fastcall sub_100c98e0(char *self)
{
	*(int *)(self + 0x4f8) = 1;
	if (!(*(unsigned char *)(self + 0x204) & 1))
		((CCameraTrackMember *)(self + 0x5a8))->sub_10010794((CCameraTrack *)CHandleLookup::Get(*(unsigned int *)(self + 0x53c)), (CCameraTrack *)self, 0);
	unsigned int flags = *(unsigned int *)(self + 0x204);
	if (flags & 0x100)
		*(void (**)())(self + 0x1ec) = sub_10002cd4;
	else
		*(int *)(self + 0x1ec) = 0;
	if (flags & 0x40) {
		((CBaseEntity *)self)->sub_100ac4e0((int)sub_1000fca9, 0, 0);
		*(float *)(self + 0x17c) = gpGlobals->curtime + g_10449270;
	}
}
// END FUNCTION

// FUNCTION: 0x100c99b0 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000f37b(GP *);
extern int vt_10452dcc;
extern char g_1055cb68[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_rot_button
DLL_EXPORT GP *func_rot_button()
{
	GP *p = (GP *)sub_1000db89(0x5d0);
	if (p) {
		sub_1000f37b(p);
		*(int **)p = &vt_10452dcc;
	} else {
		p = 0;
	}
	p->name(g_1055cb68);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100c9a20 size=0x2bf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRotButton.h"
#include "CCollisionProperty.h"
#include "CFlagsUnit.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

extern float g_104454c4;

// TARGET: CRotButton::vfunc103
void CRotButton::vfunc103()
{
	((CBaseEntity *)this)->sub_101c1a70();

	if (m_flags204 & 2)
		m_vecAngles190 = m_vecAngles190 * -1.0f;

	((CBaseEntity *)this)->vfunc93(8, 0);

	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_pData26c ? (const char *)m_pData26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}

	if (m_flags204 & 1)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_pData26c ? (const char *)m_pData26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}

	int dummy;
	const char *pszModel = *((CBaseEntity *)this)->vfunc9(&dummy);
	if (!pszModel)
		pszModel = g_106b8540;
	((CBaseEntity *)this)->vfunc105(pszModel);

	if (m_flSpeed164 == g_104454c4)
		m_flSpeed164 = 40.0f;
	if (m_fl500 == g_104454c4)
		m_fl500 = 1.0f;
	if (0 < m_nHealth210)
		m_n1fc = 2;

	m_nState4f8 = 1;

	m_vec520 = *((CEntityVSlots *)this)->slot221();
	m_vec52c = *((CEntityVSlots *)this)->slot221() + m_vecAngles190 * m_fl4fc;

	m_b55c = (-1.0f == m_fl500) ? 1 : 0;
	m_b55d = 1;

	*(void (CBaseButton::**)())((char *)this + 0x1f0) =
		reinterpret_cast<void (CBaseButton::*)()>(&CBaseButton::sub_100c9250);

	if (!(0x100 & m_flags204))
		*(void (CBaseButton::**)())((char *)this + 0x1ec) = 0;
	else
		*(void (CBaseButton::**)())((char *)this + 0x1ec) =
			reinterpret_cast<void (CBaseButton::*)()>(&CBaseButton::sub_100c9430);

	((CBaseButton *)this)->vfunc223();
}
// END FUNCTION

// FUNCTION: 0x100c9d90 size=0xe
#include "CRotButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CRotButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100c9db0 size=0x6
#include "datamap.h"
#include "CMomentaryRotButton.h"
namespace lifted {
extern char g_1055c264;
}
datamap_t *CMomentaryRotButton::vfunc82()
{
    return (datamap_t *)&lifted::g_1055c264;
}
// END FUNCTION

// FUNCTION: 0x100c9dd0 size=0x5
int * sub_100c9e10(void);
int * g_106e6f6c = ((int * (*)(int))sub_100c9e10)(0);
// END FUNCTION

// FUNCTION: 0x100c9e10 size=0x1bf
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
extern int g_1055c264[2];
void sub_100032fb();
void sub_1001028f();
void sub_10009fa2();
void sub_1000a033();
void sub_1000c658();

int *sub_100c9e10()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_lastUsed", {0x5d4, 0}, 1, 2 },
        { 4, "m_direction", {0x5d8, 0}, 1, 6, "StartDirection" },
        { 1, "m_returnSpeed", {0x5dc, 0}, 1, 6, "returnspeed" },
        { 3, "m_start", {0x5e0, 0}, 1, 2 },
        { 3, "m_end", {0x5ec, 0}, 1, 2 },
        { 4, "m_sounds", {0x5f8, 0}, 1, 6, "sounds" },
        { 1, "m_IdealYaw", {0x5fc, 0}, 1, 2 },
        { 1, "m_flStartPosition", {0x600, 0}, 1, 6, "StartPosition" },
        { 1, "m_flTimeDelta", {0x604, 0}, 1, 2 },
        { 0, "CMomentaryRotButtonUseMoveDone", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100032fb },
        { 0, "CMomentaryRotButtonReturnMoveDone", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1001028f },
        { 0, "CMomentaryRotButtonSetPositionMoveDone", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10009fa2 },
        { 0, "CMomentaryRotButtonUpdateThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000a033 },
        { 1, "InputSetPosition", {0, 0}, 1, 8, "SetPosition", 0, (void *)sub_1000c658 },
        { 10, "m_Position", {0x55c, 0}, 1, 0x16, "Position", g_1055dc70 },
        { 10, "m_OnPressed", {0x574, 0}, 1, 0x16, "OnPressed", g_1055dc70 },
        { 10, "m_OnUnpressed", {0x58c, 0}, 1, 0x16, "OnUnpressed", g_1055dc70 },
        { 10, "m_OnFullyClosed", {0x5bc, 0}, 1, 0x16, "OnFullyClosed", g_1055dc70 },
        { 10, "m_OnFullyOpen", {0x5a4, 0}, 1, 0x16, "OnFullyOpen", g_1055dc70 },
    };
    g_1055c264[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1055c264[0] = (int)&dataDesc[1];
    return g_1055c264;
}
// END FUNCTION

// FUNCTION: 0x100ca040 size=0x80
#include "platform.h"
#include "CBaseEntity.h"

void *sub_100aa720(int size);
extern void *vt_1045325c[];
extern char g_1055cc08[];
void __fastcall sub_1000d5ee(void *pThis);
void __fastcall sub_10002ddd(void *pThis);

// TARGET: momentary_rot_button
DLL_EXPORT CBaseEntity *momentary_rot_button()
{
	void *mem = sub_100aa720(0x608);
	CBaseEntity *p;
	if (mem)
	{
		p = (CBaseEntity *)mem;
		sub_1000d5ee(p);
		sub_10002ddd((char *)p + 0x55c);
		sub_10002ddd((char *)p + 0x574);
		sub_10002ddd((char *)p + 0x58c);
		sub_10002ddd((char *)p + 0x5a4);
		sub_10002ddd((char *)p + 0x5bc);
		*(void ***)p = vt_1045325c;
	}
	else
		p = 0;
	p->vfunc106(g_1055cc08);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100ca0e0 size=0x1e
#include "CBaseEntity.h"
// TARGET: CMomentaryRotButton::vfunc117
#include "CMomentaryRotButton.h"

unsigned char CMomentaryRotButton::vfunc117()
{
	unsigned char r = (unsigned char)((CBaseEntity *)this)->CBaseEntity::vfunc117();
	unsigned int flags = m_nSpawnFlags204;
	r &= 0xfd;
	if (flags & 1)
		return r;
	if (flags & 2)
		return r;
	return r | 0x10;
}
// END FUNCTION

// FUNCTION: 0x100ca110 size=0x3d3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CMomentaryRotButton.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

__declspec(dllimport) void Warning(const char *pszFormat, ...);

struct CMRBView
{
	char m_pad0000[0x26c];
	const char *m_name26c;
};

void CMomentaryRotButton::vfunc103()
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	CMRBView *pView = (CMRBView *)this;
	((CBaseEntity *)this)->sub_101c1a70();
	if (m_flSpeed164 == 0)
		m_flSpeed164 = 100.0f;
	if (m_flStartPosition < 0.0 || m_flStartPosition > 1.0) {
		Warning("WARNING: Momentary door (%s) start position not between 0 and 1.  Clamping.\n", ((CBaseEntity *)this)->sub_1000b5cd());
		m_flStartPosition = (m_flTarget5fc > 1.0f) ? 1.0f : ((m_flTarget5fc < 0.0f) ? 0.0f : m_flTarget5fc);
	}
	if (m_nDirection5d8 != 1 && m_nDirection5d8 != -1)
		m_nDirection5d8 = 1;
	if (m_flRange4fc < 0.0f) {
		*(Vector *)m_vecMoveDir = -*(Vector *)m_vecMoveDir;
		m_flRange4fc = -m_flRange4fc;
	}
	m_vecStart5e0 = *(Vector *)vfunc221() - (*(Vector *)m_vecMoveDir * m_flRange4fc) * m_flStartPosition;
	m_vecEnd5ec = (*(Vector *)m_vecMoveDir * m_flRange4fc) * (1.0f - m_flStartPosition) + *(Vector *)vfunc221();
	m_flTarget5fc = m_flStartPosition;
	if (m_flStartPosition == 0.0)
		m_nDirection5d8 = -1;
	else if (m_flStartPosition == 1.0)
		m_nDirection5d8 = 1;
	if (!(m_nSpawnFlags204 & 2)) {
		m_nUsed5d4 = 0;
		sub_100cae20(0, this);
	}
	CCollisionProperty *pCol;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pView->m_name26c ? pView->m_name26c : g_106b8540, g_106b8540);
		pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc480(1);
	}
	if (!(m_nSpawnFlags204 & 1)) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pView->m_name26c ? pView->m_name26c : g_106b8540, g_106b8540);
		pCol->AddSolidFlags(4);
	}
	pSlots->slot93(8, 0);
	((CBaseEntity *)this)->sub_100b3b00();
	{
		int buf;
		const char *pszName = *pSlots->slot9(&buf);
		if (!pszName)
			pszName = g_106b8540;
		pSlots->slot105(pszName);
	}
	pSlots->slot223();
}
// END FUNCTION

// FUNCTION: 0x100ca5f0 size=0xe
#include "CMomentaryRotButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CMomentaryRotButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100ca610 size=0x1
void sub_100ca610()
{
}
// END FUNCTION

// FUNCTION: 0x100ca630 size=0xa9
#include "CMomentaryRotButton.h"

float sub_101c1af0(int flags, float *a, float *b);
extern float g_104454c4;

// TARGET: CMomentaryRotButton::sub_100ca630
float CMomentaryRotButton::sub_100ca630(float *pAngles)
{
	float sign = 1.0f;
	if (m_vecMoveDir[0] < g_104454c4 || m_vecMoveDir[1] < g_104454c4 || m_vecMoveDir[2] < g_104454c4)
		sign = -1.0f;
	float v = sign / m_flRange4fc * sub_101c1af0(m_nSpawnFlags204, pAngles, (float *)((char *)this + 0x5e0));
	if (v > 1.0f)
		return 1.0f;
	if (v < g_104454c4)
		v = g_104454c4;
	return v;
}
// END FUNCTION

// FUNCTION: 0x100ca710 size=0x230
#include "CMomentaryRotButton.h"
#include "inputdata_t.h"
#include "QAngle.h"
#include <math.h>

extern QAngle g_1070d9d0;	// vec3_angle
float sub_101c1af0(int flags, const float *pA, const float *pB);

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))
#define min(a, b) (((a) < (b)) ? (a) : (b))

inline float VariantFloat(const variant_t &v) { return (v.fieldType == 1) ? v.flValue : 0; }

// TARGET: CMomentaryRotButton::sub_100ca710
void CMomentaryRotButton::sub_100ca710(inputdata_t &inputdata)
{
	m_flTarget5fc = clamp(VariantFloat(inputdata.value), 0.0f, 1.0f);

	float flCurPos = sub_100ca630(vfunc221());
	if (flCurPos < m_flTarget5fc)
	{
		QAngle vel = m_flSpeed164 * *(QAngle *)m_vecMoveDir;
		sub_100b2f50(&vel.x);
		m_nDirection5d8 = 1;
	}
	else if (flCurPos > m_flTarget5fc)
	{
		QAngle vel = -m_flSpeed164 * *(QAngle *)m_vecMoveDir;
		sub_100b2f50(&vel.x);
		m_nDirection5d8 = -1;
	}
	else
	{
		sub_100b2f50(&g_1070d9d0.x);
		return;
	}

	m_pfnThink114 = &CMomentaryRotButton::sub_100caa40;
	QAngle vecNewAngles = *(QAngle *)&m_vecStart5e0 + *(QAngle *)m_vecMoveDir * (m_flRange4fc * m_flTarget5fc);
	float flAngleDelta = fabs(sub_101c1af0(m_nSpawnFlags204, &vecNewAngles.x, vfunc221()));
	float dt = flAngleDelta / m_flSpeed164;
	m_flTimeDelta = min(dt, 0.1f);
	m_flTime3fc = m_flTimeDelta + m_flLocalTime3f4;
}
// END FUNCTION

// FUNCTION: 0x100ca9d0 size=0x46
#include "CMomentaryRotButton.h"
void CMomentaryRotButton::sub_100ca9d0()
{
	if (m_flTarget5fc == 1.0) {
		m_Output5bc.sub_100cd660(this, this, 0);
		return;
	}
	if (m_flTarget5fc == 0.0) {
		m_Output5a4.sub_100cd660(this, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x100caa40 size=0x126
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CMomentaryRotButton.h"

extern Vector g_1070d9d0;

#define TV1(n) virtual void n();
#define TV10(p) TV1(p##0) TV1(p##1) TV1(p##2) TV1(p##3) TV1(p##4) TV1(p##5) TV1(p##6) TV1(p##7) TV1(p##8) TV1(p##9)

class CAnglesSlot64
{
public:
	TV10(a0) TV10(a1) TV10(a2) TV10(a3) TV10(a4) TV10(a5)
	TV1(b0) TV1(b1) TV1(b2) TV1(b3)
	virtual void slot64(const Vector &vecAngles);	// SetAbsAngles by reference
};

struct RotButtonView
{
	char pad0[0x5fc];
	float m_flTarget5fc;
	float m_f600;
	float m_flThinkDelta604;
};

void CMomentaryRotButton::sub_100caa40()
{
	RotButtonView *pView = (RotButtonView *)this;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	float flPos = sub_100ca630(&pSelf->slot221()->x);
	if ((flPos >= pView->m_flTarget5fc && m_nDirection5d8 == 1) || (flPos <= pView->m_flTarget5fc && m_nDirection5d8 == -1))
	{
		sub_100b2f50(&g_1070d9d0.x);
		float flDist = m_flRange4fc * pView->m_flTarget5fc;
		((CAnglesSlot64 *)this)->slot64(*(Vector *)m_vecMoveDir * flDist + m_vecStart5e0);
		m_flNextThink = 0;
		m_flTime3fc = 0;
		sub_100cae20(pView->m_flTarget5fc, this);
		sub_100ca9d0();
	}
	else
	{
		sub_100cae20(flPos, this);
		m_flTime3fc = pView->m_flThinkDelta604 + m_flLocalTime3f4;
	}
}
// END FUNCTION

// FUNCTION: 0x100cabc0 size=0xbb
#include "CMomentaryRotButton.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList *g_10566458;
void sub_1000a033();

// TARGET: CMomentaryRotButton::vfunc173
void CMomentaryRotButton::vfunc173(int a, int b, int c, int d)
{
	bool bFlag = false;
	if (m_nUsed5d4 == 0) {
		bFlag = true;
		m_nDirection5d8 = -m_nDirection5d8;
		unsigned int h = m_hEntity53c;
		void *pEnt;
		if (h == 0xffffffff) {
			pEnt = 0;
		} else {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
			pEnt = pSlot->m_Serial == (int)(h >> 13) ? pSlot->m_pEntity : 0;
		}
		m_Output574.sub_100cd660(pEnt, this, 0);
	}
	m_nUsed5d4 = 1;
	float flAngle = sub_100ca630((float *)((CEntityVSlots *)this)->slot221());
	sub_100cacb0(flAngle, bFlag);
	((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000a033, 0, 0);
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100cacb0 size=0x115
#include "CMomentaryRotButton.h"
#include "CEntityVSlots.h"
extern Vector g_1070d9d0;
void CMomentaryRotButton::sub_100cacb0(float flAngle, bool bFlag)
{
    int direction = m_nDirection5d8;
    m_flTime3fc = m_flLocalTime3f4 + 0.1;
    if (direction > 0 && flAngle >= 1.0)
    {
        sub_100b2f50(&g_1070d9d0.x);
        ((CEntityVSlots *)this)->slot64(&m_vecEnd5ec.x);
        m_Output5bc.sub_100cd660(this, this, 0);
        return;
    }
    if (direction < 0 && flAngle <= 0.0f)
    {
        sub_100b2f50(&g_1070d9d0.x);
        ((CEntityVSlots *)this)->slot64(&m_vecStart5e0.x);
        m_Output5a4.sub_100cd660(this, this, 0);
        return;
    }
    Vector avel = *(Vector *)m_vecMoveDir * (direction * m_flSpeed164);
    sub_100b2f50(&avel.x);
    m_pfnThink114 = &CMomentaryRotButton::sub_100cae90;
}
// END FUNCTION

// FUNCTION: 0x100cae20 size=0x50
#include "CMomentaryRotButton.h"

// TARGET: CMomentaryRotButton::sub_100cae20
void CMomentaryRotButton::sub_100cae20(float flValue, void *pActivator)
{
	if (m_Position55c.Get() != flValue)
		m_Position55c.Set(flValue, pActivator, this);
}
// END FUNCTION

// FUNCTION: 0x100cae90 size=0xda
#include "CBaseEntity.h"
#include "CMomentaryRotButton.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

extern float g_1070d9d0[3];

// TARGET: CMomentaryRotButton::sub_100cae90
void CMomentaryRotButton::sub_100cae90()
{
	((CBaseEntity *)this)->sub_100b2f50(g_1070d9d0);
	float flFraction = sub_100ca630((float *)((CEntityVSlots *)this)->slot221());
	sub_100cae20(flFraction, this);
	m_Output58c.sub_100cd660(EHandle_Get(m_hEntity53c), this, 0.0f);
	m_nUsed5d4 = 0;
	if ((m_nSpawnFlags204 & 0x10) && m_flReturnDelay5dc > 0.0f) {
		m_pfnThink114 = &CMomentaryRotButton::sub_100cafb0;
		m_nDirection5d8 = -1;
		m_flTime3fc = m_flLocalTime3f4 + 0.1f;
		return;
	}
	((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
	m_pfnThink114 = 0;
}
// END FUNCTION

// FUNCTION: 0x100cafb0 size=0x105
#include "CBaseEntity.h"
#include "CMomentaryRotButton.h"

extern Vector g_1070d9d0;

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CButtonAnglesView
{
    SV100(a) SV100(b)
    SV10(c0) SV10(c1)
    SV1(c20)
    virtual float *vfunc221();
};
struct CButtonSetAnglesView
{
    SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5)
    SV1(a60) SV1(a61) SV1(a62) SV1(a63)
    virtual void vfunc64(const float *pAngles);
};
union CThinkFn
{
    void (CMomentaryRotButton::*pfn)();
    int n;
};

void CMomentaryRotButton::sub_100cafb0()
{
    if (sub_100ca630(((CButtonAnglesView *)this)->vfunc221()) <= 0.0f) {
        ((CBaseEntity *)this)->sub_100b2f50(&g_1070d9d0.x);
        ((CButtonSetAnglesView *)this)->vfunc64(&m_vecStart5e0.x);
        sub_100cae20(0.0f, 0);
        m_flTime3fc = 0.0f;
        m_pfnThink114 = 0;
        m_flNextThink = 0.0f;
        ((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
    } else {
        Vector vecVelocity = *(Vector *)m_vecMoveDir * -m_flReturnDelay5dc;
        ((CBaseEntity *)this)->sub_100b2f50(&vecVelocity.x);
        m_flTime3fc = m_flLocalTime3f4 + 0.1f;
        CThinkFn think;
        think.pfn = &CMomentaryRotButton::sub_100cb110;
        ((CBaseEntity *)this)->sub_100ac4e0(think.n, 0, 0);
        m_flNextThink = gpGlobals->curtime + 0.01f;
    }
}
// END FUNCTION

// FUNCTION: 0x100cb110 size=0x38
#include "CMomentaryRotButton.h"
#include "CEntityVSlots.h"


// TARGET: CMomentaryRotButton::sub_100cb110
void CMomentaryRotButton::sub_100cb110()
{
	float fValue = sub_100ca630((float *)((CEntityVSlots *)this)->slot221());
	sub_100cae20(fValue, 0);
	*(int *)&m_flNextThink = *(int *)&gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100cb160 size=0x258
#include "CMomentaryRotButton.h"
#include "CBaseEntity.h"
#include "QAngle.h"

__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int a, int b, const char *pszText, int d, int e, int f, int g, int h);

inline const QAngle &GetLocalAngles_100cb160(CMomentaryRotButton *p)
{
	return *(const QAngle *)p->vfunc221();
}

inline const QAngle &GetLocalAngularVelocity_100cb160(CMomentaryRotButton *p)
{
	return *(const QAngle *)((char *)p + 0x3c8);
}

int CMomentaryRotButton::vfunc124()
{
	int line = ((CBaseEntity *)this)->CBaseEntity::vfunc124();
	if (*(unsigned char *)((char *)this + 0x224) & 1)
	{
		char szBuf[0xff];
		int edict;

		Q_snprintf(szBuf, 0xff, "QAngle: %.2f %.2f %.2f", GetLocalAngles_100cb160(this)[0], GetLocalAngles_100cb160(this)[1], GetLocalAngles_100cb160(this)[2]);
		edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(EngineGlobals::g_1070b22c->vfunc35(edict), line, szBuf, 0, 0xff, 0xff, 0xff, 0xff);
		line++;

		Q_snprintf(szBuf, 0xff, "AVelocity: %.2f %.2f %.2f",
			GetLocalAngularVelocity_100cb160(this)[0], GetLocalAngularVelocity_100cb160(this)[1], GetLocalAngularVelocity_100cb160(this)[2]);
		edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(EngineGlobals::g_1070b22c->vfunc35(edict), line, szBuf, 0, 0xff, 0xff, 0xff, 0xff);
		line++;

		Q_snprintf(szBuf, 0xff, "Target Pos:   %3.3f", this->m_flTarget5fc);
		edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(EngineGlobals::g_1070b22c->vfunc35(edict), line, szBuf, 0, 0xff, 0xff, 0xff, 0xff);
		line++;

		float flCurPos = this->sub_100ca630(this->vfunc221());
		Q_snprintf(szBuf, 0xff, "Current Pos:   %3.3f", flCurPos);
		edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(EngineGlobals::g_1070b22c->vfunc35(edict), line, szBuf, 0, 0xff, 0xff, 0xff, 0xff);
		line++;

		Q_snprintf(szBuf, 0xff, "Direction: %s", this->m_nDirection5d8 == 1 ? "Forward" : "Backward");
		edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(EngineGlobals::g_1070b22c->vfunc35(edict), line, szBuf, 0, 0xff, 0xff, 0xff, 0xff);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x100cb460 size=0x62
#include "CRotButton.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CRotButton *CRotButton::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5a8))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x590))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x578))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x560))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100cb4f0 size=0x6d
#include "CMomentaryRotButton.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CMomentaryRotButton *CMomentaryRotButton::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x5bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x5a4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x58c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x574))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x55c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
