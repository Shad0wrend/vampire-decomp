// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002b00 size=0x7
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc84()
{
    return *(int *)((char *)this + 0x1990);
}
// END FUNCTION

// FUNCTION: 0x10002b70 size=0x5
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc175(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10002b80 size=0x7
#include "C_BasePlayer.h"
namespace lifted {
extern float g_101e34ec;
}
float C_BasePlayer::vfunc176()
{
    return lifted::g_101e34ec;
}
// END FUNCTION

// FUNCTION: 0x1002a3b0 size=0x7
#include "C_BasePlayer.h"
char * C_BasePlayer::vfunc109()
{
    return (char *)this + 0x1888;
}
// END FUNCTION

// FUNCTION: 0x100a49f0 size=0x6
#include "C_BasePlayer.h"
namespace lifted {
extern char g_102b0be8;
}
int C_BasePlayer::vfunc16()
{
    return (int)&lifted::g_102b0be8;
}
// END FUNCTION

// FUNCTION: 0x100a4a00 size=0x3
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a5220 size=0x6
#include "C_BasePlayer.h"
namespace lifted {
extern char g_102b0bd0;
}
int C_BasePlayer::vfunc17()
{
    return (int)&lifted::g_102b0bd0;
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

// FUNCTION: 0x100aa240 size=0x7
#include "C_BasePlayer.h"
char * C_BasePlayer::vfunc195()
{
    return (char *)this + 0x1888;
}
// END FUNCTION

// FUNCTION: 0x100aa250 size=0x21
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc196(int a0, int a1, int a2)
{
    *(int *)((char *)this + 0x1888) = a0;
    *(int *)((char *)this + 0x188c) = a1;
    *(int *)((char *)this + 0x1890) = a2;
    return a2;
}
// END FUNCTION
