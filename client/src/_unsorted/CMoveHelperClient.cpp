// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010f180 size=0x1
// TARGET: sub_1010f180
void sub_1010f180()
{
}
// END FUNCTION

// FUNCTION: 0x1010f190 size=0x1
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc12
void CMoveHelperClient::vfunc12()
{
}
// END FUNCTION

// FUNCTION: 0x1010f1a0 size=0x1e
#include "CMoveHelperClient.h"

// VC6 writes CMoveHelperClient's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMoveHelperClient *pcd_emit_1010f1a0() { return new CMoveHelperClient; }

// TARGET: ??_GCMoveHelperClient@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1010f3e0 size=0x1
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc3
void CMoveHelperClient::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x1010f670 size=0x3
// TARGET: sub_1010f670
void __stdcall sub_1010f670(int, int, int, int, int, int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x1010f800 size=0x3
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc7
bool CMoveHelperClient::vfunc7()
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x1010f810 size=0x3
// TARGET: sub_1010f810
void __stdcall sub_1010f810(int)
{
}
// END FUNCTION
