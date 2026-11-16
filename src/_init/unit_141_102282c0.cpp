// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102282c0 size=0xa
#include "ConVar.h"
ConVar g_10750f70("soundscheme_combat_music_time", "15", 0);
// END FUNCTION

// FUNCTION: 0x10228430 size=0xa
#define PCD_INITIALIZERS
#include "CSoundSchemeManager.h"
CSoundSchemeManager g_10750d78;
// END FUNCTION

// FUNCTION: 0x1022a080 size=0x5
int sub_1022a0c0(void);
int g_10750fb8 = ((int (*)(int))sub_1022a0c0)(0);
// END FUNCTION

// FUNCTION: 0x1022b270 size=0xa
#include "ConVar.h"
ConVar g_10750f28("soundscheme_randomness", "1000", 0);
// END FUNCTION

// FUNCTION: 0x1022bbc0 size=0x5
int sub_1022bc00(void);
int g_10750fe4 = ((int (*)(int))sub_1022bc00)(0);
// END FUNCTION

// FUNCTION: 0x1022cf00 size=0xa
#include "ConCommand.h"
void sub_1022ce80(void);
ConCommand g_10750fbc("soundscheme_toggledebug", sub_1022ce80, "Shows what sound schemes are playing.", 0, 0);
// END FUNCTION
