// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f6750 size=0xa
#include "utlvector.h"
CUtlVector<int> g_10703668;
// END FUNCTION

// FUNCTION: 0x100f8c70 size=0xa
#define PCD_INITIALIZERS
#include "CEntityTouchManager.h"
CEntityTouchManager g_107036b0;
// END FUNCTION

// FUNCTION: 0x100f8f60 size=0xa
#define PCD_INITIALIZERS
#include "CEntityListSystem.h"
CEntityListSystem g_107036a4;
// END FUNCTION

// FUNCTION: 0x100f91f0 size=0xa
#include "ConCommand.h"
void sub_100f9280(void);
ConCommand g_1070367c("report_entities", sub_100f9280, "Lists all entities", 0, 0);
// END FUNCTION

// FUNCTION: 0x100f94a0 size=0xa
#include "ConCommand.h"
void sub_100f9530(void);
ConCommand g_106eb5b0("report_touchlinks", sub_100f9530, "Lists all touchlinks", 0, 0);
// END FUNCTION
