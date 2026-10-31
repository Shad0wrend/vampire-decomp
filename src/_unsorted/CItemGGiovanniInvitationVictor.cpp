// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10401920 size=0x6
#include "CItemGGiovanniInvitationVictor.h"
namespace lifted {
extern char g_10945248;
}
int CItemGGiovanniInvitationVictor::vfunc80()
{
    return (int)&lifted::g_10945248;
}
// END FUNCTION

// FUNCTION: 0x10401940 size=0x3
#include "CItemGGiovanniInvitationVictor.h"
int CItemGGiovanniInvitationVictor::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a6c0 size=0x1e
#include "CItemGGiovanniInvitationVictor.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGGiovanniInvitationVictor::vfunc5
CItemGGiovanniInvitationVictor *CItemGGiovanniInvitationVictor::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
