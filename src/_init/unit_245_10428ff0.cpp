// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10428ff0 size=0xa
#include "ConVar.h"
ConVar g_109ee3d8("debug_dump_anim_seq_list", "0", 8448, "Set this to true to allow a dump of animation seqences on errors.");
// END FUNCTION

// FUNCTION: 0x10429280 size=0x5
int sub_104292c0(void);
int g_109ee724 = ((int (*)(int))sub_104292c0)(0);
// END FUNCTION

// FUNCTION: 0x104292f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109ee748;
extern char g_106acf50[];
ServerClassReg g_109ee728("CBaseGrenade", &g_109ee748, g_106acf50);
// END FUNCTION

// FUNCTION: 0x104293a0 size=0xa
#include "SendTable.h"
SendTable g_109ee748;
// END FUNCTION
