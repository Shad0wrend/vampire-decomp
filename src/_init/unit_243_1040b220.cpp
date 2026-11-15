// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040b220 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1094a930(&CPrecacheRegister::PrecacheFn_Other, "item_i_written");
// END FUNCTION

// FUNCTION: 0x1040b580 size=0xa
#include "ConVar.h"
ConVar g_1094aac0("g_debug_physcannon", "0", 0);
// END FUNCTION

// FUNCTION: 0x1040b610 size=0xa
#include "ConVar.h"
ConVar g_1094aa18("physcannon_minforce", "700", 0);
// END FUNCTION

// FUNCTION: 0x1040b6a0 size=0xa
#include "ConVar.h"
ConVar g_1094a9d0("physcannon_maxforce", "1500", 0);
// END FUNCTION

// FUNCTION: 0x1040b730 size=0xa
#include "ConVar.h"
ConVar g_1094acc8("physcannon_maxmass", "250", 0);
// END FUNCTION
