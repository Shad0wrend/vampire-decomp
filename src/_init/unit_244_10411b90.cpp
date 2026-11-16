// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10411b90 size=0xa
#include "utlvector.h"
CUtlVector<int> g_109d3010;
// END FUNCTION

// FUNCTION: 0x10411d00 size=0xa
#include "utlvector.h"
CUtlVector<int> g_109d306c;
// END FUNCTION

// FUNCTION: 0x10411df0 size=0xa
#include "ConVar.h"
ConVar g_109d3028("debug_dump_activity_list", "0", 8448, "Set this to true to get a full list of activities and sequences when you fail to find one.");
// END FUNCTION

// FUNCTION: 0x10411ef0 size=0xa
#include "ConCommand.h"
void sub_10411e80(void);
ConCommand g_109d2fe8("activitydump", sub_10411e80, "Forces ActivityList Dump", 8448, 0);
// END FUNCTION
