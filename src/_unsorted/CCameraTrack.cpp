// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cb980 size=0x6
#include "datamap.h"
#include "CCameraTrack.h"
namespace lifted {
extern char g_1055d0bc;
}
datamap_t *CCameraTrack::vfunc82()
{
    return (datamap_t *)&lifted::g_1055d0bc;
}
// END FUNCTION

// FUNCTION: 0x100cbef0 size=0x7
#include "CCameraTrack.h"
float CCameraTrack::vfunc48()
{
    return *(float *)((char *)this + 0x4f0);
}
// END FUNCTION

// FUNCTION: 0x100cbf10 size=0x7
#include "CCameraTrack.h"
float CCameraTrack::vfunc49()
{
    return *(float *)((char *)this + 0x4ec);
}
// END FUNCTION

// FUNCTION: 0x100cbf30 size=0x23
#include "CCameraTrack.h"

// TARGET: CCameraTrack::vfunc52
float CCameraTrack::vfunc52()
{
	if (*(float *)((char *)this + 0x4b4) > 0.0f) {
		return *(float *)((char *)this + 0x4b4);
	}
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x100cbf70 size=0x23
// TARGET: sub_100cbf70
float __fastcall sub_100cbf70(void *pSelf)
{
    if (*(float *)((char *)pSelf + 0x4b8) > 0.0f) {
        return *(float *)((char *)pSelf + 0x4b8);
    }
    return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x100cbfb0 size=0x41
#include "CCameraTrack.h"

void sub_100aa7b0(void *p);

CBaseEntity *CCameraTrack::vfunc5(unsigned int flags)
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

// FUNCTION: 0x100cc1c0 size=0x6d
#include "CCameraTrack.h"

void sub_10014d58();

void CCameraTrack::vfunc46()
{
	m_flStartTime4bc = engine->vfunc119(0);
	m_hHandle4c0 = this;
	m_bStarted4c4 = 1;
	m_Output480.sub_100cd660(this, this, 0);
	sub_100ac610(engine->vfunc119(0), 0);
	sub_100ac4e0((int)sub_10014d58, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x100cc250 size=0x6d
#include "CCameraTrack.h"

void sub_10014d58();

void CCameraTrack::vfunc47()
{
	m_flStartTime = (float)engine->vfunc119(0);
	m_hHandle = this;
	m_bStarted = 1;
	m_Output480.sub_100cd660(this, this, 0.0f);
	sub_100ac610((float)engine->vfunc119(0), 0);
	sub_100ac4e0((int)sub_10014d58, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x100cc2e0 size=0x21
#include "CCameraTrack.h"
int CCameraTrack::vfunc50(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x4e0);
    *(int *)((char *)a0 + 4) = *(int *)((char *)this + 0x4e4);
    *(int *)((char *)a0 + 8) = *(int *)((char *)this + 0x4e8);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100cc320 size=0x21
#include "CCameraTrack.h"
int CCameraTrack::vfunc51(int a0, int a1)
{
    *(int *)((char *)a1) = *(int *)((char *)this + 0x4c8);
    *(int *)((char *)a1 + 4) = *(int *)((char *)this + 0x4cc);
    *(int *)((char *)a1 + 8) = *(int *)((char *)this + 0x4d0);
    return a1;
}
// END FUNCTION
