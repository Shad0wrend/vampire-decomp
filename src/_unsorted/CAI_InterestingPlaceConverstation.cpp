// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102db7f0 size=0x6
namespace lifted {
extern char g_1060c2c0;
}
datamap_t *CAI_InterestingPlaceConverstation::vfunc82()
{
    return (datamap_t *)&lifted::g_1060c2c0;
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

// FUNCTION: 0x102dbc80 size=0x13
#include "CAI_InterestingPlaceConverstation.h"

void __fastcall sub_10001f28(CAI_InterestingPlaceConverstation *self);

// TARGET: CAI_InterestingPlaceConverstation::vfunc103
void CAI_InterestingPlaceConverstation::vfunc103()
{
	sub_10001f28(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x102dbd50 size=0x35
#include "CAI_InterestingPlaceConverstation.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

// TARGET: CAI_InterestingPlaceConverstation::vfunc126
int CAI_InterestingPlaceConverstation::vfunc126(int a)
{
	void *member = (char *)this + 0x460;
	sub_1009d940(member, 3);
	int r = CBaseEntity::vfunc126(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x102dbda0 size=0x28
#include "CAI_InterestingPlaceConverstation.h"

void __cdecl sub_10015311(void *p, int mode);

// TARGET: CAI_InterestingPlaceConverstation::vfunc127
int CAI_InterestingPlaceConverstation::vfunc127(int a)
{
	int r = CBaseEntity::vfunc127(a);
	sub_10015311((char *)this + 0x460, 3);
	return r;
}
// END FUNCTION
