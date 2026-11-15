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

// FUNCTION: 0x100857a0 size=0xa
#include "ConCommand.h"
void sub_10085770(void);
ConCommand g_106c8d7c("ai_show_grid", sub_10085770, "Draw a grid on the floor where looking.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085870 size=0xa
#include "ConCommand.h"
void sub_10085830(void);
ConCommand g_106c8df4("ai_step", sub_10085830, "NPCs will freeze after completing their current task.  To complete the next task, use 'ai_step' again.  To resume processing normally use 'ai_resume'", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085930 size=0xa
#include "ConCommand.h"
void sub_10085900(void);
ConCommand g_106c9358("ai_resume", sub_10085900, "If NPC is stepping through tasks (see ai_step ) will resume normal processing.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100859f0 size=0xa
#include "ConCommand.h"
void sub_100859c0(void);
ConCommand g_106c8fac("ai_next_hull", sub_100859c0, "Cycles through the various hull sizes.  Currently selected hull size is written to the screen.  Controls which connections are shown when ai_show_hull or ai_show_connect commands are used\n\tArguments:\t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085b40 size=0xa
#include "ConCommand.h"
void sub_10085a80(void);
ConCommand g_106c90c4("ai_named_hull", sub_10085a80, "Switches to the name of the given hull", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085c70 size=0xa
#include "ConCommand.h"
void sub_10085bd0(void);
ConCommand g_106c904c("ai_nodes", sub_10085bd0, "Toggles node display.  First call displays the nodes for the given network as green objects.  Second call  displays the nodes and their IDs.  Nodes are color coded as follows:\n\tGreen\t\t- ground node\n\tCyan\t\t- air node\n\tMagenta\t- climb node\n\tGrey\t\t- node not available for selected hull size\n\tOrange \t- node currently locked", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085d70 size=0xa
#include "ConCommand.h"
void sub_10085d00(void);
ConCommand g_106c95d8("ai_show_visibility", sub_10085d00, "Toggles visibility display for the node that the player is looking at.  Nodes that are visible from the selected node will be drawn in red with yellow lines connecting to the selected node.  Nodes that are not visible from the selected node will be drawn in blue.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085e70 size=0xa
#include "ConCommand.h"
void sub_10085e00(void);
ConCommand g_106c8bf8("ai_show_graph_connect", sub_10085e00, "Toggles graph connection display for the node that the player is looking at.  Nodes that are connected to the selected node by the net graph will be drawn in red with magenta lines connecting to the selected node.  Nodes that are not connected via the net graph from the selected node will be drawn in blue.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085f20 size=0xa
#include "ConCommand.h"
void sub_10085f00(void);
ConCommand g_106c94c0("ai_show_interesting", sub_10085f00, "Draws the interesting places.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085ff0 size=0xa
#include "ConCommand.h"
void sub_10085fb0(void);
ConCommand g_106c9678("npc_bypass", sub_10085fb0, "Displays the local movement attempts by the given NPC(s) (triangulation detours).  Failed bypass routes are displayed in red, successful bypasses are shown in green.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100860c0 size=0xa
#include "ConCommand.h"
void sub_10086080(void);
ConCommand g_106c8ebc("npc_destroy", sub_10086080, "Removes the given NPC(s) from the universe\nArguments:   \t{npc_name} / {npc_class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x10086190 size=0xa
#include "ConCommand.h"
void sub_10086150(void);
ConCommand g_106c918c("npc_enemies", sub_10086150, "Shows memory of NPC.  Draws an X on top of each memory.\n\tEluded entities drawn in blue (don't know where it went)\n\tUnreachable entities drawn in green (can't get to it)\n\tCurrent enemy drawn in red\n\tCurrent target entity drawn in magenta\n\tAll other entities drawn in pink\n\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x10086260 size=0xa
#include "ConCommand.h"
void sub_10086220(void);
ConCommand g_106c8e44("npc_focus", sub_10086220, "Displays red line to NPC's enemy (if has one) and blue line to NPC's target entity (if has one)\n\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x100862f0 size=0xa
#include "ConVar.h"
ConVar g_106c8d38("npc_create_equipment", "", 0);
// END FUNCTION
