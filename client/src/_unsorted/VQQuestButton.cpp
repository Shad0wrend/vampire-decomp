// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101880d0 size=0x1e
#include "VQQuestButton.h"

// VC6 writes VQQuestButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VQQuestButton *pcd_emit_101880d0() { return new VQQuestButton; }

// TARGET: ??_GVQQuestButton@@UAEPAXI@Z
// END FUNCTION
