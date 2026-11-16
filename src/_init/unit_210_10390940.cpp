// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10390940 size=0x5
inline int pcd_initial_1093b960() { return 0x450; }
int g_1093b960 = pcd_initial_1093b960();
// END FUNCTION

// FUNCTION: 0x10390980 size=0xa
#include "ConVar.h"
ConVar g_1093bc10("ming_xiao_throw_base", "150.0", 0, "Set this var to override the throw base.");
// END FUNCTION

// FUNCTION: 0x10390a10 size=0xa
#include "ConVar.h"
ConVar g_1093bbc8("ming_xiao_throw_power", ".0040", 0, "Set this var to override the throw power.");
// END FUNCTION

// FUNCTION: 0x10390aa0 size=0xa
#include "ConVar.h"
ConVar g_1093b9f8("ming_xiao_throw_hds", ".0005", 0, "Set this var to override the throw height to distance scalar.");
// END FUNCTION

// FUNCTION: 0x10390b30 size=0xa
#include "ConVar.h"
ConVar g_1093ba88("ming_xiao_pickup", "1", 0, "Set this to 1 to allow ming xiao to pickup and throw bodies.");
// END FUNCTION

// FUNCTION: 0x10390bc0 size=0xa
#include "ConVar.h"
ConVar g_1093b9b0("ming_xiao_grub_death", "1", 0, "Set this to 1 to kill ming xiao's grubs when she dies.");
// END FUNCTION

// FUNCTION: 0x10390c50 size=0xa
#include "ConVar.h"
ConVar g_1093bb58("ming_xiao_charge", "1", 0, "Set this to 1 to allow ming xiao to do a charge attack when cornered.");
// END FUNCTION

// FUNCTION: 0x10390ce0 size=0xa
#define PCD_INITIALIZERS
#include "CVDmgBlock16_t.h"
CVDmgBlock16_t g_1093bb9c("TentacleGenerator");
// END FUNCTION

// FUNCTION: 0x10390e00 size=0x5
int sub_10390e40(void);
int g_1093b910 = ((int (*)(int))sub_10390e40)(0);
// END FUNCTION

// FUNCTION: 0x10391260 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093b918(false);
// END FUNCTION

// FUNCTION: 0x10391350 size=0x5
#include "CAI_LocalIdSpace.h"
CAI_LocalIdSpace g_1093bacc(false);
// END FUNCTION

// FUNCTION: 0x10398770 size=0xa
#include "ConVar.h"
ConVar g_1093bb10("debug_tentacle_mask", "-1", 0);
// END FUNCTION

// FUNCTION: 0x1039a1c0 size=0xa
#include "ConCommand.h"
void sub_1039a250(void);
ConCommand g_1093bae4("ming_xiao_particle", sub_1039a250, "Use this command force ming xiao to show one of her particles.", 0, 0);
// END FUNCTION
