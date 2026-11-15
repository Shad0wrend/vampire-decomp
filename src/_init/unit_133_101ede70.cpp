// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ede70 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1073a3fc;
extern char g_105a4c48[];
ServerClassReg g_1073a6ac("CVampireProjectile", &g_1073a3fc, g_105a4c48);
// END FUNCTION

// FUNCTION: 0x101edf20 size=0xa
#include "SendTable.h"
SendTable g_1073a3fc;
// END FUNCTION

// FUNCTION: 0x101edfa0 size=0x5
int sub_101edfe0(void);
int g_1073a3f8 = ((int (*)(int))sub_101edfe0)(0);
// END FUNCTION

// FUNCTION: 0x101ee200 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1073a6c4(&CPrecacheRegister::PrecacheFn_Other, "vampireprojectile");
// END FUNCTION
