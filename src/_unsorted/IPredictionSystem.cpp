// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10059db0 size=0x20
#include "IPredictionSystem.h"

struct DummyPredictionSystem : IPredictionSystem
{
};

// built in a function nothing calls (a local one is optimized away): a global one would link itself into
// g_pPredictionSystems at load
IPredictionSystem *pcd_emit_10059db0() { return new DummyPredictionSystem; }
// TARGET: ??_GIPredictionSystem@@UAEPAXI@Z
// END FUNCTION
