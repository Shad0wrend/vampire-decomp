// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10362c50 size=0x6
#include "CNPC_VBach.h"
namespace lifted {
extern char g_1093a620;
}
int CNPC_VBach::vfunc580()
{
    return (int)&lifted::g_1093a620;
}
// END FUNCTION

// FUNCTION: 0x10362c70 size=0x6
#include "CNPC_VBach.h"
namespace lifted {
extern int g_1062d228;
}
int CNPC_VBach::vfunc451()
{
    return lifted::g_1062d228;
}
// END FUNCTION

// FUNCTION: 0x10362c90 size=0x1e
#include "CNPC_VBach.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VBach::vfunc5
CNPC_VBach *CNPC_VBach::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10362d90 size=0x6
// TARGET: sub_10362d90
extern unsigned char g_1062d220;
unsigned char __cdecl sub_10362d90(void) { return g_1062d220; }
// END FUNCTION

// FUNCTION: 0x10362df0 size=0x1d
#include "CNPC_VBach.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a608;
extern B g_10936c74;
int CNPC_VBach::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a608.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10363720 size=0x6
#include "CNPC_VBach.h"
namespace lifted {
extern char g_1062d22c;
}
datamap_t * CNPC_VBach::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1062d22c);
}
// END FUNCTION

// FUNCTION: 0x103637b0 size=0x7c
#include "CNPC_VBach.h"
struct ISoundPrecache { virtual int Precache(const char *pszSound, int bPreload); };
extern ISoundPrecache *g_1070b248;
void __cdecl sub_10006c3a(const char *pszItem);
void CNPC_VBach::vfunc104()
{
    sub_100013f7();
    sub_10006c3a("item_w_grenade_frag");
    sub_10006c3a("item_w_katana");
    sub_10006c3a("item_w_rem_m_700_bach");
    g_1070b248->Precache("Character/Boss/Bach/bach_grenade.wav", 0);
    g_1070b248->Precache("Character/Boss/Bach/bach_shield.wav", 0);
    g_1070b248->Precache("Character/Boss/Bach/bach_camp_warn.wav", 0);
    g_1070b248->Precache("Character/Boss/Bach/bach_holy_light.wav", 0);
    g_1070b248->Precache("Character/Boss/Bach/snipe_warn6.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x10363850 size=0xb8
#include "CNPC_VBach.h"

void CNPC_VBach::vfunc103()
{
	sub_1026dc00(0x200000);
	sub_1026dc30(1);
	sub_103c4ef0();
	m_b66a1 = 1;
	m_b66a2 = 0;
	m_b66a3 = 0;
	m_b66a5 = 0;
	m_n6684 = 0;
	m_n6688 = 0;
	m_n668c = 0;
	m_n6690 = 0;
	m_n6694 = 0;
	m_n5db4 = 0;
	m_n6698 = 0;
	m_n669c = 0;
	m_b66a4 = 0;
	m_b66a6 = 0;
	m_n6674 = 0;
	m_n6670 = 0;
	m_n6678 = 0;
	m_n6664 = 0;
	m_n6668 = 0;
	m_n666c = 0;
	m_b66a0 = 0;
	m_n667c = 0;
	m_b66a7 = 0;
	m_n6680 = 0;
	m_b66a8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10363940 size=0x14
#include "CAI_BaseNPC.h"
#include "CNPC_VBach.h"

// TARGET: CNPC_VBach::vfunc420
void CNPC_VBach::vfunc420()
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc420();
	*(int *)((char *)this + 0x5de4) = 0x477fff00;
}
// END FUNCTION

// FUNCTION: 0x10363970 size=0x6
#include "CNPC_VBach.h"
int CNPC_VBach::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x10363990 size=0x6
#include "CNPC_VBach.h"
int CNPC_VBach::vfunc138()
{
    return 0x19;
}
// END FUNCTION

// FUNCTION: 0x103639b0 size=0x2e
// TARGET: sub_103639b0

struct CUnknown103639b0
{
    char m_pad0000[0x66a8];
    char m_b66a8;
    void sub_103639b0(int a, int b);
    void sub_10002554(int a);
    void sub_10011234(int a, int b);
};

void CUnknown103639b0::sub_103639b0(int a, int b)
{
    if (m_b66a8 == 0 && (b == 2 || b == 3))
    {
        sub_10002554(a);
        return;
    }
    sub_10011234(a, b);
}
// END FUNCTION

// FUNCTION: 0x10363a10 size=0xf
#include "CNPC_VBach.h"
namespace lifted {
int sub_10015ad2();
}
int CNPC_VBach::vfunc438()
{
    *(int *)((char *)this + 0x1b2c) = 0xe;
    return lifted::sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x10363a30 size=0xca
#include "CNPC_VBach.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_10587668[];

int CNPC_VBach::vfunc440(int schedule)
{
	switch (schedule) {
	case 0xdc:
		return 0x15e;
	case 0x17:
		if (!m_b66a7)
			return 0x15f;
		goto weapon;
	case 0xed:
	case 0x15f:
		if (!m_b66a7)
			goto standard;
	weapon:
		{
			CBaseEntity *pWeapon = sub_10007e19();
			if (pWeapon) {
				const char *pszClass = pWeapon->sub_1009f200();
				if (!_strcmpi(pszClass, g_10587668) && sub_1008dc40(0x10, -1) && !sub_10269aa0(0x2c))
					return 0x160;
			}
		}
	default:
		return sub_103851c0(schedule);
	case 0xef:
		if (!m_b66a7)
			goto standard;
		return 0x15f;
	case 0xb1:
	standard:
		return 0x15f;
	}
}
// END FUNCTION

// FUNCTION: 0x10363b40 size=0xf
#include "CNPC_VBach.h"
namespace lifted {
int sub_10011225();
}
int CNPC_VBach::vfunc461()
{
    *(int *)((char *)this + 0x1b38) = 0xe;
    return lifted::sub_10011225();
}
// END FUNCTION

// FUNCTION: 0x10363b60 size=0xba
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseEntity.h"
#include "CNPC_VBach.h"
#include "CVStatList_t.h"


void CNPC_VBach::vfunc432(int arg)
{
	char *p = (char *)this;
	if (!p[0x66a8])
		sub_10279a50(0);
	if (p[0x66a5] && gpGlobals->curtime > *(float *)(p + 0x6684)) {
		CVStatListSet::Of(p)->Find(3)->sub_102008e0(0xd, 0);
		p[0x66a5] = 0;
	}
	sub_10385a10(arg);
}
// END FUNCTION

// FUNCTION: 0x10363c50 size=0x5
#include "CNPC_VBach.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VBach::vfunc434
// the game's 0x10363c50: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VBach::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x10363c70 size=0xa5
#include "CNPC_VBach.h"
#include "CNPC_VHuman.h"
#include "CTakeDamageInfo.h"
struct CVDmgFlags { char pad[0x10]; int m_nFlags; };

int CNPC_VBach::sub_10363c70(void *pInfo)
{
	CTakeDamageInfo *info = (CTakeDamageInfo *)pInfo;
	if (m_b66a8 == 0)
		return 0;
	int flags;
	if (info->m_pVDmg00)
		flags = ((CVDmgFlags *)info->m_pVDmg00)->m_nFlags | info->m_n38;
	else
		flags = info->m_n38;
	m_b66a6 = 1;
	if (flags & 0x4000002) {
		if (m_b66a5 != 0) {
			CTakeDamageInfo copy = *info;
			copy.m_flDamage = 0.0f;
			copy.m_flDamage34 = 0.0f;
			return ((CNPC_VHuman *)this)->sub_10001b45(&copy);
		}
		m_n6688 = 0;
	} else {
		m_n6690 = 0;
	}
	return ((CNPC_VHuman *)this)->sub_10001b45(pInfo);
}
// END FUNCTION

// FUNCTION: 0x10363db0 size=0x23d
#include "CNPC_VBach.h"
#include "CPASAttenuationFilter.h"
#include "CVStatList_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CUnknown1070b248.h"
#include "CDevFlagObj.h"
extern CDevFlagObj *g_10924a6c;
extern CUnknown1070b248 *g_1070b248;
extern float g_1062d200[];

struct CBachCond : CNPC_VBach
{
	void SetCond(int c)
	{
		g_10924a6c->vfunc1();
		sub_10269a20(c);
	}
	bool TimePassed(float t)
	{
		return gpGlobals->curtime > t;
	}
};

// TARGET: CNPC_VBach::vfunc561
void CNPC_VBach::vfunc561(int a, float flDist)
{
	if (sub_10269aa0(0x4c) || sub_10269aa0(0x4d)) {
		m_b5b80 = 0;
		if (flDist < g_1062d200[m_n669c] && gpGlobals->curtime > m_fl6690) {
			((CBachCond *)this)->SetCond(0x7b);
		} else if (gpGlobals->curtime > m_fl6688) {
			CVStatListSet::Of(this)->Find(3)->sub_102008e0(0xd, 5);
			m_fl6688 = gpGlobals->curtime + 20.0f;
			m_fl6684 = gpGlobals->curtime + 6.0f;
			m_b66a5 = 1;
			CPASAttenuationFilter filter(this);
			int edict = m_pEdict2e0;
			g_1070b248->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/bach_shield.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		m_b66a6 = 0;
	}
	if (((CBachCond *)this)->TimePassed(m_fl668c)) {
		if (flDist < 72.0f) {
			((CBachCond *)this)->SetCond(0x7a);
		} else {
			((CBachCond *)this)->SetCond(0x79);
		}
	}
	sub_1026dd10(a, flDist);
}
// END FUNCTION

// FUNCTION: 0x10364280 size=0x42
#include "CNPC_VBach.h"

int CNPC_VBach::vfunc606(int arg)
{
	if (sub_10269aa0(0x48)) {
		if (m_b66a3)
			return sub_102b8320(arg);
		m_b66a3 = 1;
		return 0;
	}
	m_b66a3 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10364500 size=0x31
// TARGET: sub_10364500
int __stdcall sub_10364500(float flA, float flB)
{
    if (flA < 0.5 && flB > 120.0f) {
        return 0x61;
    }
    return 0x4f;
}
// END FUNCTION

// FUNCTION: 0x10364550 size=0x31
int __stdcall sub_10364550(float a, float b)
{
    if (a < 0.5) {
        if (b > 120.0f) {
            return 0x61;
        }
    }
    return 0x50;
}
// END FUNCTION

// FUNCTION: 0x10365800 size=0x26
#include "CNPC_VBach.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VBach::vfunc566
bool CNPC_VBach::vfunc566(CBaseEntity *pHint)
{
	int nType = *(int *)((char *)pHint + 0x5dc);
	if (nType >= 0x4268 && nType <= 0x426d)
		return true;
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc566(pHint);
}
// END FUNCTION

// FUNCTION: 0x10365a70 size=0x10
#include "CNPC_VBach.h"

void __fastcall sub_10013f2f(void *pThis);
void __fastcall sub_10365a90(void *pThis);

// TARGET: CNPC_VBach::vfunc433
void CNPC_VBach::vfunc433()
{
	sub_10013f2f(this);
	sub_10365a90(this);
}
// END FUNCTION

// FUNCTION: 0x103661f0 size=0x2c
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VBach.h"

// TARGET: CNPC_VBach::vfunc609
int CNPC_VBach::vfunc609(char bForce)
{
	if (m_n5cc0 == 4 || m_n5cc0 == 0xc)
		return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc609(bForce);
	*(int *)((char *)this + 0x6444) = 0;
	return 0;
}
// END FUNCTION
