// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10404980 size=0x6
#include "CItemGMercurioJournal.h"
namespace lifted {
extern char g_10949644;
}
int CItemGMercurioJournal::vfunc80()
{
    return (int)&lifted::g_10949644;
}
// END FUNCTION

// FUNCTION: 0x104049a0 size=0x3
#include "CItemGMercurioJournal.h"
int CItemGMercurioJournal::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040aa20 size=0x1e
#include "CItemGMercurioJournal.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGMercurioJournal::vfunc5
CItemGMercurioJournal *CItemGMercurioJournal::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
