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

// FUNCTION: 0x100d2900 size=0xa
#include "ConCommand.h"
void sub_100d2880(void);
ConCommand g_106e78fc("buddha", sub_100d2880, "Toggle.  Player takes damage but won't die. (Shows red cross when health is zero)", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d29d0 size=0xa
#include "ConCommand.h"
void sub_100d2990(void);
ConCommand g_106e75ec("say", sub_100d2990, "Display player message", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2aa0 size=0xa
#include "ConCommand.h"
void sub_100d2a60(void);
ConCommand g_106e7390("say_team", sub_100d2a60, "Display player message to team", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2bd0 size=0xa
#include "ConCommand.h"
void sub_100d2b30(void);
void sub_100d2c30(void);
ConCommand g_106e7e40("give", sub_100d2b30, "Give item to player.\n\tArguments: <item_name>", 0, sub_100d2c30);
// END FUNCTION

// FUNCTION: 0x100d2e20 size=0xa
#include "ConCommand.h"
void sub_100d2d80(void);
ConCommand g_106e7458("fov", sub_100d2d80, "Change players FOV", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3010 size=0xa
#include "ConCommand.h"
void sub_100d2eb0(void);
ConCommand g_106e77fc("setmodel", sub_100d2eb0, "Changes's player's model", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d30d0 size=0xa
#include "ConCommand.h"
void sub_100d30a0(void);
ConCommand g_106e76b8("lastinv", sub_100d30a0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100d31e0 size=0xa
#include "ConCommand.h"
void sub_100d3160(void);
ConCommand g_106e7318("phys_swap", sub_100d3160, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3480 size=0xa
#include "ConCommand.h"
void sub_100d3270(void);
ConCommand g_106e7ab8("worldmap_transition", sub_100d3270, "Transition to map\t\nArguments: <map_name>", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3560 size=0xa
#include "ConCommand.h"
void sub_100d3510(void);
ConCommand g_106e76e0("use", sub_100d3510, "Use a particular weapon\t\nArguments: <weapon_name>", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d39b0 size=0xa
#include "ConCommand.h"
void sub_100d35f0(void);
ConCommand g_106e7b08("noclip", sub_100d35f0, "Toggle. Player becomes non-solid and flies.", 16384, 0);
// END FUNCTION

// FUNCTION: 0x100d3b20 size=0xa
#include "ConCommand.h"
void sub_100d3a50(void);
ConCommand g_106e7430("god", sub_100d3a50, "Toggle. Player becomes invulnerable.", 16384, 0);
// END FUNCTION

// FUNCTION: 0x100d3c80 size=0xa
#include "ConCommand.h"
void sub_100d3bc0(void);
ConCommand g_106e7d50("notarget", sub_100d3bc0, "Toggle. Player becomes hidden to NPCs.", 16384, 0);
// END FUNCTION

// FUNCTION: 0x100d3e00 size=0xa
#include "ConCommand.h"
void sub_100d3d20(void);
ConCommand g_106e7480("giftxp", sub_100d3d20, "Free XP for all!", 0, 0);
// END FUNCTION
