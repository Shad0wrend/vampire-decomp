// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 90 blocks
#include "vampire.h"

// FUNCTION: 0x100ed720 size=0x6
#include "CBaseDoor.h"
#include "datamap.h"
namespace lifted {
extern char g_10564578;
}
datamap_t * CBaseDoor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10564578);
}
// END FUNCTION

// FUNCTION: 0x100ed740 size=0x5
int * sub_100ed780(void);
int * g_106eb3d4 = ((int * (*)(int))sub_100ed780)(0);
// END FUNCTION

// FUNCTION: 0x100ed780 size=0x881
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
extern int g_10564578[2];
void sub_100f0170();
void sub_100f00a0();
void sub_100f0210();
void sub_100f0120();
void sub_100f02b0();
void sub_100efae0();
void sub_100f0f30();
void sub_100f0860();
void sub_100f11b0();
void sub_100eef50();
void sub_100f09d0();

#define F(t, n, o, fl) { t, n, {o, 0}, 1, fl, 0, 0, 0 }
#define K(t, n, o, fl, e) { t, n, {o, 0}, 1, fl, e, 0, 0 }
#define O(n, o, e) { 10, n, {o, 0}, 1, 0x16, e, g_1055dc70 }
#define I(n, e, f) { 0, n, {0, 0}, 1, 8, e, 0, (void *)f }
#define T(n, f) { 0, n, {0, 0}, 1, 0x20, 0, 0, (void *)f }

int *sub_100ed780()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        F(5, "m_bLocked", 0x55c, 2),
        K(1, "m_flBlockDamage", 0x560, 6, "dmg"),
        K(4, "m_UseIcon", 0x64c, 6, "use_icon"),
        K(4, "m_LockedIcon", 0x650, 6, "locked_icon"),
        O("m_OnBlockedOpening", 0x57c, "OnBlockedOpening"),
        O("m_OnBlockedClosing", 0x564, "OnBlockedClosing"),
        O("m_OnUnblockedOpening", 0x5ac, "OnUnblockedOpening"),
        O("m_OnUnblockedClosing", 0x594, "OnUnblockedClosing"),
        O("m_OnFullyClosed", 0x5c4, "OnFullyClosed"),
        O("m_OnFullyOpen", 0x5dc, "OnFullyOpen"),
        O("m_OnClose", 0x5f4, "OnClose"),
        O("m_OnOpen", 0x60c, "OnOpen"),
        F(12, "m_hLinkedDoor", 0x630, 2),
        K(2, "m_sLinkedDoor", 0x634, 6, "linked_door"),
        K(2, "m_sUseOverride", 0x63c, 6, "use_override"),
        F(12, "m_hUseOverride", 0x638, 2),
        F(15, "m_flNpcFailedTimer", 0x640, 2),
        F(4, "m_bfNpcFailedFlags", 0x644, 2),
        K(5, "m_bNoOpenWanted", 0x648, 6, "noopenwanted"),
        I("InputOpen", "Open", sub_100f0170),
        I("InputClose", "Close", sub_100f00a0),
        I("InputToggle", "Toggle", sub_100f0210),
        I("InputLock", "Lock", sub_100f0120),
        I("InputUnlock", "Unlock", sub_100f02b0),
        T("CBaseDoorDoorTouch", sub_100efae0),
        T("CBaseDoorDoorGoDownThink", sub_100f0f30),
        T("CBaseDoorDoorHitTop", sub_100f0860),
        T("CBaseDoorDoorHitBottom", sub_100f11b0),
        T("CBaseDoorDoorknobUse", sub_100eef50),
        T("CBaseDoorCloseWhenUnblocked", sub_100f09d0),
    };
    g_10564578[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10564578[0] = (int)&dataDesc[1];
    return g_10564578;
}
// END FUNCTION

// FUNCTION: 0x100ee240 size=0x43
#include "platform.h"
#include "CBaseDoor.h"
void *sub_100aa720(int size);
extern char g_105652bc[];

// TARGET: func_door
DLL_EXPORT CBaseEntity *func_door()
{
	void *mem = sub_100aa720(0x658);
	CBaseDoor *p;
	if (mem)
		p = ((CBaseDoor *)mem)->sub_100ee2b0();
	else
		p = 0;
	p->vfunc106(g_105652bc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100ee2b0 size=0xaf
#include "CBaseDoor.h"

extern int vt_104546d4[];

struct COutputCtorView
{
	char m_data[0x18];

	void sub_100cd2a0();
};

struct CBaseDoorCtorView
{
	int m_pVtable;
	char m_pad0004[0xa4 - 4];
	CBaseDoorCtorView *m_pSelf;
	char m_pad00a8[0x564 - 0xa8];
	COutputCtorView m_Outputs[8];
	char m_b624;
	char m_pad0625[3];
	int m_hDoorknob[2];
	int m_hLinked630;
	int m_pszLinked634;
	int m_hLinked638;
	char m_pad063c[0x64c - 0x63c];
	int m_n64c;
	int m_n650;
	char m_b654;

	void sub_101c0e20();
};

CBaseDoor *CBaseDoor::sub_100ee2b0()
{
	CBaseDoorCtorView *p = (CBaseDoorCtorView *)this;
	p->sub_101c0e20();
	p->m_Outputs[0].sub_100cd2a0();
	p->m_Outputs[1].sub_100cd2a0();
	p->m_Outputs[2].sub_100cd2a0();
	p->m_Outputs[3].sub_100cd2a0();
	p->m_Outputs[4].sub_100cd2a0();
	p->m_Outputs[5].sub_100cd2a0();
	p->m_Outputs[6].sub_100cd2a0();
	p->m_Outputs[7].sub_100cd2a0();
	for (int i = 0; i < 2; i++)
		p->m_hDoorknob[i] = -1;
	p->m_hLinked630 = -1;
	p->m_hLinked638 = -1;
	p->m_pVtable = (int)vt_104546d4;
	p->m_n64c = 10;
	p->m_n650 = 3;
	p->m_pSelf = p;
	p->m_b654 = 1;
	p->m_b624 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100ee390 size=0x3
#include "CBaseDoor.h"
bool CBaseDoor::vfunc241()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ee3b0 size=0x1d
#include "CBaseDoor.h"

// TARGET: CBaseDoor::sub_100ee3b0
char CBaseDoor::sub_100ee3b0()
{
	if (m_flags204 & 0x100)
		return (CBaseEntity::vfunc117() & ~2) | 8;
	return CBaseEntity::vfunc117() & ~2;
}
// END FUNCTION

// FUNCTION: 0x100ee3e0 size=0x3
#include "CBaseDoor.h"
bool CBaseDoor::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ee400 size=0x1
#include "CBaseDoor.h"
void CBaseDoor::vfunc249()
{
}
// END FUNCTION

// FUNCTION: 0x100ee420 size=0x8e
#include "CBaseDoor.h"

void __cdecl sub_100aa7b0(void *p);

CBaseDoor *CBaseDoor::vfunc5(unsigned char flags)
{
	m_items564[7].sub_100cd2d0();
	m_items564[6].sub_100cd2d0();
	m_items564[5].sub_100cd2d0();
	m_items564[4].sub_100cd2d0();
	m_items564[3].sub_100cd2d0();
	m_items564[2].sub_100cd2d0();
	m_items564[1].sub_100cd2d0();
	m_items564[0].sub_100cd2d0();
	m_items4a4[1].sub_100cd2d0();
	m_items4a4[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100ee4e0 size=0x5e
#include "CBaseDoor.h"
#include "CVSoundActivityTable_t.h"

extern CVActivitySound g_1074b308;
extern int g_106eb3e8;

// TARGET: CBaseDoor::sub_100ee4e0
void CBaseDoor::sub_100ee4e0(int a, char b)
{
	if (m_flags204 & 0x1000)
		return;
	int nMode = 3;
	if (a == g_106eb3e8)
		nMode = 4;
	if (b)
		g_1074b308.sub_101f5950((int)this, a, nMode, 0.2f, 2.0f);
	else
		g_1074b308.sub_101f5950((int)this, a, nMode, 0.85f, 2.0f);
}
// END FUNCTION

// FUNCTION: 0x100ee560 size=0x93
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CSoundControllerImp.h"
#include "CSoundEnt.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
extern int g_1072bc9c, g_1072bca0;
extern char g_1072bcc7, g_1072bcc8;

inline bool HasSF(int f, int m) { return (f & m) != 0; }
__forceinline void DoorSnd(CBaseDoor *p, int volume, char level) { CSoundEnt::sub_101bac90(4, &((CEntityVSlots *)p)->slot192(), volume, 2.0f, level, (CBaseEntity *)p->m_hActivator53c.Get()); }
void CBaseDoor::sub_100ee560(char bOpen)
{
	if (m_flags204 & 0x1000)
		return;
	if (bOpen)
		DoorSnd(this, g_1072bc9c, g_1072bcc7);
	else
		DoorSnd(this, g_1072bca0, g_1072bcc8);
}
// END FUNCTION

// FUNCTION: 0x100ee630 size=0xd8
#include "CBaseEntity.h"
#include "CBaseDoor.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;
extern void (__cdecl *g_109f362c)(const char *fmt, ...);

static inline bool IsValidHandle(unsigned int h)
{
	if (h == 0xffffffff)
		return false;
	EntInfo *e = &g_10566458->m_entries[h & 0x1fff];
	return e->m_serial == (int)(h >> 13) && e->m_pEntity != 0;
}

void CBaseDoor::sub_100ee630(CBaseEntity *pKnob)
{
	if (!IsValidHandle(m_hDoorknob0)) {
		if (pKnob)
			m_hDoorknob0 = *pKnob->vfunc1();
		else
			m_hDoorknob0 = 0xffffffff;
	} else if (!IsValidHandle(m_hDoorknob1)) {
		if (pKnob)
			m_hDoorknob1 = *pKnob->vfunc1();
		else
			m_hDoorknob1 = 0xffffffff;
	} else {
		g_109f362c("Door %s already has 2 doorknobs!", sub_100ab4f0());
	}
	m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CBaseDoor::sub_100eef50;
	m_flags204 = (m_flags204 & ~0x400u) | 0x100;
}
// END FUNCTION

// FUNCTION: 0x100ee750 size=0x85
#include "CUnknown100ee750.h"

struct SHandleEntry { void *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

static inline void *GetEnt(unsigned h)
{
    void *ent;
    if (h == 0xffffffff)
        ent = 0;
    else {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        ent = (he->serial == (h >> 13)) ? he->p : 0;
    }
    return ent;
}

void CUnknown100ee750::sub_100ee750(void *pEntity)
{
    if (GetEnt(m_hFirst) == pEntity) {
        m_hFirst = 0xffffffff;
        return;
    }
    if (GetEnt(m_hSecond) == pEntity)
        m_hSecond = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x100ee810 size=0xf7
#include "CBaseDoor.h"
#include "inputdata_t.h"

struct CSlots { void sub_10224170(inputdata_t *pData); };
struct EntInfo { CSlots *ent; int serial; int pad; };
extern char *g_10566458;

void CBaseDoor::sub_100ee810()
{
	inputdata_t data;
	data.value.iValue = 0;
	data.value.eVal = 0xffffffff;
	data.value.fieldType = 0;
	volatile unsigned int *ph1 = (unsigned int *)((char *)this + 0x628);
	unsigned int h = *ph1;
	if (h != 0xffffffff) {
		EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
		if (e->serial == (h >> 13) && e->ent) {
			unsigned int h2 = *ph1;
			CSlots *pEnt;
			if (h2 != 0xffffffff) {
				EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
				pEnt = e2->serial == (h2 >> 13) ? e2->ent : 0;
			} else
				pEnt = 0;
			pEnt->sub_10224170(&data);
		}
	}
	volatile unsigned int *ph2 = (unsigned int *)((char *)this + 0x62c);
	h = *ph2;
	if (h != 0xffffffff) {
		EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
		if (e->serial == (h >> 13) && e->ent) {
			unsigned int h2 = *ph2;
			CSlots *pEnt;
			if (h2 != 0xffffffff) {
				EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
				pEnt = e2->serial == (h2 >> 13) ? e2->ent : 0;
			} else
				pEnt = 0;
			pEnt->sub_10224170(&data);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100ee950 size=0x27d
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include <math.h>
#include "CBaseDoor.h"
#include "CEntityVSlots.h"
#include "ehandle.h"
#include "CUnknown100290c0.h"

#define KNOB_LOOKUP(h) ((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(&(h))
#define KNOB_GET(h) ((EHANDLE *)&(h))->Get()

// TARGET: CBaseDoor::sub_100ee950
CBaseEntity *CBaseDoor::sub_100ee950(CBaseEntity *pTarget)
{
	if (!pTarget)
		return 0;
	if (KNOB_LOOKUP(m_hDoorknob0) && KNOB_LOOKUP(m_hDoorknob1))
	{
		Vector vTarget;
		((CEntityVSlots *)pTarget)->slot193(&vTarget);
		Vector vTmp;
		const Vector *p0 = ((CEntityVSlots *)KNOB_LOOKUP(m_hDoorknob0))->slot193(&vTmp);
		float d0 = fabs(vTarget.y - p0->y) + fabs(vTarget.z - p0->z) + fabs(vTarget.x - p0->x);
		const Vector *p1 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob1))->slot193(&vTmp);
		float d1 = fabs(vTarget.y - p1->y) + fabs(vTarget.z - p1->z) + fabs(vTarget.x - p1->x);
		if (d1 > d0)
			return KNOB_GET(m_hDoorknob0);
		return KNOB_GET(m_hDoorknob1);
	}
	if (KNOB_GET(m_hDoorknob0) || KNOB_GET(m_hDoorknob1))
	{
		if (KNOB_GET(m_hDoorknob0))
			return KNOB_GET(m_hDoorknob0);
		if (KNOB_GET(m_hDoorknob1))
			return KNOB_GET(m_hDoorknob1);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100eec70 size=0x56
#include "CBaseDoor.h"
#include "CUnknown100eef10.h"

struct CDoorLockView { char sub_10224100(); };

char CBaseDoor::sub_100eec70(void *pActivatorOwner)
{
	if (((CUnknown100eef10 *)this)->sub_100eef10())
		return 1;
	if ((*(unsigned int *)((char *)this + 0x204) & 0x200) && pActivatorOwner && *(int *)((char *)pActivatorOwner + 0x94))
		return 1;
	CBaseEntity *pLock = sub_10008cba((int)pActivatorOwner);
	if (pLock)
		return ((CDoorLockView *)pLock)->sub_10224100();
	return *((char *)this + 0x55c);
}
// END FUNCTION

// FUNCTION: 0x100eecf0 size=0xa2
#include "CBaseDoor.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];
struct CNodeX { char pad[4]; const char *m_pszName; };
struct CListNode100cd940 {
    char pad0[0x14];
    void *m_pFirst;
    CNodeX *sub_100cd970(int index);
};
int __fastcall sub_100cd940(CListNode100cd940 *p);

// TARGET: CBaseDoor::sub_100eecf0
char CBaseDoor::sub_100eecf0()
{
    CListNode100cd940 *l = (CListNode100cd940 *)((char *)this + 0x5dc);
    int n = sub_100cd940(l);
    int i;
    for (i = 0; i < n; i++) {
        CNodeX *p = l->sub_100cd970(i);
        if (p && !_strcmpi("ChangeNow", p->m_pszName ? p->m_pszName : g_106b8540))
            goto found;
    }
    l = (CListNode100cd940 *)((char *)this + 0x60c);
    n = sub_100cd940(l);
    for (i = 0; i < n; i++) {
        CNodeX *p = l->sub_100cd970(i);
        if (p && !_strcmpi("ChangeNow", p->m_pszName ? p->m_pszName : g_106b8540))
            goto found;
    }
    return 0;
found:
    *((char *)this + 0x624) = 1;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100eedd0 size=0x7
struct CUnknown100eedd0 { char sub_100eedd0(); };
char CUnknown100eedd0::sub_100eedd0()
{
    return *(char *)((char *)this + 0x624);
}
// END FUNCTION

// FUNCTION: 0x100eedf0 size=0xdb
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseDoor.h"
#include "CEHandleGet.h"
struct CDoorView_100eedf0 { char m_pad0[0x204]; unsigned int m_nFlags; char m_pad1[0x55c - 0x208]; char m_b55c; char m_pad2[0x64c - 0x55d]; int m_n64c; int m_n650; };
int CBaseDoor::vfunc35(int a)
{
	if (sub_100127ec())
		return 0x3a;
	unsigned int h = m_hLinked638;
	if (h != 0xffffffff)
	{
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity != 0)
			return ((CBaseDoor *)EHandle_Get(m_hLinked638))->vfunc35(a);
	}
	CBaseEntity *pOther = sub_10008cba(a);
	if (pOther)
		return ((CBaseDoor *)pOther)->vfunc35(a);
	CDoorView_100eedf0 *v = (CDoorView_100eedf0 *)this;
	if (!(v->m_nFlags & 0x500))
		return 0;
	if (v->m_b55c)
		return v->m_n650;
	if (sub_1000cc57())
		return 0x3b;
	return v->m_n64c;
}
// END FUNCTION

// FUNCTION: 0x100eef10 size=0x29
#include "CUnknown100eef10.h"

void *sub_1000ac8b(int a);

struct CUnknown100eef10Obj
{
    int sub_10007ee6();
};

// TARGET: CUnknown100eef10::sub_100eef10
bool CUnknown100eef10::sub_100eef10()
{
    if (m_b648) {
        CUnknown100eef10Obj *p = (CUnknown100eef10Obj *)sub_1000ac8b(1);
        if (p) {
            if (p->sub_10007ee6() > 0)
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100eef50 size=0xad
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CBaseCombatCharacter.h"
#include "CItemContainerLock.h"
#include "CEntityVSlots.h"

__declspec(dllimport) void DevMsg(const char *, ...);
extern int g_106eb3e4;

void CBaseDoor::sub_100eef50(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
    CBaseCombatCharacter *pPlayer;
    if (!pActivator || !(pPlayer = *(CBaseCombatCharacter **)((char *)pActivator + 0xa8))) {
        DevMsg("Non-player entity %s trying to use doorknob", pActivator->sub_100ab4f0());
        return;
    }
    CBaseEntity *pKnob = sub_10008cba((int)pPlayer);
    if (pKnob) {
        if (((CItemContainerLock *)pKnob)->sub_10224100()) {
            ((CEntityVSlots *)pKnob)->slot273();
        } else {
            dsk8();
            return;
        }
    } else if (!*(char *)((char *)this + 0x55c)) {
        dsk8();
        return;
    }
    sub_100ee4e0(g_106eb3e4, pPlayer->sub_101671a0());
    sub_100ee560(pPlayer->sub_101671a0());
}
// END FUNCTION

// FUNCTION: 0x100ef030 size=0x17
#include "CBaseDoor.h"

void *CBaseDoor::vfunc38(int a)
{
	CBaseEntity *pFound = sub_10008cba(a);
	if (!pFound)
		pFound = this;
	return pFound;
}
// END FUNCTION

// FUNCTION: 0x100ef060 size=0x18b
#include "CBaseDoor.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_100ef060
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct DoorSeqEntry_100ef060
{
	int id;
	str_100ef060 name;
};

struct DoorRegistry_100ef060
{
	char pad[0x14];
	int count;
	DoorSeqEntry_100ef060** items;

	int sub_10009331(void* ent, const char* name, int flags);

	int Lookup(const char* name)
	{
		for (int i = 0; i < count; i++)
		{
			if (sub_1043e780(items[i]->name.ToCStr(), name) == 0)
				return items[i]->id;
		}
		return -1;
	}
};

extern DoorRegistry_100ef060 g_1074b308;
extern int g_106eb3dc;
extern int g_106eb3e0;
extern int g_106eb3e8;
extern int g_106eb3e4;

void CBaseDoor::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b308.sub_10009331(this, ((str_100ef060*)((char*)this + 0xc0))->ToCStr(), 0);
	g_106eb3dc = g_1074b308.Lookup("close");
	g_106eb3e0 = g_1074b308.Lookup("open");
	g_106eb3e8 = g_1074b308.Lookup("swing");
	g_106eb3e4 = g_1074b308.Lookup("locked");
}
// END FUNCTION

// FUNCTION: 0x100ef260 size=0x2c9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "Ray_t.h"
#include "math.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
void __cdecl sub_101cf5c0(CBaseEntity *pEnt, const Vector *pPos, int a);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CBaseDoor::sub_100ef260
void CBaseDoor::sub_100ef260()
{
	((CBaseEntity *)this)->vfunc104();
	((CEntityVSlots *)this)->slot171();

	{
		int dummy;
		((CBaseEntity *)this)->vfunc105(STRINGR(*((CEntityVSlots *)this)->slot9(&dummy)));
	}

	m_vecPosition508 = *((CEntityVSlots *)this)->slot220();

	float flExtent = fabs((((CEntityVSlots *)this)->slot214()->x - 2.0f) * m_vecMovedir[0])
	               + fabs((((CEntityVSlots *)this)->slot214()->y - 2.0f) * m_vecMovedir[1])
	               + fabs((((CEntityVSlots *)this)->slot214()->z - 2.0f) * m_vecMovedir[2])
	               - *(float *)((char *)this + 0x504);

	m_vecPosition514 = m_vecPosition508 + (*(Vector *)m_vecMovedir) * flExtent;

	if (m_flags204 & 1)
	{
		sub_101cf5c0(this, &m_vecPosition514, 0);
		m_nState4f8 = 0;
	}
	else
	{
		m_nState4f8 = 1;
	}

	if (m_flags204 & 0x800)
		m_b55c = 1;

	((CBaseEntity *)this)->vfunc93(8, 0);
	((CBaseEntity *)this)->sub_100b3b00();

	if (m_flSpeed164 == g_104454c4)
		m_flSpeed164 = 100.0f;

	*(void (CBaseDoor::**)(CBaseEntity *))((char *)this + 0x1ec) =
		reinterpret_cast<void (CBaseDoor::*)(CBaseEntity *)>(&CBaseDoor::sub_100efae0);

	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}

	if (_strcmpi(STRINGR(m_classname11c), "func_water") != 0 && (m_flags204 & 8))
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", STRINGR(m_name26c));
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}

	vfunc223();
	((CBaseEntity *)this)->sub_100a9470(1);

	m_flTimer640 = 0;
	m_bfNpcFailedFlags = 0;
	((char *)this)[0x655] = 0;
}
// END FUNCTION

// FUNCTION: 0x100ef5f0 size=0x21
struct CBaseDoorX
{
    void sub_10013534(bool bFlag);
    void sub_100ef5f0(bool bFlag);
};

// TARGET: sub_100ef5f0
void CBaseDoorX::sub_100ef5f0(bool bFlag)
{
    sub_10013534(bFlag);
    if (bFlag) {
        void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)this)[0x3e8 / 4];
        pfn(this);
    }
}
// END FUNCTION

// FUNCTION: 0x100ef630 size=0x8a
#include "CBaseDoor.h"

void sub_100043cc(CBaseDoor *door, void *pData, int a);

void CBaseDoor::vfunc250()
{
	unsigned int flags = *(unsigned int *)((char *)this + 0x204);
	if (!(flags & 0x20) && *(int *)((char *)this + 0x3fc) != 0xbf800000) {
		if (flags & 1) {
			sub_100043cc(this, (char *)this + 0x514, 0);
			*(int *)((char *)this + 0x4f8) = 0;
		} else {
			sub_100043cc(this, (char *)this + 0x508, 0);
			*(int *)((char *)this + 0x4f8) = 1;
		}
		*(int *)((char *)this + 0x3fc) = 0xbf800000;
		m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CBaseDoor::sub_10012837;
		switch (*(int *)((char *)this + 0x4f8)) {
		case 0:
			sub_100efbf0(1);
			break;
		case 1:
			sub_100efbf0(0);
			break;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100ef6f0 size=0x20e
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CCollisionProperty.h"
#include "IPhysicsObject.h"
#include "IPhysicsEnvironment.h"
#include "ScopeTrace.h"
#include "engineserver.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }


extern IPhysicsEnvironment *g_10723940;
extern "C" int __cdecl _strcmpi(const char *a, const char *b);

struct CVFluidParams
{
	float m_surface[4];
	float m_current[3];
	float m_damping;
	float m_torque;
	float m_viscosity;
	void *m_pGameData;
	char m_bUseAerodynamics;
	int m_nContents;
};

struct CVDoorView : CBaseDoor
{
	const char *GetClassname() { return STRINGR_F(m_classname11c); }
	bool IsSolidFlagSet()
	{
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", this ? (STRINGR_F(m_name26c)) : g_105387dc);
		return (m_b2b4 >> 2) & 1;
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (STRINGR_F(m_name26c)) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(flags);
	}
};

// TARGET: CBaseDoor::vfunc223
bool CBaseDoor::vfunc223()
{
	CVDoorView *pView = (CVDoorView *)this;
	if (_strcmpi(pView->GetClassname(), "func_water") != 0) {
		if (!pView->IsSolidFlagSet())
			sub_100a6150(0, 0, 0);
	} else {
		pView->AddSolidFlags(0x20);
		m_flags204 |= 0x1000;
		if (engine->vfunc58(vfunc8())) {
			int pObject = sub_100a6150(0, 0, 0);
			CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
			CVFluidParams params;
			params.m_damping = 0.01f;
			params.m_surface[0] = 0;
			params.m_surface[1] = 0;
			params.m_surface[2] = 1.0f;
			params.m_surface[3] = ((float *(__fastcall *)(void *))(*(void ***)pCol)[8])(pCol)[2] + pCol->vfunc2()[2] - 1.0f;
			params.m_current[0] = 0;
			params.m_current[1] = 0;
			params.m_current[2] = 0;
			params.m_torque = 0.1f;
			params.m_viscosity = 0.01f;
			params.m_pGameData = this;
			g_10723940->vfunc10((void *)pObject, &params);
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100ef990 size=0xa3
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CGlobalEntityList.h"

extern char g_106b8540[];	// empty string
extern CGlobalEntityList g_106eb5d8;

static inline void SetHandle(unsigned int *pHandle, CGlobalEntityList_Ent *pObj)
{
	if (pObj)
		*pHandle = *pObj->v1();
	else
		*pHandle = 0xffffffff;
}

void CBaseDoor::vfunc113()
{
	CBaseEntity::vfunc113();
	switch (m_nState4f8) {
	case 0:
		sub_100efbf0(1);
		break;
	case 1:
		sub_100efbf0(0);
		break;
	}
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszLinked634 ? m_pszLinked634 : g_106b8540, 0, 0);
	SetHandle(&m_hLinked630, pEnt == 0 ? 0 : *(CGlobalEntityList_Ent **)((char *)pEnt + 0xa4));
	pEnt = g_106eb5d8.sub_100f7770(0, m_pszLinked63c ? m_pszLinked63c : g_106b8540, 0, 0);
	if (pEnt)
		m_hLinked638 = *pEnt->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x100efa70 size=0x30
#include "CBaseDoor.h"
void sub_101cf5c0(CBaseDoor *pDoor, Vector *pPos, int a);
void CBaseDoor::vfunc156(int bOpen)
{
	if (!bOpen)
		sub_101cf5c0(this, &m_vecPosition514, 0);
	else
		sub_101cf5c0(this, &m_vecPosition508, 0);
}
// END FUNCTION

// FUNCTION: 0x100efab0 size=0x13
#include "CBaseDoor.h"
#include "CBaseEntitySlots.h"

void CBaseDoor::vfunc104()
{
	((CBaseEntitySlots *)this)->slot71();
	sub_100eecf0();
}
// END FUNCTION

// FUNCTION: 0x100efae0 size=0xc3
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CBCCSlotViews.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

class CDoorSlotView	// slots 158, 178 and 241
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14)
	VIEW_SLOT(150) VIEW_SLOT(151) VIEW_SLOT(152) VIEW_SLOT(153) VIEW_SLOT(154) VIEW_SLOT(155) VIEW_SLOT(156) VIEW_SLOT(157)
	virtual bool vfunc158();
	VIEW_SLOT(159)
	VIEW_SLOT10(16)
	VIEW_SLOT(170) VIEW_SLOT(171) VIEW_SLOT(172) VIEW_SLOT(173) VIEW_SLOT(174) VIEW_SLOT(175) VIEW_SLOT(176) VIEW_SLOT(177)
	virtual void vfunc178(CDoorSlotView *pOther);
	VIEW_SLOT(179)
	VIEW_SLOT10(18) VIEW_SLOT10(19) VIEW_SLOT10(20) VIEW_SLOT10(21) VIEW_SLOT10(22) VIEW_SLOT10(23)
	VIEW_SLOT(240)
	virtual bool vfunc241();
};

struct CDoorEntListView	// the global entity list object (pointer at 0x10566458)
{
	CBaseEntity *sub_100290c0(unsigned int *pHandle);
};
extern CDoorEntListView *g_10566458;

void CBaseDoor::sub_100efae0(CBaseEntity *pOther)
{
	g_109f3620[*g_109f3680].a = "CBaseDoor::DoorTouch";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	CBaseEntity *pActivator = g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x53c));
	if (pActivator && *(int *)((char *)pActivator + 0xa8)) {
		if (((CDoorSlotView *)this)->vfunc241()) {
			CDoorSlotView *pView = (CDoorSlotView *)pOther;
			if (pView->vfunc158()) {
				int state = *(int *)((char *)this + 0x4f8);
				if ((state == 2 || state == 3) && *(int *)((char *)pOther + 0x9c))
					((CDoorSlotView *)this)->vfunc178(pView);
			}
		}
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100efbf0 size=0x79
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
extern CGlobalEntityList g_106eb5d8;
void CBaseDoor::sub_100efbf0(char bOpen)
{
    const char *pszName = m_name26c;
    if (pszName) {
        for (CBaseEntity *pPortal = g_106eb5d8.sub_100f7380(0, "func_areaportal"); pPortal; pPortal = g_106eb5d8.sub_100f7380(pPortal, "func_areaportal")) {
            if (((CEntityVSlots *)pPortal)->slot161(pszName))
                ((CEntityVSlots *)pPortal)->slot173((CEntityVSlots *)this, (CEntityVSlots *)this, bOpen != 0, 0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100efc90 size=0x257
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseDoor.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CUnknown100290c0.h"
#include "CEHandleGet.h"
#include "CVariantCopy.h"

extern CGlobalEntityList *g_10566458;
extern int g_106eb3e4;
void sub_101cebc0(CBaseEntity *pPlayer, int a, int b);

struct CDoorHandleView
{
	unsigned int m_h;
	CBaseEntity *sub_100d15d0();
};

struct CDoorActivatorView
{
	char m_pad0000[0xa8];
	CBaseCombatCharacter *m_pPlayer;
};

void CBaseDoor::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
#define value (*(float *)&value)
	ScopeTrace trace("CBaseDoor::Use", g_106b8540, g_106b8540);
	CBaseCombatCharacter *pPlayer;
	if (pActivator == 0)
		pPlayer = (CBaseCombatCharacter *)pActivator;
	else
		pPlayer = ((CDoorActivatorView *)pActivator)->m_pPlayer;
	m_hActivator53c = pActivator;
	if (((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_hLinked638)) {
		CVariantCopy variant;
		((CEntityVSlots *)((CDoorHandleView *)&m_hLinked638)->sub_100d15d0())->slot118("Use", (CEntityVSlots *)pActivator, (CEntityVSlots *)this, variant, 0);
		return;
	}
	if (sub_100127ec()) {
		sub_101cebc0((CBaseEntity *)pPlayer, 0x4d, 0);
		return;
	}
	if (m_nState4f8 == 3 && m_n558 == 0)
		vfunc244(1);
	if (m_nState4f8 == 2 && m_n558 == 0)
		vfunc243(1, 1);
	((CEntityVSlots *)this)->slot248();
	if (EHandle_Get(m_hDoorknob0)) {
		sub_100eef50(pActivator, pCaller, useType, value);
		return;
	}
	if (m_nState4f8 == 1 || m_nState4f8 == 0 || (m_flags204 & 0x20)) {
		if (m_b55c) {
			if (pPlayer) {
				sub_100ee4e0(g_106eb3e4, pPlayer->sub_101671a0());
				sub_100ee560(pPlayer->sub_101671a0());
			} else {
				sub_100ee4e0(g_106eb3e4, 0);
			}
		} else {
			vfunc242();
		}
	}
#undef value
}
// END FUNCTION

// FUNCTION: 0x100eff90 size=0xc7
#include "CBaseDoor.h"
#include <math.h>
#include "CEntityVSlots.h"
#pragma intrinsic(fabs)

static inline float FloatMakePositive(float f)
{
    return (float)fabs(f);
}

static inline bool VectorsAreEqual(const Vector &src1, const Vector &src2, float tolerance)
{
    if (FloatMakePositive(src1.x - src2.x) > tolerance)
        return false;
    if (FloatMakePositive(src1.y - src2.y) > tolerance)
        return false;
    return FloatMakePositive(src1.z - src2.z) <= tolerance;
}

// TARGET: CBaseDoor::vfunc248
void CBaseDoor::vfunc248()
{
    if (VectorsAreEqual(m_vecPosition508, *((CEntityVSlots *)this)->slot220(), 0.001f)) {
        m_nState4f8 = 1;
        return;
    }
    if (VectorsAreEqual(m_vecPosition514, *((CEntityVSlots *)this)->slot220(), 0.001f))
        m_nState4f8 = 0;
}
// END FUNCTION

// FUNCTION: 0x100f00a0 size=0x52
#include "CBaseDoor.h"
#include "inputdata_t.h"

void CBaseDoor::sub_100f00a0(inputdata_t *pInput)
{
    if (m_nState4f8 != 1) {
        m_hActivator53c = (CBaseEntity *)pInput->pActivator;
        m_items564[6].sub_100cd660((CBaseEntity *)pInput->pActivator, this, 0);
        vfunc244(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100f0120 size=0x3a
#include "CUnknown100f0120.h"
#include "CBaseEntity.h"

void __fastcall sub_100f0300(char *p);

void CUnknown100f0120::sub_100f0120(inputdata_t *inputdata)
{
	CBaseEntity *pEnt = (CBaseEntity *)inputdata->pActivator;
	if (pEnt)
		m_hEntity = *pEnt->vfunc1();
	else
		m_hEntity = 0xffffffff;
	sub_100f0300((char *)this);
}
// END FUNCTION

// FUNCTION: 0x100f0170 size=0x73
#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)

struct CTargetObj {
	virtual void v0();
	virtual unsigned int *v1();
	char m_pad04[0x9c - 4];
	int m_n9c;
};

struct CTargetHolder {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV10(18) OV10(19)
	OV10(20) OV10(21) OV10(22) OV10(23)
	OV(240) OV(241) OV(242)
	virtual void v243(int a, int b);
	char m_pad0004[0x4f8 - 4];
	int m_n4f8;
	char m_pad4fc[0x53c - 0x4fc];
	unsigned int m_hTarget;
	char m_pad540[0x60c - 0x540];
	char m_sub60c[4];

	char sub_100eec70(int a);
	void sub_100f0170(CTargetObj **ppObj);
};

struct CTargetSub {
	void sub_100cd660(CTargetObj *pObj, CTargetHolder *pHolder, int c);
};

void CTargetHolder::sub_100f0170(CTargetObj **ppObj)
{
	if (m_n4f8) {
		CTargetObj *pObj = *ppObj;
		if (!sub_100eec70(pObj ? pObj->m_n9c : 0)) {
			if (pObj)
				m_hTarget = *pObj->v1();
			else
				m_hTarget = (unsigned int)-1;
			((CTargetSub *)m_sub60c)->sub_100cd660(*ppObj, this, 0);
			v243(1, 1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100f0210 size=0x80
#include "CBaseDoor.h"
#include "CEntityVSlots.h"
#include "inputdata_t.h"
void CBaseDoor::sub_100f0210(inputdata_t *pInput)
{
    CBaseEntity *pActivator = (CBaseEntity *)pInput->pActivator;
    if (!sub_100027d4(pActivator ? *(void **)((char *)pActivator + 0x9c) : 0)) {
        if (pActivator)
            *(unsigned int *)((char *)this + 0x53c) = *pActivator->vfunc1();
        else
            *(unsigned int *)((char *)this + 0x53c) = 0xffffffff;
        int state = *(int *)((char *)this + 0x4f8);
        if (state == 1 || state == 3)
            ((CEntityVSlots *)this)->slot243(1, 1);
        else if (state == 0 || state == 2)
            ((CEntityVSlots *)this)->slot244(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100f02b0 size=0x3a
#include "CUnknown100f02b0.h"
#include "CBaseEntity.h"

void __fastcall sub_100f0320(char *p);

void CUnknown100f02b0::sub_100f02b0(inputdata_t *inputdata)
{
	CBaseEntity *pEnt = (CBaseEntity *)inputdata->pActivator;
	if (pEnt)
		m_hEntity = *pEnt->vfunc1();
	else
		m_hEntity = 0xffffffff;
	sub_100f0320((char *)this);
}
// END FUNCTION

// FUNCTION: 0x100f0300 size=0x8
void __fastcall sub_100f0300(char *p) { p[0x55c] = 1; }
// END FUNCTION

// FUNCTION: 0x100f0320 size=0x8
void __fastcall sub_100f0320(char *p) { p[0x55c] = 0; }
// END FUNCTION

// FUNCTION: 0x100f0340 size=0x20b
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseDoor.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "inputdata_t.h"
#include "CEntityVSlots.h"
#include <math.h>

struct CKnobView
{
	void sub_10224170(inputdata_t *pInput);
};

struct SDoorActivator
{
	char m_pad0000[0xa8];
	CBaseCombatCharacter *m_pPlayer;	// 0xa8
};

// The real earlier unit function CBaseDoor::sub_100ee950 (the doorknob closer to the target, 0x100ee950), a same-unit
// copy: its first three knob lookups decline the header inline LookupEntity (VC6 inline budget), so the COMDAT is
// compiled before the target.
namespace block_100f0340 {
static inline float KnobDist(const Vector &a, const Vector &b)
{
	return fabs(a.y - b.y) + fabs(a.z - b.z) + fabs(a.x - b.x);
}
struct DoorUnit : CBaseDoor
{
	CBaseEntity *sub_100ee950(CBaseEntity *pTarget);
};
#define KNOB_GET(h) ((EHANDLE *)&(h))->Get()
CBaseEntity *DoorUnit::sub_100ee950(CBaseEntity *pTarget)
{
	if (!pTarget)
		return 0;
	if (KNOB_GET(m_hDoorknob0) && KNOB_GET(m_hDoorknob1))
	{
		Vector vTarget;
		((CEntityVSlots *)pTarget)->slot193(&vTarget);
		Vector vTmp;
		const Vector *p0 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob0))->slot193(&vTmp);
		float d0 = KnobDist(vTarget, *p0);
		const Vector *p1 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob1))->slot193(&vTmp);
		float d1 = KnobDist(vTarget, *p1);
		if (d1 > d0)
			return KNOB_GET(m_hDoorknob0);
		return KNOB_GET(m_hDoorknob1);
	}
	if (KNOB_GET(m_hDoorknob0) || KNOB_GET(m_hDoorknob1))
	{
		if (KNOB_GET(m_hDoorknob0))
			return KNOB_GET(m_hDoorknob0);
		if (KNOB_GET(m_hDoorknob1))
			return KNOB_GET(m_hDoorknob1);
	}
	return 0;
}
#undef KNOB_GET
}

// m_toggle_state read through the CBaseToggle accessor
struct CDoorToggleView : CBaseDoor
{
	int GetToggleState() const { return m_nState4f8; }
};

// TARGET: ?vfunc242@CBaseDoor@@UAEHXZ
int CBaseDoor::vfunc242()
{
	SDoorActivator *pActivator = (SDoorActivator *)m_hActivator53c.Get();
	CBaseCombatCharacter *pPlayer;
	if (!pActivator)
		pPlayer = (CBaseCombatCharacter *)pActivator;
	else
		pPlayer = pActivator->m_pPlayer;
	const CDoorToggleView *pToggle = (const CDoorToggleView *)this;
	if (pToggle->GetToggleState() == 0 || pToggle->GetToggleState() == 2)
		vfunc244(1);
	else if (pToggle->GetToggleState() == 1 || pToggle->GetToggleState() == 3)
		vfunc243(1, 1);
	inputdata_t input;
	input.value.iValue = 0;
	input.value.eVal = 0xffffffff;
	input.value.fieldType = 0;
	input.pCaller = this;
	input.pActivator = m_hActivator53c.Get();
	if (((CBaseHandle *)&m_hDoorknob0)->Get()) {
		((CKnobView *)((CBaseHandle *)&m_hDoorknob0)->Get())->sub_10224170(&input);
		((CEntityVSlots *)((CBaseHandle *)&m_hDoorknob0)->Get())->slot273();
	}
	if (((CBaseHandle *)&m_hDoorknob1)->Get()) {
		((CKnobView *)((CBaseHandle *)&m_hDoorknob1)->Get())->sub_10224170(&input);
		((CEntityVSlots *)((CBaseHandle *)&m_hDoorknob1)->Get())->slot273();
	}
	if (pPlayer)
		sub_100ee560(pPlayer->sub_101671a0());
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100f05e0 size=0x1f9
#include "CBaseDoor.h"
#include "CBaseToggle.h"
#include "CEHandleGet.h"
#include "COutputEvent.h"
extern int g_106eb3e0;
extern int g_106eb3e8;
struct CDoorView164 { char pad[0x164]; float m_flSpeed; };

// TARGET: CBaseDoor::vfunc243
void CBaseDoor::vfunc243(char bChain, int bLinked)
{
	if (bChain && EHandle_Get(m_hLinked630)) {
		CBaseDoor *pLinked = (CBaseDoor *)EHandle_Get(m_hLinked630);
		CBaseEntity *pActivator = (CBaseEntity *)EHandle_Get(*(unsigned int *)&pLinked->m_hActivator53c);
		((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c = m_hActivator53c;
		((CBaseDoor *)EHandle_Get(m_hLinked630))->vfunc243(0, 1);
		CBaseDoor *pLinked2 = (CBaseDoor *)EHandle_Get(m_hLinked630);
		pLinked2->m_hActivator53c = pActivator;
	}
	sub_100ee4e0(g_106eb3e0, 0);
	sub_100ee4e0(g_106eb3e8, 0);
	sub_100ee810();
	sub_100efbf0(1);
	m_nState4f8 = 2;
	m_pfn0114 = (void (CBaseEntity::*)())&CBaseDoor::sub_100f0860;
	((CBaseToggle *)this)->sub_101c1520(&m_vecPosition514, ((CDoorView164 *)this)->m_flSpeed);
	m_items564[7].sub_100cd660((CBaseEntity *)EHandle_Get(m_hActivator53c), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f0860 size=0x11b
#include "CBaseDoor.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CAI_BaseNPC.h"


extern CGlobalEntityList *g_10566458;
extern char g_1000f222[];	// think function (stub of sub_100f0f30)
extern char g_1000abf0[];	// think function (stub)

void CBaseDoor::sub_100f0860()
{
	CGlobalEntityList_Slot *s;
	m_nState4f8 = 0;
	*((char *)this + 0x655) = 0;
	if (m_flags204 & 0x20) {
		if (m_flags204 & 0x400)
			m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CBaseDoor::sub_10012837;
	} else {
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + *(float *)((char *)this + 0x500);
		if (m_flags204 & 0x2000)
			sub_100ac4e0((int)g_1000f222, 0, 0);
		else
			sub_100ac4e0((int)g_1000abf0, 0, 0);
		if (*(int *)((char *)this + 0x500) == (int)0xbf800000)
			*(int *)((char *)this + 0x17c) = (int)0xbf800000;
	}
	unsigned int h = *(unsigned int *)((char *)this + 0x53c);
	if (h != 0xffffffff) {
		s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13) && s->m_pEntity) {
			CAI_BaseNPC *pNPC = *(CAI_BaseNPC **)((char *)s->m_pEntity + 0x94);
			if (pNPC)
				pNPC->sub_1027dd10(this);
		}
	}
	*(int *)((char *)this + 0x640) = 0;
	if (m_flags204 & 1) {
		m_items564[4].sub_100cd660(this, this, 0);
	} else {
		CBaseEntity *pActivator;
		h = *(unsigned int *)((char *)this + 0x53c);
		if (h != 0xffffffff && (s = &g_10566458->m_Slots[h & 0x1fff], s->m_Serial == (int)(h >> 13)))
			pActivator = (CBaseEntity *)s->m_pEntity;
		else
			pActivator = 0;
		m_items564[5].sub_100cd660(pActivator, this, 0);
	}
	((CEntityVSlots *)this)->slot249();
}
// END FUNCTION

// FUNCTION: 0x100f09d0 size=0x4a
#include "CBaseDoor.h"
#include "globalvars.h"

void sub_1000abf0();

void CBaseDoor::sub_100f09d0()
{
	if (!sub_100f0c00(1))
	{
		sub_100ac4e0(0, 0, 0);
		vfunc244(1);
		return;
	}
	sub_100ac4e0((int)sub_1000abf0, 0, 0);
	m_flNextThink = gpGlobals->curtime + 0.5;
}
// END FUNCTION

// FUNCTION: 0x100f0a40 size=0x159
#include "CBaseDoor.h"
#include "CCollisionProperty.h"
#include <math.h>

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CDoorSlots
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213)
	virtual Vector *v214();
	PV(215) PV(216)
	virtual Vector *v217();
};

struct CDoorMoveFields
{
	char m_pad0000[0x190];
	Vector m_vecMoveDir;	// 0x190
	char m_pad019c[0x504 - 0x19c];
	float m_flLip;	// 0x504
};

// TARGET: CBaseDoor::vfunc245
void CBaseDoor::vfunc245(Vector *pMins, Vector *pMaxs)
{
	CDoorMoveFields *f = (CDoorMoveFields *)this;
	CDoorSlots *s = (CDoorSlots *)this;
	Vector vecAbs = *s->v217();
	Vector vecMoveDir = f->m_vecMoveDir * -1.0f;
	float t0 = fabs((s->v214()->x - 2.0f) * f->m_vecMoveDir.x) + fabs(f->m_vecMoveDir.y * (s->v214()->y - 2.0f)) + fabs(f->m_vecMoveDir.z * (s->v214()->z - 2.0f)); float t1 = f->m_flLip; float flDist = t0 - t1;
	CCollisionProperty *pColl = (CCollisionProperty *)(0x270 + (char *)this);
	Vector vecPos = vecAbs + vecMoveDir * flDist;
	*pMins = *(Vector *)pColl->vfunc1() + vecPos;
	*pMaxs = *(Vector *)pColl->vfunc2() + vecPos;
}
// END FUNCTION

// FUNCTION: 0x100f0c00 size=0x1ba
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseDoor.h"
#include "CCollisionProperty.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CAI_BaseNPCTroika.h"

extern CGlobalEntityList g_106eb5d8;
bool sub_10240250(const Vector &a, const Vector &b, const Vector &c, const Vector &d);

struct CDoorBlockerEnt
{
	char m_pad[0x94];
	CAI_BaseNPCTroika *m_pAI;
};

char CBaseDoor::sub_100f0c00(char bCheckLinked)
{
	ScopeTrace trace("CBaseDoor::IsCloseBlocked", g_106b8540, g_106b8540);
	Vector mins, maxs;
	vfunc245(&mins, &maxs);
	if (bCheckLinked && EHandle_Get(m_hLinked630)) {
		CBaseDoor *pLinked = (CBaseDoor *)EHandle_Get(m_hLinked630);
		if (pLinked->sub_100084f9(0))
			return 1;
	}
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt)) {
		if (pEnt->sub_100b5190())
			continue;
		if (!(pEnt->sub_100b3700() & 0x80) && !(pEnt->sub_100b3700() & 0x2000))
			continue;
		if (!((CEntityVSlots *)pEnt)->slot158())
			continue;
		Vector otherMins, otherMaxs;
		((CCollisionProperty *)((char *)pEnt + 0x270))->vfunc15(&otherMins, &otherMaxs);
		if (sub_10240250(mins, maxs, otherMins, otherMaxs)) {
			CAI_BaseNPCTroika *pAI = ((CDoorBlockerEnt *)pEnt)->m_pAI;
			if (pAI) {
				sub_100f0e90(0x80);
				pAI->sub_1027dfb0(this);
			}
			return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f0e30 size=0x2f
#include "CBaseDoor.h"

// TARGET: CBaseDoor::sub_100f0e30
void CBaseDoor::sub_100f0e30(float flTime)
{
	if (m_flTimer640 > flTime) {
		double d = m_flTimer640;
		m_flTimer640 = (float)d;
		return;
	}
	m_flTimer640 = flTime;
}
// END FUNCTION

// FUNCTION: 0x100f0e70 size=0xb
void __fastcall sub_100f0e70(char *self)
{
	*(int *)(self + 0x644) = 0;
}
// END FUNCTION

// FUNCTION: 0x100f0e90 size=0x15
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::sub_100f0e90(unsigned int flags)
{
	*(unsigned int *)(m_pad0004 + 0x644 - 4) |= flags;
}
// END FUNCTION

// FUNCTION: 0x100f0ec0 size=0x14
struct CUnit100f0ec0
{
	char m_pad0000[0x644];
	unsigned int m_n644;

	bool sub_100f0ec0(unsigned int a);
};

// TARGET: CUnit100f0ec0::sub_100f0ec0
bool CUnit100f0ec0::sub_100f0ec0(unsigned int a)
{
	if ((m_n644 & a) == a)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100f0ef0 size=0xe
#include "CBaseDoor.h"
void CBaseDoor::vfunc246(int a, int* b, int c)
{
	b[6] = -1;
}
// END FUNCTION

// FUNCTION: 0x100f0f10 size=0x7
#include "CBaseDoor.h"
namespace lifted {
extern float g_104454c4;
}
float CBaseDoor::vfunc247()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x100f0f30 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
	virtual void target(int a);
};

void __fastcall sub_100f0f30(CSlots *self)
{
	self->target(1);
}
// END FUNCTION

// FUNCTION: 0x100f0f50 size=0x1d8
#include "CBaseDoor.h"
#include "CBaseToggle.h"
#include "CEHandleGet.h"

extern int g_106eb3e8;

void CBaseDoor::vfunc244(char bChain)
{
	if (bChain && EHandle_Get(m_hLinked630)) {
		CBaseEntity *pOldActivator = (CBaseEntity *)EHandle_Get(*(unsigned int *)&((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c);
		((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c = m_hActivator53c;
		((CBaseDoor *)EHandle_Get(m_hLinked630))->vfunc244(0);
		((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c = pOldActivator;
	}
	sub_100ee4e0(g_106eb3e8, 0);
	m_nState4f8 = 3;
	m_pfn0114 = (void (CBaseEntity::*)())&CBaseDoor::sub_100f11b0;
	((CBaseToggle *)this)->sub_101c1520(&m_vecPosition508, m_flSpeed164);
	m_items564[6].sub_100cd660(m_hActivator53c.Get(), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f11b0 size=0xb2
#include "CBaseDoor.h"
#include "COutputEvent.h"
#include "CGlobalEntityList.h"

extern int g_106eb3dc;
extern CGlobalEntityList *g_10566458;

struct CHandleView
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

#define DV1(n) virtual void dv##n();
#define DV10(p) DV1(p##0) DV1(p##1) DV1(p##2) DV1(p##3) DV1(p##4) DV1(p##5) DV1(p##6) DV1(p##7) DV1(p##8) DV1(p##9)
#define DV100(p) DV10(p##0) DV10(p##1) DV10(p##2) DV10(p##3) DV10(p##4) DV10(p##5) DV10(p##6) DV10(p##7) DV10(p##8) DV10(p##9)

struct CDoorSlotView
{
	DV100(a) DV100(b) DV10(c0) DV10(c1) DV10(c2) DV10(c3) DV1(d0) DV1(d1) DV1(d2) DV1(d3) DV1(d4) DV1(d5) DV1(d6) DV1(d7) DV1(d8)
	virtual void slot249();
};

void CBaseDoor::sub_100f11b0()
{
	sub_100ee4e0(g_106eb3dc, 0);
	m_nState4f8 = 1;
	m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CBaseDoor::sub_10012837;
	CGlobalEntityList_Ent *pActivator;
	COutputEvent *pOutput;
	if (m_flags204 & 1) {
		pActivator = ((CHandleView *)((char *)this + 0x53c))->Get();
		pOutput = (COutputEvent *)&m_items564[5];
	} else {
		pActivator = ((CHandleView *)((char *)this + 0x53c))->Get();
		pOutput = (COutputEvent *)&m_items564[4];
	}
	pOutput->sub_100cd660(pActivator, this, 0);
	sub_100efbf0(0);
	((CDoorSlotView *)this)->slot249();
}
// END FUNCTION

// FUNCTION: 0x100f12a0 size=0x72
#include "CBaseDoor.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];
extern char g_105652c8[];

int CBaseDoor::sub_100f12a0(CBaseDoor **ppDoors, int maxDoors)
{
	int count = 0;
	CBaseEntity *pEnt = 0;
	if (m_name26c) {
		for (;;) {
			pEnt = g_106eb5d8.sub_100f7770(pEnt, m_name26c ? m_name26c : "", 0, 0);
			if (pEnt == this)
				continue;
			if (!pEnt)
				break;
			CBaseDoor *pDoor = (CBaseDoor *)__RTDynamicCast(pEnt, 0, g_10538764, g_105652c8, 0);
			if (pDoor && count < maxDoors)
				ppDoors[count++] = pDoor;
		}
	}
	return count;
}
// END FUNCTION

// FUNCTION: 0x100f1340 size=0x107
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

struct S100f1340Ai
{
	void sub_1027de00(CBaseDoor *pDoor);
	void sub_1027dfb0(CBaseDoor *pDoor);
};

struct S100f1340Ent
{
	char m_pad[0x94];
	S100f1340Ai *m_pAi;
};

void CBaseDoor::vfunc177(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseDoor::StartBlocked", g_106b8540);
	if (m_nState4f8 == 3) {
		m_items564[0].sub_100cd660(pOther, this, 0);
		return;
	}
	S100f1340Ent *pActivator = (S100f1340Ent *)EHandle_Get(m_hActivator53c);
	if (pActivator) {
		S100f1340Ai *pAi = pActivator->m_pAi;
		if (pAi) {
			sub_100f0e90(2);
			pAi->sub_1027de00(this);
		}
	}
	S100f1340Ent *pEnt = (S100f1340Ent *)pOther;
	if (pEnt) {
		S100f1340Ai *pAi = pEnt->m_pAi;
		if (pAi) {
			sub_100f0e90(0x80);
			pAi->sub_1027dfb0(this);
		}
	}
	m_items564[1].sub_100cd660(pOther, this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f14a0 size=0x2c2
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "TestBit.h"
#include "ScopeTrace.h"
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CUnknown101c26d0.h"
#include "Vector.h"

extern float g_104454c4;
extern float g_1070d1b0[];
extern float g_1070d9d0[];

static inline const Vector &DoorAbsVelocity(CBaseEntity *p)
{
	if (TestBit(p->m_flags268, 12))
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

void CBaseDoor::sub_100f14a0(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseDoor::Blocked", g_106b8540);

	if (!pOther)
		return;
	if (m_flDamage560 != g_104454c4) {
		CUnknown101c26d0 info;
		pOther->sub_100a1250(info.sub_101c26d0(this, this, m_flDamage560, 1, 0, 0, -1));
	}

	if (m_fl500 >= g_104454c4 && ((char *)this)[0x654] && m_nState4f8 != 2)
		vfunc243(1, 1);

	if (m_name26c) {
		CBaseDoor *pDoors[0x40];
		int nDoors; nDoors = sub_100f12a0(pDoors, 0x40);
		{ long i; i = 0; while (i < nDoors) { CBaseDoor *pDoor = pDoors[i];
			if (pDoor->m_fl500 >= g_104454c4) {
				if (*(Vector *)pDoor->m_vecMovedir == *(Vector *)m_vecMovedir
				    && DoorAbsVelocity(pDoor) == DoorAbsVelocity(this)
				    && *(Vector *)pDoor->m_angVel3c8 == *(Vector *)m_angVel3c8) {
					pDoor->m_nSimulationTick = m_nSimulationTick;
					if (!((CEntityVSlots *)pDoor)->slot241()) {
						pDoor->vfunc62((const float *)pcd_stage(((CEntityVSlots *)this)->slot220()));
						pDoor->sub_100b2770(*(const Vector *)g_1070d1b0);
					} else {
						pDoor->vfunc64((const float *)pcd_stage(((CEntityVSlots *)this)->slot221()));
						pDoor->sub_100b2f50(g_1070d9d0);
					}
				}
				if (m_nState4f8 == 2 && pDoor->m_nState4f8 != 2)
					pDoor->vfunc243(1, 1);
				else if (m_nState4f8 == 3 && 3 != pDoor->m_nState4f8)
					pDoor->vfunc244(1);
			} ++i; } }
	}
}
// END FUNCTION

// FUNCTION: 0x100f1830 size=0x27
// TARGET: CBaseDoor::vfunc179
#include "CBaseDoor.h"

void CBaseDoor::vfunc179()
{
	if (m_nState4f8 == 3)
	{
		m_items564[2].sub_100cd660(this, this, 0);
		return;
	}
	m_items564[3].sub_100cd660(this, this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f1870 size=0x6
#include "datamap.h"
#include "CRotDoor.h"
namespace lifted {
extern char g_10564ae4;
}
datamap_t * CRotDoor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10564ae4);
}
// END FUNCTION

// FUNCTION: 0x100f1890 size=0x5
int sub_100f18d0(void);
int g_106eb3d8 = ((int (*)(int))sub_100f18d0)(0);
// END FUNCTION

// FUNCTION: 0x100f18d0 size=0x1a
namespace lifted {
extern int g_10564ae4;
extern int g_10564ae8;
extern char g_10564b2c;
}
int sub_100f18d0()
{
    lifted::g_10564ae8 = 0xc;
    lifted::g_10564ae4 = (int)&lifted::g_10564b2c;
    return (int)&lifted::g_10564ae4;
}
// END FUNCTION

// FUNCTION: 0x100f1900 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000917e(GP *);
extern int vt_10454b94;
extern char g_10565430[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_door_rotating
DLL_EXPORT GP *func_door_rotating()
{
	GP *p = (GP *)sub_1000db89(0x710);
	if (p) {
		sub_1000917e(p);
		*(int **)p = &vt_10454b94;
	} else {
		p = 0;
	}
	p->name(g_10565430);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100f1970 size=0x3
#include "CRotDoor.h"
bool CRotDoor::vfunc241()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100f1990 size=0xf
#include "CRotDoor.h"
int CRotDoor::vfunc249()
{
    *(int *)((char *)this + 0x708) = 0;
    *(int *)((char *)this + 0x70c) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f19b0 size=0x217
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
// TARGET: CRotDoor::sub_100f19b0
#include "CRotDoor.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "matrix3x4_t.h"
#include "CEntityVSlots.h"

#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define COLLPROP ((CCollisionProperty *)((char *)this + 0x270))

void sub_10139b90(const float *pAngles, float *pMatrix);
void sub_101381b0(const float *pIn, const float *pMatrix, float *pOut);

void CRotDoor::sub_100f19b0(Vector vecAngles, Vector *pMins, Vector *pMaxs)
{
	ScopeTrace scope("CRotDoor::ComputeSwingData", g_106b8540);

	*pMins = *(Vector *)COLLPROP->vfunc1();
	*pMaxs = *(Vector *)COLLPROP->vfunc2();

	matrix3x4_t matrix;
	sub_10139b90(&vecAngles.x, &matrix.m_flMatVal[0][0]);

	Vector vRotMins;
	Vector vRotMaxs;
	const float *pMinsRot = COLLPROP->vfunc1();
	sub_101381b0(pMinsRot, &matrix.m_flMatVal[0][0], vRotMins.Base());
	const float *pMaxsRot = COLLPROP->vfunc2();
	sub_101381b0(pMaxsRot, &matrix.m_flMatVal[0][0], vRotMaxs.Base());

	for (int i = 0; i < 3; i++)
	{
		(*pMins)[i] = MIN(MIN((*pMins)[i], vRotMins[i]), MIN((*pMaxs)[i], vRotMaxs[i]));
		(*pMaxs)[i] = MAX(MAX((*pMins)[i], vRotMins[i]), MAX((*pMaxs)[i], vRotMaxs[i]));
		(*pMins)[i] += ((CEntityVSlots *)this)->slot220()->Base()[i];
		(*pMaxs)[i] += ((CEntityVSlots *)this)->slot220()->Base()[i];
	}
}
// END FUNCTION

// FUNCTION: 0x100f1c60 size=0x443
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_104454c4;

inline QAngle AxisAngles(const Vector &v) { return QAngle(v.y, v.z, v.x); }

// TARGET: CRotDoor::vfunc103
void CRotDoor::vfunc103()
{
	ScopeTrace spawnTrace("CRotDoor::Spawn", g_106b8540, g_106b8540);
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	*(Vector *)&m_angRotationClosed = *pSlots->slot221();
	m_vecAxis.x = 0;
	m_vecAxis.y = 0;
	m_vecAxis.z = 1.0f;
	QAngle angAxis = AxisAngles(m_vecAxis);
	m_flDistance = fabs(90.0);
	m_angTarget674.x = m_angRotationClosed.x - m_flDistance * angAxis.x;
	m_angTarget674.y = m_angRotationClosed.y - m_flDistance * angAxis.y;
	m_angTarget674.z = m_angRotationClosed.z - m_flDistance * angAxis.z;
	m_angRotationOpenBack.x = m_flDistance * angAxis.x + m_angRotationClosed.x;
	m_angRotationOpenBack.y = m_flDistance * angAxis.y + m_angRotationClosed.y;
	m_angRotationOpenBack.z = m_flDistance * angAxis.z + m_angRotationClosed.z;
	sub_101c1a70();
	if (m_flags204 & 2)
		*(Vector *)m_vecMovedir = *(Vector *)m_vecMovedir * -1.0f;
	m_angRotation520 = *pSlots->slot221();
	m_angRotation52c = *(Vector *)m_vecMovedir * m_fl4fc + *pSlots->slot221();
	pSlots->slot93(8, 0);
	{
		int buf;
		const char *pszName = *pSlots->slot9(&buf);
		if (!pszName)
			pszName = g_106b8540;
		pSlots->slot105(pszName);
	}
	pSlots->slot104();
	if (m_flags204 & 1) {
		pSlots->slot64(&m_angRotation52c.x);
		m_angRotation52c = m_angRotation520;
		m_angRotation520 = *pSlots->slot221();
		*(Vector *)m_vecMovedir = *(Vector *)m_vecMovedir * -1.0f;
	}
	if (m_flags204 & 0x800)
		m_b55c = 1;
	if (m_flSpeed164 == g_104454c4) {
		m_nState4f8 = 1;
		m_flSpeed164 = 100.0f;
	} else {
		m_nState4f8 = 1;
	}
	if (m_flags204 & 0x800)
		m_b55c = 1;
	*(void (CRotDoor::**)(CBaseEntity *))((char *)this + 0x1ec) = &CRotDoor::sub_100efae0;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	if (m_flags204 & 8) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
	}
	pSlots->slot223();
	sub_100b3b00();
	sub_100a9470(1);
	m_flAngle704 = 0;
	pSlots->slot249();
}
// END FUNCTION

// FUNCTION: 0x100f21d0 size=0x81
#include "CBaseEntity.h"
#include "CRotDoor.h"
#include "CBaseDoor.h"

#define V1(p) virtual void p();
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity's vtable viewed as a flat list of slots (slot 64 takes a position)
struct CRotDoorSlots {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V1(b0) V1(b1) V1(b2) V1(b3)
    virtual void vfunc64(float *pPos);
};

struct CRotDoorFields {
    char pad0000[0x204];
    int m_nFlags;	// 0x204
    char pad0208[0x3fc - 0x208];
    float m_f3fc;	// 0x3fc
    char pad0400[0x4f8 - 0x400];
    int m_nState;	// 0x4f8
    char pad04fc[0x520 - 0x4fc];
    float m_vecClosed[3];	// 0x520
    float m_vecOpen[3];	// 0x52c
};

void CRotDoor::vfunc250()
{
    CRotDoorFields *p = (CRotDoorFields *)this;
    if (p->m_nFlags & 0x20)
        return;
    if (p->m_nFlags & 1) {
        ((CRotDoorSlots *)this)->vfunc64(p->m_vecOpen);
        p->m_nState = 0;
    } else {
        ((CRotDoorSlots *)this)->vfunc64(p->m_vecClosed);
        p->m_nState = 1;
    }
    p->m_f3fc = -1.0f;
    m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CRotDoor::sub_100efae0;
    switch (p->m_nState) {
    case 0:
        ((CBaseDoor *)this)->sub_100efbf0(1);
        break;
    case 1:
        ((CBaseDoor *)this)->sub_100efbf0(0);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x100f2290 size=0x151
#include "Vector.h"
#include "CRotDoor.h"

void CRotDoor::vfunc104()
{
	sub_100efab0();
	sub_100f19b0(m_angRotation52c, &m_vecMins698, &m_vecMaxs6a4);
	sub_100f19b0(-1.0f * m_angRotation52c, &m_vecMins6bc, &m_vecMaxs6c8);
	m_vecCenter6b0 = 0.5f * (m_vecMins698 + m_vecMaxs6a4);
	m_vecCenter6d4 = (m_vecMins6bc + m_vecMaxs6c8) * 0.5f;
	sub_100f3f20();
	sub_100eecf0();
}
// END FUNCTION

// FUNCTION: 0x100f2450 size=0x92
#include "CRotDoor.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CRotDoor::vfunc223()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100f2520 size=0xdb
#include <math.h>
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#pragma intrinsic(fabs)

static inline float FloatMakePositive(float f)
{
    return (float)fabs(f);
}

static inline bool VectorsAreEqual(const Vector &src1, const Vector &src2, float tolerance)
{
    if (FloatMakePositive(src1.x - src2.x) > tolerance)
        return false;
    if (FloatMakePositive(src1.y - src2.y) > tolerance)
        return false;
    return FloatMakePositive(src1.z - src2.z) <= tolerance;
}

// TARGET: CRotDoor::vfunc248
void CRotDoor::vfunc248()
{
    if (VectorsAreEqual(m_angRotation520, *((CEntityVSlots *)this)->slot221(), 0.001f)) {
        m_nState4f8 = 1;
        ((CEntityVSlots *)this)->slot249();
        return;
    }
    if (VectorsAreEqual(m_angRotation52c, *((CEntityVSlots *)this)->slot221(), 0.001f)) {
        m_nState4f8 = 0;
        ((CEntityVSlots *)this)->slot249();
    }
}
// END FUNCTION

// FUNCTION: 0x100f2640 size=0x43
#include "CRotDoor.h"
void CRotDoor::vfunc156(int bFirst)
{
	if (bFirst == 0)
		vfunc64(&m_angRotation52c.x);
	else
		vfunc64(&m_angRotation520.x);
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100f26b0 size=0x297
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CRotDoor.h"
#include "CBaseDoor.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include <math.h>

class CUnknown1017f770
{
public:
	int sub_1017f770();
};

struct CKnobView
{
	void sub_10224170(inputdata_t *pInput);
};

struct SDoorActivator
{
	char m_pad0000[0xa8];
	CBaseCombatCharacter *m_pPlayer;	// 0xa8
};

// The real earlier unit function CBaseDoor::sub_100ee950 (the doorknob closer to the target, 0x100ee950), a same-unit
// copy: its first three knob lookups decline the header inline LookupEntity (VC6 inline budget), so the COMDAT is
// compiled before the target.
namespace block_100f26b0 {
static inline float KnobDist(const Vector &a, const Vector &b)
{
	return fabs(a.y - b.y) + fabs(a.z - b.z) + fabs(a.x - b.x);
}
struct DoorUnit : CBaseDoor
{
	CBaseEntity *sub_100ee950(CBaseEntity *pTarget);
};
#define KNOB_GET(h) ((EHANDLE *)&(h))->Get()
CBaseEntity *DoorUnit::sub_100ee950(CBaseEntity *pTarget)
{
	if (!pTarget)
		return 0;
	if (KNOB_GET(m_hDoorknob0) && KNOB_GET(m_hDoorknob1))
	{
		Vector vTarget;
		((CEntityVSlots *)pTarget)->slot193(&vTarget);
		Vector vTmp;
		const Vector *p0 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob0))->slot193(&vTmp);
		float d0 = KnobDist(vTarget, *p0);
		const Vector *p1 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob1))->slot193(&vTmp);
		float d1 = KnobDist(vTarget, *p1);
		if (d1 > d0)
			return KNOB_GET(m_hDoorknob0);
		return KNOB_GET(m_hDoorknob1);
	}
	if (KNOB_GET(m_hDoorknob0) || KNOB_GET(m_hDoorknob1))
	{
		if (KNOB_GET(m_hDoorknob0))
			return KNOB_GET(m_hDoorknob0);
		if (KNOB_GET(m_hDoorknob1))
			return KNOB_GET(m_hDoorknob1);
	}
	return 0;
}
#undef KNOB_GET
}

// m_toggle_state read through the CBaseToggle accessor
struct CDoorToggleView : CBaseDoor
{
	int GetToggleState() const { return m_nState4f8; }
};

// TARGET: ?vfunc242@CRotDoor@@UAEHXZ
int CRotDoor::vfunc242()
{
	ScopeTrace trace("CRotDoor::DoorActivate", g_106b8540);
	CBaseDoor *pDoor = (CBaseDoor *)this;
	SDoorActivator *pActivator = (SDoorActivator *)pDoor->m_hActivator53c.Get();
	CBaseCombatCharacter *pPlayer;
	if (!pActivator)
		pPlayer = (CBaseCombatCharacter *)pActivator;
	else
	{
		pPlayer = pActivator->m_pPlayer;
		if (pPlayer && pDoor->m_bNoOpenWanted && ((CUnknown1017f770 *)pPlayer)->sub_1017f770() > 0)
			return 0;
	}
	const CDoorToggleView *pToggle = (const CDoorToggleView *)pDoor;
	if (pToggle->GetToggleState() == 2 || pToggle->GetToggleState() == 0)
		pDoor->vfunc244(1);
	else if (pToggle->GetToggleState() == 1 || pToggle->GetToggleState() == 3)
		pDoor->vfunc243(1, 1);
	inputdata_t input;
	input.value.iValue = 0;
	input.value.eVal = 0xffffffff;
	input.value.fieldType = 0;
	input.pCaller = this;
	input.pActivator = pDoor->m_hActivator53c.Get();
	if (((CBaseHandle *)&pDoor->m_hDoorknob0)->Get()) {
		((CKnobView *)((CBaseHandle *)&pDoor->m_hDoorknob0)->Get())->sub_10224170(&input);
		((CEntityVSlots *)EHandle_Get(pDoor->m_hDoorknob0))->slot273();
	}
	if (((CBaseHandle *)&pDoor->m_hDoorknob1)->Get()) {
		((CKnobView *)((CBaseHandle *)&pDoor->m_hDoorknob1)->Get())->sub_10224170(&input);
		((CEntityVSlots *)EHandle_Get(pDoor->m_hDoorknob1))->slot273();
	}
	if (pPlayer)
		pDoor->sub_100ee560(pPlayer->sub_101671a0());
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100f2a00 size=0x16f
#include "CRotDoor.h"
#include "CEntityVSlots.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

struct SDoorBoundsView
{
	char m_pad0000[0x52c];
	Vector m_angRotation52c;	// 0x52c
	char m_pad0538[0x698 - 0x538];
	Vector m_vecA698;	// 0x698
	Vector m_vecB6a4;	// 0x6a4
	char m_pad06b0[0x6bc - 0x6b0];
	Vector m_vecA6bc;	// 0x6bc
	Vector m_vecB6c8;	// 0x6c8
};

struct CRotDoorUnit : CRotDoor
{
	void sub_100f2a00(Vector *pMins, Vector *pMaxs);	// "CRotDoor::ComputeCloseBounds"-like
	void sub_100f19b0(Vector vecAngles, Vector *pMins, Vector *pMaxs);	// stub 0x10011216
};

void CRotDoorUnit::sub_100f2a00(Vector *pMins, Vector *pMaxs)
{
	SDoorBoundsView *pView = (SDoorBoundsView *)this;
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	if (*pThis->slot221() == pView->m_angRotation52c) {
		*pMins = pView->m_vecA698;
		*pMaxs = pView->m_vecB6a4;
		return;
	}
	Vector vecScaled = pView->m_angRotation52c * -1.0f;
	if (*pThis->slot221() == vecScaled) {
		*pMins = pView->m_vecA6bc;
		*pMaxs = pView->m_vecB6c8;
		return;
	}
	DevMsg("ComputeCloseBounds() called when not fully open from either direction. Is that OK?\n");
	sub_100f19b0(*pThis->slot221(), pMins, pMaxs);
}
// END FUNCTION

// FUNCTION: 0x100f2bd0 size=0x2f4
#include "CAI_Node.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "VectorHelpers.h"
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct RotDoorEntV
{
	EVS10(a) EVS10(b) EVS10(c) EVS10(d) EVS10(e) EVS10(f) EVS10(g) EVS10(h) EVS10(i) EVS10(j)
	EVS10(k) EVS10(l) EVS10(m) EVS10(n) EVS10(o) EVS10(p) EVS10(q) EVS10(r) EVS10(s) EVS10(t)
	EVS10(u)
	EVS(v0) EVS(v1) EVS(v2) EVS(v3) EVS(v4) EVS(v5) EVS(v6)
	virtual const Vector &GetAbsOrigin();
};

extern float g_104454c4;

void CRotDoor::vfunc246(CBaseEntity *pNPC, CNPCOpenData *pOut, char bFlag)
{
	ScopeTrace trace("CRotDoor::GetNPCOpenData", g_106b8540, g_106b8540);
	if (pNPC == 0 || (m_flags204 & 0xc0)) {
		pOut->m_nResult = -1;
		return;
	}
	Vector vecRight = sub_101d2f40(m_flAngle6f8);
	Vector vecDirA = sub_101d2f40(m_flAngle6fc);
	Vector vecDirB = sub_101d2f40(m_flAngle700);
	Vector vecDir;
	{
		Vector vecOrigin = ((RotDoorEntV *)this)->GetAbsOrigin();
		const Vector &vecDoor = ((RotDoorEntV *)this)->GetAbsOrigin();
		const Vector &vecNPC = ((RotDoorEntV *)pNPC)->GetAbsOrigin();
		float dx = vecNPC.x - vecDoor.x;
		float dy = vecNPC.y - vecDoor.y;
		if (vecDirA.x * dx + vecDirA.y * dy >= g_104454c4)
			vecDir = vecDirA;
		else if (vecDirB.x * dx + vecDirB.y * dy >= g_104454c4)
			vecDir = vecDirB;
		else {
			pOut->m_nResult = -1;
			return;
		}
		if (bFlag) {
			pOut->m_vecOrigin = vecOrigin + vecRight * 24.0f;
			pOut->m_vecOrigin.z -= 54.0f;
			pOut->m_vecOrigin += vecDir * 100.0f;
			pOut->m_vecAngles = -vecDir;
			pOut->m_nResult = 1;
			return;
		}
		pOut->m_vecOrigin = vecOrigin + vecRight * 24.0f;
		pOut->m_vecOrigin.z -= 54.0f;
		pOut->m_vecOrigin += vecDir * 50.0f;
	}
	{
		Vector vecFace;
		vecFace.sub_100f2f90(-vecDir.x, -vecDir.y, -vecDir.z);
		pOut->m_vecAngles = vecFace;
	}
	pOut->m_nResult = 0xc84;
}
// END FUNCTION

// FUNCTION: 0x100f2f90 size=0x19
struct CUnknown100f2f90 { void * sub_100f2f90(int, int, int); };
void * CUnknown100f2f90::sub_100f2f90(int a0, int a1, int a2)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = a2;
    return this;
}
// END FUNCTION

// FUNCTION: 0x100f2fc0 size=0x50
#include "CRotDoor.h"
#include "CEntityVSlots.h"

// TARGET: CRotDoor::vfunc247
float CRotDoor::vfunc247()
{
	Vector *pAngles = ((CEntityVSlots *)this)->slot221();
	Vector d;
	d = m_angTarget674 - *pAngles;
	return FastSqrt(d.x * d.x + (d.y * d.y + d.z * d.z)) / m_flSpeed164;
}
// END FUNCTION

// FUNCTION: 0x100f3030 size=0x2a2
#include "CBaseDoor.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CRotDoor.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

extern int g_106eb3e0;
extern int g_106eb3e8;

void CRotDoor::vfunc243(char bChain, char bOpenAway)
{
    ScopeTrace trace("CRotDoor::DoorGoUp", g_106b8540, g_106b8540);
    if (bChain) {
        CGlobalEntityList *pGlobal = g_10566458;
        EHandleEntityList *pList = (EHandleEntityList *)pGlobal;
        if (pGlobal->sub_100290c0((const unsigned int *)&m_hLinked630)) {
            CBaseEntity *pOldActivator = (CBaseEntity *)pList->LookupEntity(((CRotDoor *)pList->LookupEntity(m_hLinked630))->m_hActivator53c);
            ((CRotDoor *)pList->LookupEntity(m_hLinked630))->m_hActivator53c = m_hActivator53c;
            m_hLinked630.Get()->vfunc243(0, 1);
            m_hLinked630.Get()->m_hActivator53c = pOldActivator;
        }
    }
    sub_100ee4e0(g_106eb3e0, 0);
    sub_100ee4e0(g_106eb3e8, 0);
    ((CBaseDoor *)this)->sub_100ee810();
    ((CBaseDoor *)this)->sub_100efbf0(1);
    m_nState4f8 = 2;
    m_pfn0114 = (void (CBaseEntity::*)())&CRotDoor::sub_100f0860;
    if (m_hActivator53c.Get() && !(m_flags204 & 0x10)) {
        if (bOpenAway)
            sub_100f3390(m_hActivator53c.Get());
    } else {
        sub_101c17e0(&m_angRotation52c, m_flSpeed164);
    }
    m_items564[7].sub_100cd660(m_hActivator53c.Get(), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f3390 size=0x195
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRotDoor.h"
#include "CEntitySoundOriginView.h"
#include "ScopeTrace.h"

void CRotDoor::sub_100f3390(CBaseEntity *pEntity)
{
	ScopeTrace trace("CRotDoor::OpenAwayFromEntity", g_106b8540);
	float flDist1 = (m_vecCenter6b0 - ((CEntitySoundOriginView *)pEntity)->WorldSpaceCenter()).Length();
	float flDist2 = (m_vecCenter6d4 - ((CEntitySoundOriginView *)pEntity)->WorldSpaceCenter()).Length();
	bool bAway = false;
	if (flDist1 < flDist2)
		bAway = true;
	if (m_bReverse655)
		bAway = !bAway;
	if (bAway) {
		Vector vecNeg = m_angRotation52c * -1.0f;
		sub_101c17e0(&vecNeg, m_flSpeed164);
	} else {
		sub_101c17e0(&m_angRotation52c, m_flSpeed164);
	}
}
// END FUNCTION

// FUNCTION: 0x100f35a0 size=0x22d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRotDoor.h"
#include "ScopeTrace.h"

extern int g_106eb3e8;

// TARGET: CRotDoor::vfunc244
void CRotDoor::vfunc244(char bChain)
{
	ScopeTrace trace("CRotDoor::DoorGoDown", g_106b8540);
	if (bChain) {
		if (m_hLinked630 != 0) {
			CBaseEntity *pOldActivator = m_hLinked630->m_hActivator53c.Get();
			m_hLinked630->m_hActivator53c = m_hActivator53c;
			m_hLinked630->vfunc244(0);
			m_hLinked630->m_hActivator53c = pOldActivator;
		}
	}
	sub_100ee4e0(g_106eb3e8, 0);
	m_nState4f8 = 3;
	m_pfn0114 = (void (CBaseEntity::*)())&CRotDoor::sub_100f11b0;
	sub_101c17e0(&m_angRotation520, m_flSpeed164);
	m_items564[6].sub_100cd660(m_hActivator53c.Get(), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f3860 size=0x73
struct S100f3860 { float x, y, z; };
extern "C" double __cdecl fabs(double);
float __cdecl sub_1013d580(float, float);
static inline float AngleDiff(float a, float b)
{
    return sub_1013d580(a, b);
}
float __stdcall sub_100f3860(const S100f3860 *a, const S100f3860 *b)
{
    return (float)fabs(AngleDiff(a->x, b->x) + AngleDiff(a->y, b->y) + AngleDiff(a->z, b->z));
}
// END FUNCTION

// FUNCTION: 0x100f3900 size=0x387
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
float sub_1013d580(float a, float b);

inline float AngDist(float a, float b)
{
	float d = (float)fabs(sub_1013d580(a, b));
	return d;
}

inline float AngDiff(float a, float b)
{
	float d = sub_1013d580(a, b);
	return (float)fabs(d);
}

void CRotDoor::vfunc178(CBaseEntity *pOther)
{
	ScopeTrace trace("CRotDoor::Blocked", g_106b8540, g_106b8540);
	if (pOther) {
		m_bBlocked654 = true;
		if (pOther->m_pNPC98)
			m_bReverse655 = true;
		float flAngle = sub_100f3d80() + m_flAngle6f8;
		Vector *pMine = ((CEntityVSlots *)this)->slot217();
		Vector *pTheirs = ((CEntityVSlots *)pOther)->slot217();
		Vector dir = *pTheirs - *pMine;
		float flDirAngle = sub_10004ea8(&dir.x);
		bool bFirstCloser = false;
		float flDiff1 = AngDist(flAngle, m_flAngle6fc);
		if (AngDist(flAngle, m_flAngle700) > flDiff1)
			bFirstCloser = true;
		if (m_nCount708 > 0) {
			if (AngDist(flAngle, m_flAngle704) <= 1.0f) {
				m_nCount708++;
				if (m_nCount708 >= 15) {
					vfunc249();
					if (m_nState4f8 == 2)
						m_nState70c = 3;
					else
						m_nState70c = 2;
				}
			} else {
				vfunc249();
			}
		} else {
			m_nCount708 = 1;
		}
		m_flAngle704 = flAngle;
		if (m_nState4f8 == 2) {
			m_bBlocked654 = false;
			if (m_nState70c == 3) {
				vfunc244(1);
			} else if (m_nState70c != 2) {
				float flPick = bFirstCloser ? m_flAngle6fc : m_flAngle700;
				float d2 = AngDiff(flDirAngle, flPick);
				if (AngDiff(flAngle, flPick) > d2)
					vfunc244(1);
			}
		} else if (m_nState4f8 == 3) {
			m_bBlocked654 = false;
			if (m_nState70c == 2) {
				vfunc243(1, 1);
			} else if (m_nState70c != 3) {
				float d1 = AngDist(flDirAngle, m_flAngle6f8);
				if (AngDist(flAngle, m_flAngle6f8) > d1 && m_nState4f8 != 2) {
					if (!bFirstCloser) {
						Vector neg = m_angRotation52c * -1.0f;
						sub_101c17e0(&neg, m_flSpeed164);
					} else {
						sub_101c17e0(&m_angRotation52c, m_flSpeed164);
					}
					vfunc243(1, 0);
				}
			}
		}
		sub_100f14a0(pOther);
		m_bBlocked654 = true;
	}
}
// END FUNCTION

// FUNCTION: 0x100f3d80 size=0x31
#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnk100f3d80
{
    P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k)
    P10(l) P10(m) P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u)
    virtual void vfunc210();
    virtual void vfunc211();
    virtual void vfunc212();
    virtual void vfunc213();
    virtual void vfunc214();
    virtual void vfunc215();
    virtual void vfunc216();
    virtual void vfunc217();
    virtual void vfunc218();
    virtual float *vfunc219();
    char m_pad0004[0x204 - 4];
    int m_n204;

    float sub_100f3d80();
};

// TARGET: CUnk100f3d80::sub_100f3d80
float CUnk100f3d80::sub_100f3d80()
{
    int flags = m_n204;
    if (flags & 0x40)
        return vfunc219()[2];
    if (flags & 0x80)
        return vfunc219()[0];
    return vfunc219()[1];
}
// END FUNCTION

// FUNCTION: 0x100f3dd0 size=0x6d
#include "CRotDoor.h"
#include "Vector.h"

void __cdecl sub_10003d4b(Vector *pIn, Vector *pOut);

void CRotDoor::sub_100f3dd0(const float *pDir)
{
	Vector dir = *(const Vector *)pDir;
	if (m_flags204 & 0x40)
		dir.x = 0;
	else if (m_flags204 & 0x80)
		dir.y = 0;
	else
		dir.z = 0;
	Vector angles;
	sub_10003d4b(&dir, &angles);
	sub_10003044((float *)&angles);
}
// END FUNCTION

// FUNCTION: 0x100f3e60 size=0x2b
#include "CRotDoor.h"

// TARGET: CRotDoor::sub_100f3e60
float CRotDoor::sub_100f3e60(float *pAngles)
{
	int flags = *(int *)((char *)this + 0x204);
	if (flags & 0x40)
		return pAngles[0];
	if (flags & 0x80)
		return pAngles[2];
	return pAngles[1];
}
// END FUNCTION

// FUNCTION: 0x100f3ea0 size=0x53
#include <math.h>
extern float g_104546c4;
float __stdcall sub_100f3ea0(float a, float b, float c)
{
    float dc = (float)fabs(a - c);
    float db = (float)fabs(a - b);
    float d = dc - db;
    if (d > g_104546c4)
        return c;
    if (d < -g_104546c4)
        return b;
    return a;
}
// END FUNCTION

// FUNCTION: 0x100f3f20 size=0x110
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CRotDoor.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_104546c4;
namespace block_100f3f20 {
struct CRotDoorCalc : CRotDoor
{
	float sub_100f3ea0(float a, float b, float c);
};
float CRotDoorCalc::sub_100f3ea0(float a, float b, float c)
{
	float dc = (float)fabs(a - c);
	float db = (float)fabs(a - b);
	float d = dc - db;
	if (d > g_104546c4)
		return c;
	if (d < -g_104546c4)
		return b;
	return a;
}
}
using namespace block_100f3f20;

struct CRotDoorUnit : CRotDoorCalc
{
	void sub_100f3f20();
};

// TARGET: CRotDoorUnit::sub_100f3f20
void CRotDoorUnit::sub_100f3f20()
{
	ScopeTrace trace("CRotDoor::ComputeDoorAngles", g_106b8540);
	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	Vector maxs = *(Vector *)pCollision->vfunc2();
	Vector mins = *(Vector *)pCollision->vfunc1();
	float a, b;
	if (m_flags204 & 0x40)
	{
		a = sub_100f3ea0(0, mins.y, maxs.y);
		b = sub_100f3ea0(0, mins.z, maxs.z);
	}
	else if (m_flags204 & 0x80)
	{
		a = sub_100f3ea0(0, mins.z, maxs.z);
		b = sub_100f3ea0(0, mins.x, maxs.x);
	}
	else
	{
		a = sub_100f3ea0(0, mins.x, maxs.x);
		b = sub_100f3ea0(0, mins.y, maxs.y);
	}
	float flAngle = (float)atan2(b, a) * 57.29578f;
	*(float *)((char *)this + 0x6f8) = flAngle;
	*(float *)((char *)this + 0x6fc) = flAngle + 90.0f;
	*(float *)((char *)this + 0x700) = flAngle - 90.0f;
}
// END FUNCTION

// FUNCTION: 0x100f4080 size=0x8e
#include "CRotDoor.h"

void __cdecl sub_100aa7b0(void *p);

CRotDoor *CRotDoor::vfunc5(unsigned char flags)
{
	m_items564[7].sub_100cd2d0();
	m_items564[6].sub_100cd2d0();
	m_items564[5].sub_100cd2d0();
	m_items564[4].sub_100cd2d0();
	m_items564[3].sub_100cd2d0();
	m_items564[2].sub_100cd2d0();
	m_items564[1].sub_100cd2d0();
	m_items564[0].sub_100cd2d0();
	m_items4a4[1].sub_100cd2d0();
	m_items4a4[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
