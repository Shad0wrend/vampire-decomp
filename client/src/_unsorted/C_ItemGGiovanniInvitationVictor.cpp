// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001b500 size=0x6
#include "C_ItemGGiovanniInvitationVictor.h"
namespace lifted {
extern char g_10273630;
}
int C_ItemGGiovanniInvitationVictor::vfunc17()
{
    return (int)&lifted::g_10273630;
}
// END FUNCTION

// FUNCTION: 0x1001b590 size=0x1e
#include "C_ItemGGiovanniInvitationVictor.h"

// VC6 writes C_ItemGGiovanniInvitationVictor's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGiovanniInvitationVictor *pcd_emit_1001b590() { return new C_ItemGGiovanniInvitationVictor; }

// TARGET: ??_GC_ItemGGiovanniInvitationVictor@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001b5c0 size=0x3
#include "C_ItemGGiovanniInvitationVictor.h"
int C_ItemGGiovanniInvitationVictor::vfunc15()
{
    return 0;
}
// END FUNCTION
