// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fc940 size=0xa1
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CElderVitaePack.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown1033c340.h"
#include "CVStatList_t.h"

// TARGET: CElderVitaePack::vfunc315
char CElderVitaePack::vfunc315()
{
	CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)((CAI_BaseNPCTroika *)this)->sub_10252240();
	if (!pChar->sub_10338950() || CVStatListSet::Of(pChar)->Find(0)->sub_102012d0(0xf) > 0) {
		((CUnknown1033c340 *)pChar)->sub_10338b00();
		sub_103fca20();
	}
	((CUnknown1033c340 *)pChar)->sub_1033c340(0xfa);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103fcae0 size=0x6
#include "CElderVitaePack.h"
namespace lifted {
extern char g_1094506c;
}
int CElderVitaePack::vfunc80()
{
    return (int)&lifted::g_1094506c;
}
// END FUNCTION

// FUNCTION: 0x103fcb00 size=0x3
#include "CElderVitaePack.h"
int CElderVitaePack::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a150 size=0x1e
#include "CElderVitaePack.h"

void sub_100aa7b0(void *p);

// TARGET: CElderVitaePack::vfunc5
CElderVitaePack *CElderVitaePack::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
