// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103dc750 size=0x6
#include "CNPC_VWolfMorph.h"
namespace lifted {
extern char g_109402a8;
}
int CNPC_VWolfMorph::vfunc580()
{
    return (int)&lifted::g_109402a8;
}
// END FUNCTION

// FUNCTION: 0x103dc770 size=0x6
#include "CNPC_VWolfMorph.h"
namespace lifted {
extern int g_10663bdc;
}
int CNPC_VWolfMorph::vfunc451()
{
    return lifted::g_10663bdc;
}
// END FUNCTION

// FUNCTION: 0x103dc790 size=0x6
#include "datamap.h"
#include "CNPC_VWolfMorph.h"
namespace lifted {
extern char g_10663b38;
}
datamap_t *CNPC_VWolfMorph::vfunc82()
{
    return (datamap_t *)&lifted::g_10663b38;
}
// END FUNCTION

// FUNCTION: 0x103dc8f0 size=0x6
extern unsigned char g_10663bd4;
// TARGET: sub_103dc8f0
unsigned char sub_103dc8f0()
{
    return g_10663bd4;
}
// END FUNCTION

// FUNCTION: 0x103dc950 size=0x1d
#include "CNPC_VWolfMorph.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1094028c;
extern B g_10936c74;
int CNPC_VWolfMorph::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1094028c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103dcdc0 size=0x8
#include "CNPC_VWolfMorph.h"
int CNPC_VWolfMorph::vfunc375(int unused) { return 0x1145; }
// END FUNCTION

// FUNCTION: 0x103dcde0 size=0x5
#include "CNPC_VWolfMorph.h"
#include "CNPC_VPlayerController.h"

// TARGET: CNPC_VWolfMorph::vfunc103
// the game's 0x103dcde0: a tail call (jmp) of CNPC_VPlayerController::vfunc103
void CNPC_VWolfMorph::vfunc103()
{
	((CNPC_VPlayerController *)this)->CNPC_VPlayerController::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x103dce50 size=0x6
#include "CNPC_VWolfMorph.h"
int CNPC_VWolfMorph::vfunc138()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x103dceb0 size=0x31
#include <string.h>
#include "CNPC_VWolfMorph.h"

int __fastcall sub_10015ad2(void *self);

int CNPC_VWolfMorph::vfunc438()
{
    if (m_p5c38 != 0) {
        if (_strcmpi(*(const char **)((char *)m_p5c38 + 0x40), "SCHED_VWOLFMORPH_MORPH") == 0) {
            return sub_10015ad2(this);
        }
    }
    return 0x158;
}
// END FUNCTION

// FUNCTION: 0x103dcf00 size=0x1
#include "CNPC_VWolfMorph.h"
void CNPC_VWolfMorph::vfunc588()
{
}
// END FUNCTION

// FUNCTION: 0x103dcf20 size=0x1e
#include "CNPC_VWolfMorph.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VWolfMorph::vfunc5
CNPC_VWolfMorph *CNPC_VWolfMorph::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
