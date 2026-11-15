// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d2be0 size=0xa
#include "ConVar.h"
ConVar g_10738960("r_visualizetraces", "0", 8192);
// END FUNCTION

// FUNCTION: 0x101d7950 size=0xa
#include "ConCommand.h"
void sub_101d77d0(void);
ConCommand g_10738e00("vautolvl", sub_101d77d0, "Attempts to auto-level, or sets the auto-level template & then auto-levels.", 0, 0);
// END FUNCTION

// FUNCTION: 0x101d7ab0 size=0xa
#include "ConCommand.h"
void sub_101d79e0(void);
ConCommand g_10738e28("vautolvl_info", sub_101d79e0, "Gives information on auto-level information.", 0, 0);
// END FUNCTION
