// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100decf0 size=0x5
#include "CDebugSaveRestoreOps.h"
CDebugSaveRestoreOps g_106e8610;
// END FUNCTION

// FUNCTION: 0x100dedd0 size=0xa
#include "ConVar.h"
ConVar g_106e8680("dialog_start", "0", 0);
// END FUNCTION

// FUNCTION: 0x100dee60 size=0xa
#include "ConVar.h"
ConVar g_106e8618("dialog_line_numbers", "0", 0);
// END FUNCTION

// FUNCTION: 0x100deef0 size=0xa
#include "ConVar.h"
ConVar g_106e9510("dialog_report_dependency_tests", "0", 0);
// END FUNCTION

// FUNCTION: 0x100def80 size=0xa
#include "ConVar.h"
ConVar g_106e8760("dialog_report_event_scripts", "0", 0);
// END FUNCTION

// FUNCTION: 0x100ea720 size=0xa
#include "ConCommand.h"
void sub_100ea6d0(void);
ConCommand g_106e87c0("dialog_force_close", sub_100ea6d0, "forces the current dialog to close.", 0, 0);
// END FUNCTION
