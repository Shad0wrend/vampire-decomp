// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034e490 size=0x6
#include "CFogController.h"
namespace lifted {
extern char g_10625e58;
}
datamap_t *CFogController::vfunc82()
{
    return (datamap_t *)&lifted::g_10625e58;
}
// END FUNCTION

// FUNCTION: 0x1034ef70 size=0x1e
#include "CFogController.h"

void sub_100aa7b0(void *p);

// TARGET: CFogController::vfunc5
CFogController *CFogController::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
