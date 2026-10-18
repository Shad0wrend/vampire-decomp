// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037a950 size=0x1d
#include "CNPC_VGhoulCroucher.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b0e0;
extern B g_10936c74;
int CNPC_VGhoulCroucher::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b0e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037aff0 size=0x36
#include "CNPC_VGhoulCroucher.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1028d610();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CNPC_VGhoulCroucher *CNPC_VGhoulCroucher::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x668c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x6674))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
