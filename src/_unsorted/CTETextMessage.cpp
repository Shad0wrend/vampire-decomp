// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068bd0 size=0x1e
#include "CTETextMessage.h"

// TARGET: CTETextMessage::vfunc2
CTETextMessage *CTETextMessage::vfunc2(unsigned int flags)
{
	sub_10010e15();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
