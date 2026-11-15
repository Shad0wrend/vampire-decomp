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

// FUNCTION: 0x100852d0 size=0xa
#include "ConCommand.h"
void sub_10085260(void);
ConCommand g_106c9024("ai_show_hints", sub_10085260, "Displays all hints as small boxes\n\tBlue\t\t- hint is available for use\n\tRed\t\t- hint is currently being used by an NPC\n\tOrange\t\t- hint not being used by timed out\n\tGrey\t\t- hint has been disabled", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085360 size=0xa
#include "ConCommand.h"
void sub_10085260(void);
ConCommand g_106c9448("ai_hints", sub_10085260, "Displays all hints as small boxes\n\tBlue\t\t- hint is available for use\n\tRed\t\t- hint is currently being used by an NPC\n\tOrange\t\t- hint not being used by timed out\n\tGrey\t\t- hint has been disabled", 0, 0);
// END FUNCTION

// FUNCTION: 0x100853f0 size=0xa
#include "ConCommand.h"
void sub_10085480(void);
ConCommand g_106c8b30("ai_hint_focus_npc", sub_10085480, "Use this command to focus on an NPC for hints.  When that NPC tries to find a hint, he will mark them with failure messages saying why he couldn't use it.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085620 size=0xa
#include "ConCommand.h"
void sub_100855f0(void);
ConCommand g_106c9308("ai_show_hull", sub_100855f0, "Displays the allowed hulls between each node for the currently selected hull type.  Hulls are color code as follows:\n\tGreen\t\t- ground movement \n\tBlue\t\t- jumping movement\n\tCyan\t\t- flying movement\n\tMagenta\t- climbing movement\n\tArguments: \t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x100856e0 size=0xa
#include "ConCommand.h"
void sub_100856b0(void);
ConCommand g_106c8d10("ai_show_connect", sub_100856b0, "Displays the allowed connections between each node for the currently selected hull type.  Hulls are color code as follows:\n\tGreen\t\t- ground movement \n\tBlue\t\t- jumping movement\n\tCyan\t\t- flying movement\n\tMagenta\t- climbing movement\n\tYellow\t- no pedestrians\n\tRed\t\t- connection disabled", 0, 0);
// END FUNCTION
