// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10233bf0 size=0xa
#include "ConCommand.h"
void sub_10233ba0(void);
ConCommand g_1075180c("wc_create", sub_10233ba0, "When in WC edit mode, creates a node where the player is looking if a node is allowed at that location for the currently selected hull size (see ai_next_hull)", 0, 0);
// END FUNCTION

// FUNCTION: 0x10233cd0 size=0xa
#include "ConCommand.h"
void sub_10233c80(void);
ConCommand g_107518ac("wc_destroy", sub_10233c80, "When in WC edit mode, destroys the node that the player is nearest to looking at.  (The node will be highlighted by a red box).", 0, 0);
// END FUNCTION

// FUNCTION: 0x10233d90 size=0xa
#include "ConCommand.h"
void sub_10233d60(void);
ConCommand g_107517e4("wc_destroy_undo", sub_10233d60, "When in WC edit mode restores the last deleted node", 0, 0);
// END FUNCTION

// FUNCTION: 0x10233e50 size=0xa
#include "ConCommand.h"
void sub_10233e20(void);
ConCommand g_107518d4("wc_air_node_edit", sub_10233e20, "When in WC edit mode, toggles laying down or air nodes instead of ground nodes", 0, 0);
// END FUNCTION

// FUNCTION: 0x10233f20 size=0xa
#include "ConCommand.h"
void sub_10233ee0(void);
ConCommand g_1075185c("wc_air_edit_further", sub_10233ee0, "When in WC edit mode and editing air nodes,  moves position of air node crosshair and placement location further away from player", 0, 0);
// END FUNCTION

// FUNCTION: 0x10233ff0 size=0xa
#include "ConCommand.h"
void sub_10233fb0(void);
ConCommand g_10751884("wc_air_edit_nearer", sub_10233fb0, "When in WC edit mode and editing air nodes,  moves position of air node crosshair and placement location nearer to from player", 0, 0);
// END FUNCTION
