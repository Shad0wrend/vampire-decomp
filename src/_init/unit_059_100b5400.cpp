// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b5400 size=0xa
#include "ConVar.h"
ConVar g_106d0568("scene_allowoverrides", "1", 0, "When playing back a choreographed scene, allow per-model expression overrides.");
// END FUNCTION

// FUNCTION: 0x100b54b0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106d05cc;
extern char g_10559350[];
ServerClassReg g_106d05b0("CBaseFlex", &g_106d05cc, g_10559350);
// END FUNCTION
