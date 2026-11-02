// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c77b0 size=0x6
#include "CNPC_VVentrue.h"

extern int g_1093d3b0;

// TARGET: CNPC_VVentrue::vfunc580
void *CNPC_VVentrue::vfunc580()
{
	return &g_1093d3b0;
}
// END FUNCTION

// FUNCTION: 0x103c77d0 size=0x6
#include "CNPC_VVentrue.h"

extern const char *g_1065f0e8;

// TARGET: CNPC_VVentrue::vfunc451
const char *CNPC_VVentrue::vfunc451()
{
	return g_1065f0e8;
}
// END FUNCTION

// FUNCTION: 0x103c77f0 size=0x1e
#include "CNPC_VVentrue.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VVentrue::vfunc5
CNPC_VVentrue *CNPC_VVentrue::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103c78f0 size=0x6
#include "CNPC_VVentrue.h"

extern char g_1065f0e0;

// TARGET: CNPC_VVentrue::vfunc452
char CNPC_VVentrue::vfunc452()
{
	return g_1065f0e0;
}
// END FUNCTION

// FUNCTION: 0x103c7950 size=0x1d
#include "CNPC_VVentrue.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d394;
extern B g_10936c74;
int CNPC_VVentrue::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d394.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c7e40 size=0x6
#include "CNPC_VVentrue.h"
int CNPC_VVentrue::vfunc138()
{
    return 0x15;
}
// END FUNCTION
