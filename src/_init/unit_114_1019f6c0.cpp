// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019f6c0 size=0x5
#include "Vector.h"
Vector g_1072bac0[3] = { Vector(0.8164966f, 0.0f, 0.57735026f), Vector(-0.40824834f, 0.70710677f, 0.57735026f), Vector(-0.40824822f, -0.7071068f, 0.57735026f) };
// END FUNCTION

// FUNCTION: 0x101a2bc0 size=0x5
int sub_101a2c00(void);
int g_1072bb40 = ((int (*)(int))sub_101a2c00)(0);
// END FUNCTION

// FUNCTION: 0x101a3740 size=0x5
#include "CEntitySaveRestoreBlockHandler.h"
CEntitySaveRestoreBlockHandler g_1072bb44;
// END FUNCTION

// FUNCTION: 0x101a4720 size=0x5
int sub_101a4760(void);
int g_1072bb3c = ((int (*)(int))sub_101a4760)(0);
// END FUNCTION

// FUNCTION: 0x101a4790 size=0xa
#define PCD_INITIALIZERS
#include "CSaveRestoreBlockSet.h"
CSaveRestoreBlockSet g_1072bae8("Game");
// END FUNCTION
