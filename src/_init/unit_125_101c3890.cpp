// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c3890 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1072cd10;
// END FUNCTION

// FUNCTION: 0x101c4220 size=0xa
#include "ConCommand.h"
void sub_101c3c90(void);
ConCommand g_1072cd24("Test_InitRandomEntitySpawner", sub_101c3c90, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x101c42b0 size=0xa
#include "ConCommand.h"
void sub_101c3ee0(void);
ConCommand g_1072cd74("Test_SpawnRandomEntities", sub_101c3ee0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x101c4340 size=0xa
#include "ConCommand.h"
void sub_101c4070(void);
ConCommand g_1072cd4c("Test_RandomizeInPVS", sub_101c4070, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x101c43d0 size=0xa
#include "ConCommand.h"
void sub_101c4160(void);
ConCommand g_1072cce8("Test_RemoveAllRandomEntities", sub_101c4160, 0, 0, 0);
// END FUNCTION
