// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad6d0 size=0x22
struct CNPC_VRatX
{
    int sub_1000ab23();
    bool sub_1000f9de(int nIndex);
    bool sub_103ad6d0(int nIndex);
};

// TARGET: sub_103ad6d0
bool CNPC_VRatX::sub_103ad6d0(int nIndex)
{
    if (nIndex == sub_1000ab23()) {
        return true;
    }
    return sub_1000f9de(nIndex);
}
// END FUNCTION

// FUNCTION: 0x103ad790 size=0x3
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc615()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad930 size=0x1e
#include "CNPC_VRat.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VRat::vfunc5
CNPC_VRat *CNPC_VRat::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
