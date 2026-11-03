// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10388ca0 size=0x6
#include "CNPC_VLasombra.h"
namespace lifted {
extern char g_10640600;
}
datamap_t * CNPC_VLasombra::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10640600);
}
// END FUNCTION

// FUNCTION: 0x10388de0 size=0x6
#include "CNPC_VLasombra.h"
namespace lifted {
extern char g_1093b698;
}
int CNPC_VLasombra::vfunc580()
{
    return (int)&lifted::g_1093b698;
}
// END FUNCTION

// FUNCTION: 0x10388e00 size=0x6
#include "CNPC_VLasombra.h"
namespace lifted {
extern int g_106406a4;
}
int CNPC_VLasombra::vfunc451()
{
    return lifted::g_106406a4;
}
// END FUNCTION

// FUNCTION: 0x10388e20 size=0x1e
#include "CNPC_VLasombra.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VLasombra::vfunc5
CNPC_VLasombra *CNPC_VLasombra::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10388f20 size=0x6
extern unsigned char g_1064069c;
// TARGET: sub_10388f20
unsigned char sub_10388f20()
{
    return g_1064069c;
}
// END FUNCTION

// FUNCTION: 0x10388f80 size=0x1d
#include "CNPC_VLasombra.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b680;
extern B g_10936c74;
int CNPC_VLasombra::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b680.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10389390 size=0x14
#include "CNPC_VLasombra.h"

// TARGET: CNPC_VLasombra::vfunc103
void CNPC_VLasombra::vfunc103()
{
	sub_103c4ef0();
	*(int *)((char *)this + 0x6664) = 0;
}
// END FUNCTION

// FUNCTION: 0x103893c0 size=0x1d
#include "CNPC_VLasombra.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VLasombra::vfunc592
bool CNPC_VLasombra::vfunc592()
{
	if (gpGlobals->curtime < m_f6664)
		return false;
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc592();
}
// END FUNCTION
