// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012990 size=0x1e
#include "C_OccultFrenzy.h"

// VC6 writes C_OccultFrenzy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultFrenzy *pcd_emit_10012990() { return new C_OccultFrenzy; }

// TARGET: ??_GC_OccultFrenzy@@UAEPAXI@Z
// END FUNCTION
