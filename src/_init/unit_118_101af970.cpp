// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101af970 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101af9b0.h"
CUnknown101af9b0 g_1072bc20;
// END FUNCTION

// FUNCTION: 0x101afe30 size=0xa
#include "ConVar.h"
ConVar g_1072bd58("sv_soundemitter_trace", "0", 8192, "Show all EmitSound calls including their symbolic name and the actual .wav file they resolved to\n");
// END FUNCTION

// FUNCTION: 0x101b0410 size=0xa
#include "ConCommand.h"
void sub_101b04a0(void);
ConCommand g_1072bdc4("sv_soundemitter_flush", sub_101b04a0, "Flushes the sounds.txt system (server only)", 0, 0);
// END FUNCTION

// FUNCTION: 0x101b05e0 size=0xa
#include "ConCommand.h"
void sub_101b0670(void);
ConCommand g_1072bd9c("sv_soundemitter_filecheck", sub_101b0670, "Report missing .wav files for sounds and game_sounds files.", 0, 0);
// END FUNCTION

// FUNCTION: 0x101b0a50 size=0xa
#include "ConCommand.h"
void sub_101b06a0(void);
void sub_101b0ab0(void);
ConCommand g_1072bdec("playgamesound", sub_101b06a0, "Play a sound from the game sounds txt file", 0, sub_101b0ab0);
// END FUNCTION
