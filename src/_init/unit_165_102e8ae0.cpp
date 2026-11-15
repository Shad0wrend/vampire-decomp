// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e8ae0 size=0xa
#include "ConVar.h"
ConVar g_10933fb8("debug_steering_visualize_pie", "1", 0, "Draw using pies instead of tris.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x102e9650 size=0xa
#include "ConCommand.h"
void sub_102e96e0(void);
ConCommand g_10933f90("debug_set_steering_weight", sub_102e96e0, "Use this command to change the weights that NPCs use for avoidance.", 0, 0);
// END FUNCTION
