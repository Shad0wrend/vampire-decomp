// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020e1e0 size=0xd
#include "CGameText.h"
namespace lifted {
int __stdcall sub_10004557(int);
}
int CGameText::vfunc173(int a0, int a1, int a2, int a3)
{
    return lifted::sub_10004557(a0);
}
// END FUNCTION

// FUNCTION: 0x1020e200 size=0x6
#include "CGameText.h"
namespace lifted {
extern char g_105aab6c;
}
CGameText::Datamap82 CGameText::vfunc82()
{
    return (CGameText::Datamap82)&lifted::g_105aab6c;
}
// END FUNCTION

// FUNCTION: 0x10216e00 size=0x1e
#include "CGameText.h"

void sub_100aa7b0(void *p);

// TARGET: CGameText::vfunc5
CGameText *CGameText::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
