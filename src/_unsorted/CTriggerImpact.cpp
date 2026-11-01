// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cb0d0 size=0x6
#include "CTriggerImpact.h"
namespace lifted {
extern char g_1059e5f0;
}
CTriggerImpact::Datamap82 CTriggerImpact::vfunc82()
{
    return (CTriggerImpact::Datamap82)&lifted::g_1059e5f0;
}
// END FUNCTION

// FUNCTION: 0x101cb210 size=0xc
#include "CTriggerImpact.h"
namespace lifted {
int sub_100048ef();
}
int CTriggerImpact::vfunc103()
{
    *(char *)((char *)this + 0x55c) = 1;
    return lifted::sub_100048ef();
}
// END FUNCTION

// FUNCTION: 0x101cb230 size=0x1
#include "CTriggerImpact.h"
void CTriggerImpact::vfunc171()
{
}
// END FUNCTION

// FUNCTION: 0x101cc2c0 size=0x62
#include "CTriggerImpact.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CTriggerImpact *CTriggerImpact::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x598))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x580))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x568))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
