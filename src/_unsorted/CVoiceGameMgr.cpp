// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10232450 size=0x1e
#include "CVoiceGameMgr.h"

// TARGET: CVoiceGameMgr::vfunc0
CVoiceGameMgr *CVoiceGameMgr::vfunc0(unsigned int flags)
{
	sub_10009976();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
