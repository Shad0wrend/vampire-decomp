// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101be680 size=0xa
#include "ConVar.h"
ConVar g_1072c728("debug_deafzone_disable", "0", 0);
// END FUNCTION

// FUNCTION: 0x101bf4c0 size=0xa
#include "ConCommand.h"
void sub_101bf270(void);
ConCommand g_1072c6fc("dump_stealthkill_table", sub_101bf270, "Re-reads the stealth kill rules text file, and prints out a table of the values", 0, 0);
// END FUNCTION
