// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10118390 size=0x6
#include "datamap.h"
#include "CGameUI.h"
namespace lifted {
extern char g_105714b0;
}
datamap_t *CGameUI::vfunc82()
{
    return (datamap_t *)&lifted::g_105714b0;
}
// END FUNCTION

// FUNCTION: 0x101191f0 size=0xba
#include "CGameUI.h"
#include "COutputEvent.h"
#include "CConstraintAnchor.h"

void __cdecl sub_100aa7b0(void *pObject);

// TARGET: CGameUI::vfunc5
CGameUI *CGameUI::vfunc5(unsigned int flags)
{
	char *p = (char *)this;
	((COutputEvent *)(p + 0x590))->sub_100cd2d0();
	((COutputEvent *)(p + 0x578))->sub_100cd2d0();
	((COutputEvent *)(p + 0x560))->sub_100cd2d0();
	((COutputEvent *)(p + 0x548))->sub_100cd2d0();
	((COutputEvent *)(p + 0x530))->sub_100cd2d0();
	((COutputEvent *)(p + 0x518))->sub_100cd2d0();
	((COutputEvent *)(p + 0x500))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4e8))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4d0))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4b8))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4a0))->sub_100cd2d0();
	((COutputEvent *)(p + 0x488))->sub_100cd2d0();
	((COutputEvent *)(p + 0x470))->sub_100cd2d0();
	((COutputEvent *)(p + 0x458))->sub_100cd2d0();
	((CConstraintAnchor *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
