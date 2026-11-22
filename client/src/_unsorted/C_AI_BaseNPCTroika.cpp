// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1008e770 size=0x1e
#include "C_AI_BaseNPCTroika.h"

// VC6 writes C_AI_BaseNPCTroika's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_AI_BaseNPCTroika *pcd_emit_1008e770() { return new C_AI_BaseNPCTroika; }

// TARGET: ??_GC_AI_BaseNPCTroika@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1008e7d0 size=0x3
#include "C_AI_BaseNPCTroika.h"
int C_AI_BaseNPCTroika::vfunc15()
{
    return 0;
}
// END FUNCTION
