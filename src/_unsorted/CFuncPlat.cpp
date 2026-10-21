// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10158ee0 size=0x9
unsigned char CFuncPlat::vfunc241() { unsigned char r = m_spawnflags; r &= 1; return r; }
// END FUNCTION

// FUNCTION: 0x101591c0 size=0x66
#include "CFuncPlat.h"

struct FuncPlatBaseX { void sub_1000957f(); };
void __cdecl sub_100043cc(CFuncPlat *pEnt, float *pVec, int flag);
void sub_10001929();

void CFuncPlat::vfunc103()
{
	((FuncPlatBaseX *)this)->sub_1000957f();
	vfunc104();
	if (*(const char **)((char *)this + 0x26c)) {
		sub_100043cc(this, (float *)((char *)this + 0x508), 0);
		*(int *)((char *)this + 0x4f8) = 0;
		*(void **)((char *)this + 0x1f0) = (void *)sub_10001929;
	} else {
		sub_100043cc(this, (float *)((char *)this + 0x514), 0);
		*(int *)((char *)this + 0x4f8) = 1;
	}
	vfunc223();
}
// END FUNCTION

// FUNCTION: 0x1015a4d0 size=0x36
#include "CFuncPlat.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFuncPlat *CFuncPlat::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
