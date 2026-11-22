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

// FUNCTION: 0x10086880 size=0xa
#include "ConCommand.h"
void sub_10086380(void);
ConCommand g_106c8f5c("npc_create", sub_10086380, "Creates an NPC of the given type where the player is looking (if the given NPC can actually stand at that location).  Note that this only works for npc classes that are already in the world.  You can not create an entity that doesn't have an instance in the level.\n\tArguments:\t{npc_class_name}", 0, 0);
// END FUNCTION

// FUNCTION: 0x10086dc0 size=0xa
#include "ConCommand.h"
void sub_10086910(void);
ConCommand g_106c8c98("npc_create_aimed", sub_10086910, "Creates an NPC aimed away from the player of the given type where the player is looking (if the given NPC can actually stand at that location).  Note that this only works for npc classes that are already in the world.  You can not create an entity that doesn't have an instance in the level.\n\tArguments:\t{npc_class_name}", 0, 0);
// END FUNCTION

// FUNCTION: 0x10086f20 size=0xa
#include "ConCommand.h"
void sub_10086e50(void);
ConCommand g_106c9330("npc_destroy_unselected", sub_10086e50, "Removes all NPCs from the universe that aren't currently selected", 0, 0);
// END FUNCTION

// FUNCTION: 0x100870e0 size=0xa
#include "ConCommand.h"
void sub_10086fb0(void);
ConCommand g_106c9420("npc_freeze", sub_10086fb0, "Selected NPC(s) will freeze in place (or unfreeze). If there are no selected NPCs, uses the NPC under the crosshair.\n\tArguments:\t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087410 size=0xa
#include "ConCommand.h"
void sub_10087170(void);
ConCommand g_106c9600("npc_go", sub_10087170, "Selected NPC(s) will go to the location that the player is looking (shown with a purple box)\n\tArguments:\t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x100874c0 size=0xa
#include "ConCommand.h"
void sub_100874a0(void);
ConCommand g_106c96c8("npc_go_random", sub_100874a0, "Sends all selected NPC(s) to a random node.\n\tArguments:   \t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087570 size=0xa
#include "ConCommand.h"
void sub_10087550(void);
ConCommand g_106c8b58("npc_reset", sub_10087550, "Reloads schedules for all NPC's from their script files\n\tArguments:\t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087640 size=0xa
#include "ConCommand.h"
void sub_10087600(void);
ConCommand g_106c8f84("npc_nearest", sub_10087600, "Draw's a while box around the NPC(s) nearest node\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at  ", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087710 size=0xa
#include "ConCommand.h"
void sub_100876d0(void);
ConCommand g_106c9538("npc_fail_route", sub_100876d0, "Displays failed routes of the given NPC as a line on the screen.  Waypoints along the route are drawn as small cyan rectangles.  Line is color coded in the following manner:\n\tBlue\t- path to a node\n\tCyan\t- detour around an object (triangulation)\n\tRed\t- jump\n\tMaroon - path to final target position\n\tArguments:   \t{npc_name} / {npc_class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100877e0 size=0xa
#include "ConCommand.h"
void sub_100877a0(void);
ConCommand g_106c9510("npc_route", sub_100877a0, "Displays the current route of the given NPC as a line on the screen.  Waypoints along the route are drawn as small cyan rectangles.  Line is color coded in the following manner:\n\tBlue\t- path to a node\n\tCyan\t- detour around an object (triangulation)\n\tRed\t- jump\n\tMaroon - path to final target position\n\tArguments:   \t{npc_name} / {npc_class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100878b0 size=0xa
#include "ConCommand.h"
void sub_10087870(void);
ConCommand g_106c93f8("npc_select", sub_10087870, "Select or deselects the given NPC(s) for later manipulation.  Selected NPC's are shown surrounded by a red translucent box\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087980 size=0xa
#include "ConCommand.h"
void sub_10087940(void);
ConCommand g_106c9588("npc_combat", sub_10087940, "Displays text debugging information about the squad and enemy of the selected NPC  (See Overlay Text)\n\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087a10 size=0xa
#include "ConCommand.h"
void sub_10087940(void);
ConCommand g_106c8f34("npc_squads", sub_10087940, "Obsolete.  Replaced by npc_combat", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087ae0 size=0xa
#include "ConCommand.h"
void sub_10087aa0(void);
ConCommand g_106c8e94("npc_tasks", sub_10087aa0, "Displays detailed text debugging information about the all the tasks of the selected NPC current schedule (See Overlay Text)\n\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087bb0 size=0xa
#include "ConCommand.h"
void sub_10087b70(void);
ConCommand g_106c8dcc("npc_task_text", sub_10087b70, "Outputs text debugging information to the console about the all the tasks + break conditions of the selected NPC current schedule\n\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087c80 size=0xa
#include "ConCommand.h"
void sub_10087c40(void);
ConCommand g_106c8ffc("npc_conditions", sub_10087c40, "Displays all the current AI conditions that an NPC has in the overlay text.\n\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087d50 size=0xa
#include "ConCommand.h"
void sub_10087d10(void);
ConCommand g_106c8f0c("npc_viewcone", sub_10087d10, "Displays the viewcone of the NPC (where they are currently looking and what the extents of there vision is)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087e50 size=0xa
#include "ConCommand.h"
void sub_10087de0(void);
ConCommand g_106c8bd0("npc_camera_viewcone", sub_10087de0, "Displays the viewcone of all NPC cameras on a map.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10087f20 size=0xa
#include "ConCommand.h"
void sub_10087ee0(void);
ConCommand g_106c91dc("npc_attack_range", sub_10087ee0, "Show NPC's current attack range.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088130 size=0xa
#include "ConCommand.h"
void sub_10087fb0(void);
ConCommand g_106c9074("npc_perception", sub_10087fb0, "Sets an NPC's perception and reinitializes the view and hearing distances.\n\tArguments:   \t{perception}  {entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100882f0 size=0xa
#include "ConCommand.h"
void sub_100881c0(void);
ConCommand g_106c8b80("npc_view_distance", sub_100881c0, "Sets an NPC's view distance.\n\tArguments:   \t{perception}  {entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100884b0 size=0xa
#include "ConCommand.h"
void sub_10088380(void);
ConCommand g_106c94e8("npc_hearing_sensitivity", sub_10088380, "Sets an NPC's hearing sensitivity.\n\tArguments:   \t{perception}  {entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088590 size=0xa
#include "ConCommand.h"
void sub_10088540(void);
ConCommand g_106c8e6c("sound_show", sub_10088540, "Shows all sounds made as blue spheres centered around the sound's source.  Turns off sound_show_ent.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100886a0 size=0xa
#include "ConCommand.h"
void sub_10088620(void);
ConCommand g_106c909c("sound_show_ent", sub_10088620, "Shows all sounds made as purple spheres centered around the NPCs.  Turns off sound_show.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088770 size=0xa
#include "ConCommand.h"
void sub_10088730(void);
ConCommand g_106c9650("sound_show_cylinders", sub_10088730, "Toggles between cylinders and spheres for sound_show display.  Does not change the way sounds are heard, just the debug representation.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088800 size=0xa
#include "ConCommand.h"
void sub_10088730(void);
ConCommand g_106c90ec("sound_show_spheres", sub_10088730, "Toggles between cylinders and spheres for sound_show display.  Does not change the way sounds are heard, just the debug representation.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088920 size=0xa
#include "ConCommand.h"
void sub_10088890(void);
ConCommand g_106c913c("sound_show_deafzone", sub_10088890, "Shows NPC deaf zones when sound events are fired", 0, 0);
// END FUNCTION

// FUNCTION: 0x100889f0 size=0xa
#include "ConCommand.h"
void sub_100889b0(void);
ConCommand g_106c9164("sound_show_player_only", sub_100889b0, "Only show sounds if the player is the owner.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088aa0 size=0xa
#include "ConCommand.h"
void sub_10088a80(void);
ConCommand g_106c9380("npc_show_stats", sub_10088a80, "Show some stats on entity run time (especially NPCs)", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088b50 size=0xa
#include "ConCommand.h"
void sub_10088b30(void);
ConCommand g_106c9114("npc_dump_stats", sub_10088b30, "Dump some stats on entity run time (especially NPCs)", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088c50 size=0xa
#include "ConCommand.h"
void sub_10088be0(void);
ConCommand g_106c9628("npc_ignore_player", sub_10088be0, "NPCs will not hear or see the player", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088d50 size=0xa
#include "ConCommand.h"
void sub_10088ce0(void);
ConCommand g_106c96a0("npc_ignore_senses", sub_10088ce0, "NPCs will not hear or see anything", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088e60 size=0xa
#include "ConCommand.h"
void sub_10088de0(void);
ConCommand g_106c91b4("npc_set_expression", sub_10088de0, "Sets the npc's expression.  Targets entity in viewcone.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10088f30 size=0xa
#include "ConCommand.h"
void sub_10088ef0(void);
ConCommand g_106c93d0("npc_steering", sub_10088ef0, "Displays the steering obstructions of the NPC (used to perform local avoidance)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x100890a0 size=0xa
#include "ConCommand.h"
void sub_10088fc0(void);
ConCommand g_106c8c48("npc_steering_all", sub_10088fc0, "Displays the steering obstructions of all NPCs (used to perform local avoidance)\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089130 size=0xa
#include "ConCommand.h"
void sub_100891c0(void);
ConCommand g_106c95b0("ai_clear_bad_links", sub_100891c0, "Clears bits set on nav links indicating link is unusable ", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089250 size=0xa
#include "ConCommand.h"
void sub_100892e0(void);
ConCommand g_106c8ce8("npc_removeall", sub_100892e0, "finds and removes every NPC entity on the map", 0, 0);
// END FUNCTION

// FUNCTION: 0x100893a0 size=0xa
#include "ConCommand.h"
void sub_10089430(void);
ConCommand g_106c9560("npc_play_dialog_file", sub_10089430, "Tells the NPC you are looking at to play a WAV or .VCD file.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100894c0 size=0xa
#include "ConCommand.h"
void sub_10089550(void);
ConCommand g_106c9470("npc_disposition", sub_10089550, "Tells the NPC to set himself to the dispostion specified", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089630 size=0xa
#include "ConCommand.h"
void sub_100896c0(void);
ConCommand g_106c8e1c("npc_changestance", sub_100896c0, "Tells the NPC to set himself to the dispostion specified", 0, 0);
// END FUNCTION

// FUNCTION: 0x100897d0 size=0xa
#include "ConCommand.h"
void sub_10089860(void);
ConCommand g_106c8da4("npc_addexpression", sub_10089860, "Tells the NPC to set himself to add the expression layer for 10 seconds", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089920 size=0xa
#include "ConCommand.h"
void sub_100899b0(void);
ConCommand g_106c8c20("npc_dump_disposition_sequences", sub_100899b0, "Gets a list of all the disposition sequences for a give NPC", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089a30 size=0xa
#include "ConCommand.h"
void sub_10089ac0(void);
ConCommand g_106c93a8("npc_motion_trail", sub_10089ac0, "Sets the motion trail value for an NPC\n\tArguments:   \t{value}  {entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089bd0 size=0xa
#include "ConCommand.h"
void sub_10089c60(void);
ConCommand g_106c8ee4("npc_ground_speed_scalar", sub_10089c60, "Sets the ground speed scalar for an NPC\n\tArguments:   \t{value}  {entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089dc0 size=0xa
#include "ConCommand.h"
void sub_10089e50(void);
ConCommand g_106c8ba8("npc_show_relationships", sub_10089e50, "Show the relationships with all combat characters in the world.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10089f30 size=0xa
#include "ConCommand.h"
void sub_10089fc0(void);
ConCommand g_106c8fd4("npc_relationship_table", sub_10089fc0, "Dumps a table of all NPC relationships to a file.\n\tArguments:   \t{filename}", 0, 0);
// END FUNCTION

// FUNCTION: 0x1008a490 size=0xa
#include "ConCommand.h"
void sub_1008a520(void);
ConCommand g_106c9498("npc_set_free_knowledge_duration", sub_1008a520, "Sets the NPC's free knowledge duration.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION

// FUNCTION: 0x1008a640 size=0xa
#include "ConCommand.h"
void sub_1008a6d0(void);
ConCommand g_106c8c70("npc_door_test", sub_1008a6d0, "Gets a door's open data and draws info about it.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at.", 0, 0);
// END FUNCTION
