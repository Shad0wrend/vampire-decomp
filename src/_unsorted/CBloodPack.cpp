// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fc060 size=0xec
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBloodPack.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"

struct CBloodAmountUnit
{
	int sub_101e9290(void *pChar, int a);
};
extern CBloodAmountUnit g_10739d08;

struct CBloodHolder
{
	char pad[0x4fee0];
	int m_nCount;
};

struct CBloodCharView : public CBaseCombatCharacter
{
	void sub_1033c340(int nBlood);	// stub 0x1000b357
};

struct CBloodPackView : public CBloodPack
{
	CBloodHolder *sub_102517b0();	// stub 0x10010ea6
};

// TARGET: CBloodPack::vfunc315
char CBloodPack::vfunc315()
{
	CBloodCharView *pChar = (CBloodCharView *)((CAI_BaseNPCTroika *)this)->sub_10252240();
	if (pChar->sub_10338950() && CVStatListSet::Of(pChar)->Find(0)->sub_10010609(0xf) <= 0)
		return 0;
	int n = ((CBloodPackView *)this)->sub_102517b0()->m_nCount;
	char bFlag = pChar->sub_10339cd0();
	while (n != 0) {
		pChar->sub_10338cb0();
		pChar->sub_1033c340(g_10739d08.sub_101e9290(pChar, 1));
		if (bFlag)
			(*(int *)((char *)pChar + 0x14a0))++;
		n--;
		if (pChar->sub_10338950())
			break;
	}
	sub_103fc190();
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103fc250 size=0x6
#include "CBloodPack.h"
namespace lifted {
extern char g_10944490;
}
int CBloodPack::vfunc80()
{
    return (int)&lifted::g_10944490;
}
// END FUNCTION

// FUNCTION: 0x103fc270 size=0x3
#include "CBloodPack.h"
int CBloodPack::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a0f0 size=0x1e
#include "CBloodPack.h"

void sub_100aa7b0(void *p);

// TARGET: CBloodPack::vfunc5
CBloodPack *CBloodPack::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
