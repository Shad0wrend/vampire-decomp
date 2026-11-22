// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100a4a00 size=0x3
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a54a0 size=0x1e
#include "C_BasePlayer.h"

// VC6 writes C_BasePlayer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BasePlayer *pcd_emit_100a54a0() { return new C_BasePlayer; }

// TARGET: ??_GC_BasePlayer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100a6e50 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc154(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a99f0 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc189(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a9bd0 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc151(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
}
// END FUNCTION

// FUNCTION: 0x100a9df0 size=0x1
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc184()
{
}
// END FUNCTION
