// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10099c30 size=0x38
#include "CPredictableList.h"
#include "CEHandleGet.h"

// TARGET: CPredictableList::vfunc0
CGlobalEntityList_Ent *CPredictableList::vfunc0(int index)
{
    return EHandle_Get(m_pHandles[index]);
}
// END FUNCTION

// FUNCTION: 0x10099c80 size=0x4
#include "CPredictableList.h"
int CPredictableList::vfunc1()
{
    return *(int *)((char *)this + 0x10);
}
// END FUNCTION
