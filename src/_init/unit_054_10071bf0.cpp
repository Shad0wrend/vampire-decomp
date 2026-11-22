// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10071bf0 size=0xa
#define PCD_INITIALIZERS
#include "CUnknown100727c0.h"
CUnknown100727c0 g_106c8298;
// END FUNCTION

// FUNCTION: 0x10080210 size=0x5
inline int pcd_initial_106c8614() { return 0x450; }
int g_106c8614 = pcd_initial_106c8614();
// END FUNCTION

// FUNCTION: 0x10080250 size=0xa
#include "ConVar.h"
ConVar g_106c85d0("scene_print", "0", 0, "When playing back a scene, print timing and event info to console.");
// END FUNCTION
