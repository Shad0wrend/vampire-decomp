// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10199eb0 size=0xa
#define PCD_INITIALIZERS
#include "PyServerSystem.h"
PyServerSystem g_1072b320;
// END FUNCTION

// FUNCTION: 0x1019aab0 size=0xa
#include "ConCommand.h"
void sub_1019a980(void);
ConCommand g_1072b32c("gclearall", sub_1019a980, "Resets all state flags.", 0, 0);
// END FUNCTION

// FUNCTION: 0x1019acd0 size=0xa
#include "ConCommand.h"
void sub_1019ab40(void);
ConCommand g_1072b2f4("gcleardialog", sub_1019ab40, "Resets all dialog state flags.", 0, 0);
// END FUNCTION

// FUNCTION: 0x1019ad60 size=0x5
#include "CPython_SaveRestoreBlockHandler.h"
CPython_SaveRestoreBlockHandler g_1072b354;
// END FUNCTION

// FUNCTION: 0x1019b4e0 size=0xa
#include "ConVar.h"
ConVar g_1072b2b0("show_python_variable_changes", "1", 0, "Display assignments to the G script variable.");
// END FUNCTION
