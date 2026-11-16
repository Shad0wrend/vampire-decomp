// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10187990 size=0xa
#include "ConVar.h"
ConVar g_10726900("sv_unlag", "1", 256);
// END FUNCTION

// FUNCTION: 0x10187a20 size=0xa
#include "ConVar.h"
ConVar g_107278c0("sv_maxunlag", "0.5", 0);
// END FUNCTION

// FUNCTION: 0x10187ab0 size=0xa
#include "ConVar.h"
ConVar g_107268b8("sv_unlagpush", "0.0", 0);
// END FUNCTION

// FUNCTION: 0x10187b40 size=0xa
#include "ConVar.h"
ConVar g_10726948("sv_unlagsamples", "1", 0);
// END FUNCTION

// FUNCTION: 0x10187bd0 size=0xa
#define PCD_INITIALIZERS
#include "CLagCompensationManager.h"
CLagCompensationManager g_10726990;
// END FUNCTION
