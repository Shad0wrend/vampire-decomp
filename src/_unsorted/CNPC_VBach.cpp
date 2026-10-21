// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x10363b60 size=0xba
#include "CBaseEntity.h"
#include "CNPC_VBach.h"
#include "CVStatList_t.h"

struct CGlobalVarsLike { char pad[0xc]; float curtime; };
extern CGlobalVarsLike *g_1070b228;

void CNPC_VBach::vfunc432(int arg)
{
	char *p = (char *)this;
	if (!p[0x66a8])
		sub_10279a50(0);
	if (p[0x66a5] && g_1070b228->curtime > *(float *)(p + 0x6684)) {
		CVStatListSet::Of(p)->Find(3)->sub_102008e0(0xd, 0);
		p[0x66a5] = 0;
	}
	sub_10385a10(arg);
}
// END FUNCTION
