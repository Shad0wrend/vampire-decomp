// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1015dc60 size=0x2d
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

CBaseEntity *CBasePlayer::sub_1015dc60()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1c60);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015ded0 size=0x1e
#include "CBasePlayer.h"

void sub_100aa7b0(void *p);

// TARGET: CBasePlayer::vfunc5
CBasePlayer *CBasePlayer::vfunc5(unsigned int flags)
{
	sub_100017d5();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1015ee80 size=0x8
#include "CBasePlayer.h"

void CBasePlayer::vfunc407()
{
	m_b19F6 = true;
}
// END FUNCTION

// FUNCTION: 0x1015eea0 size=0x8
// TARGET: CBasePlayer::vfunc408
void CBasePlayer::vfunc408()
{
	m_b19F6 = false;
}
// END FUNCTION

// FUNCTION: 0x1015ff40 size=0xc3
struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;
struct GlobalVars { char pad[0xc]; float curtime; };
extern GlobalVars *g_1070b228;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct VehicleSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual bool s158();
};
struct VehicleHandle
{
	unsigned int m_Index;
	VehicleSlots *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return (VehicleSlots *)e->ent;
		}
		return 0;
	}
};

bool CBasePlayer::sub_1015ff40()
{
	if (*((char *)this + 0x1edc))
		return true;
	if (((VehicleHandle *)((char *)this + 0x1c58))->Get() != 0) {
		if (((VehicleHandle *)((char *)this + 0x1c58))->Get()->s158())
			*(float *)((char *)this + 0x19b0) = g_1070b228->curtime;
	}
	return *(float *)((char *)this + 0x19b0) > 0.0f && *(float *)((char *)this + 0x19b0) + 5.0f > g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x101647a0 size=0x9b
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_105387dc[];

struct ScopeTrace {
    ScopeTrace(const char *a, const char *b) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = g_106b8540;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

int CBasePlayer::sub_101647a0(int act)
{
    const char *name;
    if (this) {
        name = *(const char **)((char *)this + 0x26c);
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    ScopeTrace t("CBasePlayer::NPC_TranslateActivity", name);
    switch (act) {
    case 0x16:
        act = 9;
        break;
    case 0x17:
        act = 0x13;
        break;
    }
    return act;
}
// END FUNCTION

// FUNCTION: 0x10168e10 size=0x32
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

bool CBasePlayer::sub_10168e10()
{
	unsigned int h = *(unsigned int *)((char *)this + 0xfe8);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13) && info->m_pEntity)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10174e20 size=0x21
#include "CBasePlayer.h"

struct V3 {
	float x, y, z;
};

float *CBasePlayer::vfunc367(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x206c);
	return out;
}
// END FUNCTION
