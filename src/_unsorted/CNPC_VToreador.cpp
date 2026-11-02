// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b5330 size=0x6
#include "CNPC_VToreador.h"

extern int g_1093c900;

// TARGET: CNPC_VToreador::vfunc580
void *CNPC_VToreador::vfunc580()
{
	return &g_1093c900;
}
// END FUNCTION

// FUNCTION: 0x103b5350 size=0x6
#include "CNPC_VToreador.h"

extern const char *g_10652910;

// TARGET: CNPC_VToreador::vfunc451
const char *CNPC_VToreador::vfunc451()
{
	return g_10652910;
}
// END FUNCTION

// FUNCTION: 0x103b5370 size=0x1e
#include "CNPC_VToreador.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VToreador::vfunc5
CNPC_VToreador *CNPC_VToreador::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b5470 size=0x6
#include "CNPC_VToreador.h"

extern char g_10652908;

// TARGET: CNPC_VToreador::vfunc452
char CNPC_VToreador::vfunc452()
{
	return g_10652908;
}
// END FUNCTION

// FUNCTION: 0x103b54d0 size=0x1d
#include "CNPC_VToreador.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c948;
extern B g_10936c74;
int CNPC_VToreador::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c948.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b59c0 size=0x6
#include "CNPC_VToreador.h"
int CNPC_VToreador::vfunc138()
{
    return 0x13;
}
// END FUNCTION
