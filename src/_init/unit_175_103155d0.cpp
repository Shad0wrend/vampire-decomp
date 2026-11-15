// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103155d0 size=0x5
int * sub_10315610(void);
int * g_10936c60 = ((int * (*)(int))sub_10315610)(0);
// END FUNCTION

// FUNCTION: 0x1031a1c0 size=0xa
#include "ConVar.h"
ConVar g_10936de0("debug_no_damage", "0", 0, "If this is true, no one takes damage.", true, 0.0f, true, 1.0f);
// END FUNCTION
