// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10104c00 size=0xa
#include "ConVar.h"
ConVar g_107091b8("disable_expressions", "0", 0);
// END FUNCTION

// FUNCTION: 0x10104c90 size=0xa
#include "CExpressionTable.h"
CExpressionTable g_10709200;
// END FUNCTION

// FUNCTION: 0x101059d0 size=0xa
#include "ConCommand.h"
void sub_10105950(void);
ConCommand g_10709240("dump_expression_table_names", sub_10105950, "", 0, 0);
// END FUNCTION
