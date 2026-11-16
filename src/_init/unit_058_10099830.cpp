// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10099830 size=0xa
#include "ConVar.h"
ConVar g_106cfe50("ent_io_messages", "0", 0, "Set to true to show input  and output messages");
// END FUNCTION

// FUNCTION: 0x1009a150 size=0xa
#include "SendTable.h"
SendTable g_106cf138;
// END FUNCTION

// FUNCTION: 0x1009a1d0 size=0x5
int sub_1009a210(void);
int g_106cf134 = ((int (*)(int))sub_1009a210)(0);
// END FUNCTION

// FUNCTION: 0x1009a2b0 size=0xa
#include "SendTable.h"
SendTable g_106cfe98;
// END FUNCTION

// FUNCTION: 0x1009a330 size=0x5
int sub_1009a370(void);
int g_106cfe94 = ((int (*)(int))sub_1009a370)(0);
// END FUNCTION

// FUNCTION: 0x1009a440 size=0xa
#include "SendTable.h"
SendTable g_106cf1d4;
// END FUNCTION

// FUNCTION: 0x1009a4c0 size=0x5
int sub_1009a500(void);
int g_106cf1d0 = ((int (*)(int))sub_1009a500)(0);
// END FUNCTION

// FUNCTION: 0x1009a5f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106cec14;
extern char g_106cff58[];
ServerClassReg g_106cfe10("CBaseEntity", &g_106cec14, g_106cff58);
// END FUNCTION

// FUNCTION: 0x1009a6a0 size=0xa
#include "SendTable.h"
SendTable g_106cec14;
// END FUNCTION

// FUNCTION: 0x1009a720 size=0x5
int sub_1009a760(void);
int g_106cec10 = ((int (*)(int))sub_1009a760)(0);
// END FUNCTION

// FUNCTION: 0x1009e3a0 size=0xa
#include "ConVar.h"
ConVar g_106cf420("ent_debugkeys", "", 0);
// END FUNCTION

// FUNCTION: 0x100a1df0 size=0x5
#include "CThinkContextsSaveDataOps.h"
CThinkContextsSaveDataOps g_106cf254;
// END FUNCTION

// FUNCTION: 0x100a2220 size=0x5
int sub_100a2260(void);
int g_106ceb40 = ((int (*)(int))sub_100a2260)(0);
// END FUNCTION

// FUNCTION: 0x100a22b0 size=0x5
int * sub_100a22f0(void);
int * g_106cf17c = ((int * (*)(int))sub_100a22f0)(0);
// END FUNCTION

// FUNCTION: 0x100ad930 size=0xa
#include "utlvector.h"
CUtlVector<int> g_106cf218;
// END FUNCTION

// FUNCTION: 0x100ae3c0 size=0xa
#include "ConCommand.h"
void sub_100ae320(void);
ConCommand g_106ceb18("ent_name", sub_100ae320, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae4f0 size=0xa
#include "ConCommand.h"
void sub_100ae450(void);
ConCommand g_106cf180("ent_text", sub_100ae450, "Displays text debugging information about the given entity(ies) on top of the entity (See Overlay Text)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae620 size=0xa
#include "ConCommand.h"
void sub_100ae580(void);
ConCommand g_106cf080("ent_bbox", sub_100ae580, "Displays the movement bounding box for the given entity(ies) in orange.  Some entites will also display entity specific overlays.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae750 size=0xa
#include "ConCommand.h"
void sub_100ae6b0(void);
ConCommand g_106cfd18("ent_absbox", sub_100ae6b0, "Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae880 size=0xa
#include "ConCommand.h"
void sub_100ae7e0(void);
ConCommand g_106cf2d0("ent_muzzle", sub_100ae7e0, "Displays the muzzleflash attachment point", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aea30 size=0xa
#include "ConCommand.h"
void sub_100ae910(void);
ConCommand g_106cfcec("ent_hitboxes", sub_100ae910, "Shows an entity's hit boxes.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aeac0 size=0xa
#include "ConCommand.h"
void sub_100ae910(void);
ConCommand g_106cebbc("ent_showhitboxes", sub_100ae910, "Shows an entity's hit boxes.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aebe0 size=0xa
#include "ConCommand.h"
void sub_100aeb50(void);
ConCommand g_106cf154("ent_toggledebugstats", sub_100aeb50, " ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aed10 size=0xa
#include "ConCommand.h"
void sub_100aec70(void);
ConCommand g_106cf0f8("ent_rbox", sub_100aec70, "Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aef80 size=0xa
#include "ConCommand.h"
void sub_100aeda0(void);
ConCommand g_106cfd40("ent_remove", sub_100aeda0, "Removes the given entity(s)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100af2b0 size=0xa
#include "ConCommand.h"
void sub_100af010(void);
ConCommand g_106ceb6c("ent_setname", sub_100af010, "Sets the targetname of the given entity(s)\n\tArguments:   \t{new entity name} {entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100af9d0 size=0xa
#include "ConCommand.h"
void sub_100af840(void);
ConCommand g_106cf48c("ent_dump", sub_100af840, "Usage:\n   ent_dump <entity name>\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x100afb00 size=0xa
#include "ConCommand.h"
void sub_100afa60(void);
ConCommand g_106cf280("firetarget", sub_100afa60, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100afde0 size=0xa
#include "ConCommand.h"
void sub_100afb90(void);
ConCommand g_106cf22c("ent_fire", sub_100afb90, "Usage:\n   ent_fire <target> [action] [value] [delay]\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aff00 size=0xa
#include "ConCommand.h"
void sub_100afe70(void);
ConCommand g_106cf1a8("ent_break", sub_100afe70, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100b01f0 size=0xa
#include "ConCommand.h"
void sub_100aff90(void);
ConCommand g_106cfe28("ent_info", sub_100aff90, "Usage:\n   ent_info <class name>\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0320 size=0xa
#include "ConCommand.h"
void sub_100b0280(void);
ConCommand g_106cf0d0("ent_messages", sub_100b0280, "Toggles input/output message display for the selected entity(ies).  The name of the entity will be displayed as well as any messages that it sends or receives.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0440 size=0xa
#include "ConCommand.h"
void sub_100b03b0(void);
ConCommand g_106cf464("ent_pause", sub_100b03b0, "Toggles pausing of input/output message processing for entities.  When turned on processing of all message will stop.  Any messages displayed with 'ent_messages' will stop fading and be displayed indefinitely. To step through the messages one by one use 'ent_step'.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0560 size=0xa
#include "ConCommand.h"
void sub_100b04d0(void);
ConCommand g_106cf2a8("picker", sub_100b04d0, "Toggles 'picker' mode.  When picker is on, the bounding box, pivot and debugging text is displayed for whatever entity the player is looking at.\n\tArguments:\t-none-", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0690 size=0xa
#include "ConCommand.h"
void sub_100b05f0(void);
ConCommand g_106ceb44("ent_pivot", sub_100b05f0, "Displays the pivot for the given entity(ies).\n\t(y=up=green, z=forward=blue, x=left=red). \n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b07c0 size=0xa
#include "ConCommand.h"
void sub_100b0720(void);
ConCommand g_106cf3f4("ent_step", sub_100b0720, "When 'ent_pause' is set this will step through one waiting input / output message at a time.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b08f0 size=0xa
#include "ConCommand.h"
void sub_100b0850(void);
ConCommand g_106ceb94("ent_vstats", sub_100b0850, "Displays the Vampire Stats for the given entity(ies) on top of the entity (See Overlay Text)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0a40 size=0xa
#include "ConCommand.h"
void sub_100b0980(void);
ConCommand g_106cfeb8("ent_takedamageself", sub_100b0980, "Damages the entity", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0b70 size=0xa
#include "ConCommand.h"
void sub_100b0ad0(void);
ConCommand g_106cf0a8("ent_trace", sub_100b0ad0, "Writes the overlay text to the debug window (See Overlay Text)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0d60 size=0xa
#include "ConCommand.h"
void sub_100b0c00(void);
ConCommand g_106cf258("ent_trace_buffer", sub_100b0c00, "Turns tracing on to all NPC's trace buffers.\n\tArguments:      {verbose}", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b0ed0 size=0xa
#include "ConCommand.h"
void sub_100b0df0(void);
ConCommand g_106cf1f0("ent_trace_dump_buffer", sub_100b0df0, "Dumps the trace buffer to the debug window.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b1000 size=0xa
#include "ConCommand.h"
void sub_100b0f60(void);
ConCommand g_106cebe4("ent_condition", sub_100b0f60, "Displays condition info (See Overlay Text)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b4190 size=0xa
#include "utlvector.h"
CUtlVector<int> g_106cf120;
// END FUNCTION
