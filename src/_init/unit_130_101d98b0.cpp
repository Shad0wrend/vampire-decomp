// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d98b0 size=0xa
#include "vampire_all.h"
#define PCD_INITIALIZERS
#include "CUnknown101e0be0.h"
CUnknown101e0be0 g_10739a4c;
// END FUNCTION

// FUNCTION: 0x101d9930 size=0xa
#define PCD_INITIALIZERS
#include "utlvector.h"
#include "PcdGuarded.h"
template <> CUtlVector<int> PcdGuarded<0x107399f4, CUtlVector<int> >::s_object(8, 8);
// END FUNCTION

// FUNCTION: 0x101d9a60 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10739a2c;
extern char g_105a1b2c[];
ServerClassReg g_10739a0c("CDisciplineProjectile", &g_10739a2c, g_105a1b2c);
// END FUNCTION

// FUNCTION: 0x101d9b10 size=0xa
#include "SendTable.h"
SendTable g_10739a2c;
// END FUNCTION

// FUNCTION: 0x101d9b90 size=0x5
int sub_101d9bd0(void);
int g_10739a28 = ((int (*)(int))sub_101d9bd0)(0);
// END FUNCTION

// FUNCTION: 0x101d9d40 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10739408(&CPrecacheRegister::PrecacheFn_Other, "vdisciplineprojectile");
// END FUNCTION

// FUNCTION: 0x101d9db0 size=0x5
int sub_101d9df0(void);
int g_1073947c = ((int (*)(int))sub_101d9df0)(0);
// END FUNCTION
