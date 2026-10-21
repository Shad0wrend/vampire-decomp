// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037a950 size=0x1d
#include "CNPC_VGhoulCroucher.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b0e0;
extern B g_10936c74;
int CNPC_VGhoulCroucher::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b0e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037aff0 size=0x36
#include "CNPC_VGhoulCroucher.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1028d610();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CNPC_VGhoulCroucher *CNPC_VGhoulCroucher::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x668c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x6674))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1037b040 size=0x10b
#include "CNPC_VGhoulCroucher.h"
#include "CBaseEntitySlots.h"

extern int (__cdecl *g_109f3868)(int, int);

#define MAKE_NAME(s) ((s)[0] ? (s) : 0)

// TARGET: CNPC_VGhoulCroucher::vfunc103
void CNPC_VGhoulCroucher::vfunc103()
{
	sub_10012855(0x4000000);
	sub_10012855(0x200000);
	sub_10012855(0x8000);
	m_n1a98 = 0;
	m_n5dec = 0;
	if (m_b6665)
		m_pszName10e4 = MAKE_NAME("MalkMansionStalkerBurning");
	else if (m_b6664)
		m_pszName10e4 = MAKE_NAME("MalkMansionStalker");
	else
		m_pszName10e4 = MAKE_NAME("MalkMansionCroucher");
	sub_1000bc08();
	if (m_b6664)
	{
		m_b6666 = 1;
		m_b6667 = 1;
		((CBaseEntitySlots *)this)->slot105("models/character/npc/unique/Malkavian_mansion/Stalker/stalker.mdl");
	}
	else
	{
		m_b6666 = 0;
		m_b6667 = 0;
		((CBaseEntitySlots *)this)->slot105("models/character/npc/unique/Malkavian_mansion/Stalker_Female/stalker_female.mdl");
	}
	m_n6668 = g_109f3868(0, 3);
	m_n6348[0] = 999999;
	m_n6348[1] = 999999;
	m_n6348[2] = 999999;
	m_n6348[3] = 999999;
	m_n6348[4] = 999999;
}
// END FUNCTION

// FUNCTION: 0x1037b9f0 size=0xc6
#include "CNPC_VGhoulCroucher.h"
#include "CEntityVSlots.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VGhoulCroucher::vfunc444(void *pTask)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::RunTask";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	switch (*(int *)pTask) {
	case 0x14a:
		if (((CEntityVSlots *)this)->slot251())
			sub_10273e80(0);
		break;
	case 0x14b:
		if (((CEntityVSlots *)this)->slot251()) {
			*((char *)this + 0x6667) = 1;
			sub_10273e80(0);
		}
		break;
	default:
		sub_100080da(pTask);
		(*g_109f3680)--;
		return;
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1037bbc0 size=0x9a
#include "CNPC_VGhoulCroucher.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
bool __fastcall sub_1037bb20(char *p);

char CNPC_VGhoulCroucher::vfunc294(int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::IsValidStealthKillTarget";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (!sub_1037bb20((char *)this)) {
        (*g_109f3680)--;
        return 1;
    }
    char r = sub_1000c081(a);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1037bc90 size=0x96
#include "CNPC_VGhoulCroucher.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VGhoulCroucher::vfunc390(void *pInfo)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::OnTakeDamage_Alive";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1037b6e0(*(int *)((char *)pInfo + 0x2c));
	*((char *)this + 0x6667) = 1;
	int r = sub_10001b45(pInfo);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1037be80 size=0xac
#include "ScopeTrace.h"
#include "CNPC_VGhoulCroucher.h"

void CNPC_VGhoulCroucher::vfunc24(void *pVictim)
{
	ScopeTrace trace("CNPC_VGhoulCroucher::OnVictimHitByMe", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nObject;
	if (pVictim == 0)
		nObject = 0;
	else
		nObject = *(int *)((char *)pVictim + 0xa8);
	if (m_b6665 && nObject)
		sub_1037c090((void *)nObject, 10.0f);
	sub_10006136(pVictim);
}
// END FUNCTION

// FUNCTION: 0x1037c1c0 size=0xe8
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CNPC_VGhoulCroucher.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

void CNPC_VGhoulCroucher::vfunc77()
{
	ScopeTrace t("CNPC_VGhoulCroucher::ScriptHide", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_102c1ce0();
	if (LookupEntity(m_h6670))
		((CBaseEntity *)LookupEntity(m_h6670))->vfunc77();
}
// END FUNCTION

// FUNCTION: 0x1037c2f0 size=0xe8
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CNPC_VGhoulCroucher.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

static inline CBaseEntity *ResolveHandle(volatile unsigned int *pHandle)
{
	unsigned int h = *pHandle;
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

void CNPC_VGhoulCroucher::vfunc78()
{
	ScopeTrace trace("CNPC_VGhoulCroucher::ScriptUnhide", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_102c1ec0();
	if (ResolveHandle(&m_h6670))
		ResolveHandle(&m_h6670)->vfunc78();
}
// END FUNCTION

// FUNCTION: 0x1037c420 size=0x8f
#include "CNPC_VGhoulCroucher.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CNPC_VGhoulCroucher::vfunc615()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::CanBeSetOnFire";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((char *)this + 0x6665)) {
		(*g_109f3680)--;
		return 0;
	}
	char r = sub_1000c5db();
	(*g_109f3680)--;
	return r;
}
// END FUNCTION
