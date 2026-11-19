// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b77a0 size=0x3
#include "CBaseNetworkable.h"
int CBaseNetworkable::vfunc5()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b7920 size=0x38
#include "CVTraitEffect_t.h"
#include "CBaseNetworkable.h"

CBaseNetworkable::CBaseNetworkable()
	: m_n0c(0xffffffff)
{
	m_pEdict = 0;
	m_n10 = 0;
}
// END FUNCTION

// FUNCTION: 0x100b79a0 size=0x3
#include "CBaseNetworkable.h"
char * CBaseNetworkable::vfunc2()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b79c0 size=0xb
char * __fastcall sub_100b79c0(char *self)
{
	return self ? self + 4 : 0;
}
// END FUNCTION

// FUNCTION: 0x100b79e0 size=0x3
#include "CBaseNetworkable.h"
void * CBaseNetworkable::vfunc4()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b7bc0 size=0xc
void __fastcall sub_100b7bc0(int *self, int, int *src)
{
	self[3] = *src;
}
// END FUNCTION

// FUNCTION: 0x100b7be0 size=0x4
#include "CBaseNetworkable.h"
unsigned int * CBaseNetworkable::vfunc1()
{
    return (unsigned int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100b7d10 size=0x47
#include "CBaseNetworkable.h"

void CBaseNetworkable::vfunc6(CBaseNetworkableBits_t *pBits)
{
	int i = sub_100b7de0();
	if (!(pBits->m_pBits[i >> 3] & (1 << (i & 7))))
	{
		i = sub_100b7de0();
		pBits->m_pBits[i >> 3] |= (1 << (i & 7));
	}
}
// END FUNCTION
