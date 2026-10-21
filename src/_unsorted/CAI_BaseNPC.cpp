// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a6840 size=0xb
void CAI_BaseNPC::vfunc483(int unused)
{
	vfunc158();
}
// END FUNCTION

// FUNCTION: 0x101a6ce0 size=0x10
struct CUnknownNPC101a6ce0 {
    bool sub_101a6ce0(int unused);
};

// TARGET: sub_101a6ce0
bool CUnknownNPC101a6ce0::sub_101a6ce0(int unused)
{
    void **vt = *(void ***)this;
    char r = ((char (__fastcall *)(void *))vt[0x278 / 4])(this);
    return r == 0;
}
// END FUNCTION

// FUNCTION: 0x1026a8f0 size=0x8
// TARGET: CAI_BaseNPC::vfunc567
int CAI_BaseNPC::vfunc567(int unused)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1026a910 size=0x9
extern float g_104454c4;
float CAI_BaseNPC::vfunc568(int a) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x1026b4f0 size=0x6c
#include "CAI_BaseNPC.h"

#define V1(n) virtual void n();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct Vec3 { float x, y, z; };

struct NpcSlots {
    V100(a)
    V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6)
    V1(s0) V1(s1) V1(s2) V1(s3) V1(s4) V1(s5) V1(s6)
    virtual int vf167();
    V10(d1) V10(d2) V10(d3) V10(d4)
    V1(t0) V1(t1) V1(t2) V1(t3) V1(t4) V1(t5) V1(t6) V1(t7) V1(t8)
    virtual int vf217();
    V100(e)
    V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7)
    V1(u0)
    virtual Vec3 *vf389(Vec3 *out, int a);
    V100(g)
    V10(h1) V10(h2) V10(h3) V10(h4)
    V1(w0) V1(w1) V1(w2) V1(w3) V1(w4) V1(w5) V1(w6) V1(w7) V1(w8)
    virtual void vf539(Vec3 *p);
    V10(i1) V10(i2) V10(i3)
    V1(y0) V1(y1) V1(y2) V1(y3)
    virtual void vf574(Vec3 *out, Vec3 *v, int a, int b);
};

void CAI_BaseNPC::vfunc538()
{
    NpcSlots *w = (NpcSlots *)this;
    if (w->vf167()) {
        Vec3 t;
        Vec3 out;
        Vec3 c = *w->vf389(&out, w->vf217());
        w->vf574(&t, &c, 0, 0);
        w->vf539(&t);
    }
}
// END FUNCTION

// FUNCTION: 0x1026d7f0 size=0x75
struct SHandleEntry { void *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SEnt459 {
    V100(a) V100(b) V100(c) V100(d)
    V10(e0) V10(e1) V10(e2) V10(e3) V10(e4)
    virtual void e50(); virtual void e51(); virtual void e52(); virtual void e53(); virtual void e54();
    virtual void e55(); virtual void e56(); virtual void e57(); virtual void e58();
    virtual void v459();
};

static inline SEnt459 *GetEnt(unsigned h)
{
    SEnt459 *ent;
    if (h == 0xffffffff)
        ent = 0;
    else {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        ent = (he->serial == (h >> 13)) ? (SEnt459 *)he->p : 0;
    }
    return ent;
}

void CAI_BaseNPC::vfunc459()
{
    unsigned *ph = (unsigned *)((char *)this + 0x5d74);
    if (*(int *)((char *)this + 0x5cc0) == 4 && GetEnt(*ph) != 0)
        GetEnt(*(volatile unsigned *)ph)->v459();
}
// END FUNCTION

// FUNCTION: 0x1026db30 size=0x9e
struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define WL_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WL_V100(p) WL_V10(p##0) WL_V10(p##1) WL_V10(p##2) WL_V10(p##3) WL_V10(p##4) WL_V10(p##5) WL_V10(p##6) WL_V10(p##7) WL_V10(p##8) WL_V10(p##9)

struct CWeaponLike
{
	WL_V100(a0) WL_V100(a1) WL_V100(a2)
	WL_V10(a30) WL_V10(a31) WL_V10(a32) WL_V10(a33) WL_V10(a34) WL_V10(a35)
	virtual unsigned int GetWeaponFlags();	// slot 360
};

CWeaponLike * __fastcall sub_1032e7b0(CAI_BaseNPC *self);

unsigned int CAI_BaseNPC::vfunc513()
{
	const char *name;
	if (this)
		name = *(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540;
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CAI_BaseNPC::CapabilitiesGet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	unsigned int flags = *(unsigned int *)((char *)this + 0x5cec);
	if (sub_1032e7b0(this))
		flags |= sub_1032e7b0(this)->GetWeaponFlags();
	(*g_109f3680)--;
	return flags;
}
// END FUNCTION

// FUNCTION: 0x1026dc80 size=0x66
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc560
void CAI_BaseNPC::vfunc560()
{
	sub_10269b50(0x4f);
	sub_10269b50(0x50);
	sub_10269b50(0x51);
	sub_10269b50(0x52);
	sub_10269b50(0x2e);
	sub_10269b50(0x2f);
	sub_10269b50(0x62);
	sub_10269b50(0x63);
	sub_10269b50(0x64);
	sub_10269b50(0x65);
	sub_10269b50(0x66);
}
// END FUNCTION

// FUNCTION: 0x1026e3e0 size=0xc4
#include "CAI_BaseNPC.h"

void CAI_BaseNPC::vfunc463(int a, int type)
{
    int *pField = (int *)((char *)this + 0x5b64);
    switch (type) {
    case 1:
        *pField = 0x31;
        break;
    case 2:
        *pField = 0x8f;
        break;
    case 3:
        *pField = 0x39;
        break;
    case 4:
        *pField = 8;
        break;
    case 8:
        *pField = 0x85;
        break;
    case 5:
    case 6:
    case 12:
        *pField = 0;
        break;
    case 7:
    case 9:
    case 10:
    case 13:
        *pField = 4;
        break;
    case 11:
    case 14:
        *pField = 0x7f;
        break;
    case 0:
        *pField = 0x30;
        break;
    default:
        *pField = 0x30;
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x1026f590 size=0x96
#include "CAI_BaseNPC.h"

struct CAI_SquadView
{
	void sub_103161a0(int a);
};

#define NPC_INT(off) (*(int *)((char *)this + (off)))

int CAI_BaseNPC::vfunc460()
{
	NPC_INT(0x1b38) = 1;
	if (NPC_INT(0x5bb0) <= 0 && NPC_INT(0x5da4) != 0) {
		switch (NPC_INT(0x5cc0)) {
		case 1:
		case 3:
			if (sub_10269aa0(0x54) && vfunc167() != 0) {
				char *pObj = *(char **)((char *)this + 0x98);
				if (pObj) {
					*(unsigned int *)(pObj + 0x14bc) |= 0x80002000;
					return 0;
				}
				CAI_SquadView *pSquad = (NPC_INT(0x5bb0) <= 0) ? *(CAI_SquadView **)((char *)this + 0x5da4) : 0;
				pSquad->sub_103161a0(vfunc167());
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1026fbe0 size=0xc6
#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CNpcWeaponX	// the active weapon
{
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV100(1) SV100(2)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35)
	SV(360) SV(361) SV(362) SV(363)
	virtual char v364(int a, int b, char bFlag);
};

struct CNpcSlotsX	// the NPC's slots past 568
{
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV100(1) SV100(2) SV100(3) SV100(4)
	SV10(50) SV10(51) SV10(52) SV10(53) SV10(54) SV10(55) SV10(56)
	SV(570) SV(571) SV(572)
	virtual char v573(int a, int b, char bFlag);
};

struct CNpcAiGlobalX
{
	virtual void v0();
	virtual void v1();
};
extern CNpcAiGlobalX *g_10924a6c;

char CAI_BaseNPC::vfunc562(int a, int b, char bFlag)
{
	char result;
	if (sub_10007e19()) {
		result = ((CNpcWeaponX *)sub_10007e19())->v364(a, b, bFlag);
	} else if (vfunc513() & 0x20000) {
		result = ((CNpcSlotsX *)this)->v573(a, b, bFlag);
	} else {
		if (bFlag) {
			g_10924a6c->v1();
			sub_10269a20(0x42);
		}
		result = 0;
	}
	if (vfunc513() & 0x10000000) {
		if (sub_10266b10(a, b, 0.92f)) {
			if (bFlag) {
				g_10924a6c->v1();
				sub_10269a20(0x64);
			}
			return 0;
		}
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10272400 size=0x6e
#include "CAI_BaseNPC.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

// TARGET: CAI_BaseNPC::vfunc311
void CAI_BaseNPC::vfunc311(int a, int b, int c)
{
	if (c >= 0)
	{
		if (NPCF(int, 0xfec) != a)
			vfunc465(a);
		NPCF(int, 0xfec) = a;
		NPCF(int, 0xff0) = a;
		NPCF(int, 0x5cd4) = b;
		NPCF(int, 0x5cd0) = b;
		NPCF(int, 0xff4) = b;
		NPCF(int, 0x5ccc) = c;
		sub_10260a50(c);
		NPCF(int, 0x6f8) = 0;
		NPCF(int, 0x170) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10273d30 size=0x7c
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

struct SNpcData {
	char pad[0x5da4];
	int m_pSquad;
	const char *volatile m_pszSquadName;
};

extern void (*g_109f3650)(int level, const char *fmt, ...);
int sub_10015bc7(CAI_BaseNPC *pNpc, const char *name);

bool CAI_BaseNPC::vfunc545()
{
	SNpcData *d = (SNpcData *)this;
	if (!d->m_pSquad) {
		if (vfunc513() & 0x4000000) {
			if (!d->m_pszSquadName) {
				g_109f3650(2, "WARNING: Found %s that isn't in a squad\n", ((CBaseEntity *)this)->sub_1009f200());
				return d->m_pSquad != 0;
			}
			d->m_pSquad = sub_10015bc7(this, d->m_pszSquadName);
			vfunc542();
		}
	}
	return d->m_pSquad != 0;
}
// END FUNCTION

// FUNCTION: 0x10273fc0 size=0x8e
#include "CAI_BaseNPC.h"

struct AIObjX {
	virtual void v0();
	virtual bool vfunc1();
	char pad[0x28];
	int f2c;
};
struct AIGlobX { int pad; AIObjX *p; };
struct AIObj2X { virtual void v0(); virtual void vfunc1(); };
extern AIGlobX *g_1070af4c;
extern AIObj2X *g_10924a6c;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);
const char *__cdecl sub_10316fa0(int code);

void CAI_BaseNPC::vfunc448(int code)
{
	AIGlobX *g = g_1070af4c;
	if (!g->p->vfunc1() && g->p->f2c) {
		const char *s = sub_10316fa0(code);
		unsigned int flags = *(unsigned int *)((char *)this + 0x224);
		*(const char **)((char *)this + 0x5f30) = s;
		*(int *)((char *)this + 0x5f3c) = 0;
		*(int *)((char *)this + 0x5f38) = *(int *)((char *)this + 0x5c38);
		if (flags & 0x8000000)
			g_109f3630("   TaskFail -> %s\n", s);
	}
	*(char *)((char *)this + 0x1a40) = 0;
	*(int *)((char *)this + 0x5c50) = code;
	g_10924a6c->vfunc1();
	sub_10269a20(0x5c);
}
// END FUNCTION

// FUNCTION: 0x10274aa0 size=0x64
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"

struct SOtherState { char pad[0x5dc]; int m_nState; };

int CAI_BaseNPC::sub_10274aa0(void *pOther)
{
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	SOtherState *p = (SOtherState *)pOther;
	int result = (pAnim->sub_1008dc40(6, -1) != -1) ? 6 : 1;
	if (p) {
		switch (p->m_nState) {
		case 101:
			if (pAnim->sub_1008dc40(8, -1) != -1)
				return 8;
			break;
		case 100:
			if (pAnim->sub_1008dc40(7, -1) != -1)
				return 7;
			break;
		}
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10278090 size=0xc7
#include "CAI_BaseNPC.h"
#include "CCineNPC.h"
#include "CEntityVSlots.h"

struct EntInfo { void *pEnt; unsigned int serial; int pad; };
struct EntList { int hdr; EntInfo e[1]; };
extern EntList *g_10566458;

struct EHandle
{
	volatile unsigned int m_Index;

	void *Get() const
	{
		unsigned int h = m_Index;
		if (h != 0xffffffff) {
			EntInfo *e = &g_10566458->e[h & 0x1fff];
			if (e->serial == (h >> 13))
				return e->pEnt;
		}
		return 0;
	}
};

int CAI_BaseNPC::sub_10278090(char bFlag, int n)
{
	int result = 1;
	EHandle *pHandle = (EHandle *)((char *)this + 0x5d74);
	if (pHandle->Get()) {
		CCineNPC *pCine = (CCineNPC *)pHandle->Get();
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	if (!bFlag) {
		int state = *(int *)((char *)this + 0x5cc0);
		if (state != 0 && state != 1 && *(int *)((char *)this + 0x5cc4) != 1 && (state != 3 || n < 1))
			return 0;
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10278cb0 size=0x47
struct ConVarLike {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x24];
	float m_f28;
	int m_n2c;
};
struct NpcHelper {
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4();
	virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void h10(); virtual void h11(); virtual void h12(); virtual void h13();
	virtual void vfunc14(int a, float b, float c, float d);
};
extern ConVarLike *g_10924f74;

void CAI_BaseNPC::vfunc519(int a, float b, float c, float d)
{
	if (!g_10924f74->vfunc1() && g_10924f74->m_n2c)
		(*(NpcHelper **)((char *)this + 0x5d44))->vfunc14(a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10278e00 size=0x13
#include "CAI_BaseNPC.h"

struct CAI_Helper5d44 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual float v15(int a);
};

float CAI_BaseNPC::vfunc520(int a)
{
	float f = (*(CAI_Helper5d44 **)((char *)this + 0x5d44))->v15(a);
	return f;
}
// END FUNCTION

// FUNCTION: 0x10279090 size=0x16e
#include "CAI_BaseNPC.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern "C" int __cdecl _strcmpi(const char *a, const char *b);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

CBasePlayer *sub_101cd9e0(int index);	// stub 0x1000ac8b
extern CGlobalEntityList g_106eb5d8;
extern int g_10920558;
extern int g_1092055c;

// TARGET: CAI_BaseNPC::vfunc559
CBaseEntity *CAI_BaseNPC::vfunc559(const char *pszName)
{
    if (!_strcmpi(pszName, "!player"))
        return (CBaseEntity *)sub_101cd9e0(1);
    if (!_strcmpi(pszName, "!playercontroller")) {
        CBasePlayer *pPlayer = sub_101cd9e0(1);
        if (pPlayer)
            return pPlayer->sub_101618a0();
    } else if (!_strcmpi(pszName, "!enemy")) {
        if (vfunc167())
            return (CBaseEntity *)vfunc167();
    } else if (_strcmpi(pszName, "!self") && _strcmpi(pszName, "!target1")) {
        if (!_strcmpi(pszName, "!nearestfriend") || !_strcmpi(pszName, "!friend"))
            return (CBaseEntity *)sub_101cd9e0(1);
        if (!_strcmpi(pszName, "self")) {
            if (++g_10920558 < 5) {
                DevMsg("ERROR: \"self\" is no longer used, use \"!self\" in vcd instead!\n");
                return (CBaseEntity *)this;
            }
        } else {
            if (!_strcmpi(pszName, "Player")) {
                if (++g_1092055c < 5)
                    DevMsg("ERROR: \"player\" is no longer used, use \"!player\" in vcd instead!\n");
                return (CBaseEntity *)sub_101cd9e0(1);
            }
            CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
            if (pEnt)
                return pEnt;
        }
    }
    return (CBaseEntity *)this;
}
// END FUNCTION

// FUNCTION: 0x10279d00 size=0xa0
#include "CAI_BaseNPC.h"
#include "CUnknown102e0150.h"

typedef char (__fastcall *PFN_Char)(void *);

static inline char CallSlot158(void *p)
{
    return ((PFN_Char)(*(void ***)p)[158])(p);
}

bool CAI_BaseNPC::vfunc480()
{
    if ((*(unsigned int *)((char *)this + 0x14bc) & 0x10000) != 0x10000) {
        return !vfunc167()
            || !CallSlot158((void *)vfunc167())
            || vfunc541()->sub_102e0210(vfunc167())
            || sub_10269aa0(0x43) || sub_10269aa0(0x45) || sub_10269aa0(0x5b) || sub_10269aa0(0x58);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027a400 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc552()
{
	return (((NpcFlags204 *)this)->m >> 9) & 1;
}
// END FUNCTION

// FUNCTION: 0x1027a530 size=0x6d
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S0 { TEN(a) };
struct S1 : S0 { TEN(b) };
struct S2 : S1 { TEN(c) };
struct S3 : S2 { TEN(d) };
struct S4 : S3 { TEN(e) };
struct S5 : S4 { TEN(f) };
struct S6 : S5 { TEN(g) };
struct S7 : S6 { TEN(h) };
struct S8 : S7 { TEN(i) };
struct S9 : S8 { TEN(j) };
struct S10 : S9 { TEN(k) };
struct S11 : S10 { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual double l9(int); };
struct IChk { virtual void m0(); virtual void m1(); virtual int m2(int, int); };
extern S11 *g_1070b22c;
extern IChk *g_1070b244;

bool CAI_BaseNPC::vfunc510()
{
    int state = *(int *)((char *)this + 0x10e8);
    if (state == 0)
        return false;
    if (state == 8)
        return false;
    double t = *(float *)((char *)this + 0x10ec);
    if (g_1070b22c->l9(0) < t)
        return false;
    bool r = g_1070b244->m2(0, *(int *)((char *)this + 0x10e8)) == 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1027c160 size=0x65
#include "CAI_BaseNPC.h"
#include "CRestore.h"

extern char g_105cabd0[];	// the datamap of the block at +0x19b4
void sub_10015311(void *pArray, int count);

struct CNpcLookObject
{
	void sub_102e0b80();	// stub 0x100010e6
};

struct CNpcRestoreMember
{
	void sub_102e8ac0();	// stub 0x100081bb
};

int CAI_BaseNPC::vfunc127(CRestore *pRestore)
{
	pRestore->vfunc2((CBaseEntity *)((char *)this + 0x19b4), (int)g_105cabd0);
	int result = sub_10348890(pRestore);
	sub_10015311((char *)this + 0x5b8c, 4);
	sub_10015311((char *)this + 0x5db4, 3);
	CNpcLookObject *pLook = *(CNpcLookObject **)((char *)this + 0x5d44);
	if (pLook)
		pLook->sub_102e0b80();
	((CNpcRestoreMember *)((char *)this + 0x5cf4))->sub_102e8ac0();
	return result;
}
// END FUNCTION

// FUNCTION: 0x1027c7f0 size=0x1e
#include "CAI_BaseNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_BaseNPC::vfunc5
CAI_BaseNPC *CAI_BaseNPC::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027cae0 size=0xe7
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CAI_LocalNavigator.h"
extern void *g_1093407c;

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CNpcComponentSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35) SV10(36) SV10(37) SV10(38) SV10(39)
	SV10(40) SV10(41)
	SV(420) SV(421) SV(422) SV(423) SV(424)
	virtual void *s425();
	virtual void *s426();
	virtual void *s427();
	virtual void *s428();
	virtual void *s429();
	virtual void *s430();
};

struct CNavigatorSlotsX {
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void s3(void *pNet);
};

bool CAI_BaseNPC::vfunc424()
{
	CNpcComponentSlotsX *pSlots = (CNpcComponentSlotsX *)this;
	char *pSelf = (char *)this;
	*(void **)(pSelf + 0x5cdc) = pSlots->s425();
	if (!*(void **)(pSelf + 0x5cdc))
		return false;
	*(void **)(pSelf + 0x5d44) = pSlots->s427();
	if (!*(void **)(pSelf + 0x5d44))
		return false;
	*(void **)(pSelf + 0x5d38) = pSlots->s428();
	if (!*(void **)(pSelf + 0x5d38))
		return false;
	*(void **)(pSelf + 0x5d40) = pSlots->s426();
	if (!*(void **)(pSelf + 0x5d40))
		return false;
	*(void **)(pSelf + 0x5d34) = pSlots->s429();
	if (!*(void **)(pSelf + 0x5d34))
		return false;
	*(void **)(pSelf + 0x5d3c) = pSlots->s430();
	if (!*(void **)(pSelf + 0x5d3c))
		return false;
	*(void **)(pSelf + 0x5cf8) = this;
	char *pLocalNav = *(char **)(pSelf + 0x5d38);
	((CAI_Motor *)*(void **)(pSelf + 0x5d44))->sub_102e0ba0(pLocalNav ? pLocalNav + 0x10 : 0);
	char *pNav = *(char **)(pSelf + 0x5d34);
	((CAI_LocalNavigator *)*(void **)(pSelf + 0x5d38))->sub_102ddc00(pNav ? pNav + 0x10 : 0);
	((CNavigatorSlotsX *)*(void **)(pSelf + 0x5d34))->s3(g_1093407c);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027cc10 size=0xf8
#include "CAI_BaseNPC.h"
#include "CAI_Senses.h"

CAI_Senses *CAI_BaseNPC::vfunc425()
{
	CAI_Senses *pSenses = new CAI_Senses;
	pSenses->m_pOuter = this;
	return pSenses;
}
// END FUNCTION

// FUNCTION: 0x1027cec0 size=0x1f
#include "CAI_Motor.h"
CAI_Motor *CAI_BaseNPC::vfunc427()
{
	CAI_Motor *p = (CAI_Motor *)operator new(0x6c);
	if (p)
		return p->sub_102e0900((int)this);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1027d9f0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_1027d9f0(char *self, int, int a, int b)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CAI_BaseNPC::OverrideMoveFacing";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027da90 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_1027da90(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CAI_BaseNPC::OverrideMove";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027dc80 size=0x66
struct FObj { char pad[0x28]; float m_f; };
struct IObj { char pad[0x4f8]; int m_state; };
extern double g_104493d0;

// TARGET: sub_1027dc80
bool __stdcall sub_1027dc80(FObj* p, IObj* q, float f, int* out)
{
	if (p->m_f < f)
		return false;
	if (q->m_state != 1 && q->m_state != 3)
		return false;
	if (f < g_104493d0) {
		*out = -1;
		return true;
	}
	p->m_f = f;
	*out = 0;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027e120 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc423()
{
	return (((NpcFlags204 *)this)->m >> 11) & 1;
}
// END FUNCTION

// FUNCTION: 0x1028b0f0 size=0x13
extern int (*g_109f3630)(const char *, ...);

// TARGET: sub_1028b0f0
int __stdcall sub_1028b0f0(int unused)
{
    g_109f3630("ERROR! Subclass missing GetSlotSchedule Function!\n");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102cc080 size=0x11c
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern void (*g_109f3658)(int level, const char *pFormat, ...);
extern char g_105ce0d4[];

// The virtual view of slot 440 (the placeholders keep the slot numbers right).
struct SchedView
{
    CAI_NPC_V10(0) CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
    CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
    CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28) CAI_NPC_V10(29)
    CAI_NPC_V10(30) CAI_NPC_V10(31) CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34) CAI_NPC_V10(35) CAI_NPC_V10(36) CAI_NPC_V10(37) CAI_NPC_V10(38) CAI_NPC_V10(39)
    CAI_NPC_V10(40) CAI_NPC_V10(41) CAI_NPC_V10(42) CAI_NPC_V10(43)
    virtual int vfunc440(int schedule);
};

struct CineView
{
    char pad[0x5f60];
    int m_nMoveTo;
};

inline CineView *ResolveHandle(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13))
            return (CineView *)pSlot->m_pEntity;
    }
    return 0;
}

int CAI_BaseNPC::vfunc440(int schedule)
{
    if (schedule == 0x2e) {
        CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
        const unsigned int *ph = &pNPC->m_h5d74;
        SchedView *pView = (SchedView *)this;
        if (!ResolveHandle(pNPC->m_h5d74)) {
            g_109f3658(2, g_105ce0d4, ((CBaseEntity *)this)->sub_1009f200());
            sub_1027d170();
            return pView->vfunc440(1);
        }
        switch (ResolveHandle(*ph)->m_nMoveTo) {
        case 0:
        case 4:
            return pView->vfunc440(0x32);
        case 1:
            return pView->vfunc440(0x2f);
        case 2:
            return pView->vfunc440(0x30);
        case 3:
            return pView->vfunc440(0x31);
        case 5:
            return pView->vfunc440(0x33);
        }
    }
    return schedule;
}
// END FUNCTION
