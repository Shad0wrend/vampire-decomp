// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d3f50 size=0x1e
#include "ClientModeShared.h"

// VC6 writes ClientModeShared's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
ClientModeShared *pcd_emit_100d3f50() { return new ClientModeShared; }

// TARGET: ??_GClientModeShared@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100d4030 size=0x1
#include "ClientModeShared.h"
void ClientModeShared::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x100d41e0 size=0x5
#include "ClientModeShared.h"
bool ClientModeShared::vfunc11(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d41f0 size=0x3
#include "ClientModeShared.h"
bool ClientModeShared::vfunc13()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d4220 size=0x3
#include "ClientModeShared.h"
bool ClientModeShared::vfunc26()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d4230 size=0x3
#include "ClientModeShared.h"
bool ClientModeShared::vfunc10()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d4290 size=0x3
#include "ClientModeShared.h"
bool ClientModeShared::vfunc14()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d42a0 size=0x3
#include "ClientModeShared.h"
void ClientModeShared::vfunc28(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x100d42b0 size=0x3
#include "ClientModeShared.h"
void ClientModeShared::vfunc29(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100d42c0 size=0x1
#include "ClientModeShared.h"
void ClientModeShared::vfunc30()
{
}
// END FUNCTION

// FUNCTION: 0x100d42d0 size=0x1
#include "ClientModeShared.h"
void ClientModeShared::vfunc31()
{
}
// END FUNCTION

// FUNCTION: 0x100d42e0 size=0x1
#include "ClientModeShared.h"
void ClientModeShared::vfunc35()
{
}
// END FUNCTION

// FUNCTION: 0x100d4400 size=0x3
#include "ClientModeShared.h"
int ClientModeShared::vfunc20()
{
    return 0;
}
// END FUNCTION
