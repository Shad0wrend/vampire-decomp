// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10079250 size=0x1e
#include "CChoreoQueueItem.h"

// TARGET: CChoreoQueueItem::vfunc0
CChoreoQueueItem *CChoreoQueueItem::vfunc0(unsigned int flags)
{
	sub_1000ff15();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
