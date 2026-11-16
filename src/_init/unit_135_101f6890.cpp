// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101fa240 size=0x5
int * sub_101fa280(void);
int * g_1074e094 = ((int * (*)(int))sub_101fa280)(0);
// END FUNCTION

// FUNCTION: 0x101fa370 size=0xa
#define PCD_INITIALIZERS
#include "CVStatInfoList_t.h"
CVStatInfoList_t g_1074e658("Attributes", 0, 35);
// END FUNCTION

// FUNCTION: 0x101fa400 size=0xa
#define PCD_INITIALIZERS
#include "CVStatInfoList_t.h"
CVStatInfoList_t g_1074e4f0("Abilities", 1, 13);
// END FUNCTION

// FUNCTION: 0x101fa490 size=0xa
#define PCD_INITIALIZERS
#include "CVStatInfoList_t.h"
CVStatInfoList_t g_1074e098("Disciplines", 2, 17);
// END FUNCTION

// FUNCTION: 0x101fea40 size=0xa
#include "ConVar.h"
ConVar g_1074e6b0("vdiscipline_use_new", "1", 8448);
// END FUNCTION

// FUNCTION: 0x101feba0 size=0xa
#include "ConVar.h"
ConVar g_1074e778("vdiscipline_allow_renewables", "0", 8576);
// END FUNCTION
