// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102db7f0 size=0x6
namespace lifted {
extern char g_1060c2c0;
}
CAI_InterestingPlaceConverstation::Datamap82 CAI_InterestingPlaceConverstation::vfunc82()
{
    return (CAI_InterestingPlaceConverstation::Datamap82)&lifted::g_1060c2c0;
}
// END FUNCTION

// FUNCTION: 0x102dbb00 size=0x8a
#include "CAI_InterestingPlaceConverstation.h"
CAI_InterestingPlaceConverstation::CAI_InterestingPlaceConverstation()
{
	m_b515 = 1;
	m_b516 = 0;
}
// END FUNCTION

// FUNCTION: 0x102dbbc0 size=0x84
#include "CAI_InterestingPlaceConverstation.h"
#include "UtlMem.h"

void __fastcall sub_102dce10(int *pVec);
void __cdecl sub_100aa7b0(void *p);

CPointEntity *CAI_InterestingPlaceConverstation::vfunc5(unsigned int flags)
{
	CAI_IPVec *pVec = &m_vec518;
	sub_102dce10((int *)pVec);
	((UtlMem *)pVec)->sub_102dce80();
	pVec->m_pElements = pVec->m_pMemory;
	((UtlMem *)pVec)->sub_102dce80();
	m_items46c[5].sub_100cd2d0();
	m_items46c[4].sub_100cd2d0();
	m_items46c[3].sub_100cd2d0();
	m_items46c[2].sub_100cd2d0();
	m_items46c[1].sub_100cd2d0();
	m_items46c[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
