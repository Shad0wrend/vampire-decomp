// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fc4e0 size=0xcb
#include "CBlueBloodPack.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "CBaseCombatWeapon.h"

struct CBloodAmountUnit
{
	int sub_101e9290(void *pChar, int nUnits);
};
extern CBloodAmountUnit g_10739d08;

struct CBloodPackOwnerInfo
{
	char m_pad0000[0x4fee0];
	int m_nBloodUnits;	// 0x4fee0
};

struct CBloodPackCharacter : CBaseCombatCharacter
{
	void sub_1033c340(int nBlood);	// stub 0x1000b357
};

// TARGET: CBlueBloodPack::vfunc315
char CBlueBloodPack::vfunc315()
{
	CBloodPackCharacter *pChar = (CBloodPackCharacter *)((CAI_BaseNPCTroika *)this)->sub_10252240();
	if (!pChar->sub_10338950() || pChar->GetActiveStatList()->sub_102012d0(0xf) > 0) {
		int n = ((CBloodPackOwnerInfo *)((CBaseCombatWeapon *)this)->sub_102517b0())->m_nBloodUnits;
		if (n) {
			do {
				pChar->sub_10338cb0();
				pChar->sub_1033c340(g_10739d08.sub_101e9290(pChar, 1));
				n--;
			} while (!pChar->sub_10338950() && n);
		}
		sub_103fc5f0();
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103fc6d0 size=0x3
#include "CBlueBloodPack.h"
int CBlueBloodPack::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a120 size=0x1e
#include "CBlueBloodPack.h"

void sub_100aa7b0(void *p);

// TARGET: CBlueBloodPack::vfunc5
CBlueBloodPack *CBlueBloodPack::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
