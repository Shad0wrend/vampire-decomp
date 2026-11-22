// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100028f0 size=0x3
#include "C_BaseHLPlayer.h"
int C_BaseHLPlayer::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10002b90 size=0x1e
#include "C_BaseHLPlayer.h"

// VC6 writes C_BaseHLPlayer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseHLPlayer *pcd_emit_10002b90() { return new C_BaseHLPlayer; }

// TARGET: ??_GC_BaseHLPlayer@@UAEPAXI@Z
// END FUNCTION
