// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1022d4a0 size=0x5
#include "CTraitEffectsListSaveDataOps.h"
CTraitEffectsListSaveDataOps g_10751074;
// END FUNCTION

// FUNCTION: 0x1022e940 size=0xa
#include "ConCommand.h"
void sub_1022e9d0(void);
ConCommand g_10751078("debug_change_masquerade_level", sub_1022e9d0, "Change the player's masquerade level.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10230730 size=0xa
#define PCD_INITIALIZERS
#include "CTeamManager.h"
CTeamManager g_10751140;
// END FUNCTION

// FUNCTION: 0x10231220 size=0x5
int sub_10231260(void);
int g_107511a4 = ((int (*)(int))sub_10231260)(0);
// END FUNCTION

// FUNCTION: 0x10231800 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10751464;
extern char g_105b5c30[];
ServerClassReg g_10751480("CVGuiScreen", &g_10751464, g_105b5c30);
// END FUNCTION

// FUNCTION: 0x102318b0 size=0xa
#include "SendTable.h"
SendTable g_10751464;
// END FUNCTION

// FUNCTION: 0x10231930 size=0x5
int sub_10231970(void);
int g_10751460 = ((int (*)(int))sub_10231970)(0);
// END FUNCTION

// FUNCTION: 0x10231bc0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_107511a8(&CPrecacheRegister::PrecacheFn_Other, "vgui_screen");
// END FUNCTION

// FUNCTION: 0x10231c30 size=0x5
int sub_10231c70(void);
int g_107511b8 = ((int (*)(int))sub_10231c70)(0);
// END FUNCTION
