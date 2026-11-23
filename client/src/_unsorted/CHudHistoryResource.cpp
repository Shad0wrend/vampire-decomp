// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f0130 size=0x2a
#include "CHudHistoryResource.h"
namespace lifted {
extern char g_100f00b0;
extern char g_102bbc8c;
extern int g_104a57d4;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual int f7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual int f29(int, int); };
}
void CHudHistoryResource::vfunc1()
{
    int t0 = ((lifted::V *)lifted::g_104a57d4)->f29((int)&lifted::g_102bbc8c, (int)&lifted::g_100f00b0);
    int t1 = *(int *)this;
    *(int *)((char *)this + 0x130) = 0;
    ((lifted::V *)this)->f7();
}
// END FUNCTION

// FUNCTION: 0x100f0430 size=0x21
#include "CHudHistoryResource.h"
// TARGET: CHudHistoryResource::sub_100f0430
bool CHudHistoryResource::sub_100f0430()
{
	return CHudElement::sub_100f05b0() && *(int *)((char *)this + 0x134) != 0;
}
// END FUNCTION

// FUNCTION: 0x100f0460 size=0x3
#include "CHudHistoryResource.h"
void CHudHistoryResource::vfunc5(int a0)
{
}
// END FUNCTION
