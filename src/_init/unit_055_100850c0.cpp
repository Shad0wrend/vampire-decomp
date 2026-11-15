// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100850c0 size=0x5
int sub_10085100(void);
int g_106c8b28 = ((int (*)(int))sub_10085100)(0);
// END FUNCTION

// FUNCTION: 0x100851d0 size=0xa
#include "ConCommand.h"
void sub_10085180(void);
ConCommand g_106c8cc0("ai_disable", sub_10085180, "Bi-passes all AI logic routines and puts all NPCs into their idle animations.  Can be used to get NPCs out of your way and to test effect of AI logic routines on frame rate", 0, 0);
// END FUNCTION
