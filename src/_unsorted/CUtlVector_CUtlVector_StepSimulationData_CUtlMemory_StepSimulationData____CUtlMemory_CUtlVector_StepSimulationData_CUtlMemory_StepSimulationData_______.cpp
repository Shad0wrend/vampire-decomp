// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10042800 size=0x8b
#include "utlrbtree.h"
#include "utlvector.h"
#include "CEntityDataInstantiator.h"

// TARGET: ?RemoveAll@?$CUtlVector@V?$CUtlVector@UStepSimulationData@@V?$CUtlMemory@UStepSimulationData@@@@@@V?$CUtlMemory@V?$CUtlVector@UStepSimulationData@@V?$CUtlMemory@UStepSimulationData@@@@@@@@@@QAEXXZ
static void (CUtlVector<CUtlVector<StepSimulationData> >::*s_RemoveAll)() = &CUtlVector<CUtlVector<StepSimulationData> >::RemoveAll;
// END FUNCTION
