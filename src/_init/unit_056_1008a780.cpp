// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1008a780 size=0x5
int sub_1008a7c0(void);
int g_106cc11c = ((int (*)(int))sub_1008a7c0)(0);
// END FUNCTION

// FUNCTION: 0x1008a7f0 size=0xa
#include "SendTable.h"
SendTable g_106cceec;
// END FUNCTION

// FUNCTION: 0x1008a870 size=0x5
int sub_1008a8b0(void);
int g_106ccee8 = ((int (*)(int))sub_1008a8b0)(0);
// END FUNCTION

// FUNCTION: 0x1008a980 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c9954;
extern char g_1054d51c[];
ServerClassReg g_106ccf4c("CBaseAnimating", &g_106c9954, g_1054d51c);
// END FUNCTION

// FUNCTION: 0x1008aa30 size=0xa
#include "SendTable.h"
SendTable g_106c9954;
// END FUNCTION

// FUNCTION: 0x1008aab0 size=0x5
int sub_1008aaf0(void);
int g_106c9950 = ((int (*)(int))sub_1008aaf0)(0);
// END FUNCTION

// FUNCTION: 0x1008cf30 size=0xa
#include "ConVar.h"
ConVar g_106ccf08("ent_trace_anim_event", "0", 256, "Set this to false if you don't care about anim events being traced.");
// END FUNCTION

// FUNCTION: 0x10091400 size=0xa
#include "ConVar.h"
ConVar g_106caf60("debug_interval_movement", "0", 0, "Set this to -1 to enable automatic nosmooth movement for zombies (or other enabled NPCs).  Set it to a positive number to set the scalar rather than calculating it.");
// END FUNCTION

// FUNCTION: 0x10096820 size=0x5
#include "Vector.h"
Vector g_106cc010[8] = { Vector(1.0f, 1.0f, 1.0f), Vector(1.0f, 0.5f, 0.5f), Vector(0.5f, 1.0f, 0.5f), Vector(1.0f, 1.0f, 0.5f), Vector(0.5f, 0.5f, 1.0f), Vector(1.0f, 0.5f, 1.0f), Vector(0.5f, 1.0f, 1.0f), Vector(1.0f, 1.0f, 1.0f) };
// END FUNCTION
