// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10120e40 size=0x1e
#include "CPrediction.h"

// VC6 writes CPrediction's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPrediction *pcd_emit_10120e40() { return new CPrediction; }

// TARGET: ??_GCPrediction@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10120ed0 size=0x1
#include "CPrediction.h"
void CPrediction::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x101230d0 size=0x4
#include "CPrediction.h"
int CPrediction::vfunc13()
{
    return *(int *)((char *)this + 0x28);
}
// END FUNCTION

// FUNCTION: 0x10123200 size=0x4
#include "CPrediction.h"
int CPrediction::vfunc15()
{
    return *(int *)((char *)this + 0x30);
}
// END FUNCTION
