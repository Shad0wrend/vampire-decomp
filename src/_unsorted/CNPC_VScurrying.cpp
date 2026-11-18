// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103aba70 size=0x6
#include "CNPC_VScurrying.h"
namespace lifted {
extern char g_1064f480;
}
datamap_t * CNPC_VScurrying::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1064f480);
}
// END FUNCTION

// FUNCTION: 0x103abba0 size=0x6
#include "CNPC_VScurrying.h"
namespace lifted {
extern char g_1093c490;
}
int CNPC_VScurrying::vfunc580()
{
    return (int)&lifted::g_1093c490;
}
// END FUNCTION

// FUNCTION: 0x103abbc0 size=0x6
#include "CNPC_VScurrying.h"
namespace lifted {
extern int g_1064f5a8;
}
int CNPC_VScurrying::vfunc451()
{
    return lifted::g_1064f5a8;
}
// END FUNCTION

// FUNCTION: 0x103abbe0 size=0x1e
#include "CNPC_VScurrying.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VScurrying::vfunc5
CBaseEntity *CNPC_VScurrying::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103abce0 size=0x6
extern unsigned char g_1064f5a0;
// TARGET: sub_103abce0
unsigned char sub_103abce0()
{
    return g_1064f5a0;
}
// END FUNCTION

// FUNCTION: 0x103abd40 size=0x1d
#include "CNPC_VScurrying.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c4e0;
extern B g_10936c74;
int CNPC_VScurrying::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c4e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103ac430 size=0x29
#include "CNPC_VAnimal.h"
#include "CNPC_VScurrying.h"

extern char *g_1070b228;

// TARGET: CNPC_VScurrying::vfunc103
void CNPC_VScurrying::vfunc103()
{
    ((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc103();
    *(unsigned int *)((char *)this + 0x5b84) |= 0x10000;
    char *p = g_1070b228;
    *(int *)((char *)this + 0x668c) = *(int *)(p + 0xc);
}
// END FUNCTION

// FUNCTION: 0x103ac470 size=0x6
#include "CNPC_VScurrying.h"
int CNPC_VScurrying::vfunc138()
{
    return 0xc;
}
// END FUNCTION

// FUNCTION: 0x103ac490 size=0x36
#include "CNPC_VScurrying.h"

struct CNPCVAnimalBase
{
    int sub_10012283(int act);
};

// TARGET: CNPC_VScurrying::vfunc440
int CNPC_VScurrying::vfunc440(int act)
{
    switch (act) {
    case 0x6b:
        return 0x161;
    case 0x156:
        return 0x15e;
    case 0x157:
        return 0x15f;
    default:
        return ((CNPCVAnimalBase *)this)->sub_10012283(act);
    }
}
// END FUNCTION

// FUNCTION: 0x103ac4e0 size=0xb
#include "CNPC_VScurrying.h"
namespace lifted {
int sub_1000be92();
}
int CNPC_VScurrying::vfunc337()
{
    return (lifted::sub_1000be92()) | 0x80000;
}
// END FUNCTION

// FUNCTION: 0x103ac500 size=0xcb
#include "CNPC_VScurrying.h"
#include "CEHandleGet.h"
struct CScurryEvt { virtual void vfunc0(); virtual void vfunc1(); };
extern CScurryEvt *g_10924a6c;

// TARGET: CNPC_VScurrying::vfunc433
void CNPC_VScurrying::vfunc433()
{
	sub_10269b50(0x78);
	sub_102b27f0();
	if (gpGlobals->curtime >= m_flTime6678)
	{
		if (!sub_103acac0((CBaseEntity *)EHandle_Get(m_hEnt667c)))
		{
			CScurryPick *pPick = sub_103aca80();
			if (pPick)
				m_hEnt667c = *pPick->vfunc1();
			else
				m_hEnt667c = 0xffffffff;
		}
	}
	if (EHandle_Get(m_hEnt667c))
	{
		g_10924a6c->vfunc1();
		sub_10269a20(0x78);
	}
}
// END FUNCTION

// FUNCTION: 0x103aca60 size=0x7
#include "CNPC_VScurrying.h"
namespace lifted {
extern float g_104454c4;
}
float CNPC_VScurrying::vfunc471()
{
    return lifted::g_104454c4;
}
// END FUNCTION
