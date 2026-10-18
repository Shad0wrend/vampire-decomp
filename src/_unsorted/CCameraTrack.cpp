// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cbfb0 size=0x41
#include "CCameraTrack.h"

void sub_100aa7b0(void *p);

CCameraTrack *CCameraTrack::vfunc5(unsigned int flags)
{
	((CCameraTrackMember *)((char *)this + 0x4f4))->sub_10015708();
	((CCameraTrackMember *)((char *)this + 0x498))->sub_10015708();
	((CCameraTrackMember *)((char *)this + 0x480))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
