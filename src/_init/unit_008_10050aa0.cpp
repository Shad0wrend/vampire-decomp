// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10050aa0 size=0x5
int sub_10050ae0(void);
int g_106bdd88 = ((int (*)(int))sub_10050ae0)(0);
// END FUNCTION

// FUNCTION: 0x10054820 size=0xa
#include "ConCommand.h"
void sub_100546b0(void);
ConCommand g_106bdd8c("vtest_fortitude_soak", sub_100546b0, "Testing Fortitude Soak Particles", 0, 0);
// END FUNCTION

// FUNCTION: 0x10054a20 size=0xa
#include "ConCommand.h"
void sub_100548b0(void);
ConCommand g_106bdd60("vtest_bloodshield_soak", sub_100548b0, "Testing Bloodshield Soak Particles", 0, 0);
// END FUNCTION
