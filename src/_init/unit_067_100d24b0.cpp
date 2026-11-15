// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d24b0 size=0xa
#include "ConCommand.h"
void sub_100d23a0(void);
ConCommand g_106e7e68("drawline", sub_100d23a0, "Draws line between two 3D Points.\n\tGreen if no collision\n\tRed is collides with something\n\tArugments: x1 y1 z1 x2 y2 z2", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2720 size=0xa
#include "ConCommand.h"
void sub_100d2540(void);
ConCommand g_106e7ae0("drawcross", sub_100d2540, "Draws a cross at the given location\n\tArugments: x y z", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d27f0 size=0xa
#include "ConCommand.h"
void sub_100d27b0(void);
ConCommand g_106e74d0("kill", sub_100d27b0, "kills the player", 0, 0);
// END FUNCTION
