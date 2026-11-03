// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a4f60 size=0x6
#include "CNPC_VSabbatGunman.h"
namespace lifted {
extern char g_1064c118;
}
datamap_t * CNPC_VSabbatGunman::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1064c118);
}
// END FUNCTION

// FUNCTION: 0x103a50a0 size=0x6
#include "CNPC_VSabbatGunman.h"
namespace lifted {
extern char g_1093c190;
}
int CNPC_VSabbatGunman::vfunc580()
{
    return (int)&lifted::g_1093c190;
}
// END FUNCTION

// FUNCTION: 0x103a50c0 size=0x6
#include "CNPC_VSabbatGunman.h"
namespace lifted {
extern int g_1064c138;
}
int CNPC_VSabbatGunman::vfunc451()
{
    return lifted::g_1064c138;
}
// END FUNCTION

// FUNCTION: 0x103a50e0 size=0x1e
#include "CNPC_VSabbatGunman.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VSabbatGunman::vfunc5
CNPC_VSabbatGunman *CNPC_VSabbatGunman::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a51e0 size=0x6
extern unsigned char g_1064c130;
// TARGET: sub_103a51e0
unsigned char sub_103a51e0()
{
    return g_1064c130;
}
// END FUNCTION

// FUNCTION: 0x103a5240 size=0x1d
#include "CNPC_VSabbatGunman.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c1d8;
extern B g_10936c74;
int CNPC_VSabbatGunman::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c1d8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a56f0 size=0xa0
#include "CLogicAuto.h"
#include "CNPC_VSabbatGunman.h"
#include "CBaseAnimating.h"
#include "ConVar.h"

extern ConVar *g_1093c104;
extern ConVar *g_1093c14c;
extern ConVar *g_1093c1f4;
extern float g_104454c4;

struct GunmanView {
	char m_pad[0x654];
	float m_flTime;
	char m_pad658[0x1484 - 0x658];
	int m_nValue;
};

void CNPC_VSabbatGunman::vfunc465(int a)
{
	GunmanView *g = (GunmanView *)this;
	float flLimit = g_1093c104->vfunc1() ? 0.0f : g_1093c104->m_fValue;
	if (g->m_flTime > flLimit) {
		g->m_nValue = g_1093c14c->vfunc1() ? 0 : g_1093c14c->m_nValue;
		double d = g_1093c1f4->vfunc1() ? g_104454c4 : g_1093c1f4->m_fValue;
		((CBaseAnimating *)this)->sub_1008d230((float)d);
	} else {
		g->m_nValue = 0;
		((CBaseAnimating *)this)->sub_1008d230(-1.0f);
	}
	sub_10295a60(a);
}
// END FUNCTION
