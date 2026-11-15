// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1440 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109430d4;
extern char g_1067e1b8[];
ServerClassReg g_109430b8("CVampireProjectile_MingXiaoSpit", &g_109430d4, g_1067e1b8);
// END FUNCTION

// FUNCTION: 0x103f14f0 size=0xa
#include "SendTable.h"
SendTable g_109430d4;
// END FUNCTION

// FUNCTION: 0x103f1570 size=0x5
int sub_103f15b0(void);
int g_109430d0 = ((int (*)(int))sub_103f15b0)(0);
// END FUNCTION

// FUNCTION: 0x103f16f0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109430f4(&CPrecacheRegister::PrecacheFn_Other, "vampireprojectile_mingxiaospit");
// END FUNCTION

// FUNCTION: 0x103f1760 size=0x5
int sub_103f17a0(void);
int g_109430f0 = ((int (*)(int))sub_103f17a0)(0);
// END FUNCTION
