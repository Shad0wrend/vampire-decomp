// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10133b60 size=0x6
#include "datamap.h"
#include "CLogicCase.h"
namespace lifted {
extern char g_10576934;
}
datamap_t *CLogicCase::vfunc82()
{
    return (datamap_t *)&lifted::g_10576934;
}
// END FUNCTION

// FUNCTION: 0x101342f0 size=0x1
#include "CLogicCase.h"
void CLogicCase::vfunc103()
{
}
// END FUNCTION

// FUNCTION: 0x10135fd0 size=0x47
#include "CLogicCase.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

struct CaseToggleView
{
	char pad[0x490];
	COutputEvent m_OnCase[16];
	COutputEvent m_OnDefault;
	~CaseToggleView() {}
};

void sub_100aa7b0(void *p);

// TARGET: CLogicCase::vfunc5
CLogicCase *CLogicCase::vfunc5(unsigned int flags)
{
	((CaseToggleView *)this)->~CaseToggleView();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
