// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10389db0 size=0x6
#include "CNPC_VManBat.h"
namespace lifted {
extern char g_1093b778;
}
int CNPC_VManBat::vfunc580()
{
    return (int)&lifted::g_1093b778;
}
// END FUNCTION

// FUNCTION: 0x10389dd0 size=0x6
#include "CNPC_VManBat.h"
namespace lifted {
extern int g_10640d3c;
}
int CNPC_VManBat::vfunc451()
{
    return lifted::g_10640d3c;
}
// END FUNCTION

// FUNCTION: 0x10389df0 size=0x1e
#include "CNPC_VManBat.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VManBat::vfunc5
CNPC_VManBat *CNPC_VManBat::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10389ef0 size=0x6
extern char g_10640d34;
// TARGET: sub_10389ef0
char sub_10389ef0() { return g_10640d34; }
// END FUNCTION

// FUNCTION: 0x10389f50 size=0x1d
#include "CNPC_VManBat.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b89c;
extern B g_10936c74;
int CNPC_VManBat::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b89c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1038ac80 size=0x6
#include "datamap.h"
#include "CNPC_VManBat.h"
namespace lifted {
extern char g_10640d40;
}
datamap_t *CNPC_VManBat::vfunc82()
{
    return (datamap_t *)&lifted::g_10640d40;
}
// END FUNCTION

// FUNCTION: 0x1038aec0 size=0x118
#include "CNPC_VManBat.h"

struct CPrecacheIface248
{
	virtual void slot0(const char *pszName, int bPreload);
};
extern CPrecacheIface248 *g_1070b248;
extern const char *g_10640ce0[4];
extern const char *g_10640d10[3];
extern const char *g_10640d1c[3];
extern const char *g_10640d28[3];
void sub_101d0ec0(const char *name);

// TARGET: CNPC_VManBat::vfunc104
void CNPC_VManBat::vfunc104()
{
	sub_100013f7();
	for (unsigned int i = 0; i < 4; i++)
		engine->vfunc13(g_10640ce0[i], 0);
	engine->vfunc17((const char *)"Manbat_screechcone_emitter", 1);
	engine->vfunc17((const char *)"Manbat_player_emitter", 1);
	engine->vfunc17((const char *)"HUD_Manbat_emitter", 1);
	engine->vfunc17((const char *)"Manbat_blast_player", 1);
	for (unsigned int j = 0; j < 3; j++)
		g_1070b248->slot0(g_10640d10[j], 0);
	for (unsigned int k = 0; k < 3; k++)
		g_1070b248->slot0(g_10640d1c[k], 0);
	for (unsigned int m = 0; m < 3; m++)
		g_1070b248->slot0(g_10640d28[m], 0);
	g_1070b248->slot0("character/male/sheriff_manbat/screech.wav", 0);
	g_1070b248->slot0("character/male/sheriff_manbat/fall.wav", 0);
	engine->vfunc17((const char *)"sheriff_teleport_emitter", 1);
	engine->vfunc17((const char *)"sheriff_teleport_emitter", 1);
	sub_101d0ec0("item_w_manbat_claw");
}
// END FUNCTION

// FUNCTION: 0x1038b030 size=0x23
#include "CNPC_VVampire.h"
#include "CNPC_VManBat.h"
#include "CAI_BaseNPC.h"

struct CUnk1038b030Call {
	void sub_10014876();
};

// TARGET: CNPC_VManBat::vfunc103
void CNPC_VManBat::vfunc103()
{
	((CUnk1038b030Call *)this)->sub_10014876();
	((CAI_BaseNPC *)this)->vfunc416(1);
	sub_10332aa0(1, 1, 10);
}
// END FUNCTION

// FUNCTION: 0x1038b070 size=0x47
#include "CNPC_VManBat.h"
#include "globalvars.h"
extern int g_109340d8;
void CNPC_VManBat::vfunc420()
{
    m_f6678 = gpGlobals->curtime + 2.3;
    m_f667c = gpGlobals->curtime + 0.1;
    m_b66b0 = 0;
    m_b66b8 = 0;
    sub_1029a0b0();
    g_109340d8 = 0x14;
}
// END FUNCTION

// FUNCTION: 0x1038b0e0 size=0x6
#include "CNPC_VManBat.h"
int CNPC_VManBat::vfunc138()
{
    return 0x21;
}
// END FUNCTION

// FUNCTION: 0x1038b100 size=0x6
#include "CNPC_VManBat.h"
int CNPC_VManBat::vfunc337()
{
    return 0x100000;
}
// END FUNCTION

// FUNCTION: 0x1038b120 size=0x60
#include "CNPC_VManBat.h"

int sub_1042fbf0(unsigned int v);

inline unsigned int SecUnscramble(unsigned int n)
{
	unsigned int r = n;
	r &= 0x710935;
	r ^= 0x148739;
	r += 0x4094ab;
	r &= 0x18ef6ca;
	r ^= n;
	r ^= 0x412a96ec;
	return r;
}

#define HASH(x) (((((((x) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (x)) ^ 0x412a96ec)
// TARGET: CNPC_VManBat::vfunc525
char CNPC_VManBat::vfunc525(float a)
{
	if (sub_1027d990() == 2)
	{
		sub_1038b1a0(a);
		return 1;
	}
	int v = HASH(m_n6670);
	return sub_1042fbf0(v) == sub_1042fbf0(0xfa0b0699);
}
// END FUNCTION

// FUNCTION: 0x1038fb00 size=0x6
#include "CNPC_VManBat.h"
int CNPC_VManBat::vfunc464()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x1038fb20 size=0x68
#include "CBaseEntity.h"
#include "CGameTrace.h"
#include "CNPC_VManBat.h"
#include "CTraceFilterManBatNoIBeamEntity.h"
#include "CUnknown1070b254.h"
struct CManBatCollideable
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8();
	virtual const float *vfunc9(int a);
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual int vfunc14();
};

struct CManBatTraceEnt { virtual void v0(); virtual void v1(); virtual CManBatCollideable *vfunc2(); };

// TARGET: CNPC_VManBat::vfunc102
void CNPC_VManBat::vfunc102(CBaseEntity *pEnt, int a2, int a3, int a4, int a5)
{
	CManBatCollideable *pCollision = ((CManBatTraceEnt *)pEnt)->vfunc2();
	CTraceFilterManBatNoIBeamEntity filter(pEnt, pCollision->vfunc14());
	g_1070b254->vfunc5(pCollision, (const float *)a2, (const float *)a3, pCollision->vfunc9(0), a4, &filter, (CGameTrace *)a5);
}
// END FUNCTION
