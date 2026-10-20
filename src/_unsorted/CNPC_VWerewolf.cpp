// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c8ed0 size=0x1d
#include "CNPC_VWerewolf.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d6d4;
extern B g_10936c74;
int CNPC_VWerewolf::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d6d4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103ca790 size=0x1e
#include "CNPC_VWerewolf.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VWerewolf::vfunc5
CNPC_VWerewolf *CNPC_VWerewolf::vfunc5(unsigned int flags)
{
	sub_10003648();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103cab50 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103cab50(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::GetUsedHullBits";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x1000;
}
// END FUNCTION

// FUNCTION: 0x103cb170 size=0x6f
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc421()
{
    const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::PostNPCInit";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cb200 size=0x74
#include "CNPC_VWerewolf.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
void __fastcall sub_1028e310(CNPC_VWerewolf *);

void CNPC_VWerewolf::vfunc113()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::Activate";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1028e310(this);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cb7f0 size=0xb
struct W {
	char pad[0x6078];
	bool m;
};
bool CNPC_VWerewolf::vfunc600(int unused)
{
	return ((W *)this)->m = true;
}
// END FUNCTION

// FUNCTION: 0x103cca80 size=0x92
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_1021fee0(CNPC_VWerewolf *pChar, const char *pszClassname);

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CNPC_VWerewolf::sub_103cca80()
{
	CScopeTrace trace("CNPC_VWerewolf::RemoveBaseFightingItems", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (sub_1033c9c0() & 0x10) {
		sub_1021fee0(this, "item_w_werewolf_attacks");
		sub_1033c770(0x10);
	}
}
// END FUNCTION

// FUNCTION: 0x103ccb50 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_103ccb50(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::IsMonster";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x103ccbf0 size=0x96
#include "CUnknown101c2a50.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc141(CUnknown101c2a50 *pInfo, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::TraceAttack";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	pInfo->sub_101c2a50(0);
	sub_10015b13(pInfo, b, c);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103d0780 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103d0780(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::GetLastSharedCondition";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x7c;
}
// END FUNCTION

// FUNCTION: 0x103d0a30 size=0x74
#include "CNPC_VWerewolf.h"
#include "CAI_BaseNPCTroika.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc516()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::MaxYawSpeed";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CAI_BaseNPCTroika *)this)->sub_10011dc4();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103d5f60 size=0x7e
#include "CNPC_VWerewolf.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc465(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CNPC_VWerewolf::OnChangeActivity";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    sub_10295a60(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103d7ce0 size=0xa4
#include "CNPC_VWerewolf.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HintObj_t {
	char m_pad0000[0x5dc];
	int m_nHintType;
};

bool CNPC_VWerewolf::vfunc566(void *pHint)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::FValidateHintType";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int type = ((HintObj_t *)pHint)->m_nHintType;
	if (type != 0x3a9f && type >= 0x3a98 && type <= 0x3aaa) {
		(*g_109f3680)--;
		return true;
	}
	(*g_109f3680)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103d9ba0 size=0xb8
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
int __fastcall sub_100b39c0(char *pEnt);

char CNPC_VWerewolf::vfunc69(void *pOther)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::NavIgnoreCollision";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((unsigned char *)pOther + 0x4c) & 0x16) {
		(*g_109f3680)--;
		return 1;
	}
	if (sub_100b39c0((char *)pOther) & 8) {
		(*g_109f3680)--;
		return 1;
	}
	char result = sub_1029b180(pOther);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION
