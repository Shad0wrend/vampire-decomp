// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101afe30 size=0xa
#include "ConVar.h"
ConVar g_1072bd58("sv_soundemitter_trace", "0", 8192, "Show all EmitSound calls including their symbolic name and the actual .wav file they resolved to\n");
// END FUNCTION

// FUNCTION: 0x101b0410 size=0xa
#include "ConCommand.h"
void sub_101b04a0(void);
ConCommand g_1072bdc4("sv_soundemitter_flush", sub_101b04a0, "Flushes the sounds.txt system (server only)", 0, 0);
// END FUNCTION
